//
// Created by dhz on 2021/12/31.
//


#include <fstream>
#include "gtest/gtest.h"
#include "include/comm.h"
#include "include/DicomFileReader.h"
#include "include/DataSet.h"
#include "include/DicomDictionary.h"
#include "include/FileHelper.h"

#ifndef DISABLE_DCMTK_INTEROPERABILITY_TEST

#include <dcmtk/dcmdata/dcdatset.h>
#include <dcmtk/dcmdata/dcfilefo.h>
#include <dcmtk/dcmdata/dcistrmb.h>
#include <dcmtk/dcmdata/dcrledrg.h>
#include <dcmtk/dcmimgle/dcmimage.h>
#include <dcmtk/dcmimage/diregist.h>
#include <dcmtk/dcmdata/dcovlay.h>

#endif
namespace {


    TEST(TagTest, BytesSwapTests) {//NOLINT
        char buf[4] = {0x02, 0x00, 0x00, 0x0};

        uint32_t x = (buf[3] & 0xFF000000) |
                     (buf[2] & 0x00FF0000) |
                     (buf[1] & 0x0000FF00) |
                     (buf[0] & 0x000000FF);

        ASSERT_EQ(2, x);

        char vl[4] = {0x48, 0x00, 0x00, 0x0};

        uint32_t x2 = (vl[3] & 0xFF000000) |
                      (vl[2] & 0x00FF0000) |
                      (vl[1] & 0x0000FF00) |
                      (vl[0] & 0x000000FF);

        ASSERT_EQ(0x48, x2);


        char bytes[4] = {0x54, 0x02, 0x00, 0x0};

        uint32_t num = bytes[0] & 0xFF;
        num |= ((bytes[1] << 8) & 0xFF00);
        num |= ((bytes[2] << 16) & 0xFF0000);
        num |= ((bytes[3] << 24) & 0xFF000000);


        ASSERT_EQ(596, num);

    }


    TEST(TagTest, ExplicitVrLittleEndianReader_Test) {//NOLINT
        const DicomDictionary *p = DicomDictionary::getDicomDictionary();
        std::list<std::string> allDcmFiles;
        std::string rootdir("./dcmfiles/v1.2.1-pass2");

        FileHelper::enum_files(rootdir.c_str(), allDcmFiles);


        const char *filestr = ".dcm";// "MR-MONO2-12-shoulder.dcm";
        size_t tl = strlen(filestr);


        for (const auto &dcmfile: allDcmFiles) {

            const char *data = dcmfile.c_str() + strlen(dcmfile.c_str()) - tl;
            if (0 != strncasecmp(data, filestr, tl)) {

                continue;
            }
            std::cout << "DcmFile:" << dcmfile << std::endl;


            FILE *fd = fopen(dcmfile.c_str(), "rb");


            DataSet ds(fd);
            ds.ReadDataset();
            if (ds.HasError()) {
                std::cout << ds.ErrorMessage() << std::endl;
            }

            ASSERT_TRUE(!ds.HasError());


            fclose(fd);
            DcmFileFormat fileformat;
            OFCondition status = fileformat.loadFile(dcmfile.c_str());
            ASSERT_TRUE(OFTrue == status.good());

            DcmDataset *dcmDataset = fileformat.getDataset();


            DcmObject *next = dcmDataset->nextInContainer(nullptr);
            //遍历Tag（0008——7FE0）
            while (next != nullptr) {
                uint16_t grop = next->getGTag();
                uint16_t elem = next->getETag();

                std::_List_iterator<DicomItem> iter1 = std::find_if(ds.Items().begin(), ds.Items().end(),
                                                                    [grop, elem](const DicomItem &n) {
                                                                        return n.getTag()->Element() == elem &&
                                                                               n.getTag()->Group() == grop;
                                                                    });


                ASSERT_TRUE(iter1 != std::end(ds.Items()));
                std::cout <<(uint32_t) *iter1->getTag() << " And "<< iter1->toString() << std::endl;
                next = dcmDataset->nextInContainer(next);
            }


        }


    }

    TEST(TagTest, ExplicitVrLittleEndianReader2_Test) {//NOLINT

        const DicomDictionary *p = DicomDictionary::getDicomDictionary();
        std::list<std::string> allDcmFiles;
        std::string rootdir("./dcmfiles/v1.2.1-pass1");

        const char *filestr = ".dcm";// "MR-MONO2-12-shoulder.dcm";
        size_t tl = strlen(filestr);

        FileHelper::enum_files(rootdir.c_str(), allDcmFiles);

        for (const auto &dcmfile: allDcmFiles) {

            const char *data = dcmfile.c_str() + strlen(dcmfile.c_str()) - 4;
            if (0 != strncasecmp(data, filestr, tl)) {
                continue;
            }

            FILE *fd = fopen(dcmfile.c_str(), "rb");


            DataSet ds(fd);
            ds.ReadDataset();

            ASSERT_TRUE(!ds.HasError());
            fclose(fd);
            DcmFileFormat fileformat;
            OFCondition status = fileformat.loadFile(dcmfile.c_str());
            ASSERT_TRUE(OFTrue == status.good());

            DcmDataset *dcmDataset = fileformat.getDataset();


            DcmObject *next = dcmDataset->nextInContainer(nullptr);
            //遍历Tag（0008——7FE0）
            while (next != nullptr) {
                uint16_t grop = next->getGTag();
                uint16_t elem = next->getETag();
                std::_List_iterator<DicomItem> iter1 = std::find_if(ds.Items().begin(), ds.Items().end(),
                                                                    [grop, elem](const DicomItem &n) {
                                                                        return n.getTag()->Element() == elem &&
                                                                               n.getTag()->Group() == grop;
                                                                    });
                ASSERT_TRUE(iter1 != std::end(ds.Items()));
                std::cout << iter1->toString() << std::endl;
                next = dcmDataset->nextInContainer(next);
            }

        }


    }
}