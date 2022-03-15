//
// Created by dhz on 2021/12/27.
//

#ifndef CPPX_DICOMTAG_H
#define CPPX_DICOMTAG_H

#include "comm.h"


class DicomTag {
public:

    DicomTag(uint16_t group, uint16_t element);

    DicomTag(uint16_t group, uint16_t element, std::string &privateCreator);


    explicit operator uint32_t() const {
        uint32_t t = mGroup;
        t = t << 16 | mElement;
        return t;
    }




    DicomTag(const DicomTag &);

    DicomTag operator=(const DicomTag &) = delete;


    uint16_t Group() const { return mGroup; }

    uint16_t Element() const { return mElement; }

    std::string Creator() const { return mCreator; }

    bool IsOdd() const { return (mGroup & 1) == 1; }

    std::string toString() const;


private:
    uint16_t mGroup;
    uint16_t mElement;
    std::string mCreator;


};


#endif //CPPX_DICOMTAG_H
