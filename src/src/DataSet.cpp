//
// Created by dhz on 2022/1/4.
//


#include <cstdint>
#include <cassert>
#include <iostream>
#include <algorithm>
#include "../include/DataSet.h"
#include "../include/OutOfException.h"
#include "../include/DicomHeaderParser.h"
#include "../include/ExplicitVrReader.h"
#include "../include/TransferFactory.h"
#include "../include/ImplicitVrReader.h"
#include "../include/StringHelper.h"

DataSet::DataSet(FILE *reader, FILE *writer) : pReader(reader), mHasError(false), pWriter(writer),
                                               mTransferSyntax(DicomTransferSyntax::DeflatedExplicitVRLittleEndian) {
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
//    std::cout << "Begin DicomFileMetaInformation" << std::endl;
    std::string ts;
    for (auto &hi: this->fileMeta) {
//        std::cout << hi.toString() << std::endl;
        auto ctag = hi.getTag();
        if (ctag->Group() == 0x0002 && ctag->Element() == 0x0010) {


            size_t sz = hi.getValueLength();


            if (hi.getData()[sz - 1] == '\0' || hi.getData()[sz - 1] == 0x20) {
                ts.append(hi.getData(), sz - 1);
            } else {
                ts.append(hi.getData(), sz);
            }

            break;

//            std::cout << "TransferSyntaxUID-Value:[" << ts << "]" << std::endl;
//
//            StringHelper::ltrim(ts);
//            std::cout << "TransferSyntaxUID-String:[" << ts << "]" << std::endl;
        }
    }


//    std::cout << "End DicomFileMetaInformation" << std::endl;

    if (ts.empty()) {
        this->mHasError = true;
        this->mErrorMessage = "TransferSyntax is Emtpty";
        return;
    }
    auto pts = TransferFactory::getTransferFactory();

    DicomUID tsuid = pts->GetDicomUID(ts);
    if (tsuid == DicomUID::Empty) {
        this->mHasError = true;
        this->mErrorMessage = "Find TransferSyntax Failed";

        return;
    }
    mTransferSyntax = pts->GetTransferSyntax(tsuid);
    if (mTransferSyntax.UID == DicomUID::Empty) {
        this->mHasError = true;
        this->mErrorMessage = "Unsportted  TransferSyntax UID:" + ts;

        return;
    }
    //  std::list<DicomItem> items;

    std::cout << "IsExplicitVR:" << (mTransferSyntax.IsExplicitVR ? "ExplicitVR" : "ImplicitVR") << " And ByteOrdering:"
              << (mTransferSyntax.Endian == tByteOrdering::lowByteEndian ? "littleEndian" : "bigEndian") << std::endl;

    DicomStreamReader *dicomReader = nullptr;
    if (mTransferSyntax.IsExplicitVR) {
        dicomReader = new ExplicitVrReader(pReader, mTransferSyntax.Endian);


    } else {
        dicomReader = new ImplicitVrReader(pReader, mTransferSyntax.Endian);


    }
    dicomReader->ReadDataset(dataSets, 1);
    if (dicomReader->HasError()) {
        this->mHasError = true;
        this->mErrorMessage = dicomReader->ErrorMessage();
    }
    if (dataSets.empty()) {
        const char *str = "DicomTag Not Found !";
        if (pWriter) {
            fwrite(str, strlen(str), 1, pWriter);//注意sizeof(str)是19个字节
        }

    } else {
        if (pWriter) {
            char tagFmt[] = "%s0x%04X,0x%04X, VL=%8d,Depth=%4d\n";
            char tagStr[256] = {0};
            for (const auto &it: dataSets) {
                memset(tagStr, 0, 255);
                std::string prefix((it.getDepth() - 1) * 2, '-');

                snprintf(tagStr, 255, tagFmt, prefix.c_str(),
                         it.getTag()->Group(), it.getTag()->Element(), it.getValueLength(), it.getDepth());

#ifdef DEBUG
                std::cout << tagStr;
#endif
                fwrite(tagStr, strlen(tagStr), 1, pWriter);
            }
        }

    }

    delete dicomReader;


//    std::copy(items.begin(), items.end(),  std::back_inserter(this->dataSets));
//
//    std::list<DicomItem>().swap(items);

//    for (auto &cv: items) {
//        flat(cv, this->dataSets, true, -1);
//    }
//    if (expandTreeAsList) {
//        for (auto &cv: this->dataSets) {
//            cv.ClearSubs();
//        }
//    }
}

bool DataSet::tagExists(const DicomTag &key) {
    auto iter = std::find_if(dataSets.begin(), dataSets.end(), [key](DicomItem &n) {
        return n.getTag()->Group() == key.Group() && n.getTag()->Element() == key.Element();
    });
    return iter != dataSets.end();

}


bool DataSet::findAndGetStringArray(const DicomTag &key, list<std::string> &value) {
    auto iter = std::find_if(dataSets.begin(), dataSets.end(), [key](DicomItem &n) {
        return n.getTag()->Group() == key.Group() && n.getTag()->Element() == key.Element();
    });
    if (iter == dataSets.end()) {
        return false;
    }
    size_t rl = iter->getValueLength();
    if (rl == 0) {
        return false;
    }
    char lst = iter->getData()[rl - 1];

    if (lst == '\0' || lst == 0x20) {
        rl = rl - 1;
    }
    std::string strValue(iter->getData(), rl);
    StringHelper::splitStringToArray(strValue, '\\', value);
    return true;
}


long DataSet::indexOf(const DicomTag &key) const {
    auto iter = std::find_if(dataSets.begin(), dataSets.end(), [key](const DicomItem &n) {
        return n.getTag()->Group() == key.Group() && n.getTag()->Element() == key.Element();
    });
    if (iter == dataSets.end()) {
        return false;
    }

    return std::distance(dataSets.cbegin(), iter);

}

bool DataSet::findAndGetString(const DicomTag &key, string &value) const {
    long cpos = indexOf(key);
    if (cpos == -1) {
        return false;
    }
    auto iter = dataSets.begin();
    std::advance(iter, cpos);
    size_t rl = iter->getValueLength();
    if (rl == 0) {
        value.append("");
        return true;
    }
    char lst = iter->getData()[rl - 1];
    if (lst == '\0' || lst == 0x20) {
        rl = rl - 1;
    }
    value.append(iter->getData(), rl);
    return true;
}

bool DataSet::findAndGetUint16(const DicomTag &key, uint16_t &value) const {
    long cpos = indexOf(key);
    if (cpos == -1) {
        return false;
    }
    auto iter = dataSets.begin();
    std::advance(iter, cpos);
    size_t rl = iter->getValueLength();
    if (rl != 2) {
        return false;
    }
    memcpy(&value, iter->getData(), sizeof value);
    value = EndianConvert::adjustEndian(value, mTransferSyntax.Endian);

    return true;
}

bool DataSet::findAndGetUint32(const DicomTag &key, uint32_t &value) const {
    long cpos = indexOf(key);
    if (cpos == -1) {
        return false;
    }
    auto iter = dataSets.begin();
    std::advance(iter, cpos);
    size_t rl = iter->getValueLength();
    if (rl != 4) {
        return false;
    }
    memcpy(&value, iter->getData(), sizeof value);
    value = EndianConvert::adjustEndian(value, mTransferSyntax.Endian);

    return true;
}


DataSet::~DataSet() = default;



//DataSet::DataSet(const char *pBuffer, size_t bufferSize) : mHasError(false), pWriter(nullptr) {
//    pReader = fmemopen((void *) pBuffer, bufferSize, "rb");
//}
//
//DataSet::DataSet(string &filePath) : mHasError(false), pWriter(nullptr) {
//    pReader = fopen(filePath.c_str(), "rb");
//}
//
