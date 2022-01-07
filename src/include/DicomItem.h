//
// Created by dhz on 2022/1/6.
//

#ifndef CPPX_DICOMITEM_H
#define CPPX_DICOMITEM_H


#include "DicomTag.h"
#include "DicomVR.h"

class DicomItem {

public:

    DicomItem(uint16_t groupId, uint16_t elementId, DicomVR vr, uint32_t valueLength, const char *dataBuffer = nullptr);

    DicomItem(const DicomItem &other);

//    DicomItem &operator=(const DicomItem &other);

    DicomItem(DicomItem &&other) noexcept = delete;


    void ReadData(FILE *reader);

    virtual std::string toString();

    virtual  ~DicomItem();

    DicomTag *getTag() const {
        return mTag;
    }

    uint32_t getValueLength() const {
        return mValueLength;
    }

    DicomVR getVr() const {
        return mVr;
    }

    const char *getData() const {

        return mValueBuffer ;
    }

protected:
    DicomTag *mTag;
    DicomVR mVr;
    uint32_t mValueLength;
    char *mValueBuffer;

};


#endif //CPPX_DICOMITEM_H
