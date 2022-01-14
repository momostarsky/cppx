//
// Created by dhz on 2021/11/25.
//



#include <iostream>
#include <list>
#include <sys/stat.h>
#include "include/DicomItem.h"
#include "include/DicomHeaderParser.h"
#include "include/ExplicitVrLittleEndianReader.h"
#include "include/DataSet.h"
#include "include/DicomDictionary.h"
#include "include/DicomUID.h"

int main(int argc, char **argv) {


    std::cout << DicomTransferSyntax::ImplicitVRLittleEndian.UID.uid << std::endl;
    std::cout << DicomTransferSyntax::ImplicitVRLittleEndian.UID.name << std::endl;

    const DicomDictionary *p = DicomDictionary::getDicomDictionary();
    std::string sx(10, '-');
    std::cout << sx.c_str() << std::endl;
    std::string dcmFile("/home/dhz/dcmStore/D-J2K.dcm");

    FILE *fd = fopen(dcmFile.c_str(), "rb");


    DataSet ds(fd);
    ds.ReadDataset();

//    std::list<DicomItem> items;
//    DicomHeaderParser::Parser(fd, items);
//
//
//    ExplicitVrLittleEndianReader dr(fd);
//    std::list<DicomItem> dataSet;
//    dr.ReadDataset(dataSet);
//    char prn[100]{0};
    int index =0;
    for (DicomItem it: ds.Items()) {

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
        std::cout <<index << "-->" << it.getParent() << "  " <<  it.toString() << "  ";

        std::cout <<"subs:" << it.Subs().size() << " ";
//        for (auto sb: it.Subs()) {
//            std::cout << "--" << sb.toString() << std::endl;
//            for (auto sb2: sb.Subs()) {
//                std::cout << "----" << sb2.toString() << std::endl;
//                if (sb2.getValueLength() > 0 && (sb2.getVr().IsString || sb2.getVr().IsStringEncoded)) {
//                    std::vector<std::string> vals;
//                    DataSet::Read(sb2.getData(), sb2.getValueLength(), vals);
//                    for (const auto& v: vals) {
//                        std::cout << "------" << v << std::endl;
//                    }
//                }
//            }
//
//            if (sb.getValueLength() > 0 && (sb.getVr().IsString || sb.getVr().IsStringEncoded)) {
//                std::vector<std::string> vals;
//                DataSet::Read(sb.getData(), sb.getValueLength(), vals);
//                for (const auto& v: vals) {
//                    std::cout << "--" << v << std::endl;
//                }
//            }
//        }
//
//        if (it.getValueLength() > 0 && (it.getVr().IsString || it.getVr().IsStringEncoded)) {
//            std::vector<std::string> vals;
//            DataSet::Read(it.getData(), it.getValueLength(), vals);
//            for (const auto& v: vals) {
//                std::cout << "--" << v << std::endl;
//            }
//        }

        tagDescription_t descp = p->getTagDescriptions(it.getTag()->Group(), it.getTag()->Element());
        if (descp.m_tagKeyword) {
            std::cout << descp.m_tagKeyword << std::endl;
        } else {
            std::cout << " Unknown " << std::endl;
        };

        index++;

    }

    fclose(fd);

    return 0;
}