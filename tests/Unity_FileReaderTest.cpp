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
#include <algorithm>

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


        const char *filestr = "MR-MONO2-12-shoulder.dcm";// "MR-MONO2-12-shoulder.dcm";
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
                std::cout << (uint32_t) *iter1->getTag() << " And " << iter1->toString() << std::endl;
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


    TEST(TagTest, TagValueReader2_Test) {//NOLINT

        const DicomDictionary *p = DicomDictionary::getDicomDictionary();
        std::list<std::string> allDcmFiles;
        std::string rootdir("./dcmfiles/other-pass");

        const char *filestr = "0002.DCM";// "MR-MONO2-12-shoulder.dcm";
        size_t tl = strlen(filestr);

        FileHelper::enum_files(rootdir.c_str(), allDcmFiles);

        for (const auto &dcmfile: allDcmFiles) {

            const char *data = dcmfile.c_str() + strlen(dcmfile.c_str()) - tl;
            if (0 != strncasecmp(data, filestr, tl)) {
                continue;
            }
            std::cout << dcmfile << std::endl;

            FILE *fd = fopen(dcmfile.c_str(), "rb");


            DataSet ds(fd);
            ds.ReadDataset();

            ASSERT_TRUE(!ds.HasError());
            fclose(fd);

            {
                std::string uid;
                DicomTag tag1(0x0008, 0x0016);
                std::cout << "Index Of is :" << ds.indexOf(tag1) << std::endl;
                ds.findAndGetString(tag1, uid);
                std::cout << "Values is:" << uid << std::endl;
                ASSERT_TRUE(0 == std::strcmp(uid.c_str(), "1.2.840.10008.5.1.4.1.1.12.1"));
            }
            {
                std::string clsuid;
                DicomTag tag1(0x0008, 0x0018);
                std::cout << "Index Of is :" << ds.indexOf(tag1) << std::endl;
                ds.findAndGetString(tag1, clsuid);
                std::cout << "Values is:" << clsuid << std::endl;
                ASSERT_TRUE(0 == std::strcmp(clsuid.c_str(), "1.3.12.2.1107.5.4.3.321890.19960124.162922.29"));


            }

            {
                std::list<std::string> imageTypes;
                DicomTag tag1(0x0008, 0x0008);
                std::cout << "Index Of :" << ds.indexOf(tag1) << std::endl;
                ds.findAndGetStringArray(tag1, imageTypes);
                std::cout << "And Values is :[";
                for (const auto &ck: imageTypes) {
                    std::cout << ck << ",";
                }
                std::cout << "]" << std::endl;

                ASSERT_TRUE(4 == imageTypes.size());
                std::string v1("DERIVED");
                //DERIVED\PRIMARY\SINGLE PLANE\SINGLE A
                ASSERT_TRUE(1 == std::count(imageTypes.begin(), imageTypes.end(), v1));
                ASSERT_TRUE(1 == std::count(imageTypes.begin(), imageTypes.end(), std::string("PRIMARY")));
                ASSERT_TRUE(1 == std::count(imageTypes.begin(), imageTypes.end(), std::string("SINGLE PLANE")));
                ASSERT_TRUE(1 == std::count(imageTypes.begin(), imageTypes.end(), std::string("SINGLE A")));
                std::cout << std::endl;
            }

            {
                uint16_t rows;
                DicomTag tag1(0x0028, 0x0010);
                std::cout << "Index Of :" << tag1 << " is :" << ds.indexOf(tag1);
                ds.findAndGetUint16(tag1, rows);
                std::cout << " Value=" << rows << std::endl;
                ASSERT_TRUE(rows == 512);
            }
            {
                uint16_t cols;
                DicomTag tag1(0x0028, 0x0011);
                std::cout << "Index Of :" << tag1 << " is :" << ds.indexOf(tag1);
                ds.findAndGetUint16(tag1, cols);
                std::cout << " Value=" << cols << std::endl;
                ASSERT_TRUE(cols == 512);
            }

            {
                uint16_t rows;
                DicomTag tag1(0x0028, 0x0010);
                std::cout << "Index Of :" << tag1 << " is :" << ds.indexOf(tag1)  ;
                ds.findAndGetUint16(tag1, rows);
                std::cout << " Value=" << rows << std::endl;
                ASSERT_TRUE(rows == 512);
            }

            {
//            (0028,0100) [US] BitsAllocated: 8
//            (0028,0101) [US] BitsStored: 8
//            (0028,0102) [US] HighBit: 7
//            (0028,0103) [US] PixelRepresentation: 0


                std::map<DicomTag, uint16_t> mk = {
                        {DicomTag(0x0028, 0x0100), 8},
                        {DicomTag(0x0028, 0x0101), 8},
                        {DicomTag(0x0028, 0x0102), 7},
                        {DicomTag(0x0028, 0x0103), 0},
                };
                for (auto &k: mk) {
                    std::cout << "Index Of :" << k.first << " is:" << ds.indexOf(k.first);
                    std::uint16_t fv;
                    ds.findAndGetUint16(k.first, fv);
                    std::cout << " Valus is:" << fv << std::endl;
                    ASSERT_TRUE(fv == k.second);
                }


            }


        }


    }


    TEST(TagTest, ImplicitVrReader_Test) {//NOLINT
        const DicomDictionary *p = DicomDictionary::getDicomDictionary();
        std::list<std::string> allDcmFiles;
        std::string rootdir("./dcmfiles/v1.2-pass2");

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
                std::cout << (uint32_t) *iter1->getTag() << " And " << iter1->toString() << std::endl;
                next = dcmDataset->nextInContainer(next);
            }


        }


    }
}