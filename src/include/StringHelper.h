//
// Created by dhz on 2022/3/11.
//

#ifndef CPPX_STRINGHELPER_H
#define CPPX_STRINGHELPER_H

#include <algorithm>
#include <functional>
#include <cctype>
#include <locale>
#include <list>

class StringHelper {
// trim from start (in place)

public:

// trim from end (in place)
    static inline void rtrim(std::string &s) {
        s.erase(std::find_if(s.rbegin(), s.rend(),
                             std::not1(std::ptr_fun<int, int>(std::isspace))).base(), s.end());
    }

// trim from both ends (in place)
    static inline void trim(std::string &s) {
        ltrim(s);
        rtrim(s);
    }

// trim from start (copying)
    static inline std::string ltrim_copy(std::string s) {
        ltrim(s);
        return s;
    }

// trim from end (copying)
    static inline std::string rtrim_copy(std::string s) {
        rtrim(s);
        return s;
    }


// trim from start (in place)
    static inline void ltrim(std::string &s) {
        s.erase(s.begin(), std::find_if(s.begin(), s.end(),
                                        std::not1(std::ptr_fun<int, int>(std::isspace))));
    }

    static void splitStringToArray(std::string &strValue, char sepChar, std::list<std::string> &array)  ;


};



#endif //CPPX_STRINGHELPER_H
