//
// Created by dhz on 2021/11/25.
//



#include <iostream>
#include <list>
#include "include/DicomItem.h"
#include "include/DicomHeaderParser.h"
#include "include/ExppiciteVrLittleEndianReader.h"

int  main(int argc , char** argv){

    std::string dcmFile("/home/dhz/dcmStore/D-J2K.dcm");

    FILE *fd = fopen(dcmFile.c_str(), "rb");

    std::list<DicomItem> items;
    DicomHeaderParser::Parser(fd, items);

    char prn[100]{0};
    for (const auto &it: items) {

        if (it.getVr() == DicomVR::UL) {

            uint32_t vl = bytesto_int4(it.getData());
            snprintf(prn, 100, "0x%04hX,0x%04hX, VLen=%d, Value=%d", it.getTag()->Group(), it.getTag()->Element(),
                     it.getValueLength(), vl);

        } else if (it.getVr() == DicomVR::OB) {
            snprintf(prn, 100, "0x%04hX,0x%04hX, VLen=%d, Value=%d,%d", it.getTag()->Group(),
                     it.getTag()->Element(),
                     it.getValueLength(), it.getData()[0], it.getData()[1]);

        } else {
            std::string stext;
            stext.append(it.getData());
            snprintf(prn, 100, "0x%04hX,0x%04hX, VLen=%d, Value=%s", it.getTag()->Group(), it.getTag()->Element(),
                     it.getValueLength(), stext.c_str());
        }
        std::cout << prn << std::endl;
    }


    ExppiciteVrLittleEndianReader dr(fd);
    std::list<DicomItem> dataSet;
    dr.ReadDataset(dataSet);


    fclose(fd);

    return 0 ;
}