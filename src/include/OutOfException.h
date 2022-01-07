//
// Created by dhz on 2022/1/4.
//

#ifndef CPPX_OUTOFEXCEPTION_H
#define CPPX_OUTOFEXCEPTION_H

#include <exception>
#include <string>

using namespace std;

class OutOfException : std::exception {
public:


    OutOfException(const OutOfException &src)  noexcept{
        message = src.message;
    }

    OutOfException &operator=(const OutOfException &src) noexcept  {
        message = src.message;
        return *this;
    }

    explicit OutOfException(const string &str) noexcept(true): message("Error : " + str) {}

    ~OutOfException() override = default;

    const char *what() const noexcept override {
        return message.c_str();
    }

private:
    string message;
};


#endif //CPPX_OUTOFEXCEPTION_H
