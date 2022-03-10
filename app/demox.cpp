//
// Created by dhz on 2021/11/25.
//



#include <iostream>
#include <list>
#include <sys/stat.h>
#include "include/DicomItem.h"
#include "include/DataSet.h"
#include "include/DicomDictionary.h"
#include "include/DicomUID.h"
#include <sys/stat.h>
#include <dirent.h>
#include <cstring>

void enum_files(const char *dirpath, std::list<std::string> &files);

int main(int argc, char **argv) {
    const DicomDictionary *p = DicomDictionary::getDicomDictionary();
    std::list<std::string> allDcmFiles;
//    std::string rootdir("/home/dhz/jpdata/goprod/dcmrw/dcmfiles/v1.2.1-pass2");
    std::string rootdir("/home/dhz/jpdata/goprod/dcmrw/dcmfiles/v1.2.1-pass1");

    enum_files(rootdir.c_str(), allDcmFiles);

    for (const auto &dcmfile: allDcmFiles) {

        const char *data = dcmfile.c_str() + strlen(dcmfile.c_str()) - 4;
        if (0 != strncasecmp(data, ".dcm", 4)) {
            std::cout << "NOT DCM" << dcmfile << std::endl;
            continue;
        }
        std::cout << "DcmFile:" << dcmfile << std::endl;


        FILE *fd = fopen(dcmfile.c_str(), "rb");


        DataSet ds(fd);
        ds.ReadDataset();



        int index = 0;
        for (DicomItem it: ds.Items()) {
            std::cout << index << "-->" << it.getParent() << "  " << it.toString() << "  ";
            std::cout << "subs:" << it.Subs().size() << " ";
            tagDescription_t descp = p->getTagDescriptions(it.getTag()->Group(), it.getTag()->Element());
            if (descp.m_tagKeyword) {
                std::cout << descp.m_tagKeyword << std::endl;
            } else {
                std::cout << " Unknown " << std::endl;
            };
            index++;
        }


        fclose(fd);


    }


    return 0;
}


/*!
 * 遍历指定目录下的文件
 * @param filename
 * @param files
 */
void enum_files(const char *dirpath, std::list<std::string> &files) {
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
