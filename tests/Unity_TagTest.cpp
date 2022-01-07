//
// Created by dhz on 2021/12/27.
//

#include "gtest/gtest.h"
#include "include/DicomVR.h"
#include "include/DicomTag.h"
#include "include/DicomVM.h"

namespace {

    TEST(TagTest, StringReplaceTest) {//NOLINT
        std::string name("cr or dx");
        // std::vector<std::string> seps {  "-", " ", "or" };
        std::string src("or");
        std::string dest("|");
        StringReplace(name, src, dest);
        std::string n2("cr | dx");
        ASSERT_EQ(name, n2);
    }

    TEST(TagTest, SplitTest) {//NOLINT
        std::string name("cr or dx,CT | MRI |");
        // std::vector<std::string> seps {  "-", " ", "or" };
        std::vector<std::string> seps{"|", ",", " ", "or"};
        std::vector<std::string> dest;
        Split(name, seps, dest);
        ASSERT_EQ(dest.size(), 4);
        ASSERT_EQ(dest.at(0), "cr");
        ASSERT_EQ(dest.at(1), "dx");
        ASSERT_EQ(dest.at(2), "CT");
        ASSERT_EQ(dest.at(3), "MRI");
    }

    TEST(TagTest, VmParseTest) { //NOLINT

        int32_t  int32Max = INT32_MAX;
        std::map<std::string, DicomVM> vmregs = {
                {"1",    DicomVM{1, 1, 1}},
                {"1-2",  DicomVM{1, 2, 1}},
                {"1-3",  DicomVM{1, 3, 1}},
                {"1-8",  DicomVM{1, 8, 1}},
                {"1-32", DicomVM{1, 32, 1}},
                {"1-99", DicomVM{1, 99, 1}},
                {"1-n",  DicomVM{1, int32Max, 1}},

                {"2",    DicomVM{2, 2, 2}},
                {"2-n",  DicomVM{2, int32Max, 1}},
                {"2-2n", DicomVM{2, int32Max, 2}},

                {"3",    DicomVM{3, 3, 3}},
                {"3-n",  DicomVM{3, int32Max, 1}},
                {"3-3n", DicomVM{3, int32Max, 3}},

                {"4",    DicomVM{4, 4, 4}},
                {"6",    DicomVM{6, 6, 6}},
                {"16",   DicomVM{16, 16, 16}},
        };
        for (const auto &k: vmregs) {
            auto vm = DicomVM::ParseVM(const_cast<std::string &>(k.first));
            ASSERT_EQ(k.second.Minimum, vm.Minimum);
            ASSERT_EQ(k.second.Maximum, vm.Maximum);
            ASSERT_EQ(k.second.Multiplicity, vm.Multiplicity);
        }
//        public static readonly DicomVM VM_1 = DicomVM.Parse("1");
//
//        public static readonly DicomVM VM_1_2 = DicomVM.Parse("1-2");
//
//        public static readonly DicomVM VM_1_3 = DicomVM.Parse("1-3");
//
//        public static readonly DicomVM VM_1_8 = DicomVM.Parse("1-8");
//
//        public static readonly DicomVM VM_1_32 = DicomVM.Parse("1-32");
//
//        public static readonly DicomVM VM_1_99 = DicomVM.Parse("1-99");
//
//        public static readonly DicomVM VM_1_n = DicomVM.Parse("1-n");
//
//        public static readonly DicomVM VM_2 = DicomVM.Parse("2");
//
//        public static readonly DicomVM VM_2_n = DicomVM.Parse("2-n");
//
//        public static readonly DicomVM VM_2_2n = DicomVM.Parse("2-2n");
//
//        public static readonly DicomVM VM_3 = DicomVM.Parse("3");
//
//        public static readonly DicomVM VM_3_n = DicomVM.Parse("3-n");
//
//        public static readonly DicomVM VM_3_3n = DicomVM.Parse("3-3n");
//
//        public static readonly DicomVM VM_4 = DicomVM.Parse("4");
//
//        public static readonly DicomVM VM_6 = DicomVM.Parse("6");
//
//        public static readonly DicomVM VM_16 = DicomVM.Parse("16");


    }

    TEST(TagTest, DicomTagParser) {//NOLINT
        std::string name("hzjpDevTest");
        uint16_t group = 0x0008;
        uint16_t element = 0x0002;
        DicomTag t2(group, element, name);
        ASSERT_EQ(t2.Group(), group);
        ASSERT_EQ(t2.Element(), element);
        ASSERT_EQ(t2.Creator(), name);
        ASSERT_EQ(t2.IsOdd(), false);
        uint32_t tagId(t2);
        ASSERT_EQ(tagId, 0x00080002);
        std::string res = t2.toString();
        ASSERT_EQ(res, "0x0008,0x0002");
    }

    TEST(TagTest, DicomVRParser) {//NOLINT
        std::map<std::string, DicomVR &> maps = {
                {"AS",   DicomVR::AS},
                {"AT",   DicomVR::AT},
                {"CS",   DicomVR::CS},
                {"DA",   DicomVR::DA},
                {"DS",   DicomVR::DS},
                {"DT",   DicomVR::DT},
                {"FD",   DicomVR::FD},
                {"FL",   DicomVR::FL},
                {"IS",   DicomVR::IS},
                {"LO",   DicomVR::LO},
                {"LT",   DicomVR::LT},
                {"OB",   DicomVR::OB},
                {"OD",   DicomVR::OD},
                {"OF",   DicomVR::OF},
                {"OL",   DicomVR::OL},
                {"OV",   DicomVR::OV},
                {"OW",   DicomVR::OW},
                {"PN",   DicomVR::PN},
                {"SH",   DicomVR::SH},
                {"SL",   DicomVR::SL},
                {"SQ",   DicomVR::SQ},
                {"SS",   DicomVR::SS},
                {"ST",   DicomVR::ST},
                {"SV",   DicomVR::SV},
                {"TM",   DicomVR::TM},
                {"UC",   DicomVR::UC},
                {"UI",   DicomVR::UI},
                {"UL",   DicomVR::UL},
                {"UN",   DicomVR::UN},
                {"UR",   DicomVR::UR},
                {"US",   DicomVR::US},
                {"UT",   DicomVR::UT},
                {"UV",   DicomVR::UV},
                {"NONE", DicomVR::NONE},
        };
        for (auto &ck: maps) {
            ASSERT_EQ(DicomVR::ParseVR(const_cast<std::string &>(ck.first)), ck.second);
        }


    }

}