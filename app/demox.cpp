//
// Created by dhz on 2021/11/25.
//



#include <iostream>
#include <list>
#include "include/DicomItem.h"
#include "include/DataSet.h"
#include "include/DicomDictionary.h"
#include "include/DicomUID.h"
#include "include/FileHelper.h"

int main(int argc, char **argv) {
    const DicomDictionary *p = DicomDictionary::getDicomDictionary();
    std::list<std::string> allDcmFiles;
    std::string rootdir("/home/dhz/jpdata/goprod/dcmrw/dcmfiles");
//    std::string rootdir("/home/dhz/jpdata/goprod/dcmrw/dcmfiles/v1.2.1-pass1");
//MR-MONO2-12-shoulder.dcm
    FileHelper::enum_files(rootdir.c_str(), allDcmFiles);

//   const char*  filestr="MR-MONO2-12-shoulder.dcm";
//   THERALYS-12-MONO2-Uncompressed-Even_Length_Tag
//   size_t tl = strlen("MR-MONO2-12-shoulder.dcm");
// GE_CT_With_Private_compressed-icon
    const char *filestr = ".dcm";
    size_t tl = strlen(filestr);
    for (const auto &dcmfile: allDcmFiles) {


        const char *data = dcmfile.c_str() + strlen(dcmfile.c_str()) - tl;

        if (0 != strncasecmp(data + strlen(data) - tl, filestr, tl)) {

            continue;
        }

        //MR-MONO2-12-shoulder.dcm
        std::cout << "DcmFile:" << dcmfile << std::endl;


        FILE *fd = fopen(dcmfile.c_str(), "rb");


        DataSet ds(fd);
        ds.ReadDataset();

        if(ds.HasError()  || ds.Items().empty()){
            std::cerr << ds.ErrorMessage()  <<" or NotFound Tag" << std::endl;
        } else {
            char indexFmt[48]="0x%04X";
            char indexStr[64]={0};

            int index = 0;
            for (DicomItem it: ds.Items()) {
                snprintf(indexStr, 64, indexFmt, index);
                std::cout <<  indexStr   << " --> "<< it.toString() << "  subs:" << it.Subs().size() << std::endl;
//            tagDescription_t descp = p->getTagDescriptions(it.getTag()->Group(), it.getTag()->Element());
//            if (descp.m_tagKeyword) {
//                std::cout << descp.m_tagKeyword << std::endl;
//            } else {
//                std::cout << " Unknown " << std::endl;
//            };
                index++;
            }
        }

        fclose(fd);


    }


    return 0;
}


