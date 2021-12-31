//
// Created by dhz on 2021/12/27.
//

#ifndef CPPX_DICOMTAG_H
#define CPPX_DICOMTAG_H

#include "comm.h"
#include "DicomPrivateCreator.h"

class DicomTag {
public:

    DicomTag(uint16_t group, uint16_t element);

    DicomTag(uint16_t group, uint16_t element, std::string privateCreator);

    DicomTag(uint16_t group, uint16_t element, DicomPrivateCreator &privateCreator);

    explicit   operator uint32_t() const;

    DicomTag(const DicomTag &) = delete;

    DicomTag operator=(const DicomTag &) = delete;

    DicomPrivateCreator *getPrivateCreator() const;

    uint16_t Group() const { return mGroup; }

    uint16_t Element() const { return mElement; }

    bool IsOdd() const { return (mGroup & 1) == 1; }

    std::string toString() const;

private:
    uint16_t mGroup;
    uint16_t mElement;
    DicomPrivateCreator *mCreator;


};


#endif //CPPX_DICOMTAG_H
