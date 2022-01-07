//
// Created by dhz on 2022/1/4.
//

#ifndef CPPX_DATASET_H
#define CPPX_DATASET_H

#include "DicomReader.h"
#include "DicomTag.h"
#include <list>

class DataSet {

public:
    explicit DataSet(DicomReader &reader );
    DataSet operator=(const DataSet&)  =delete;

    DataSet(const DataSet&) =delete;

    DataSet(DataSet&&) =delete;

    void Parse(DicomTag& stopTag);

private:
    DicomReader &pReader;
    std::list<DicomTag>  tags ;
};


#endif //CPPX_DATASET_H
