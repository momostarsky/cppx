//
// Created by dhz on 2022/1/6.
//

#include "../include/DicomItem.h"

#include <utility>
#include <istream>
#include <cassert>


DicomItem::~DicomItem() {

    delete[] mValueBuffer;
    delete mTag;
    delete mPtrParent;
}

DicomItem::DicomItem(uint16_t groupId, uint16_t elementId, DicomVR vr,
                     uint32_t valueLength, uint32_t depth,
                     const char *dataBuffer, DicomItem *ptrParent)
        : mDepth(depth), mValueLength(valueLength), mVr(std::move(vr)), mParent(-1),
          mPtrParent(ptrParent) {
    mTag = new DicomTag(groupId, elementId);
    if (mValueLength > 0 && mValueLength != 0xFFFFFFFF) {
        mValueBuffer = new char[mValueLength];
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

    std::string prefix((this->mDepth - 1) * 2, '-');
    snprintf(tmp, 100, "%s0x%04hX,0x%04hX,VR=%s, VL=%d, Deepth :%d", prefix.c_str(), mTag->Group(), mTag->Element(),
             mVr.Code.c_str(),
             mValueLength, mDepth);
    return std::string{tmp};
//    for (auto &sb: mSubs) {
//        char tmp2[100]{0};
//        std::string prefix2((sb.mDepth - 1) * 2, '-');
//        snprintf(tmp2, 100, "\n%s0x%04hX,0x%04hX,VR=%s, VL=%d, Deepth :%d", prefix2.c_str(), sb.mTag->Group(),
//                 sb.mTag->Element(),
//                 sb.mVr.Code.c_str(),
//                 sb.mValueLength, sb.mDepth);
//        result.append(tmp2);
//
//
//    }
//    return result;
}

DicomItem::DicomItem(const DicomItem &other) :

        DicomItem(other.mTag->Group(), other.mTag->Element(),
                  other.mVr, other.mValueLength, other.mDepth,
                  other.mValueBuffer, other.mPtrParent) {
    mParent = other.mParent;
    if (!other.mSubs.empty()) {
//        std::cout << "copy From :" << other.mSubs.size() << std::endl;
//        for (const auto &co: other.mSubs) {
//            mSubs.push_back(co);
//        }
        mSubs.insert(mSubs.begin(), other.mSubs.begin(), other.mSubs.end());
    }


}

void DicomItem::setValueLength(uint32_t valueLength) {
    if (mValueLength == valueLength) {
        return;
    }
    delete[] mValueBuffer;
    mValueBuffer = new char[mValueLength];
    mValueLength = valueLength;

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
