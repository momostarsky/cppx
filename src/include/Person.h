//
// Created by dhz on 2021/12/21.
//

#ifndef CPPX_PERSON_H
#define CPPX_PERSON_H

#include <cstdint>
#include <memory>


namespace implementation
{
    class person;
}



class Person {

public:
    Person(const Person& source);

    Person& operator=(const Person& source) = delete;

    virtual ~Person();

    /// 构造函数
    /// \param initialAge  年龄
    /// \param name   姓名
    /// \param sex 性别
    Person(std::uint32_t initialAge, std::string name, bool sex);

    std::uint32_t getAge() const;
    std::string   getName() const;
    bool  getSex() const;
    void  setAge(std::uint32_t nAge);
    void  setName(std::string nName);
    void  setSex(bool nSex);

protected:
    explicit Person(std::shared_ptr<implementation::person>&  person);

private:
    friend const std::shared_ptr<implementation::person>& getPersonImplementation(const Person& person);
    std::shared_ptr<implementation::person> m_ptrImplement;


};


#endif //CPPX_PERSON_H
