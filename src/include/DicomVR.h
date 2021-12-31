//
// Created by dhz on 2021/12/27.
//

#ifndef CPPX_DICOMVR_H
#define CPPX_DICOMVR_H

#include "comm.h"

struct DicomVR {
public:
    DicomVRCode Code;
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

//public:
//    DicomVR() =default;
//    DicomVR(const DicomVR &src) = default;
//
//    DicomVR &operator=(const DicomVR &src) = default;
//
//    DicomVR(DicomVR &&src) noexcept;

public:
    static DicomVR NONE;
    static DicomVR AE;
    static DicomVR AS;
    static DicomVR AT;
    static DicomVR CS;
    static DicomVR DA;
    static DicomVR DS;
    static DicomVR DT;
    static DicomVR FD;
    static DicomVR FL;
    static DicomVR IS;
    static DicomVR LO;
    static DicomVR LT;
    static DicomVR OB;
    static DicomVR OD;
    static DicomVR OF;
    static DicomVR OL;
    static DicomVR OW;
    static DicomVR UV;
    static DicomVR UT;
    static DicomVR US;
    static DicomVR UR;
    static DicomVR UN;
    static DicomVR UL;
    static DicomVR UI;
    static DicomVR UC;
    static DicomVR TM;
    static DicomVR SV;
    static DicomVR ST;
    static DicomVR SS;
    static DicomVR SQ;
    static DicomVR SL;
    static DicomVR SH;
    static DicomVR PN;
    static DicomVR OV;

    static DicomVR &ParseVR(std::string &tagStr);
};

const uint8_t PadSpace = 0x20;
const uint8_t PadZero = 0x00;


#endif //CPPX_DICOMVR_H
