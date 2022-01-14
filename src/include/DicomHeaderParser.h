//
// Created by dhz on 2022/1/5.
//

#ifndef CPPX_DICOMHEADERPARSER_H
#define CPPX_DICOMHEADERPARSER_H

#include "comm.h"
#include "DicomItem.h"
#include  <string>
#include <istream>

/***
 * 根据DICOM3 的标准协议， 符合DICOM3 标准的文件， FileMetaInformation 的编码是
 * 固定的ExplicitVrLittleEndian 编码格式
 *
 */
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
