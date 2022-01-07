//
// Created by dhz on 2021/12/30.
//

#include "../include/DicomReader.h"

bool DicomReader::Seekable() const {
    return false;
}

int DicomReader::Length() const {
    return -1;
}

int DicomReader::Postion() const {
    return -1;
}

bool DicomReader::Seek(const int positon, SeekOnce seedOnce) {
    return false;
}



bool DicomReader::Read(const char *buffer, size_t size) {
    return false;
}