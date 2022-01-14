//
// Created by dhz on 2022/1/14.
//

#ifndef CPPX_TRANSFERFACTORY_H
#define CPPX_TRANSFERFACTORY_H


#include <map>
#include "DicomUID.h"

class TransferFactory {

protected:
    std::map<std::string, DicomUID> _uids;
    std::map<std::string, DicomTransferSyntax> _tsmaps;

    TransferFactory();

public:
    static TransferFactory *getTransferFactory();

    DicomUID GetDicomUID(std::string &idstr);

    DicomTransferSyntax GetTransferSyntax(DicomUID &tsuid);

};

#endif //CPPX_TRANSFERFACTORY_H
