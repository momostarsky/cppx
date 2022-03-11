//
// Created by dhz on 2022/1/7.
//

#include "../include/ImplicitVrLittleEndianReader.h"
#include <iostream>
#include <cassert>


void   ImplicitVrLittleEndianReader::parseSubs(DicomItem *ite) {///NOLINT
    if (ite->getValueLength() <= 8) {
        // Group,Element,VR,XX
        // 合格的DicomItem 的最小字节数都是8 个字节
        return;
    }
    if (ite->getDepth() >= 4) {
        return;
    }
//    std::cout << "parseSubs From :" << ite->toString() << std::endl;
//    char tmp[4]{0};
//    for (int i = 0; i < ite->getValueLength(); i++) {
//        snprintf(tmp, 4, "%02X,", ite->getData()[i]);
//        std::cout << tmp;
//    }
//    std::cout << std::endl;

    FILE *stream = fmemopen((void *) ite->getData(), ite->getValueLength(), "rb");
    ImplicitVrLittleEndianReader subReader(stream);
    std::list<DicomItem> subs;
    subReader.ReadDataset(subs, ite->getDepth());
    fclose(stream);
    for (auto &cp: subs) {
        ite->addSubItem(cp);
    }

}


void   ImplicitVrLittleEndianReader::parseValueFieldWithUndefinedLength(FILE *reader, DicomItem *ite) {///NOLINT
//    std::cout << " parse SQ,OB...  WithUndefinedLength: "  << ite->toString() << std::endl;
    uint16_t groupId = 0;
    uint16_t elementId = 0;
    char skip4[4]{0};
    char grp[2]{0};
    char elm[2]{0};
    // items.push_back(*ite);

    while (true) {

        size_t gl = fread(grp, 1, 2, reader);

        assert(gl == 2);

        size_t el = fread(elm, 1, 2, reader);
        assert(el == 2);

        groupId = bytesto_int2(grp);
        elementId = bytesto_int2(elm);

        if (groupId == 0xFFFE && elementId == 0xE0DD) {
            //Sequence Delimitation Item
            size_t sk = fread(skip4, 1, 4, reader);
            assert(sk == 4);
            DicomItem dicomItem(0xFFFE, 0xE0DD, *pVR_NONE, 4, ite->getDepth() + 1);
            ite->addSubItem(dicomItem);
//            std::cout << "--" << dicomItem.toString() << std::endl;
            break;
        }
        if (groupId == 0xFFFE && elementId == 0xE000) {
            // Item Tag
            char vl[4];
            size_t sk = fread(vl, 1, 4, reader);
            assert(sk == 4);
            uint32_t x = bytesto_int4(vl);
//            std::vector<char> itemData(x);
//            size_t lr = fread(&itemData[0], 1, x, reader);
//            assert(lr == x);

            DicomItem dicomItem(0xFFFE, 0xE000, *pVR_NONE, x, ite->getDepth() + 1);
            dicomItem.ReadData(reader);

            if (ite->getVr() == *pVR_SQ) {
                parseSubs(&dicomItem);
            }
            ite->addSubItem(dicomItem);

        } else {
            //啥也不是
            fseek(reader, -4, SEEK_CUR);
            break;
        }
    }

}


void
ImplicitVrLittleEndianReader::ReadDataset(std::list<DicomItem> &items, uint32_t depath) {///NOLINT

    uint16_t groupId = 0;
    uint16_t elementId = 0;
    char vr[3] = {0};
    uint32_t valueLength = 0;
// DICOM FilemetaInformation 的字段取值最长就是64个字符
    char grp[2]{0};
    char elm[2]{0};
    char vl2[2]{0};
    char vl4[4]{0};

    char reserved2[2]{0};

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


        size_t vrL = fread(vr, 1, 2, mReader);
        assert(vrL == 2);

        std::string vrstr(vr);
        const DicomVR *tagVr = DicomVR::ParseVR(vrstr);
        if (tagVr == pVR_NONE) {
            break;
        }

        DicomItem *ptr = nullptr;
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

//            std::cout << ptr->toString() << std::endl;
        } else {
            size_t sk = fread(reserved2, 1, 2, mReader);
            assert(sk == 2);
            size_t vrx = fread(vl4, 1, 4, mReader);
            assert(vrx == 4);
            valueLength = bytesto_int4(vl4);
            ptr = new DicomItem(groupId, elementId, *tagVr, valueLength, depath);
            if (valueLength == 0xFFFFFFFF) {
                //Value Field has an Undefined Length and a Sequence Delimitation Item marks the end of the Value Field.
                parseValueFieldWithUndefinedLength(mReader, ptr);
            } else {
                ptr->ReadData(mReader);
                if (tagVr == pVR_SQ) {
                    parseSubs(ptr);
                }
            }
        }
        items.push_back(*ptr);
    }


}

ImplicitVrLittleEndianReader::ImplicitVrLittleEndianReader(FILE *cin) : mReader(cin) {

    assert(mReader != nullptr);
    fpos_t opx;
    fgetpos(mReader, &opx);
    fseek(mReader, 0L, SEEK_END);
    mDataLength = ftell(mReader);
    fsetpos(mReader, &opx);
}
