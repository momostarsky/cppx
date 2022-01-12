//
// Created by dhz on 2021/11/25.
//



#include <iostream>
#include <list>
#include <sys/stat.h>
#include "include/DicomItem.h"
#include "include/DicomHeaderParser.h"
#include "include/ExplicitVrLittleEndianReader.h"

int main(int argc, char **argv) {


    std::string sx(10, '-');
    std::cout << sx.c_str() << std::endl;
    std::string dcmFile("/home/dhz/dcmStore/D-J2K.dcm");

    FILE *fd = fopen(dcmFile.c_str(), "rb");

    std::list<DicomItem> items;
    DicomHeaderParser::Parser(fd, items);


    ExplicitVrLittleEndianReader dr(fd);
    std::list<DicomItem> dataSet;
    dr.ReadDataset(dataSet);
    char prn[100]{0};
    for (DicomItem it: dataSet) {

//        if (it.getVr() == DicomVR::UL) {
//
//            uint32_t vl = bytesto_int4(it.getData());
//            snprintf(prn, 100, "0x%04hX,0x%04hX, VLen=%d, Value=%d", it.getTag()->Group(), it.getTag()->Element(),
//                     it.getValueLength(), vl);
//
//        } else if (it.getVr() == DicomVR::OB) {
//            snprintf(prn, 100, "0x%04hX,0x%04hX, VLen=%d, Value=%d,%d", it.getTag()->Group(),
//                     it.getTag()->Element(),
//                     it.getValueLength(), it.getData()[0], it.getData()[1]);
//
//        } else {
//            std::string stext;
//            stext.append(it.getData());
//            snprintf(prn, 100, "0x%04hX,0x%04hX, VLen=%d, Value=%s", it.getTag()->Group(), it.getTag()->Element(),
//                     it.getValueLength(), stext.c_str());
//        }
        std::cout << it.toString() << std::endl;

        for (auto sb: it.Subs()) {
            std::cout << "--" << sb.toString() << std::endl;
            for (auto sb2: sb.Subs()) {
                std::cout << "----" << sb2.toString() << std::endl;


            }

        }


    }

    fclose(fd);

    return 0;
}