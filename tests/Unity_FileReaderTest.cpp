//
// Created by dhz on 2021/12/31.
//


#include <fstream>
#include "gtest/gtest.h"
#include "include/comm.h"
#include "include/DicomFileReader.h"
#include "include/DataSet.h"
#include "include/DicomHeaderParser.h"
#include "include/ExplicitVrLittleEndianReader.h"
#include "include/DicomDictionary.h"

namespace {

    TEST(TagTest, FileStreamReader) {//NOLINT
        std::string dcmFile("/home/dhz/dcmStore/D-J2K.dcm");
        DicomFileReader dr(dcmFile);
        ASSERT_EQ(118248, dr.Length());
        ASSERT_EQ(0, dr.Postion());
        ASSERT_EQ(true, dr.Seekable());
        char buffer[1000];
        bool rok = dr.Read(buffer, 1000);
        ASSERT_EQ(true, rok);
        ASSERT_EQ(118248, dr.Length());
        ASSERT_EQ(1000, dr.Postion());
        bool ok = dr.Seek(4, SeekOnce::Current);
        ASSERT_EQ(true, ok);
        ASSERT_EQ(1004, dr.Postion());
        bool ok2 = dr.Seek(-4, SeekOnce::Current);
        ASSERT_EQ(true, ok2);
        ASSERT_EQ(1000, dr.Postion());

    }


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


    TEST(TagTest, DicomHeaderParserTests) {//NOLINT
        const DicomDictionary *p = DicomDictionary::getDicomDictionary();
        std::string dcmFile("/home/dhz/jpdata/goprod/dcmrw/dcmfiles/v1.2.1-pass1/D_CLUNIE_MR3_RLE.dcm");

        FILE *fd = fopen(dcmFile.c_str(), "rb");



        DataSet ds(fd);
        ds.ReadDataset();


        int index = 0;
        for (DicomItem it: ds.Items()) {
            std::cout << index << "-->" << it.getParent() << "  " << it.toString() << "  ";
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

}