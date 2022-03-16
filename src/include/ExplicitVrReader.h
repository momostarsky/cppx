//
// Created by dhz on 2022/1/7.
//

#ifndef CPPX_EXPLICITVRREADER_H
#define CPPX_EXPLICITVRREADER_H

#include <istream>
#include <list>
#include "DicomItem.h"
#include "Endian.h"
class ExplicitVrReader {
public:
    explicit ExplicitVrReader(FILE *cin, tByteOrdering byteOrdering);

    ExplicitVrReader(const ExplicitVrReader &) = delete;

    ExplicitVrReader &operator=(const ExplicitVrReader &) = delete;

    ExplicitVrReader(ExplicitVrReader &&) = delete;

    bool operator==(const ExplicitVrReader &) = delete;

    void ReadDataset(std::list<DicomItem> &items, uint32_t depath = 1);

    bool HasError() const { return mHasError; }

    std::string ErrorMessage() const { return mErrorMessage; }

protected:


    void parseSubs(DicomItem *ite, std::list<DicomItem> &subItems);

    void parseSQ(FILE *reader, DicomItem *ite, std::list<DicomItem> &subItems);


protected:
    FILE *mReader;
    size_t mDataLength;
    bool mHasError;
    std::string mErrorMessage;

    tByteOrdering  mByteOrdering;
};


#endif //CPPX_EXPLICITVRREADER_H
