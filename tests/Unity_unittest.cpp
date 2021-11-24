#include "gtest/gtest.h"
#include "Unity.h"

namespace {


    TEST(Exp1Test, subtract)
    {
        double res;
        Hzjp::Unity unity;
        res = unity.subtract_numbers(1.0, 2.0);
        ASSERT_NEAR(res, -1.0, 1.0e-11);
    }
}