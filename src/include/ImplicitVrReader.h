//
// Created by dhz on 2022/1/7.
//

#ifndef CPPX_IMPLICITVRREADER_H
#define CPPX_IMPLICITVRREADER_H

#include <istream>
#include <list>
#include "DicomItem.h"
#include "Endian.h"
#include "DicomStreamReader.h"

class ImplicitVrReader : public DicomStreamReader {
public:
    explicit ImplicitVrReader(FILE *cin, tByteOrdering byteOrdering);

    ImplicitVrReader(const ImplicitVrReader &) = delete;

    ImplicitVrReader &operator=(const ImplicitVrReader &) = delete;

    ImplicitVrReader(ImplicitVrReader &&) = delete;

    bool operator==(const ImplicitVrReader &) = delete;

    void ReadDataset(std::list<DicomItem> &items, uint32_t depath) override;


protected:


    void parseSubs(DicomItem *ite, std::list<DicomItem> &subItems);

    void parseSQ(FILE *reader, DicomItem *ite, std::list<DicomItem> &subItems);


protected:
    FILE *mReader;
    size_t mDataLength;


    tByteOrdering mByteOrdering;
};


#endif //CPPX_IMPLICITVRREADER_H
