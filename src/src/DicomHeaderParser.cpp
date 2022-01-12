//
// Created by dhz on 2022/1/5.
//

#include <list>
#include "../include/DicomHeaderParser.h"
#include "../include/DicomVR.h"
#include "cassert"
#include "../include/DicomItem.h"
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

    grupId = bytesto_int2(grup);
    while (grupId == 0x0002) {

         rsb = fread(elem, 1, 2, fd);
        assert(rsb == 2);

        rsb = fread(vr, 1, 2, fd);
        assert(rsb == 2);

        const  DicomVR* tagVr = pVR_NONE;
        elementId = bytesto_int2(elem);
        if (elementId == 0x0000) {
            // FileMetaInformation Length
            tagVr =  pVR_UL;

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
            tagVr =  DicomVR::ParseVR(tagStr);
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

//        std::vector<char> valueBuffer(valueLength);
//        char *pPos = valueBuffer.data();
//        in.readsome(pPos, valueLength);
//        in.readsome(grup, 2);
//        if (elementId == 0x0010) {
//            if (pPos[valueLength - 1] == 0x00 || pPos[valueLength - 1] == 0x20) {
//                ts.insert(ts.begin(), valueBuffer.begin(), valueBuffer.end() - 1);
//            } else {
//                ts.insert(ts.begin(), valueBuffer.begin(), valueBuffer.end());
//            }
//        }

        DicomItem ite(grupId, elementId, *tagVr, valueLength);
        if(valueLength >0){

            ite.ReadData(fd);

        }
        metaInfo.push_back(ite);
        rsb = fread(grup, 1, 2, fd);
        assert(rsb == 2);
        grupId = bytesto_int2(grup);
    }

    fseek(fd, -2, SEEK_CUR);

}
