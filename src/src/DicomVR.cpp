//
// Created by dhz on 2021/12/27.
//

#include "../include/DicomVR.h"

const DicomVR *pVR_NONE = new DicomVR{ ///NOLINT
        .Code =  DicomVR_NONE,
        .Name = "No Value Representation",
        .IsString = false,
        .IsStringEncoded = false,
        .Is16bitLength = false,
        .IsMultiValue = false,
        .PaddingValue = PadZero,
        .MaximumLength = 0,
        .UnitSize = 0,
        .ByteSwap = 0,
};

const DicomVR *pVR_AE = new DicomVR{///NOLINT
        .Code =DicomVR_AE,
        .Name ="Application Entity",
        .IsString = true,
        .IsStringEncoded =false,
        .Is16bitLength = true,
        .IsMultiValue = true,
        .PaddingValue = PadSpace,
        .MaximumLength = 16,
        .UnitSize = 1,
        .ByteSwap = 1,
};

const DicomVR *pVR_AS = new DicomVR{///NOLINT
        .Code =DicomVR_AS,
        .Name = "Age String",
        .IsString = true,
        .IsStringEncoded = false,
        .Is16bitLength = true,
        .IsMultiValue = true,
        .PaddingValue = PadSpace,
        .MaximumLength = 4,
        .UnitSize = 1,
        .ByteSwap = 1,
};

const DicomVR *pVR_AT = new DicomVR{///NOLINT
        .Code =DicomVR_AT,
        .Name = "Attribute Tag",
        .IsString = false,
        .IsStringEncoded = false,
        .Is16bitLength = true,
        .IsMultiValue = true,
        .PaddingValue = PadZero,
        .MaximumLength = 4,
        .UnitSize = 4,
        .ByteSwap = 2,
};

const DicomVR *pVR_CS = new DicomVR{///NOLINT
        .Code =DicomVR_CS,
        .Name = "Code String",
        .IsString = true,
        .IsStringEncoded = false,
        .Is16bitLength = true,
        .IsMultiValue = true,
        .PaddingValue = PadSpace,
        .MaximumLength = 16,
        .UnitSize = 1,
        .ByteSwap = 1,
};

const DicomVR *pVR_DA = new DicomVR{///NOLINT
        .Code =DicomVR_DA,
        .Name = "Date",
        .IsString = true,
        .IsStringEncoded = false,
        .Is16bitLength = true,
        .IsMultiValue = true,
        .PaddingValue = PadSpace,
        .MaximumLength = 18,
        .UnitSize = 1,
        .ByteSwap = 1,
};

const DicomVR *pVR_DS = new DicomVR{///NOLINT
        .Code =DicomVR_DS,
        .Name = "Decimal String",
        .IsString = true,
        .IsStringEncoded = false,
        .Is16bitLength = true,
        .IsMultiValue = true,
        .PaddingValue = PadSpace,
        .MaximumLength = 16,
        .UnitSize = 1,
        .ByteSwap = 1,
};

const DicomVR *pVR_DT = new DicomVR{ ///NOLINT
        .Code =DicomVR_DT,
        .Name = "Date Time",
        .IsString = true,
        .IsStringEncoded = false,
        .Is16bitLength = true,
        .IsMultiValue = true,
        .PaddingValue = PadSpace,
        .MaximumLength = 54,
        .UnitSize = 1,
        .ByteSwap = 1,
};

const DicomVR *pVR_FD = new DicomVR{ ///NOLINT
        .Code =DicomVR_FD,
        .Name = "Floating Point Double",
        .IsString = false,
        .IsStringEncoded = false,
        .Is16bitLength = true,
        .IsMultiValue = true,
        .PaddingValue = PadZero,
        .MaximumLength = 8,
        .UnitSize = 8,
        .ByteSwap = 8,
};

const DicomVR *pVR_FL = new DicomVR{ ///NOLINT
        .Code =DicomVR_FL,
        .Name = "Floating Point Single",
        .IsString = false,
        .IsStringEncoded = false,
        .Is16bitLength = true,
        .IsMultiValue = true,
        .PaddingValue = PadZero,
        .MaximumLength = 4,
        .UnitSize = 4,
        .ByteSwap = 4,
};

const DicomVR *pVR_IS = new DicomVR{ ///NOLINT
        .Code =DicomVR_IS,
        .Name = "Integer String",
        .IsString = true,
        .IsStringEncoded = false,
        .Is16bitLength = true,
        .IsMultiValue = true,
        .PaddingValue = PadSpace,
        .MaximumLength = 12,
        .UnitSize = 1,
        .ByteSwap = 1,
};

const DicomVR *pVR_LO = new DicomVR{ ///NOLINT
        .Code =DicomVR_LO,
        .Name = "Long String",
        .IsString = true,
        .IsStringEncoded = true,
        .Is16bitLength = true,
        .IsMultiValue = true,
        .PaddingValue = PadSpace,
        .MaximumLength = 64,
        .UnitSize = 1,
        .ByteSwap = 1,
};

const DicomVR *pVR_LT = new DicomVR{ ///NOLINT
        .Code =DicomVR_LT,
        .Name = "Long Text",
        .IsString = true,
        .IsStringEncoded = true,
        .Is16bitLength = true,
        .IsMultiValue = false,
        .PaddingValue = PadSpace,
        .MaximumLength = 10240,
        .UnitSize = 1,
        .ByteSwap = 1,
};


const DicomVR *pVR_OB = new DicomVR{ ///NOLINT
        .Code =DicomVR_OB,
        .Name = "Other Byte",
        .IsString = false,
        .IsStringEncoded = false,
        .Is16bitLength = false,
        .IsMultiValue = true,
        .PaddingValue = PadZero,
        .MaximumLength = 0,
        .UnitSize = 1,
        .ByteSwap = 1,
};

const DicomVR *pVR_OD = new DicomVR{ ///NOLINT
        .Code =DicomVR_OD,
        .Name = "Other Double",
        .IsString = false,
        .IsStringEncoded = false,
        .Is16bitLength = false,
        .IsMultiValue = true,
        .PaddingValue = PadZero,
        .MaximumLength = 0,
        .UnitSize = 8,
        .ByteSwap = 8,
};

/// <summary>Other Float</summary>
const DicomVR *pVR_OF = new DicomVR{ ///NOLINT
        .Code =DicomVR_OF,
        .Name = "Other Float",
        .IsString = false,
        .IsStringEncoded = false,
        .Is16bitLength = false,
        .IsMultiValue = true,
        .PaddingValue = PadZero,
        .MaximumLength = 0,
        .UnitSize = 4,
        .ByteSwap = 4,

};


/// <summary>Other Long</summary>
const DicomVR *pVR_OL = new DicomVR{ ///NOLINT
        .Code =DicomVR_OL,
        .Name = "Other Long",
        .IsString = false,
        .IsStringEncoded = false,
        .Is16bitLength = false,
        .IsMultiValue = true,
        .PaddingValue = PadZero,
        .MaximumLength = 0,
        .UnitSize = 4,
        .ByteSwap = 4,
};

/// <summary>Other Word</summary>
const DicomVR *pVR_OW = new DicomVR{ ///NOLINT
        .Code =DicomVR_OW,
        .Name = "Other Word",
        .IsString = false,
        .IsStringEncoded = false,
        .Is16bitLength = false,
        .IsMultiValue = true,
        .PaddingValue = PadZero,
        .MaximumLength = 0,
        .UnitSize = 2,
        .ByteSwap = 2,
};

/// <summary>Other Very Long</summary>
const DicomVR *pVR_OV = new DicomVR{ ///NOLINT
        .Code =DicomVR_OV,
        .Name = "Other Very Long",
        .IsString = false,
        .IsStringEncoded = false,
        .Is16bitLength = false,
        .IsMultiValue = true,
        .PaddingValue = PadZero,
        .MaximumLength = 0,
        .UnitSize = 8,
        .ByteSwap = 8,
};

/// <summary>Person Name</summary>
const DicomVR *pVR_PN = new DicomVR{ ///NOLINT
        .Code =DicomVR_PN,
        .Name = "Person Name",
        .IsString = true,
        .IsStringEncoded = true,
        .Is16bitLength = true,
        .IsMultiValue = true,
        .PaddingValue = PadSpace,
        .MaximumLength = 64,
        .UnitSize = 1,
        .ByteSwap = 1,
};

/// <summary>Short String</summary>
const DicomVR *pVR_SH = new DicomVR{ ///NOLINT
        .Code =DicomVR_SH,
        .Name = "Short String",
        .IsString = true,
        .IsStringEncoded = true,
        .Is16bitLength = true,
        .IsMultiValue = true,
        .PaddingValue = PadSpace,
        .MaximumLength = 16,
        .UnitSize = 1,
        .ByteSwap = 1,
};

/// <summary>Signed Long</summary>
const DicomVR *pVR_SL = new DicomVR{ ///NOLINT
        .Code =DicomVR_SL,
        .Name = "Signed Long",
        .IsString = false,
        .IsStringEncoded = false,
        .Is16bitLength = true,
        .IsMultiValue = true,
        .PaddingValue = PadZero,
        .MaximumLength = 4,
        .UnitSize = 4,
        .ByteSwap = 4,
};

/// <summary>Sequence of Items</summary>
const DicomVR *pVR_SQ = new DicomVR{ ///NOLINT
        .Code =DicomVR_SQ,
        .Name = "Sequence of Items",
        .IsString = false,
        .IsStringEncoded = false,
        .Is16bitLength = false,
        .IsMultiValue = false,
        .PaddingValue = PadSpace,
        .MaximumLength = 0,
        .UnitSize = 0,
        .ByteSwap = 0,
        //ValueType = typeof(IList<DicomDataset>)
};

/// <summary>Signed Short</summary>
const DicomVR *pVR_SS = new DicomVR{ ///NOLINT
        .Code =DicomVR_SS,
        .Name = "Signed Short",
        .IsString = false,
        .IsStringEncoded = false,
        .Is16bitLength = true,
        .IsMultiValue = true,
        .PaddingValue = PadZero,
        .MaximumLength = 2,
        .UnitSize = 2,
        .ByteSwap = 2,
};

/// <summary>Short Text</summary>
const DicomVR *pVR_ST = new DicomVR{ ///NOLINT
        .Code =DicomVR_ST,
        .Name = "Short Text",
        .IsString = true,
        .IsStringEncoded = true,
        .Is16bitLength = true,
        .IsMultiValue = false,
        .PaddingValue = PadSpace,
        .MaximumLength = 1024,
        .UnitSize = 1,
        .ByteSwap = 1,
};

/// <summary>Signed Very Long</summary>
const DicomVR *pVR_SV = new DicomVR{ ///NOLINT
        .Code =DicomVR_SV,
        .Name = "Signed Very Long",
        .IsString = false,
        .IsStringEncoded = false,
        .Is16bitLength = true,
        .IsMultiValue = true,
        .PaddingValue = PadZero,
        .MaximumLength = 8,
        .UnitSize = 8,
        .ByteSwap = 8,

};

/// <summary>Time</summary>
const DicomVR *pVR_TM = new DicomVR{ ///NOLINT
        .Code =DicomVR_TM,
        .Name = "Time",
        .IsString = true,
        .IsStringEncoded = false,
        .Is16bitLength = true,
        .IsMultiValue = true,
        .PaddingValue = PadSpace,
        .MaximumLength = 16,
        .UnitSize = 1,
        .ByteSwap = 1,
};

/// <summary>Unlimited Characters</summary>
const DicomVR *pVR_UC = new DicomVR{ ///NOLINT
        .Code =DicomVR_UC,
        .Name = "Unlimited Characters",
        .IsString = true,
        .IsStringEncoded = true,
        .Is16bitLength = false,
        .IsMultiValue = true,
        .PaddingValue = PadSpace,
        .MaximumLength = 0,
        .UnitSize = 1,
        .ByteSwap = 1,
};

/// <summary>Unique Identifier</summary>
const DicomVR *pVR_UI = new DicomVR{ ///NOLINT
        .Code =DicomVR_UI,
        .Name = "Unique Identifier",
        .IsString = true,
        .IsStringEncoded = false,
        .Is16bitLength = true,
        .IsMultiValue = true,
        .PaddingValue = PadZero,
        .MaximumLength = 64,
        .UnitSize = 1,
        .ByteSwap = 1,
};

/// <summary>Unsigned Long</summary>
const DicomVR *pVR_UL = new DicomVR{ ///NOLINT
        .Code =DicomVR_UL,
        .Name = "Unsigned Long",
        .IsString = false,
        .IsStringEncoded = false,
        .Is16bitLength = true,
        .IsMultiValue = true,
        .PaddingValue = PadZero,
        .MaximumLength = 4,
        .UnitSize = 4,
        .ByteSwap = 4,
};

/// <summary>Unknown</summary>
const DicomVR *pVR_UN = new DicomVR{ ///NOLINT
        .Code =DicomVR_UN,
        .Name = "Unknown",
        .IsString = false,
        .IsStringEncoded = false,
        .Is16bitLength = false,
        .IsMultiValue = true,
        .PaddingValue = PadZero,
        .MaximumLength = 0,
        .UnitSize = 1,
        .ByteSwap = 1,
};

/// <summary>Universal Resource Identifier or Universal Resource Locator (URI/URL)</summary>
const DicomVR *pVR_UR = new DicomVR{ ///NOLINT
        .Code =DicomVR_UR,
        .Name = "Universal Resource Identifier or Locator",
        .IsString = true,
        .IsStringEncoded = true,
        .Is16bitLength = false,
        .IsMultiValue = false,
        .PaddingValue = PadSpace,
        .MaximumLength = 0,
        .UnitSize = 1,
        .ByteSwap = 1,
};

/// <summary>Unsigned Short</summary>
const DicomVR *pVR_US = new DicomVR{ ///NOLINT
        .Code =DicomVR_US,
        .Name = "Unsigned Short",
        .IsString = false,
        .IsStringEncoded = false,
        .Is16bitLength = true,
        .IsMultiValue = true,
        .PaddingValue = PadZero,
        .MaximumLength = 2,
        .UnitSize = 2,
        .ByteSwap = 2,
};

/// <summary>Unlimited Text</summary>
const DicomVR *pVR_UT = new DicomVR{ ///NOLINT
        .Code =DicomVR_UT,
        .Name = "Unlimited Text",
        .IsString = true,
        .IsStringEncoded = true,
        .Is16bitLength = false,
        .IsMultiValue = false,
        .PaddingValue = PadSpace,
        .MaximumLength = 0,
        .UnitSize = 1,
        .ByteSwap = 1,
};


const DicomVR *pVR_UV = new DicomVR{ ///NOLINT
        .Code =DicomVR_UV,
        .Name = "Unsigned Very Long",
        .IsString = false,
        .IsStringEncoded = false,
        .Is16bitLength = true,
        .IsMultiValue = true,
        .PaddingValue = PadZero,
        .MaximumLength = 8,
        .UnitSize = 8,
        .ByteSwap = 8,
};


const DicomVR * DicomVR::ParseVR(std::string &tagStr) {
    if (tagStr == DicomVR_AE)
        return pVR_AE;
    if (tagStr == DicomVR_AS)
        return pVR_AS;
    if (tagStr == DicomVR_AT)
        return pVR_AT;
    if (tagStr == DicomVR_CS)
        return pVR_CS;
    if (tagStr == DicomVR_DA)
        return pVR_DA;
    if (tagStr == DicomVR_DS)
        return pVR_DS;
    if (tagStr == DicomVR_DT)
        return pVR_DT;
    if (tagStr == DicomVR_FD)
        return pVR_FD;
    if (tagStr == DicomVR_FL)
        return pVR_FL;
    if (tagStr == DicomVR_IS)
        return pVR_IS;
    if (tagStr == DicomVR_LO)
        return pVR_LO;
    if (tagStr == DicomVR_LT)
        return pVR_LT;
    if (tagStr == DicomVR_OB)
        return pVR_OB;
    if (tagStr == DicomVR_OD)
        return pVR_OD;
    if (tagStr == DicomVR_OF)
        return pVR_OF;
    if (tagStr == DicomVR_OL)
        return pVR_OL;
    if (tagStr == DicomVR_OW)
        return pVR_OW;
    if (tagStr == DicomVR_OV)
        return pVR_OV;
    if (tagStr == DicomVR_PN)
        return pVR_PN;
    if (tagStr == DicomVR_SH)
        return pVR_SH;
    if (tagStr == DicomVR_SL)
        return pVR_SL;
    if (tagStr == DicomVR_SQ)
        return pVR_SQ;
    if (tagStr == DicomVR_SS)
        return pVR_SS;
    if (tagStr == DicomVR_ST)
        return pVR_ST;
    if (tagStr == DicomVR_SV)
        return pVR_SV;
    if (tagStr == DicomVR_TM)
        return pVR_TM;
    if (tagStr == DicomVR_UC)
        return pVR_UC;
    if (tagStr == DicomVR_UI)
        return pVR_UI;
    if (tagStr == DicomVR_UL)
        return pVR_UL;
    if (tagStr == DicomVR_UN)
        return pVR_UN;
    if (tagStr == DicomVR_UR)
        return pVR_UR;
    if (tagStr == DicomVR_US)
        return pVR_US;
    if (tagStr == DicomVR_UT)
        return pVR_UT;
    if (tagStr == DicomVR_UV)
        return pVR_UV;
    return pVR_NONE;

}


bool DicomVR::operator==(const DicomVR &other) const {
    return this->Name == other.Name;
}


bool DicomVR::ElementWithFixedFormat(const DicomVR &vr) {

    //AE, AS, AT, CS, DA, DS, DT, FL, FD, IS, LO, LT, PN, SH, SL, SS, ST, TM, UI, UL and US

    if (vr.Code == DicomVR_AE
        || vr.Code == DicomVR_AS
        || vr.Code == DicomVR_AT
        || vr.Code == DicomVR_CS
        || vr.Code == DicomVR_DA
        || vr.Code == DicomVR_DS
        || vr.Code == DicomVR_DT
        || vr.Code == DicomVR_FL
        || vr.Code == DicomVR_FD
        || vr.Code == DicomVR_IS
        || vr.Code == DicomVR_LO
        || vr.Code == DicomVR_LT
        || vr.Code == DicomVR_PN
        || vr.Code == DicomVR_SH
        || vr.Code == DicomVR_SL
        || vr.Code == DicomVR_SS
        || vr.Code == DicomVR_ST
        || vr.Code == DicomVR_TM
        || vr.Code == DicomVR_UI
        || vr.Code == DicomVR_UL
        || vr.Code == DicomVR_US) {
        return true;
    }

    return false;
}


DicomVR &DicomVR::operator=(const DicomVR &src) {
    if (this == &src) {
        return *this;
    }
    this->Code = src.Code;
    this->Name = src.Name;
    this->IsString = src.IsString;
    this->IsStringEncoded = src.IsStringEncoded;
    this->Is16bitLength = src.Is16bitLength;
    this->IsMultiValue = src.IsMultiValue;
    this->PaddingValue = src.PaddingValue;
    this->MaximumLength = src.MaximumLength;
    this->UnitSize = src.UnitSize;
    this->ByteSwap = src.ByteSwap;
    return *this;
}

//pVR_DicomVR(const DicomVR*&&src) noexcept {
//    this->Code = src.Code;
//    this->Name = src.Name;
//    this->IsString = src.IsString;
//    this->IsStringEncoded = src.IsStringEncoded;
//    this->Is16bitLength = src.Is16bitLength;
//    this->IsMultiValue = src.IsMultiValue;
//    this->PaddingValue = src.PaddingValue;
//    this->MaximumLength = src.MaximumLength;
//    this->UnitSize = src.UnitSize;
//    this->ByteSwap = src.ByteSwap;
//}

//pVR_DicomVR(const DicomVR*&&src) noexcept {
//    this->Code = src.Code;
//    this->Name = src.Name;
//    this->IsString = src.IsString;
//    this->IsStringEncoded = src.IsStringEncoded;
//    this->Is16bitLength = src.Is16bitLength;
//    this->IsMultiValue = src.IsMultiValue;
//    this->PaddingValue = src.PaddingValue;
//    this->MaximumLength = src.MaximumLength;
//    this->UnitSize = src.UnitSize;
//    this->ByteSwap = src.ByteSwap;
//    src.Code =DicomVR_NONE;
//    src.Name.clear();
//    src.IsString = false;
//    src.IsStringEncoded = false;
//    src.Is16bitLength = false;
//    src.IsMultiValue = false;
//    src.PaddingValue = PadZero;
//    src.MaximumLength = 0;
//    src.UnitSize = 0;
//    src.ByteSwap = 0;
//}

