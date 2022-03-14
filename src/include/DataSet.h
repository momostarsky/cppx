//
// Created by dhz on 2022/1/4.
//

#ifndef CPPX_DATASET_H
#define CPPX_DATASET_H

#include "DicomReader.h"
#include "DicomTag.h"
#include "DicomItem.h"
#include <list>

class DataSet {

public:
    explicit DataSet(FILE *reader);

    explicit DataSet(std::string &filePath);

    DataSet(const char *pBuffer, size_t bufferSize);


    DataSet operator=(const DataSet &) = delete;

    DataSet(const DataSet &) = delete;

    DataSet(DataSet &&) = delete;

    void ReadDataset(uint32_t stopTag = 0, bool expandTreeAsList=false );

    virtual  ~DataSet();


    static void Read(const char *pBuffer, uint32_t max_size, std::vector<std::string> &values);

    static void Read(const char *pBuffer, uint32_t max_size, std::vector<uint16_t> &values);

    static void Read(const char *pBuffer, uint32_t max_size, std::vector<uint32_t> &values);

    static void Read(const char *pBuffer, uint32_t max_size, std::vector<uint64_t> &values);

    uint16_t GetValue(uint32_t tagId, size_t index = 0);

    std::vector<uint16_t> GetValues(uint32_t tagId);

    std::list<DicomItem>&  Items(){
        return  dataSets;
    }
    bool HasError() const { return mHasError; }

    std::string ErrorMessage() const { return mErrorMessage; }


private:
    FILE *pReader;
    std::list<DicomItem> fileMeta;
    std::list<DicomItem> dataSets;

    bool mHasError;
    std::string mErrorMessage;
};


#endif //CPPX_DATASET_H
