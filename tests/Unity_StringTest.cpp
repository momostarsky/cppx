//
// Created by dhz on 2021/12/30.
//
#include <regex>
#include <list>
#include "gtest/gtest.h"
#include "include/comm.h"
#include "include/StringHelper.h"


namespace {

    TEST(TagTest, RegMatchN) {//NOLINT
        std::string name("2-2n");
        std::string name2("2-2N");
        // std::vector<std::string> seps {  "-", " ", "or" };
        std::regex reg("n", std::regex::icase);

        auto res = std::regex_search(name, reg);
        ASSERT_EQ(res, true);
        auto res2 = std::regex_search(name2, reg);
        ASSERT_EQ(res2, true);
    }

    TEST(TagTest, RegTrim) {//NOLINT
        std::map<std::string, std::string> txts{
                {"123 ",    "123"},
                {"  123",   "123"},
                {"  123  ", "123"},
        };

        for (const auto &k: txts) {
            std::string ck(k.first);
            std::string dest;
            StringTrimStartEnd(ck, dest);
            ASSERT_EQ(dest, k.second);
        }
    }

    TEST(TagTest, SplitStringArrary) {//NOLINT

        std::map<uint32_t, std::string> txts{
                {3, R"(ORIGINAL\PRIMARY\SINGLE PLANE)"},
                {1, R"(ORIGINAL\\)"},
                {2, R"(\PRIMARY\SINGLE PLANE\)"},
                {0, R"(\\\\\)"},
        };

        for (const auto &k: txts) {
            uint32_t ck = k.first;
            std::string strValue = k.second;

            std::string copy(strValue);
            std::list<std::string> array;
            StringHelper::splitStringToArray(strValue, '\\', array);

            for (const auto &vr: array) {
                std::cout << "Item:" << vr << std::endl;
            }
            ASSERT_EQ(ck, array.size());
            ASSERT_EQ(copy, strValue);
            std::list<std::string>().swap(array);
            std::cout << "=============++Next============" << std::endl;


        }


    }


}
