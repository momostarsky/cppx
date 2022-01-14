//
// Created by dhz on 2021/12/27.
//

#ifndef CPPX_DICOMVR_H
#define CPPX_DICOMVR_H

#include "comm.h"

class DicomVR {
public:

    std::string Code;
    std::string Name;
    bool IsString{};
    bool IsStringEncoded{};
    bool Is16bitLength{};
    bool IsMultiValue{};
    char PaddingValue{};
    uint32_t MaximumLength{};
    int32_t UnitSize{};
    int32_t ByteSwap{};

    bool operator==(const DicomVR &other) const;


    DicomVR() = default;

    DicomVR(const DicomVR &src) = default;

    DicomVR &operator=(const DicomVR &src)  ;

    DicomVR(DicomVR &&src) = default;

//public:
//    DicomVR() =default;
//    DicomVR(const DicomVR &src) = default;
//
//    DicomVR &operator=(const DicomVR &src) = default;
//
//    DicomVR(DicomVR &&src) noexcept;




    static const   DicomVR * ParseVR(std::string &tagStr);

    /***
     * https://dicom.nema.org/medical/dicom/current/output/html/part05.html#table_7.1-2
     * Data Element with Explicit VR of AE, AS, AT, CS, DA, DS, DT, FL, FD, IS, LO, LT, PN, SH, SL, SS, ST, TM, UI, UL and US
     * VR 为固定字节
     * @param vr
     * @return
     */
    static bool ElementWithFixedFormat(const DicomVR &vr);
};


extern const DicomVR *pVR_NONE;
extern const DicomVR *pVR_AE;
extern const DicomVR *pVR_AS;
extern const DicomVR *pVR_AT;
extern const DicomVR *pVR_CS;
extern const DicomVR *pVR_DA;
extern const DicomVR *pVR_DS;
extern const DicomVR *pVR_DT;
extern const DicomVR *pVR_FD;
extern const DicomVR *pVR_FL;
extern const DicomVR *pVR_IS;
extern const DicomVR *pVR_LO;
extern const DicomVR *pVR_LT;
extern const DicomVR *pVR_OB;
extern const DicomVR *pVR_OD;
extern const DicomVR *pVR_OF;
extern const DicomVR *pVR_OL;
extern const DicomVR *pVR_OW;
extern const DicomVR *pVR_UV;
extern const DicomVR *pVR_UT;
extern const DicomVR *pVR_US;
extern const DicomVR *pVR_UR;
extern const DicomVR *pVR_UN;
extern const DicomVR *pVR_UL;
extern const DicomVR *pVR_UI;
extern const DicomVR *pVR_UC;
extern const DicomVR *pVR_TM;
extern const DicomVR *pVR_SV;
extern const DicomVR *pVR_ST;
extern const DicomVR *pVR_SS;
extern const DicomVR *pVR_SQ;
extern const DicomVR *pVR_SL;
extern const DicomVR *pVR_SH;
extern const DicomVR *pVR_PN;
extern const DicomVR *pVR_OV;


#endif //CPPX_DICOMVR_H
