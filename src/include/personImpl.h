//
// Created by dhz on 2021/12/21.
//

#ifndef CPPX_PERSONIMPL_H
#define CPPX_PERSONIMPL_H

#include <cstdint>
#include <string>

namespace implementation {
    class person {
    public:

        person(std::uint32_t initialAge, std::string &name, bool sex);


        std::uint32_t getAgeValue() const;

        std::string getNameValue() const;

        bool getSexValue() const;


        void setAgeValue(std::uint32_t n);

        void setNameValue(std::string name);

        void setSexValue(bool sex);
    private:
        std::uint32_t m_age;
        std::string m_name;
        bool m_sex;
    };

}


#endif //CPPX_PERSONIMPL_H
