//
// Created by dhz on 2022/1/4.
//


#include <bit>
#include <cstdint>
#include <iostream>
#include <iomanip>
#include "../include/DataSet.h"
#include "../include/OutOfException.h"
#include "../include/DicomVR.h"


DataSet::DataSet(DicomReader &reader) : pReader(reader) {


}

void parseSQWithExpliciteLength(DicomReader &reader, uint32_t dataLength) {

}


void parseSQWithUndefinedLength(DicomReader &reader) {
    std::cout << " parseSQWithUndefinedLength " << std::endl;
    uint16_t groupId = 0;
    uint16_t elementId = 0;
    while (true) {
        char grp[2]{0};
        char elm[2]{0};

        if (!reader.Read(grp, 2)) {
            break;
        }
        if (!reader.Read(elm, 2)) {
            break;
        }

        groupId = bytesto_int2(grp);
        elementId = bytesto_int2(elm);

        if (groupId == 0xFFFE && elementId == 0xE0DD) {
            //Sequence Delimitation Item
            reader.Seek(4, SeekOnce::Current);
            break;
        }
        if (groupId == 0xFFFE && elementId == 0xE000) {
            // Item Tag
            char vl[4];
            reader.Read(vl, 4);
            uint32_t x = bytesto_int4(vl);
            reader.Seek((int32_t) x, SeekOnce::Current);

            std::cout << " ItemValueLength：" << x << std::endl;
        } else {
            //啥也不是
            reader.Seek(-4, SeekOnce::Current);
            break;
        }
    }

}

void DataSet::Parse(DicomTag &stopTag) {
    if (!pReader.Seek(128L, SeekOnce::Begin)) {
        throw OutOfException("文件长度不足");
    }
    char dicomSignature[4];
    if (!pReader.Read(dicomSignature, 4)) {

        throw OutOfException("文件格式不符合DICOM3 标准");

    }

    if (dicomSignature[0] != 'D'
        || dicomSignature[1] != 'I'
        || dicomSignature[2] != 'C'
        || dicomSignature[3] != 'M'
            ) {
        throw OutOfException("文件不是DICOM3文件");
    }

    //--- 文件头都是 ExplicitVRLitterEnding

    uint16_t groupId = 0;
    uint16_t elementId = 0;
    char vr[3] = {0};
    uint32_t valueLength = 0;
    // DICOM FilemetaInformation 的字段取值最长就是64个字符
    char valueBuffer[64] = {0};

    while (!pReader.Endof()) {

        char grp[2]{0};
        char elm[2]{0};

        if (!pReader.Read(grp, 2)) {
            break;
        }
        if (!pReader.Read(elm, 2)) {
            break;
        }

        groupId = bytesto_int2(grp);
        elementId = bytesto_int2(elm);

        if (elementId == stopTag.Element() && groupId == stopTag.Group()) {
            pReader.Seek(-4, SeekOnce::Current);
            break;
        }
        pReader.Read(vr, 2);
        std::string vrstr(vr);
        DicomVR tagVr = DicomVR::ParseVR(vrstr);
        if (tagVr == DicomVR::NONE) {
            throw OutOfException("TagVR 解析错误");
        }
        if (tagVr == DicomVR::SQ) {
            std::cout << "SQ";
            pReader.Seek(2, SeekOnce::Current);
            char vl[4];
            pReader.Read(vl, 4);
            uint32_t x = bytesto_int4(vl);
            if (x == 0xFFFFFFFF) {
                parseSQWithUndefinedLength(pReader);

            } else {
                parseSQWithExpliciteLength(pReader, x);
            }
        } else {

            if (DicomVR::ElementWithFixedFormat(tagVr)) {
                uint16_t tagV = 0;
                pReader.Read(reinterpret_cast<const char *>(&tagV), 2);
                valueLength = tagV;
            } else {
                if (tagVr.Is16bitLength) {
                    uint16_t tagV = 0;
                    pReader.Read(reinterpret_cast<const char *>(&tagV), 2);
                    valueLength = tagV;
                } else {
                    pReader.Seek(2, SeekOnce::Current);
                    char vl[4];
                    pReader.Read(vl, 4);
                    uint32_t x = bytesto_int4(vl);
                    valueLength = x;
                }

            }
            char fmtBuffer[16]{0};
            snprintf(fmtBuffer, 16, "0x%04X,0x%04X", groupId, elementId);

            std::cout << "Tag :(" << fmtBuffer << ")," << vrstr << ": Length is :" << valueLength << std::endl;
            char *buffer = new char[valueLength + 1]{0};
            pReader.Read(buffer, valueLength);
            char posStr[10]{0};
            snprintf(posStr, 10, "0x%04X", pReader.Postion());
            std::cout << "and ValueLength  is :" << valueLength << ", Pos:" << posStr << std::endl;

            delete[] buffer;
        }
    }


}
