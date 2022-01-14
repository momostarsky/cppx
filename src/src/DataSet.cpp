//
// Created by dhz on 2022/1/4.
//


#include <cstdint>
#include <cassert>
#include "../include/DataSet.h"
#include "../include/OutOfException.h"
#include "../include/DicomHeaderParser.h"
#include "../include/ExplicitVrLittleEndianReader.h"


DataSet::DataSet(FILE *reader) : pReader(reader) {
}


void DataSet::Read(const char *pBuffer, uint32_t max_size, std::vector<std::string> &values) {
    assert(pBuffer != nullptr);
    assert(0 == max_size % 2);
    uint32_t rs = max_size;
    if (pBuffer[max_size - 1] == PadSpace) {
        rs = max_size - 1;
    }
    std::string tmp(pBuffer, 0, rs);
    std::vector<std::string> sep = {"\\"};
    Split(tmp, sep, values);
}


void DataSet::Read(const char *pBuffer, uint32_t max_size, vector<uint16_t> &values) {
    assert(pBuffer != nullptr);
    assert(0 == max_size % 2);
    uint32_t rw = max_size / 2;
    for (uint32_t i = 0; i < rw; i++) {
        uint16_t t = bytesto_int2(pBuffer + 2 * i);
        values.push_back(t);
    }
}

void DataSet::Read(const char *pBuffer, uint32_t max_size, vector<uint32_t> &values) {
    assert(pBuffer != nullptr);
    assert(0 == max_size % 4);
    uint32_t rw = max_size / 4;
    for (uint32_t i = 0; i < rw; i++) {
        uint32_t t = bytesto_int4(pBuffer + 4 * i);
        values.push_back(t);
    }
}

void DataSet::Read(const char *pBuffer, uint32_t max_size, vector<uint64_t> &values) {

    assert(pBuffer != nullptr);
    assert(0 == max_size % 8);

    uint32_t rw = max_size / 8;
    for (uint32_t i = 0; i < rw; i++) {
        uint64_t t = bytesto_int8(pBuffer + 8 * i);
        values.push_back(t);
    }
}

uint16_t DataSet::GetValue(uint32_t tagId, size_t index) {
    return 0;
}

std::vector<uint16_t> DataSet::GetValues(uint32_t tagId) {
    return {};
}

void flat(DicomItem &citem, std::list<DicomItem> &dataSet, bool appendCitem = true, int parentIndex = -1) {///NOLINT


    if (appendCitem) {
        citem.setParentId(parentIndex);
        dataSet.push_back(citem);
    }
    int subParentId = (int) dataSet.size() - 1;
    for (auto &ck: citem.Subs()) {
        ck.setParentId(subParentId);
        dataSet.push_back(ck);
        int subp = (int) dataSet.size() - 1;
        if (!ck.Subs().empty()) {
            flat(ck, dataSet, false, subp);
        }
    }


}

void DataSet::ReadDataset(const uint32_t stopTag, bool expandTreeAsList) {
    this->fileMeta.clear();
    this->dataSets.clear();
    DicomHeaderParser::Parser(pReader, this->fileMeta);
    ExplicitVrLittleEndianReader dr(pReader);
    std::list<DicomItem> items;
    dr.ReadDataset(items);
    for (auto &cv: items) {
        flat(cv, this->dataSets, true, -1);
    }
    if (expandTreeAsList) {
        for (auto &cv: this->dataSets) {
            cv.ClearSubs();
        }
    }
}

DataSet::~DataSet() {
    if (!pReader) {
        fclose(pReader);
        pReader = nullptr;
    }
}

DataSet::DataSet(const char *pBuffer, size_t bufferSize) {
    pReader = fmemopen((void *) pBuffer, bufferSize, "rb");
}

DataSet::DataSet(string &filePath) {
    pReader = fopen(filePath.c_str(), "rb");
}

