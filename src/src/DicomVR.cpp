//
// Created by dhz on 2021/12/27.
//

#include "../include/DicomVR.h"

DicomVR   DicomVR::NONE = DicomVR{ ///NOLINT
        .Code = DicomVR_NONE,
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

DicomVR  DicomVR::AE = DicomVR{///NOLINT
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

DicomVR DicomVR::AS = DicomVR{///NOLINT
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

DicomVR DicomVR::AT = DicomVR{///NOLINT
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

DicomVR DicomVR::CS = DicomVR{///NOLINT
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

DicomVR DicomVR::DA = DicomVR{///NOLINT
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

DicomVR DicomVR::DS = DicomVR{///NOLINT
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

DicomVR DicomVR::DT = DicomVR{ ///NOLINT
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

DicomVR DicomVR::FD = DicomVR{ ///NOLINT
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

DicomVR DicomVR::FL = DicomVR{ ///NOLINT
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

DicomVR DicomVR::IS = DicomVR{ ///NOLINT
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

DicomVR DicomVR::LO = DicomVR{ ///NOLINT
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

DicomVR DicomVR::LT = DicomVR{ ///NOLINT
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


DicomVR DicomVR::OB = DicomVR{ ///NOLINT
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

DicomVR DicomVR::OD = DicomVR{ ///NOLINT
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
DicomVR DicomVR::OF = DicomVR{ ///NOLINT
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
DicomVR DicomVR::OL = DicomVR{ ///NOLINT
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
DicomVR DicomVR::OW = DicomVR{ ///NOLINT
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
DicomVR DicomVR::OV = DicomVR{ ///NOLINT
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
DicomVR DicomVR::PN = DicomVR{ ///NOLINT
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
DicomVR DicomVR::SH = DicomVR{ ///NOLINT
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
DicomVR DicomVR::SL = DicomVR{ ///NOLINT
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
DicomVR DicomVR::SQ = DicomVR{ ///NOLINT
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
DicomVR DicomVR::SS = DicomVR{ ///NOLINT
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
DicomVR DicomVR::ST = DicomVR{ ///NOLINT
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
DicomVR DicomVR::SV = DicomVR{ ///NOLINT
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
DicomVR DicomVR::TM = DicomVR{ ///NOLINT
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
DicomVR DicomVR::UC = DicomVR{ ///NOLINT
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
DicomVR DicomVR::UI = DicomVR{ ///NOLINT
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
DicomVR DicomVR::UL = DicomVR{ ///NOLINT
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
DicomVR DicomVR::UN = DicomVR{ ///NOLINT
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
DicomVR DicomVR::UR = DicomVR{ ///NOLINT
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
DicomVR DicomVR::US = DicomVR{ ///NOLINT
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
DicomVR DicomVR::UT = DicomVR{ ///NOLINT
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


DicomVR DicomVR::UV = DicomVR{ ///NOLINT
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


DicomVR &DicomVR::ParseVR(std::string &tagStr) {
    if (tagStr == DicomVR_AE)
        return DicomVR::AE;
    if (tagStr == DicomVR_AS)
        return DicomVR::AS;
    if (tagStr == DicomVR_AT)
        return DicomVR::AT;
    if (tagStr == DicomVR_CS)
        return DicomVR::CS;
    if (tagStr == DicomVR_DA)
        return DicomVR::DA;
    if (tagStr == DicomVR_DS)
        return DicomVR::DS;
    if (tagStr == DicomVR_DT)
        return DicomVR::DT;
    if (tagStr == DicomVR_FD)
        return DicomVR::FD;
    if (tagStr == DicomVR_FL)
        return DicomVR::FL;
    if (tagStr == DicomVR_IS)
        return DicomVR::IS;
    if (tagStr == DicomVR_LO)
        return DicomVR::LO;
    if (tagStr == DicomVR_LT)
        return DicomVR::LT;
    if (tagStr == DicomVR_OB)
        return DicomVR::OB;
    if (tagStr == DicomVR_OD)
        return DicomVR::OD;
    if (tagStr == DicomVR_OF)
        return DicomVR::OF;
    if (tagStr == DicomVR_OL)
        return DicomVR::OL;
    if (tagStr == DicomVR_OW)
        return DicomVR::OW;
    if (tagStr == DicomVR_OV)
        return DicomVR::OV;
    if (tagStr == DicomVR_PN)
        return DicomVR::PN;
    if (tagStr == DicomVR_SH)
        return DicomVR::SH;
    if (tagStr == DicomVR_SL)
        return DicomVR::SL;
    if (tagStr == DicomVR_SQ)
        return DicomVR::SQ;
    if (tagStr == DicomVR_SS)
        return DicomVR::SS;
    if (tagStr == DicomVR_ST)
        return DicomVR::ST;
    if (tagStr == DicomVR_SV)
        return DicomVR::SV;
    if (tagStr == DicomVR_TM)
        return DicomVR::TM;
    if (tagStr == DicomVR_UC)
        return DicomVR::UC;
    if (tagStr == DicomVR_UI)
        return DicomVR::UI;
    if (tagStr == DicomVR_UL)
        return DicomVR::UL;
    if (tagStr == DicomVR_UN)
        return DicomVR::UN;
    if (tagStr == DicomVR_UR)
        return DicomVR::UR;
    if (tagStr == DicomVR_US)
        return DicomVR::US;
    if (tagStr == DicomVR_UT)
        return DicomVR::UT;
    if (tagStr == DicomVR_UV)
        return DicomVR::UV;
    return DicomVR::NONE;

}

bool DicomVR::operator==(const DicomVR &other) const {

    return this->Name == other.Name;
}

bool DicomVR::ElementWithFixedFormat(DicomVR &vr) {

    //AE, AS, AT, CS, DA, DS, DT, FL, FD, IS, LO, LT, PN, SH, SL, SS, ST, TM, UI, UL and US

    if (vr.Code == DicomVR::AE.Code
        || vr.Code == DicomVR::AS.Code
        || vr.Code == DicomVR::AT.Code
        || vr.Code == DicomVR::CS.Code
        || vr.Code == DicomVR::DA.Code
        || vr.Code == DicomVR::DS.Code
        || vr.Code == DicomVR::DT.Code
        || vr.Code == DicomVR::FL.Code
        || vr.Code == DicomVR::FD.Code
        || vr.Code == DicomVR::IS.Code
        || vr.Code == DicomVR::LO.Code
        || vr.Code == DicomVR::LT.Code
        || vr.Code == DicomVR::PN.Code
        || vr.Code == DicomVR::SH.Code
        || vr.Code == DicomVR::SL.Code
        || vr.Code == DicomVR::SS.Code
        || vr.Code == DicomVR::ST.Code
        || vr.Code == DicomVR::TM.Code
        || vr.Code == DicomVR::UI.Code
        || vr.Code == DicomVR::UL.Code
        || vr.Code == DicomVR::US.Code

            ) {
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

//DicomVR::DicomVR(DicomVR &&src) noexcept {
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

//DicomVR::DicomVR(DicomVR &&src) noexcept {
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

