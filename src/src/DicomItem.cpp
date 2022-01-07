//
// Created by dhz on 2022/1/6.
//

#include "../include/DicomItem.h"

#include <utility>
#include <istream>
#include <iostream>
#include <cassert>


DicomItem::~DicomItem() {

    delete[] mValueBuffer;
    delete mTag;
}

DicomItem::DicomItem(uint16_t groupId, uint16_t elementId, DicomVR vr, uint32_t valueLength, const char *dataBuffer) {
    mTag = new DicomTag(groupId, elementId);
    mVr = std::move(vr);
    mValueLength = valueLength;
    if (mValueLength > 0  &&  mValueLength != 0xFFFFFFFF) {
        mValueBuffer = new char[mValueLength  ] ;
        if (nullptr != dataBuffer) {
            mempcpy(mValueBuffer, dataBuffer, mValueLength);
        }
    } else {
        mValueBuffer = nullptr;
    }
}


void DicomItem::ReadData(FILE *reader) {

        size_t rb = fread(mValueBuffer, 1, mValueLength, reader);
        assert(rb == mValueLength);



}

std::string DicomItem::toString() {
    char tmp[100]{0};
    snprintf(tmp, 100, "0x%04hX,0x%04hX, VL=%d", mTag->Group(), mTag->Element(), mValueLength);
    return std::string{tmp};
}

DicomItem::DicomItem(const DicomItem &other) :

  DicomItem(other.mTag->Group(), other.mTag->Element(), other.mVr, other.mValueLength, other.mValueBuffer) {


}

//DicomItem &DicomItem::operator=(const DicomItem &other) {
//    if (&other == this) {
//        return *this;
//    }
//    delete mTag;
//    delete mValueBuffer;
//    std::string creator = other.mTag->Creator();
//    mTag = new DicomTag(other.mTag->Group(), other.mTag->Element(), creator);
//    mValueLength = other.mValueLength;
//    mVr = other.mVr;
//    mValueBuffer = new std::vector<char>(mValueLength);
//    mempcpy(mValueBuffer->data(), other.mValueBuffer->data(), mValueLength);
//    //mValueBuffer->insert(mValueBuffer->begin(), other.mValueBuffer->begin(), other.mValueBuffer->end());
//    return *this;
//}
