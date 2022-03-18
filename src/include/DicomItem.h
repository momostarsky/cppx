//
// Created by dhz on 2022/1/6.
//

#ifndef CPPX_DICOMITEM_H
#define CPPX_DICOMITEM_H

#include <list>
#include "DicomTag.h"
#include "DicomVR.h"

class DicomItem {

public:

    DicomItem(uint16_t groupId, uint16_t elementId, DicomVR vr, uint32_t valueLength, uint32_t depth = 1,
              const char *dataBuffer = nullptr, DicomItem *ptrParent = nullptr);

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

    void setValueLength(uint32_t valueLength)  ;

    DicomVR getVr() const {
        return mVr;
    }

    const char *getData() const {

        return mValueBuffer;
    }

    uint32_t getDepth() const {
        return mDepth;
    }

    int getParent() const {
        return mParent;
    }

    void setDepth(uint32_t depth) {
        mDepth = depth;
    }

    void addSubItem(const DicomItem &item) {
        mSubs.push_back(item);
    }

    void setParentId(int pos) {
        mParent = pos;
    }

    void setPtrParent(DicomItem *ptr) {
        mPtrParent = ptr;
    }

    DicomItem *GetPtrParent() const {
        return mPtrParent;
    }

    std::list<DicomItem> &Subs() const {
        return const_cast<std::list<DicomItem> &>(mSubs);
    }

    void ClearSubs() {
        mSubs.clear();
    }

protected:
    DicomTag *mTag;
    DicomVR mVr;
    uint32_t mValueLength;
    char *mValueBuffer;
    uint32_t mDepth;
    int mParent;
    std::list<DicomItem> mSubs;

    DicomItem *mPtrParent;


};


#endif //CPPX_DICOMITEM_H
