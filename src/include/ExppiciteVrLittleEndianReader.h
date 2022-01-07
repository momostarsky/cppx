//
// Created by dhz on 2022/1/7.
//

#ifndef CPPX_EXPPICITEVRLITTLEENDIANREADER_H
#define CPPX_EXPPICITEVRLITTLEENDIANREADER_H

#include <istream>
#include <list>
#include "DicomItem.h"

class ExppiciteVrLittleEndianReader {
public:
    explicit ExppiciteVrLittleEndianReader(FILE *cin);

    ExppiciteVrLittleEndianReader(const ExppiciteVrLittleEndianReader &) = delete;

    ExppiciteVrLittleEndianReader &operator=(const ExppiciteVrLittleEndianReader &) = delete;

    ExppiciteVrLittleEndianReader(ExppiciteVrLittleEndianReader &&) = delete;

    bool operator==(const ExppiciteVrLittleEndianReader &) = delete;

    void ReadDataset(std::list<DicomItem> &items);

protected:
    FILE *mReader;
};


#endif //CPPX_EXPPICITEVRLITTLEENDIANREADER_H
