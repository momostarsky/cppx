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

    TEST(TagTest, FileStreamReaderTagx) {//NOLINT
        std::string dcmFile("/home/dhz/dcmStore/D-J2K.dcm");
        DicomFileReader dr(dcmFile);

        DataSet ds(dr);
        DicomTag stopTag(0x7FE0, 0x0010);
        ds.Parse(stopTag);

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
        std::string dcmFile("/home/dhz/dcmStore/D-J2K.dcm");

        FILE *fd = fopen(dcmFile.c_str(), "rb");

        std::list<DicomItem> items;
        DicomHeaderParser::Parser(fd, items);
        ASSERT_GE(items.size(), 1);
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


        ExplicitVrLittleEndianReader dr(fd);
        std::list<DicomItem> dataSet;
        dr.ReadDataset(dataSet);


        fclose(fd);

    }

}