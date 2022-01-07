//
// Created by dhz on 2021/12/31.
//

#include <sys/stat.h>
#include <cassert>
#include "../include/DicomFileReader.h"


DicomFileReader::~DicomFileReader() {
    if (fd) {
        int lx = fclose(fd);
        assert(lx != EOF);
        fd = nullptr;
    }
}

int DicomFileReader::Length() const {

    return m_len;
}

bool DicomFileReader::Seekable() const {
    return true;
}

bool DicomFileReader::Seek(int positon, SeekOnce seedOnce) {

    // https://www.runoob.com/cprogramming/c-function-fseek.html
    switch (seedOnce) {
        case SeekOnce::Current:
            return 0 == fseek(fd, positon, SEEK_CUR);

        case SeekOnce::Begin:
            return 0 == fseek(fd, positon, SEEK_SET);

        case SeekOnce::End:
            return 0 == fseek(fd, positon, SEEK_END);
        default :
            return false;
    }

}

int DicomFileReader::Postion() const {
    return (int) ftell(fd);
}

bool DicomFileReader::Read(const char *buffer, size_t size) {
    // https://www.runoob.com/cprogramming/c-function-fread.html
    size_t readSize = fread((void *) buffer, 1, size, fd);
    return size == readSize;
}

bool DicomFileReader::Endof() {
    fpos_t pos;
    int errorNo = fgetpos(fd, &pos);
    if (errorNo == 0) {
        return pos.__pos >= m_len;
    }
    return true;
}
