//
// Created by dhz on 2021/12/27.
//

#include "gtest/gtest.h"
#include "include/PrivateDictionary.h"


namespace {

    TEST(TagTest, PrivateDictionaryTest) {//NOLINT

        PrivateDictionary* p = PrivateDictionary::getPrivateDictionary();

        ASSERT_TRUE(p!= nullptr);

        std::string pc="Silhouette ROI V1.0";
        ASSERT_TRUE(true == p->PrivateCreator(pc));

        //<tag group="0029" element="xx12" vr="LT" vm="1">ROI Name Font</tag>
        auto ck =p->PrivateTag(pc,0x0029,0x0012);

        ASSERT_TRUE( "LT" == ck.m_vr );
        ASSERT_TRUE( "ROI Name Font" == ck.m_key );
        ASSERT_TRUE( "1" == ck.m_vm );



    }


}