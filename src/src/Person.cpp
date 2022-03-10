//
// Created by dhz on 2021/12/21.
//

#include "../include/Person.h"
#include "../include/personImpl.h"

Person::~Person() = default;

Person::Person(std::shared_ptr<implementation::person> &person) :
        m_ptrImplement(person) {

}

const std::shared_ptr<implementation::person> &getPersonImplementation(const Person &person) {
    return person.m_ptrImplement;
}

Person::Person(const Person &source) :
        m_ptrImplement(getPersonImplementation(source)) {

}

Person::Person(std::uint32_t initialAge, std::string name, bool sex)
        : m_ptrImplement(std::make_shared<implementation::person>(initialAge, name, sex)) {

}

std::uint32_t Person::getAge() const {
    return m_ptrImplement->getAgeValue();
}

std::string Person::getName() const {
    return m_ptrImplement->getNameValue();
}

bool Person::getSex() const {
    return m_ptrImplement->getSexValue();
}

void Person::setAge(std::uint32_t nAge) {
    m_ptrImplement->setAgeValue(nAge);
}

void Person::setName(std::string nName) {
    m_ptrImplement->setNameValue(nName);
}

void Person::setSex(bool nSex) {
    m_ptrImplement->setSexValue(nSex);
}
