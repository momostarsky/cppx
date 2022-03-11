//
// Created by dhz on 2022/1/7.
//

#ifndef CPPX_IMPLICITVRLITTLEENDIANREADER_H
#define CPPX_IMPLICITVRLITTLEENDIANREADER_H

#include <istream>
#include <list>
#include "DicomItem.h"

class ImplicitVrLittleEndianReader {
public:
    explicit ImplicitVrLittleEndianReader(FILE *cin);

    ImplicitVrLittleEndianReader(const ImplicitVrLittleEndianReader &) = delete;

    ImplicitVrLittleEndianReader &operator=(const ImplicitVrLittleEndianReader &) = delete;

    ImplicitVrLittleEndianReader(ImplicitVrLittleEndianReader &&) = delete;

    bool operator==(const ImplicitVrLittleEndianReader &) = delete;

    void ReadDataset(std::list<DicomItem> &items, uint32_t depath = 1);

    bool HasError() const { return mHasError; }

    std::string ErrorMessage() const { return mErrorMessage; }

protected:
    void  parseSubs(DicomItem *ite);
    void   parseValueFieldWithUndefinedLength(FILE *reader, DicomItem *ite);
protected:
    FILE *mReader;
    size_t mDataLength;

    bool mHasError;
    std::string mErrorMessage;

};


#endif //CPPX_IMPLICITVRLITTLEENDIANREADER_H
