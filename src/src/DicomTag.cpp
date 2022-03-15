//
// Created by dhz on 2021/12/27.
//

#include "../include/DicomTag.h"

#include <utility>

DicomTag::DicomTag(uint16_t group, uint16_t element) :
        mGroup(group), mElement(element){

}

DicomTag::DicomTag(uint16_t group, uint16_t element, std::string& privateCreator) :
        mGroup(group), mElement(element), mCreator( privateCreator ) {

}





std::string DicomTag::toString() const {
    char text[14] = {0};
    char fmtStr[] = "0x%04X,0x%04X";
    sprintf(text, fmtStr, mGroup, mElement);
    return std::string{text};
}

DicomTag::DicomTag(const DicomTag &src) {

    this->mGroup = src.mGroup;
    this->mElement = src.mElement;
    this->mCreator = src.mCreator;

}
