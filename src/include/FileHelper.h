//
// Created by dhz on 2022/3/14.
//

#ifndef CPPX_FILEHELPER_H
#define CPPX_FILEHELPER_H


#include <dirent.h>
#include <cstring>
#include <iomanip>
#include <list>
class  FileHelper {
public:
    static void enum_files(const char *dirpath, std::list<std::string> &files);
};


#endif //CPPX_FILEHELPER_H
