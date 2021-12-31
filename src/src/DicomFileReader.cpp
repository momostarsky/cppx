//
// Created by dhz on 2021/12/31.
//

#include <sys/stat.h>
#include "../include/DicomFileReader.h"


DicomFileReader::~DicomFileReader() {
    if (fd) {
        fclose(fd);
        fd = nullptr;
    }
    DicomReader::~DicomReader();
}

int DicomFileReader::Length() const {
    struct stat sb{};

//    fstat(fd,&sb);

    if (!stat(m_path.c_str(), &sb)) {
        return (int) sb.st_size;
    } else {
        return -1;
    }
}

bool DicomFileReader::Seekable() const {
    return true;
}

int DicomFileReader::Seek(int positon, SeekOnce seedOnce) {
    switch (seedOnce) {
        case SeekOnce::Current:
            return fseek(fd, positon, SEEK_CUR);

        case SeekOnce::Begin:
            return fseek(fd, positon, SEEK_SET);

        case SeekOnce::End:
            return fseek(fd, positon, SEEK_END);
    }

}

int DicomFileReader::Postion() const {
    return (int) ftell(fd);
}
