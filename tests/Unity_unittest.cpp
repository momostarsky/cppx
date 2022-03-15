#include "gtest/gtest.h"
#include "include/Person.h"


namespace {


    TEST(Exp1Test, PersonInfo) {///NOLINT
        std::string name("dhanzhang");
        std::size_t age(30);
        bool sex(false);
        Person p(age, name, sex);
        ASSERT_EQ(p.getAge(), age);
        ASSERT_EQ(p.getName(), name);
        ASSERT_EQ(p.getSex(), sex);

        Person p2 = p;

        ASSERT_EQ(p2.getAge(), age);
        ASSERT_EQ(p2.getName(), name);
        ASSERT_EQ(p2.getSex(), sex);

        p2.setName("hzjpx90-12390");
        p2.setAge(40);
        p2.setSex(true);

        ASSERT_EQ(p2.getAge(), 40);
        ASSERT_EQ(p2.getName(), "hzjpx90-12390");
        ASSERT_EQ(p2.getSex(), true);

        ASSERT_EQ(p.getAge(),  p2.getAge());
        ASSERT_EQ(p.getName(), p2.getName());
        ASSERT_EQ(p.getSex(),  p2.getSex());
    }


}