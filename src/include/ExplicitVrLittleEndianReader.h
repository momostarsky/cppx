//
// Created by dhz on 2022/1/7.
//

#ifndef CPPX_EXPLICITVRLITTLEENDIANREADER_H
#define CPPX_EXPLICITVRLITTLEENDIANREADER_H

#include <istream>
#include <list>
#include "DicomItem.h"

class ExplicitVrLittleEndianReader {
public:
    explicit ExplicitVrLittleEndianReader(FILE *cin);

    ExplicitVrLittleEndianReader(const ExplicitVrLittleEndianReader &) = delete;

    ExplicitVrLittleEndianReader &operator=(const ExplicitVrLittleEndianReader &) = delete;

    ExplicitVrLittleEndianReader(ExplicitVrLittleEndianReader &&) = delete;

    bool operator==(const ExplicitVrLittleEndianReader &) = delete;

    void ReadDataset(std::list<DicomItem> &items, uint32_t depath = 1);

protected:


    void parseSubs(DicomItem *ite);

    void parseSQSegmemnt(FILE *reader, DicomItem *ite,  std::list<DicomItem>& subItems);



protected:
    FILE *mReader;
    size_t mDataLength;
};


#endif //CPPX_EXPLICITVRLITTLEENDIANREADER_H
