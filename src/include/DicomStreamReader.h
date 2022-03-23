//
// Created by dhz on 2022/3/23.
//

#ifndef CPPX_DICOMSTREAMREADER_H
#define CPPX_DICOMSTREAMREADER_H


#include <istream>
#include <list>
#include "DicomItem.h"
#include "Endian.h"

class DicomStreamReader {

public:

    void ValueLengthErrorMessage(long offset, uint16_t groupId, uint16_t elementId, const std::string &vrstr);

    void ValueLengthOutofRange(long offset, uint16_t groupId, uint16_t elementId, const std::string &vrstr,
                               uint32_t valueLength, uint32_t maxLen);

    void VrNoneErrorMessage(long offset, uint16_t groupId, uint16_t elementId, const std::string &vrstr);


    std::string ErrorMessage() const { return mErrorMessage; }

    bool HasError() const { return mHasError; }

    virtual void ReadDataset(std::list<DicomItem> &items, uint32_t depath) = 0;

    virtual  ~DicomStreamReader() =default;
protected:
    bool mHasError{false};
    std::string mErrorMessage;

};


#endif //CPPX_DICOMSTREAMREADER_H
