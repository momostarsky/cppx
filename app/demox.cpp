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
#include "include/DefaultTags.h"

int main(int argc, char **argv) {
    const DicomDictionary *p = DicomDictionary::getDicomDictionary();
    std::list<std::string> allDcmFiles;
    std::string rootdir("../tests/dcmfiles");
//    std::string rootdir("/home/dhz/jpdata/goprod/dcmrw/dcmfiles/v1.2.1-pass1");
//MR-MONO2-12-shoulder.dcm
    FileHelper::enum_files(rootdir.c_str(), allDcmFiles);

//   const char*  filestr="MR-MONO2-12-shoulder.dcm";
//   THERALYS-12-MONO2-Uncompressed-Even_Length_Tag
//   SIEMENS_MAGNETOM-12-MONO2-GDCM12-VRUN.dcm
//   size_t tl = strlen("MR-MONO2-12-shoulder.dcm");
// GE_CT_With_Private_compressed-icon
    const char *filestr = ".dcm";
    size_t tl = strlen(filestr);
    for (const auto &dcmfile: allDcmFiles) {


        const char *data = dcmfile.c_str() + strlen(dcmfile.c_str()) - tl;

        if (0 != strncasecmp(data + strlen(data) - tl, filestr, tl)) {

            continue;
        }

//        if(std::string::npos !=dcmfile.find("/error/")){
//            continue;
//        }

        //MR-MONO2-12-shoulder.dcm
        std::cout << "DcmFile:" << dcmfile << std::endl;

        size_t ipx = dcmfile.find_last_of('/');

        if (ipx == -1) {
            std::cout << "File Name NotFoudn !" << std::endl;
            continue;

        }

        std::string fileName = dcmfile.substr(ipx + 1);

        std::cout << "File Name:" << fileName << std::endl;

        std::string logFile("./" + fileName + ".txt");

        FILE *fd = fopen(dcmfile.c_str(), "rb");


        remove(logFile.c_str());
        FILE *fw = fopen(logFile.c_str(), "w");


        DataSet ds(fd, fw);
        ds.ReadDataset();

        if(ds.HasError()){
           std::cout <<ds.ErrorMessage() <<std::endl;
        }
        DicomTag  ctagRows = DCM_Rows;
        std::cout << "TagRow Exists:" << ds.tagExists(ctagRows) << std::endl;
//        std::string uid;
//        DicomTag tag(0x0008,0x0016);
//        std::cout<<"Index Of is :" << ds.indexOf(tag) <<std::endl;
//        ds.findAndGetString(tag , uid);
//        std::cout<<"And Values is :" <<  uid <<std::endl;

        if (fd)
            fclose(fd);
        if (fw) {
            fflush(fw);
            fclose(fw);
            fw = nullptr;
        }


    }


    return 0;
}


