//
// Created by dhz on 2021/12/27.
//

#ifndef CPPX_DICOMVM_H
#define CPPX_DICOMVM_H


struct DicomVM {
public:
    int32_t Minimum;
    int32_t Maximum;
    int32_t Multiplicity;

    static DicomVM ParseVM(std::string &s);

};


#endif //CPPX_DICOMVM_H
