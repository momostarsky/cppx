//
// Created by dhz on 2022/1/7.
//

#include "../include/ExppiciteVrLittleEndianReader.h"
#include "../include/DicomItem.h"
#include <iostream>
#include <cassert>

void parsePixelDataWithUndefinedLength(FILE *reader){

}
void parseSQWithUndefinedLength(FILE *reader) {
    std::cout << " parseSQWithUndefinedLength " << std::endl;
    uint16_t groupId = 0;
    uint16_t elementId = 0;
    char skip4[4]{0};
    char grp[2]{0};
    char elm[2]{0};
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
            break;
        }
        if (groupId == 0xFFFE && elementId == 0xE000) {
            // Item Tag
            char vl[4];
            size_t sk = fread(vl, 1, 4, reader);
            assert(sk == 4);
            uint32_t x = bytesto_int4(vl);
            std::vector<char> itemData(x);
            size_t lr = fread(&itemData[0], 1, x, reader);
            assert(lr == x);
            std::cout << " ItemValueLength：" << x << std::endl;
        } else {
            //啥也不是
            fseek(reader, -4, SEEK_CUR);
            break;
        }
    }

}


void
ExppiciteVrLittleEndianReader::ReadDataset(std::list<DicomItem>
                                           &items) {

    uint16_t groupId = 0;
    uint16_t elementId = 0;
    char vr[3] = {0};
    uint32_t valueLength = 0;
// DICOM FilemetaInformation 的字段取值最长就是64个字符
    char grp[2]{0};
    char elm[2]{0};


    char vl2[2]{0};
    char vl4[4]{0};

    char skip2[2]{0};

    while (!feof(mReader)) {
        size_t gl = fread(grp, 1, 2, mReader);
        assert(gl == 2);
        groupId = bytesto_int2(grp);
        size_t el = fread(elm, 1, 2, mReader);
        assert(el == 2);
        elementId = bytesto_int2(elm);


        size_t vrL = fread(vr, 1, 2, mReader);
        assert(vrL == 2);

        std::string vrstr(vr);
        DicomVR tagVr = DicomVR::ParseVR(vrstr);
        if (tagVr == DicomVR::NONE) {
            break;
        }
        if (tagVr == DicomVR::SQ) {
            std::cout << "SQ";
            size_t sk = fread(skip2, 1, 2, mReader);
            assert(sk == 2);

            size_t vn = fread(vl4, 1, 4, mReader);
            assert(vn == 4);
            uint32_t x = bytesto_int4(vl4);
            if (x == 0xFFFFFFFF) {
                parseSQWithUndefinedLength(mReader);
            } else {
                std::vector<char> data(x);
                size_t dx = fread(&data[0], 1, x, mReader);
                assert(dx == x);
            }
        } else {

            if (DicomVR::ElementWithFixedFormat(tagVr)) {
                size_t vrx = fread(vl2, 1, 2, mReader);
                assert(vrx == 2);
                valueLength = bytesto_int2(vl2);
            } else {
                if (tagVr.Is16bitLength) {
                    size_t vrx = fread(vl2, 1, 2, mReader);
                    assert(vrx == 2);
                    valueLength = bytesto_int2(vl2);
                } else {
                    size_t sk = fread(skip2, 1, 2, mReader);
                    assert(sk == 2);
                    size_t vrx = fread(vl4, 1, 4, mReader);
                    assert(vrx == 4);
                    valueLength = bytesto_int4(vl4);
                }
            }


            if(groupId == 0x7FE0 && elementId ==0x0010){
                break;
            }

            DicomItem ite(groupId, elementId, tagVr, valueLength);
            if (valueLength != 0  && valueLength != 0xFFFFFFFF ) {
//                std::vector<char> buffer(valueLength);
//                size_t bs = fread(&buffer[0], 1, valueLength, mReader);
//                assert(bs == valueLength);
                ite.ReadData(mReader);
            }

            fpos_t opx;
            fgetpos(mReader, &opx);
            items.push_back(ite);
            char tagInfo[101]{0};
            snprintf(tagInfo, 100, "0x%04hX,0x%04hX,%s, %d, ==>PosEnd: 0x%04zX", groupId, elementId, vrstr.c_str(),
                     valueLength, opx.__pos);
            if(tagVr.IsString && ite.getValueLength() > 0 ){
                std::cout << "Value is :[" << std::string( ite.getData(), ite.getValueLength()) << "]"<<std::endl;
            }
            std::cout << tagInfo << std::endl;
        }
    }


}

ExppiciteVrLittleEndianReader::ExppiciteVrLittleEndianReader(FILE *cin) : mReader(cin) {

}