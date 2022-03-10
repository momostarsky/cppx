//
// Created by dhz on 2021/12/21.
//

#include "../include/personImpl.h"

#include <utility>

namespace implementation {


    person::person(std::uint32_t initialAge, std::string &name, bool sex) :

            m_age(initialAge), m_name(name), m_sex(sex) {

    }

    std::uint32_t person::getAgeValue() const {
        return m_age;
    }

    std::string person::getNameValue() const {
        return m_name;
    }

    bool person::getSexValue() const {
        return m_sex;
    }

    void person::setSexValue(bool sex) {
        m_sex = sex;
    }

    void person::setNameValue(std::string name) {
        m_name = std::move(name);
    }

    void person::setAgeValue(std::uint32_t n) {
        m_age = n;
    }
}