//
// Created by dhz on 2022/1/5.
//

#ifndef CPPX_DICOMHEADERPARSER_H
#define CPPX_DICOMHEADERPARSER_H

#include "comm.h"
#include "DicomItem.h"
#include  <string>
#include <istream>

class DicomHeaderParser {


public:
    DicomHeaderParser() = delete;

    DicomHeaderParser(const DicomHeaderParser &) = delete;

    DicomHeaderParser(DicomHeaderParser &&) = delete;

    DicomHeaderParser &operator=(const DicomHeaderParser &
    ) = delete;


    static void  Parser(FILE *fd, std::list<DicomItem>& metaInfo);


};


#endif //CPPX_DICOMHEADERPARSER_H
