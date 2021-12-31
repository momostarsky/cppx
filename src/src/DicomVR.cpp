//
// Created by dhz on 2021/12/27.
//

#include "../include/DicomVR.h"

DicomVR   DicomVR::NONE = DicomVR{ ///NOLINT
        .Code = DicomVRCode::NONE,
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
        .Code =  DicomVRCode::AE,
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
        .Code = DicomVRCode::AS,
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
        .Code = DicomVRCode::AT,
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
        .Code = DicomVRCode::CS,
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
        .Code = DicomVRCode::DA,
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
        .Code = DicomVRCode::DS,
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
        .Code = DicomVRCode::DT,
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
        .Code = DicomVRCode::FD,
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
        .Code = DicomVRCode::FL,
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
        .Code = DicomVRCode::IS,
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
        .Code = DicomVRCode::LO,
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
        .Code = DicomVRCode::LT,
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
        .Code = DicomVRCode::OB,
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
        .Code = DicomVRCode::OD,
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
        .Code = DicomVRCode::OF,
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
        .Code = DicomVRCode::OL,
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
        .Code = DicomVRCode::OW,
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
        .Code = DicomVRCode::OV,
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
        .Code = DicomVRCode::PN,
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
        .Code = DicomVRCode::SH,
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
        .Code = DicomVRCode::SL,
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
        .Code = DicomVRCode::SQ,
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
        .Code = DicomVRCode::SS,
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
        .Code = DicomVRCode::ST,
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
        .Code = DicomVRCode::SV,
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
        .Code = DicomVRCode::TM,
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
        .Code = DicomVRCode::UC,
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
        .Code = DicomVRCode::UI,
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
        .Code = DicomVRCode::UL,
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
        .Code = DicomVRCode::UN,
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
        .Code = DicomVRCode::UR,
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
        .Code = DicomVRCode::US,
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
        .Code = DicomVRCode::UT,
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
        .Code = DicomVRCode::UV,
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
    if (tagStr == (std::string) DicomVRCode::AE)
        return DicomVR::AE;
    if (tagStr == (std::string) DicomVRCode::AS)
        return DicomVR::AS;
    if (tagStr == (std::string) DicomVRCode::AT)
        return DicomVR::AT;
    if (tagStr == (std::string) DicomVRCode::CS)
        return DicomVR::CS;
    if (tagStr == (std::string) DicomVRCode::DA)
        return DicomVR::DA;
    if (tagStr == (std::string) DicomVRCode::DS)
        return DicomVR::DS;
    if (tagStr == (std::string) DicomVRCode::DT)
        return DicomVR::DT;
    if (tagStr == (std::string) DicomVRCode::FD)
        return DicomVR::FD;
    if (tagStr == (std::string) DicomVRCode::FL)
        return DicomVR::FL;
    if (tagStr == (std::string) DicomVRCode::IS)
        return DicomVR::IS;
    if (tagStr == (std::string) DicomVRCode::LO)
        return DicomVR::LO;
    if (tagStr == (std::string) DicomVRCode::LT)
        return DicomVR::LT;
    if (tagStr == (std::string) DicomVRCode::OB)
        return DicomVR::OB;
    if (tagStr == (std::string) DicomVRCode::OD)
        return DicomVR::OD;
    if (tagStr == (std::string) DicomVRCode::OF)
        return DicomVR::OF;
    if (tagStr == (std::string) DicomVRCode::OL)
        return DicomVR::OL;
    if (tagStr == (std::string) DicomVRCode::OW)
        return DicomVR::OW;
    if (tagStr == (std::string) DicomVRCode::OV)
        return DicomVR::OV;
    if (tagStr == (std::string) DicomVRCode::PN)
        return DicomVR::PN;
    if (tagStr == (std::string) DicomVRCode::SH)
        return DicomVR::SH;
    if (tagStr == (std::string) DicomVRCode::SL)
        return DicomVR::SL;
    if (tagStr == (std::string) DicomVRCode::SQ)
        return DicomVR::SQ;
    if (tagStr == (std::string) DicomVRCode::SS)
        return DicomVR::SS;
    if (tagStr == (std::string) DicomVRCode::ST)
        return DicomVR::ST;
    if (tagStr == (std::string) DicomVRCode::SV)
        return DicomVR::SV;
    if (tagStr == (std::string) DicomVRCode::TM)
        return DicomVR::TM;
    if (tagStr == (std::string) DicomVRCode::UC)
        return DicomVR::UC;
    if (tagStr == (std::string) DicomVRCode::UI)
        return DicomVR::UI;
    if (tagStr == (std::string) DicomVRCode::UL)
        return DicomVR::UL;
    if (tagStr == (std::string) DicomVRCode::UN)
        return DicomVR::UN;
    if (tagStr == (std::string) DicomVRCode::UR)
        return DicomVR::UR;
    if (tagStr == (std::string) DicomVRCode::US)
        return DicomVR::US;
    if (tagStr == (std::string) DicomVRCode::UT)
        return DicomVR::UT;
    if (tagStr == (std::string) DicomVRCode::UV)
        return DicomVR::UV;
    return DicomVR::NONE;

}

bool DicomVR::operator==(const DicomVR &other) const {
    DicomVRCode cd = this->Code;
    DicomVRCode c2 = other.Code;
    return cd == c2 && this->IsMultiValue == other.IsMultiValue
           && this->Name == other.Name;
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
//    src.Code = DicomVRCode::NONE;
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

