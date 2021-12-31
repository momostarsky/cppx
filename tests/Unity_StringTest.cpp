//
// Created by dhz on 2021/12/30.
//
#include <regex>
#include "gtest/gtest.h"
#include "include/comm.h"


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
}
