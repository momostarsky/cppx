//
// Created by dhz on 2022/1/7.
//

#include "../include/ExplicitVrLittleEndianReader.h"
#include <iostream>
#include <cassert>


void
ExplicitVrLittleEndianReader::parseSQSegmemnt(FILE *reader, DicomItem *ite, std::list<DicomItem> &subItems) {///NOLINT
    uint16_t groupId = 0;
    uint16_t elementId = 0;
    char skip4[4]{0};
    char grp[2]{0};
    char elm[2]{0};
    char text[125] = {0};
    char vr[2] = {0};
    char vl[4] = {0};
    std::list<DicomItem> stacks;
    stacks.push_front(*ite);

    while (!stacks.empty()) {
        auto cptr = stacks.begin();

        if (cptr == stacks.end()) {
            break;
        }

        size_t gl = fread(grp, 1, 2, reader);

        assert(gl == 2);

        size_t el = fread(elm, 1, 2, reader);
        assert(el == 2);

        groupId = bytesto_int2(grp);
        elementId = bytesto_int2(elm);

        uint32_t cDepth = cptr->getDepth() + 1;


        if (groupId == 0xFFFE && elementId == 0xE0DD) {
            //Sequence Delimitation Item
            size_t k4 = fread(skip4, 1, 4, reader);
            assert(k4 == 4);
            stacks.pop_front();
            DicomItem seqEnd(0xFFFE, 0xE0DD, *pVR_NONE, 0x0, cDepth - 1);
            subItems.push_back(seqEnd);
            continue;
        }

        if (groupId == 0xFFFE && elementId == 0xE00D) {
            //Item Delimitation Item
            size_t k4 = fread(skip4, 1, 4, reader);
            assert(k4 == 4);
            stacks.pop_front();
            DicomItem itemEnd(0xFFFE, 0xE00D, *pVR_NONE, 0x0, cDepth - 1);
            subItems.push_back(itemEnd);
            continue;
        }

        if (groupId == 0xFFFE && elementId == 0xE000) {
            // Item Tag
            size_t sk = fread(vl, 1, 4, reader);
            assert(sk == 4);
            uint32_t x = bytesto_int4(vl);
            DicomItem dicomItem(0xFFFE, 0xE000, *pVR_NONE, x, cDepth);
            if (x == 0xFFFFFFFF) {
                stacks.push_front(dicomItem);
            } else if (x > 0) {
                dicomItem.ReadData(reader);
                //  parseSubs(&dicomItem);
            }
            subItems.push_back(dicomItem);
            for (const auto &si: dicomItem.Subs()) {
                subItems.push_back(si);
            }
            continue;
        }


        size_t vrL = fread(vr, 1, 2, mReader);
        assert(vrL == 2);
        std::string vrstr(vr, 2);
        const DicomVR *tagVr = DicomVR::ParseVR(vrstr);
        if (tagVr == pVR_NONE) {
            std::cout << "SQ  Invalidated  VR：" << vrstr << std::endl;
            break;
        }

        char vl2[2] = {0};
        char vl4[4] = {0};
        char reserved2[2] = {0};
        uint32_t valueLength = 0U;


        if (DicomVR::ElementWithFixedFormat(*tagVr)) {
            size_t vrx = fread(vl2, 1, 2, mReader);
            assert(vrx == 2);
            valueLength = bytesto_int2(vl2);
            DicomItem xptr(groupId, elementId, *tagVr, valueLength, cDepth);
            if (valueLength > 0 && valueLength != 0xFFFF) {
                xptr.ReadData(mReader);
            }

            subItems.push_back(xptr);

        } else {
            size_t sk = fread(reserved2, 1, 2, mReader);
            assert(sk == 2);
            // 读取长度
            size_t vrx = fread(vl4, 1, 4, mReader);
            assert(vrx == 4);
            valueLength = bytesto_int4(vl4);
            DicomItem sqptr(groupId, elementId, *tagVr, valueLength, cDepth);
            subItems.push_back(sqptr);
            if (valueLength == 0xFFFFFFFF) {
                //Value Field has an Undefined Length and a Sequence Delimitation Item marks the end of the Value Field.
                parseSQSegmemnt(mReader, &sqptr, subItems);
            } else if (valueLength > 0) {
                sqptr.ReadData(mReader);
            }
        }
    }
}


void ExplicitVrLittleEndianReader::parseSubs(DicomItem *ite) {///NOLINT
    if (ite->getValueLength() <= 8) {
        // Group,Element,VR,XX
        // 合格的DicomItem 的最小字节数都是8 个字节
        return;
    }
    if (ite->getDepth() >= 4) {
        return;
    }

    FILE *stream = fmemopen((void *) ite->getData(), ite->getValueLength(), "rb");
    ExplicitVrLittleEndianReader subReader(stream);
    std::list<DicomItem> subs;
    subReader.ReadDataset(subs, ite->getDepth());
    fclose(stream);
    for (auto &cp: subs) {
        ite->addSubItem(cp);
    }

}


void ExplicitVrLittleEndianReader::ReadDataset(std::list<DicomItem> &items, uint32_t depath) {///NOLINT

    uint16_t groupId = 0;
    uint16_t elementId = 0;

    uint32_t valueLength = 0;
// DICOM FilemetaInformation 的字段取值最长就是64个字符

//  tag.VR
    char vr[3] = {0};
// tag.GroupId
    char grp[2]{0};
    // tag.ElementId
    char elm[2]{0};
    // tag.ValueLength 2 bytes
    char vl2[2]{0};
    // tag.ValueLength 4 bytes
    char vl4[4]{0};

    // 保留字节 2 个
    char reserved2[2]{0};

//    char tagText[125] = {0};
//    char tagFmt[] = "ReadTag:0x%04X,0x%04X, %s";

    while (true) {

        long startPositon = ftell(mReader);
        if (startPositon >= mDataLength) {
            break;
        }
//        std::cout << "startPositon:" << startPositon << std::endl;
        size_t gl = fread(grp, 1, 2, mReader);
        if (gl != 2) {
            break;
        }

        groupId = bytesto_int2(grp);
        size_t el = fread(elm, 1, 2, mReader);
        assert(el == 2);
        elementId = bytesto_int2(elm);
        if (groupId == 0xFFFE && elementId == 0xE000) {
            //---向前跳4个字节
            fseek(mReader, 4, SEEK_CUR);
            continue;
        }

        if (groupId == 0x7FE0 && elementId == 0x0010) {
            // 回退4个字节。。
            fseek(mReader, -4, SEEK_CUR);
            break;
        }

        size_t vrL = fread(vr, 1, 2, mReader);
        assert(vrL == 2);
        std::string vrstr(vr, 2);

//        sprintf(tagText, tagFmt, groupId, elementId, vrstr.c_str());
//        std::cout << tagText << std::endl;

        const DicomVR *tagVr = DicomVR::ParseVR(vrstr);
        if (tagVr == pVR_NONE) {
            char text[125] = {0};
            char fmtStr[] = "ReadDataset:0x%04X,0x%04X";
            sprintf(text, fmtStr, groupId, elementId);
            std::cout << "InvalidatedTag :" << text << " and  VR：" << vrstr << std::endl;
            break;
        }
        DicomItem *ptr = nullptr;

        std::list<DicomItem> subs;
        if (DicomVR::ElementWithFixedFormat(*tagVr)) {
            size_t vrx = fread(vl2, 1, 2, mReader);
            assert(vrx == 2);
            valueLength = bytesto_int2(vl2);
            ptr = new DicomItem(groupId, elementId, *tagVr, valueLength, depath);
            if (valueLength == 0xFFFFFFFF) {
                break;
            }
            if (valueLength > 0) {
                ptr->ReadData(mReader);
            }


        } else {
            size_t sk = fread(reserved2, 1, 2, mReader);
            assert(sk == 2);
            // 读取长度
            size_t vrx = fread(vl4, 1, 4, mReader);
            assert(vrx == 4);
            valueLength = bytesto_int4(vl4);
            ptr = new DicomItem(groupId, elementId, *tagVr, valueLength, depath);
            if (valueLength == 0xFFFFFFFF) {

                //Value Field has an Undefined Length and a Sequence Delimitation Item marks the end of the Value Field.
                parseSQSegmemnt(mReader, ptr, subs);


            } else if (valueLength > 0) {
                ptr->ReadData(mReader);
            }

        }
        items.push_back(*ptr);

        for (const auto &ci: subs) {
            items.push_back(ci);
        }

    }


}

ExplicitVrLittleEndianReader::ExplicitVrLittleEndianReader(FILE *cin) : mReader(cin) {

    assert(mReader != nullptr);
    fpos_t opx;
    fgetpos(mReader, &opx);
    fseek(mReader, 0L, SEEK_END);
    mDataLength = ftell(mReader);
    fsetpos(mReader, &opx);
}
