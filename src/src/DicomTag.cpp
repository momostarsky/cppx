//
// Created by dhz on 2021/12/27.
//

#include "../include/DicomTag.h"

#include <utility>

DicomTag::DicomTag(uint16_t group, uint16_t element) :
        mGroup(group), mElement(element), mCreator(nullptr) {

}

DicomTag::DicomTag(uint16_t group, uint16_t element, std::string privateCreator) :
        mGroup(group), mElement(element), mCreator(new DicomPrivateCreator(privateCreator)) {

}

DicomTag::DicomTag(uint16_t group, uint16_t element, DicomPrivateCreator &privateCreator) :
        mGroup(group), mElement(element), mCreator(new DicomPrivateCreator(privateCreator)) {

}

DicomPrivateCreator *DicomTag::getPrivateCreator() const {
    return mCreator;
}


DicomTag::operator uint32_t() const {
    uint32_t t = mGroup;
    t = t << 16 | mElement;
    return t;
}

std::string DicomTag::toString() const {
    char text[14] = {0};
    char fmtStr[] = "0x%04X,0x%04X";
    sprintf(text,fmtStr, mGroup, mElement);
    return std::string{text};
}
