//
// Created by dhz on 2022/3/14.
//

#include "../include/FileHelper.h"
#include <sys/stat.h>

/*!
 * 遍历指定目录下的文件
 * @param filename
 * @param files
 */
void FileHelper::enum_files(const char *dirpath, std::list<std::string> &files) {
    std::list<std::string> alldirs;
    alldirs.emplace_back(dirpath);
    char filepath[1025] = {0};
    while (!alldirs.empty()) {

        auto Iter_S = alldirs.begin();
        std::string cdirname(*Iter_S);
        DIR *dir = opendir(Iter_S->c_str());
        alldirs.pop_front();
        if (dir == nullptr) {
            break;
        }
        struct dirent *ent;

        while ((ent = readdir(dir)) != nullptr) {
            if (strncasecmp(ent->d_name, ".", 1) == 0
                || strncasecmp(ent->d_name, "..", 2) == 0
                    ) {
                continue;
            }
            memset(filepath, 0, 1025);
            snprintf(filepath, 1024, "%s/%s", cdirname.c_str(), ent->d_name);
            struct stat fstate{0};
            stat(filepath, &fstate);
            if (S_ISDIR(fstate.st_mode)) {

                alldirs.emplace_back(filepath);
            } else {

                files.emplace_back(filepath);
            }
        }
        closedir(dir);//用完了记得关闭掉

    }

    std::list<std::string> lstDefault;
    lstDefault.swap(alldirs);

}