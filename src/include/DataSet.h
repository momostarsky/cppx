//
// Created by dhz on 2022/1/4.
//

#ifndef CPPX_DATASET_H
#define CPPX_DATASET_H

#include "DicomReader.h"
#include "DicomTag.h"
#include "DicomItem.h"
#include "DicomDictionary.h"
#include "DicomUID.h"
#include <list>

class DataSet {

public:
    explicit DataSet(FILE *reader, FILE *write = nullptr);

//    explicit DataSet(std::string &filePath);
//
//    DataSet(const char *pBuffer, size_t bufferSize);


    DataSet operator=(const DataSet &) = delete;

    DataSet(const DataSet &) = delete;

    DataSet(DataSet &&) = delete;

    void ReadDataset(uint32_t stopTag = 0, bool expandTreeAsList = false);

    virtual  ~DataSet();


    static void Read(const char *pBuffer, uint32_t max_size, std::vector<std::string> &values);

    static void Read(const char *pBuffer, uint32_t max_size, std::vector<uint16_t> &values);

    static void Read(const char *pBuffer, uint32_t max_size, std::vector<uint32_t> &values);

    static void Read(const char *pBuffer, uint32_t max_size, std::vector<uint64_t> &values);


    std::list<DicomItem> &Items() {
        return dataSets;
    }

    bool HasError() const { return mHasError; }

    std::string ErrorMessage() const { return mErrorMessage; }


public:

    bool tagExists(const DicomTag &key);

    long indexOf(const DicomTag &key) const;

    bool findAndGetString(const DicomTag &key,  std::string  &value) const;

    bool findAndGetStringArray(const DicomTag &key, std::list<std::string> &value);


    bool findAndGetUint16(const DicomTag &key,  uint16_t &value) const;

    bool findAndGetUint32(const DicomTag &key,  uint32_t &value) const;



protected:
    const DicomDictionary *pDicts = DicomDictionary::getDicomDictionary();



private:
    FILE *pReader;
    std::list<DicomItem> fileMeta;
    std::list<DicomItem> dataSets;

    bool mHasError;
    std::string mErrorMessage;

    DicomTransferSyntax mTransferSyntax;

    FILE *pWriter;
};


#endif //CPPX_DATASET_H
