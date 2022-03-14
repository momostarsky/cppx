//
// Created by dhz on 2021/11/25.
//



#include <iostream>
#include <list>
#include <sys/stat.h>
#include "include/DicomItem.h"
#include "include/DataSet.h"
#include "include/DicomDictionary.h"
#include "include/DicomUID.h"
#include <sys/stat.h>
#include "include/FileHelper.h"

int main(int argc, char **argv) {
    const DicomDictionary *p = DicomDictionary::getDicomDictionary();
    std::list<std::string> allDcmFiles;
    std::string rootdir("/home/dhz/jpdata/goprod/dcmrw/dcmfiles/v1.2.1-pass2");
//    std::string rootdir("/home/dhz/jpdata/goprod/dcmrw/dcmfiles/v1.2.1-pass1");

   FileHelper:: enum_files(rootdir.c_str(), allDcmFiles);

    for (const auto &dcmfile: allDcmFiles) {

        const char *data = dcmfile.c_str() + strlen(dcmfile.c_str()) - 4;
        if (0 != strncasecmp(data, ".dcm", 4)) {
            std::cout << "NOT DCM" << dcmfile << std::endl;
            continue;
        }
        std::cout << "DcmFile:" << dcmfile << std::endl;


        FILE *fd = fopen(dcmfile.c_str(), "rb");


        DataSet ds(fd);
        ds.ReadDataset();




        int index = 0;
        for (DicomItem it: ds.Items()) {
            std::cout <<  std::setw(4) <<  std::left <<  index << "-->" << it.getParent() << "  " << it.toString() << "  ";
            std::cout << "subs:" << it.Subs().size() << " ";
            tagDescription_t descp = p->getTagDescriptions(it.getTag()->Group(), it.getTag()->Element());
            if (descp.m_tagKeyword) {
                std::cout << descp.m_tagKeyword << std::endl;
            } else {
                std::cout << " Unknown " << std::endl;
            };
            index++;
        }


        fclose(fd);


    }


    return 0;
}


