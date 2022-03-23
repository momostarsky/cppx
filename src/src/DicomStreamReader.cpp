//
// Created by dhz on 2022/3/23.
//

#include <cassert>
#include <iostream>
#include "../include/ExplicitVrReader.h"

void
DicomStreamReader::VrNoneErrorMessage(long offset, uint16_t groupId, uint16_t elementId, const std::string &vrstr) {
    char tipText[125] = {0};
    char tipFmtStr[] = "TagError::Offset=0x%04X,  Tag{0x%04X,0x%04X}, Vr=%s  is Unsupported!";
    snprintf(tipText, 124, tipFmtStr, offset, groupId, elementId, vrstr.c_str());
    this->mHasError = true;
    this->mErrorMessage.append(tipText);
}

void
DicomStreamReader::ValueLengthErrorMessage(long offset, uint16_t groupId, uint16_t elementId, const std::string &vrstr) {
    char tagError[] = "TagError :Offset=0x%04X,  Tag{0x%04X,0x%04X}, VR=%s, ValueLength is 0xFFFFFFFF";
    char tagMessage[512 + 1] = {0};
    snprintf(tagMessage, 512, tagError, offset, groupId, elementId, vrstr.c_str());
    this->mHasError = true;
    this->mErrorMessage.append(tagMessage);
}

void
DicomStreamReader::ValueLengthOutofRange(long offset, uint16_t groupId, uint16_t elementId, const std::string &vrstr,
                                         uint32_t valueLength, uint32_t maxLen) {
    char tagError[] = "TagError: Offset=0x%04X,  Tag{0x%04X,0x%04X}, VR=%s, VL=0x%04X ,OutOf FileLength:%d";
    char tagMessage[512 + 1] = {0};
    snprintf(tagMessage, 512, tagError, offset, groupId, elementId, vrstr.c_str(), valueLength, maxLen);
    this->mHasError = true;
    this->mErrorMessage.append(tagMessage);
}