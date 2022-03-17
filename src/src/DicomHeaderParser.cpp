//
// Created by dhz on 2022/1/5.
//

#include <list>
#include "../include/DicomHeaderParser.h"
#include "../include/DicomVR.h"
#include "cassert"
#include "../include/DicomItem.h"
#include "../include/Endian.h"
#include <iostream>


void DicomHeaderParser::Parser(FILE *fd, std::list<DicomItem> &metaInfo) {
    fseek(fd, 128, SEEK_CUR); // 回溯

    char dcmSign[4];
    size_t sz = fread(dcmSign, 1, 4, fd);
    assert(sz == 4);

    if (dcmSign[0] != 'D'
        || dcmSign[1] != 'I'
        || dcmSign[2] != 'C'
        || dcmSign[3] != 'M') {
        return;
    }

    uint16_t grupId = 0;
    uint16_t elementId = 0;
    char vr[3] = {0};
    char grup[2];
    char elem[2];

    char vl2[2];
    char vl4[4];
    char skip2[2] = {0};
    uint32_t valueLength;
    size_t rsb = fread(grup, 1, 2, fd);
    assert(rsb == 2);

    bool expliciteVrHeader = false;
    grupId = bytesto_int2(grup);

    assert(grupId == 2);

    rsb = fread(elem, 1, 2, fd);
    assert(rsb == 2);
    uint16_t detectedElementId = bytesto_int2(elem);
    rsb = fread(vr, 1, 2, fd);
    assert(rsb == 2);
    std::string detectedVrstr(vr, 2);

    if ((detectedElementId == 0x0000 && detectedVrstr[0] == 'U') //UL or UN 都支持
        || (detectedElementId == 0x0001 && detectedVrstr == "OB")
        || (detectedElementId == 0x0002 && detectedVrstr == "UI")
        || (detectedElementId == 0x0003 && detectedVrstr == "UI")
        || (detectedElementId == 0x0010 && detectedVrstr == "UI")
        || (detectedElementId == 0x0012 && detectedVrstr == "UI")
            ) {
        expliciteVrHeader = true;
        //=== 回退4个字节

    }

//    fseek(fd, 128, SEEK_SET); // 回溯
//    //---跳过DICM  四个字节
//    fseek(fd, 4 , SEEK_CUR);
//
//    //---跳过 GroupId  2 两个字节
//    fseek(fd, 2 , SEEK_CUR);

    fseek(fd, 134, SEEK_SET); // 回溯


    if (expliciteVrHeader) {
        while (grupId == 0x0002) {
            rsb = fread(elem, 1, 2, fd);
            assert(rsb == 2);
            rsb = fread(vr, 1, 2, fd);
            assert(rsb == 2);
//            std::string vrstr(vr, 2);
//            std::cout << "VR:" << vrstr << std::endl;
            const DicomVR *tagVr = pVR_NONE;
            elementId = bytesto_int2(elem);
            // 标准的消息头
            if (elementId == 0x0000) {
                // FileMetaInformation Length
                tagVr = pVR_UL;
                size_t cpost = ftell(fd);
//                std::cout << std::hex << cpost << std::endl;

                rsb = fread(vl2, 1, 2, fd);
                assert(rsb == 2);

                valueLength = bytesto_int2(vl2);
                assert(valueLength == 4);
            } else if (elementId == 0x0001) {
                // FileMetaInformation Version
                tagVr = pVR_OB;//
                rsb = fread(skip2, 1, 2, fd);
                assert(rsb == 2);
                rsb = fread(vl4, 1, 4, fd);
                assert(rsb == 4);
                valueLength = bytesto_int4(vl4);
                assert(valueLength == 2);
            } else {
                std::string tagStr(vr);
                tagVr = DicomVR::ParseVR(tagStr);
                if (DicomVR::ElementWithFixedFormat(*tagVr)) {
                    rsb = fread(vl2, 1, 2, fd);
                    assert(rsb == 2);
                    valueLength = bytesto_int2(vl2);
                } else {
                    if (tagVr->Is16bitLength) {
                        rsb = fread(vl2, 1, 2, fd);
                        assert(rsb == 2);
                        valueLength = bytesto_int2(vl2);
                    } else {
                        rsb = fread(skip2, 1, 2, fd);
                        assert(rsb == 2);
                        rsb = fread(vl4, 1, 4, fd);
                        assert(rsb == 4);
                        valueLength = bytesto_int4(vl4);
                    }
                }
            }
            DicomItem ite(grupId, elementId, *tagVr, valueLength);
            if (valueLength > 0) {

                ite.ReadData(fd);

            }
            metaInfo.push_back(ite);
            rsb = fread(grup, 1, 2, fd);
            assert(rsb == 2);
            grupId = bytesto_int2(grup);
        }

    } else {

        //---ImplicitVrHeader
//        std::cout << "ImplicitVrHeader" << std::endl;
//        auto pos = ftell(fd);
//        char posstr[200] = {0};
//        char posFmt[] = "Start Offset:0x%04X";
//        sprintf(posstr, posFmt, pos);
//        std::cout << posstr << std::endl;

       while (grupId == 0x0002) {
            rsb = fread(elem, 1, 2, fd);
            assert(rsb == 2);
            elementId = bytesto_int2(elem);
            if (elementId == 0x0000) {
                //FileMetaInformation Length
                //跳过4个字节
                rsb = fread(vl4, 1, 4, fd);
                assert(rsb == 4);
                valueLength = 4;

            } else if (elementId == 0x0001) {
                rsb = fread(vl4, 1, 4, fd);
                assert(rsb == 4);
                valueLength = 2;
            } else {
                rsb = fread(vl4, 1, 4, fd);
                assert(rsb == 4);
                valueLength = bytesto_int4(vl4);
            }


            DicomItem ite(grupId, elementId, *pVR_NONE, valueLength);
            if (valueLength > 0) {
                ite.ReadData(fd);
            }
            metaInfo.push_back(ite);
//            std::cout << ite.toString() << std::endl;


            rsb = fread(grup, 1, 2, fd);
            assert(rsb == 2);
            grupId = bytesto_int2(grup);
       }

    }
    fseek(fd, -2, SEEK_CUR);

}
