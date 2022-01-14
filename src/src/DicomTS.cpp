//
// Created by dhz on 2022/1/14.
//

#include "../include/DicomUID.h"

DicomTransferSyntax DicomTransferSyntax::ImplicitVRBigEndian = DicomTransferSyntax{///NOLINT
        .UID= DicomUID{
                DicomUID::ExplicitVRBigEndianRETIRED.uid + ".123456",
                "Implicit VR Big Endian",
                DicomUidType::TransferSyntax
        },
        .IsExplicitVR = false,
        .Endian = Endian::Big
};

/// <summary>GE Private Implicit VR Big Endian</summary>
/// <remarks>Same as Implicit VR Little Endian except for big endian pixel data.</remarks>
DicomTransferSyntax DicomTransferSyntax::GEPrivateImplicitVRBigEndian = DicomTransferSyntax{///NOLINT
        .UID= DicomUID::GEPrivateImplicitVRBigEndian,
        .IsExplicitVR = false,
        .Endian = Endian::Little,
        .SwapPixelData = true
};


/// <summary>Implicit VR Little Endian</summary>
DicomTransferSyntax DicomTransferSyntax::ImplicitVRLittleEndian = DicomTransferSyntax{///NOLINT
        .UID = DicomUID::ImplicitVRLittleEndian,
        .Endian = Endian::Little,
};

/// <summary>Explicit VR Little Endian</summary>
DicomTransferSyntax DicomTransferSyntax::ExplicitVRLittleEndian = DicomTransferSyntax{///NOLINT
        .UID=DicomUID::ExplicitVRLittleEndian,
        .IsExplicitVR = true,
        .Endian = Endian::Little,
};

/// <summary>Explicit VR Big Endian</summary>
DicomTransferSyntax DicomTransferSyntax::ExplicitVRBigEndian = DicomTransferSyntax{///NOLINT
        .UID = DicomUID::ExplicitVRBigEndianRETIRED,
        .IsRetired = true,
        .IsExplicitVR = true,
        .Endian = Endian::Big,
};

/// <summary>Deflated Explicit VR Little Endian</summary>
DicomTransferSyntax DicomTransferSyntax::DeflatedExplicitVRLittleEndian = DicomTransferSyntax{///NOLINT
        .UID=DicomUID::DeflatedExplicitVRLittleEndian,
        .IsExplicitVR = true,
        .IsDeflate = true,
        .Endian = Endian::Little,
};

/// <summary>JPEG Baseline (Process 1)</summary>
DicomTransferSyntax DicomTransferSyntax::JPEGProcess1 = DicomTransferSyntax{///NOLINT
        .UID=DicomUID::JPEGBaseline8Bit,
        .IsExplicitVR = true,
        .IsEncapsulated = true,
        .IsLossy = true,
        .LossyCompressionMethod = "ISO_10918_1",
        .Endian = Endian::Little
};

/// <summary>JPEG Extended (Process 2 &amp; 4)</summary>
DicomTransferSyntax DicomTransferSyntax::JPEGProcess2_4 = DicomTransferSyntax{///NOLINT
        .UID=DicomUID::JPEGExtended12Bit,
        .IsExplicitVR = true,
        .IsEncapsulated = true,
        .IsLossy = true,
        .LossyCompressionMethod = "ISO_10918_1",
        .Endian = Endian::Little
};

/// <summary>JPEG Extended (Process 3 &amp; 5) (Retired)</summary>
DicomTransferSyntax DicomTransferSyntax::JPEGProcess3_5Retired = DicomTransferSyntax{///NOLINT
        .UID=DicomUID::JPEGExtended35RETIRED,
        .IsRetired = true,
        .IsExplicitVR = true,
        .IsEncapsulated = true,
        .IsLossy = true,
        .LossyCompressionMethod =   "ISO_10918_1",
        .Endian = Endian::Little
};

/// <summary>JPEG Spectral Selection, Non-Hierarchical (Process 6 &amp; 8) (Retired)</summary>
DicomTransferSyntax DicomTransferSyntax::JPEGProcess6_8Retired = DicomTransferSyntax{///NOLINT
        .UID=DicomUID::JPEGSpectralSelectionNonHierarchical68RETIRED,
        .IsRetired = true,
        .IsExplicitVR = true,
        .IsEncapsulated = true,
        .IsLossy = true,
        .LossyCompressionMethod = "ISO_10918_1",
        .Endian = Endian::Little
};

/// <summary>JPEG Spectral Selection, Non-Hierarchical (Process 7 &amp; 9) (Retired)</summary>
DicomTransferSyntax DicomTransferSyntax::JPEGProcess7_9Retired = DicomTransferSyntax{///NOLINT
        .UID=DicomUID::JPEGSpectralSelectionNonHierarchical79RETIRED,
        .IsRetired = true,
        .IsExplicitVR = true,
        .IsEncapsulated = true,
        .IsLossy = true,
        .LossyCompressionMethod = "ISO_10918_1",
        .Endian = Endian::Little
};

/// <summary>JPEG Full Progression, Non-Hierarchical (Process 10 &amp; 12) (Retired)</summary>
DicomTransferSyntax DicomTransferSyntax::JPEGProcess10_12Retired = DicomTransferSyntax{///NOLINT
        .UID=DicomUID::JPEGFullProgressionNonHierarchical1012RETIRED,
        .IsRetired = true,
        .IsExplicitVR = true,
        .IsEncapsulated = true,
        .IsLossy = true,
        .LossyCompressionMethod = "ISO_10918_1",
        .Endian = Endian::Little
};

/// <summary>JPEG Full Progression, Non-Hierarchical (Process 11 &amp; 13) (Retired)</summary>
DicomTransferSyntax DicomTransferSyntax::JPEGProcess11_13Retired = DicomTransferSyntax{///NOLINT
        .UID=DicomUID::JPEGFullProgressionNonHierarchical1113RETIRED,
        .IsRetired = true,
        .IsExplicitVR = true,
        .IsEncapsulated = true,
        .IsLossy = true,
        .LossyCompressionMethod = "ISO_10918_1",
        .Endian = Endian::Little
};

/// <summary>JPEG Lossless, Non-Hierarchical (Process 14)</summary>
DicomTransferSyntax DicomTransferSyntax::JPEGProcess14 = DicomTransferSyntax{///NOLINT
        .UID=DicomUID::JPEGLossless,
        .IsExplicitVR = true,
        .IsEncapsulated = true,
        .Endian = Endian::Little
};

/// <summary>JPEG Lossless, Non-Hierarchical (Process 15) (Retired)</summary>
DicomTransferSyntax DicomTransferSyntax::JPEGProcess15Retired = DicomTransferSyntax{///NOLINT
        .UID=DicomUID::JPEGLosslessNonHierarchical15RETIRED,
        .IsRetired = true,
        .IsExplicitVR = true,
        .IsEncapsulated = true,
        .Endian = Endian::Little
};

/// <summary>JPEG Extended, Hierarchical (Process 16 &amp; 18) (Retired)</summary>
DicomTransferSyntax DicomTransferSyntax::JPEGProcess16_18Retired = DicomTransferSyntax{///NOLINT
        .UID=DicomUID::JPEGExtendedHierarchical1618RETIRED,
        .IsRetired = true,
        .IsExplicitVR = true,
        .IsEncapsulated = true,
        .IsLossy = true,
        .LossyCompressionMethod = "ISO_10918_1",
        .Endian = Endian::Little
};

/// <summary>JPEG Extended, Hierarchical (Process 17 &amp; 19) (Retired)</summary>
DicomTransferSyntax DicomTransferSyntax::JPEGProcess17_19Retired = DicomTransferSyntax{///NOLINT
        .UID=DicomUID::JPEGExtendedHierarchical1719RETIRED,
        .IsRetired = true,
        .IsExplicitVR = true,
        .IsEncapsulated = true,
        .IsLossy = true,
        .LossyCompressionMethod = "ISO_10918_1",
        .Endian = Endian::Little
};

/// <summary>JPEG Spectral Selection, Hierarchical (Process 20 &amp; 22) (Retired)</summary>
DicomTransferSyntax DicomTransferSyntax::JPEGProcess20_22Retired = DicomTransferSyntax{///NOLINT ///NOLINT
        .UID=DicomUID::JPEGSpectralSelectionHierarchical2022RETIRED,
        .IsRetired = true,
        .IsExplicitVR = true,
        .IsEncapsulated = true,
        .IsLossy = true,
        .LossyCompressionMethod = "ISO_10918_1",
        .Endian = Endian::Little
};

/// <summary>JPEG Spectral Selection, Hierarchical (Process 21 &amp; 23) (Retired)</summary>
DicomTransferSyntax DicomTransferSyntax::JPEGProcess21_23Retired = DicomTransferSyntax{///NOLINT
        .UID=DicomUID::JPEGSpectralSelectionHierarchical2123RETIRED,
        .IsRetired = true,
        .IsExplicitVR = true,
        .IsEncapsulated = true,
        .IsLossy = true,
        .LossyCompressionMethod = "ISO_10918_1",
        .Endian = Endian::Little
};

/// <summary>JPEG Full Progression, Hierarchical (Process 24 &amp; 26) (Retired)</summary>
DicomTransferSyntax DicomTransferSyntax::JPEGProcess24_26Retired = DicomTransferSyntax{///NOLINT
        .UID=DicomUID::JPEGFullProgressionHierarchical2426RETIRED,
        .IsRetired = true,
        .IsExplicitVR = true,
        .IsEncapsulated = true,
        .IsLossy = true,
        .LossyCompressionMethod = "ISO_10918_1",
        .Endian = Endian::Little
};

/// <summary>JPEG Full Progression, Hierarchical (Process 25 &amp; 27) (Retired)</summary>
DicomTransferSyntax DicomTransferSyntax::JPEGProcess25_27Retired = DicomTransferSyntax{///NOLINT
        .UID=DicomUID::JPEGFullProgressionHierarchical2527RETIRED,
        .IsRetired = true,
        .IsExplicitVR = true,
        .IsEncapsulated = true,
        .IsLossy = true,
        .LossyCompressionMethod = "ISO_10918_1",
        .Endian = Endian::Little
};

/// <summary>JPEG Lossless, Hierarchical (Process 28) (Retired)</summary>
DicomTransferSyntax DicomTransferSyntax::JPEGProcess28Retired = DicomTransferSyntax{///NOLINT
        .UID=DicomUID::JPEGLosslessHierarchical28RETIRED,
        .IsRetired = true,
        .IsExplicitVR = true,
        .IsEncapsulated = true,
        .Endian = Endian::Little
};

/// <summary>JPEG Lossless, Hierarchical (Process 29) (Retired)</summary>
DicomTransferSyntax DicomTransferSyntax::JPEGProcess29Retired = DicomTransferSyntax{///NOLINT
        .UID=DicomUID::JPEGLosslessHierarchical29RETIRED,
        .IsRetired = true,
        .IsExplicitVR = true,
        .IsEncapsulated = true,
        .Endian = Endian::Little
};

/// <summary>JPEG Lossless, Non-Hierarchical, First-Order Prediction (Process 14 [Selection Value 1])</summary>
DicomTransferSyntax DicomTransferSyntax::JPEGProcess14SV1 = DicomTransferSyntax{///NOLINT
        .UID=DicomUID::JPEGLosslessSV1,
        .IsExplicitVR = true,
        .IsEncapsulated = true,
        .Endian = Endian::Little
};

/// <summary>JPEG-LS Lossless Image Compression</summary>
DicomTransferSyntax DicomTransferSyntax::JPEGLSLossless = DicomTransferSyntax{///NOLINT
        .UID=DicomUID::JPEGLSLossless,
        .IsExplicitVR = true,
        .IsEncapsulated = true,
        .Endian = Endian::Little
};

/// <summary>JPEG-LS Lossy (Near-Lossless) Image Compression</summary>
DicomTransferSyntax DicomTransferSyntax::JPEGLSNearLossless = DicomTransferSyntax{///NOLINT
        .UID=DicomUID::JPEGLSNearLossless,
        .IsExplicitVR = true,
        .IsEncapsulated = true,
        .IsLossy = true,
        .LossyCompressionMethod = "ISO_14495_1",
        .Endian = Endian::Little
};

/// <summary>JPEG 2000 Lossless Image Compression</summary>
DicomTransferSyntax DicomTransferSyntax::JPEG2000Lossless = DicomTransferSyntax{///NOLINT
        .UID=DicomUID::JPEG2000Lossless,
        .IsExplicitVR = true,
        .IsEncapsulated = true,
        .Endian = Endian::Little
};

/// <summary>JPEG 2000 Lossy Image Compression</summary>
DicomTransferSyntax DicomTransferSyntax::JPEG2000Lossy = DicomTransferSyntax{///NOLINT
        .UID=DicomUID::JPEG2000,
        .IsExplicitVR = true,
        .IsEncapsulated = true,
        .IsLossy = true,
        .LossyCompressionMethod = "ISO_15444_1",
        .Endian = Endian::Little
};

///<summary>JPEG 2000 Part 2 Multi-component Image Compression (Lossless Only)</summary>
DicomTransferSyntax DicomTransferSyntax::JPEG2000Part2MultiComponentLosslessOnly = DicomTransferSyntax{///NOLINT
        .UID=DicomUID::JPEG2000MCLossless,
        .IsExplicitVR = true,
        .IsEncapsulated = true,
        .Endian = Endian::Little
};

///<summary>JPEG 2000 Part 2 Multi-component Image Compression</summary>
DicomTransferSyntax DicomTransferSyntax::JPEG2000Part2MultiComponent = DicomTransferSyntax{///NOLINT
        .UID=DicomUID::JPEG2000MC,
        .IsExplicitVR = true,
        .IsEncapsulated = true,
        .IsLossy = true,
        .LossyCompressionMethod = "ISO_15444_2",
        .Endian = Endian::Little
};

///<summary>JPIP Referenced</summary>
DicomTransferSyntax DicomTransferSyntax::JPIPReferenced = DicomTransferSyntax{///NOLINT
        .UID=DicomUID::JPIPReferenced,
        .IsExplicitVR = true,
        .Endian = Endian::Little
};

///<summary>JPIP Referenced Deflate</summary>
DicomTransferSyntax DicomTransferSyntax::JPIPReferencedDeflate = DicomTransferSyntax{///NOLINT
        .UID=DicomUID::JPIPReferencedDeflate,
        .IsExplicitVR = true,
        .IsDeflate = true,
        .Endian = Endian::Little
};

/// <summary>MPEG2 Main Profile @ Main Level</summary>
DicomTransferSyntax DicomTransferSyntax::MPEG2 = DicomTransferSyntax{///NOLINT
        .UID=DicomUID::MPEG2MPML,
        .IsExplicitVR = true,
        .IsEncapsulated = true,
        .IsLossy = true,
        .LossyCompressionMethod = "ISO_13818_2",
        .Endian = Endian::Little
};

///<summary>MPEG2 Main Profile / High Level</summary>
DicomTransferSyntax DicomTransferSyntax::MPEG2MainProfileHighLevel = DicomTransferSyntax{///NOLINT
        .UID=DicomUID::MPEG2MPHL,
        .IsExplicitVR = true,
        .IsEncapsulated = true,
        .IsLossy = true,
        .LossyCompressionMethod = "ISO_13818_2",
        .Endian = Endian::Little
};

///<summary>MPEG-4 AVC/H.264 High Profile / Level 4.1</summary>
DicomTransferSyntax DicomTransferSyntax::MPEG4AVCH264HighProfileLevel41 = DicomTransferSyntax{///NOLINT
        .UID=DicomUID::MPEG4HP41,
        .IsExplicitVR = true,
        .IsEncapsulated = true,
        .Endian = Endian::Little
};

///<summary>MPEG-4 AVC/H.264 BD-compatible High Profile / Level 4.1</summary>
DicomTransferSyntax DicomTransferSyntax::MPEG4AVCH264BDCompatibleHighProfileLevel41 = DicomTransferSyntax{///NOLINT
        .UID=DicomUID::MPEG4HP41BD,
        .IsExplicitVR = true,
        .IsEncapsulated = true,
        .Endian = Endian::Little
};

///<summary>MPEG-4 AVC/H.264 High Profile / Level 4.2 For 2D Video</summary>
DicomTransferSyntax DicomTransferSyntax::MPEG4AVCH264HighProfileLevel42For2DVideo = DicomTransferSyntax{///NOLINT
        .UID=DicomUID::MPEG4HP422D,
        .IsExplicitVR = true,
        .IsEncapsulated = true,
        .Endian = Endian::Little
};

///<summary>MPEG-4 AVC/H.264 High Profile / Level 4.2 For 3D Video</summary>
DicomTransferSyntax DicomTransferSyntax::MPEG4AVCH264HighProfileLevel42For3DVideo = DicomTransferSyntax{///NOLINT
        .UID=DicomUID::MPEG4HP423D,
        .IsExplicitVR = true,
        .IsEncapsulated = true,
        .Endian = Endian::Little
};

///<summary>MPEG-4 AVC/H.264 Stereo High Profile / Level 4.2</summary>
DicomTransferSyntax DicomTransferSyntax::MPEG4AVCH264StereoHighProfileLevel42 = DicomTransferSyntax{///NOLINT
        .UID=DicomUID::MPEG4HP42STEREO,
        .IsExplicitVR = true,
        .IsEncapsulated = true,
        .Endian = Endian::Little
};

///<summary>HEVC/H.265 Main Profile / Level 5.1</summary>
DicomTransferSyntax DicomTransferSyntax::HEVCH265MainProfileLevel51 = DicomTransferSyntax{///NOLINT
        .UID=DicomUID::HEVCMP51,
        .IsExplicitVR = true,
        .IsEncapsulated = true,
        .Endian = Endian::Little
};

///<summary>HEVC/H.265 Main 10 Profile / Level 5.1</summary>
DicomTransferSyntax DicomTransferSyntax::HEVCH265Main10ProfileLevel51 = DicomTransferSyntax{///NOLINT
        .UID=DicomUID::HEVCM10P51,
        .IsExplicitVR = true,
        .IsEncapsulated = true,
        .Endian = Endian::Little
};

/// <summary>RLE Lossless</summary>
DicomTransferSyntax DicomTransferSyntax::RLELossless = DicomTransferSyntax{///NOLINT
        .UID=DicomUID::RLELossless,
        .IsExplicitVR = true,
        .IsEncapsulated = true,
        .Endian = Endian::Little
};

///<summary>RFC 2557 MIME encapsulation</summary>
DicomTransferSyntax DicomTransferSyntax::RFC2557MIMEEncapsulation = DicomTransferSyntax{///NOLINT
        .UID=DicomUID::RFC2557MIMEEncapsulationRETIRED,
        .IsExplicitVR = true,
        .Endian = Endian::Little
};

///<summary>XML Encoding</summary>
DicomTransferSyntax DicomTransferSyntax::XMLEncoding = DicomTransferSyntax{///NOLINT
        .UID=DicomUID::XMLEncodingRETIRED,
        .IsExplicitVR = true,
        .Endian = Endian::Little
};

///<summary>Papyrus 3 Implicit VR Little Endian (Retired)</summary>
DicomTransferSyntax DicomTransferSyntax::Papyrus3ImplicitVRLittleEndianRetired = DicomTransferSyntax{///NOLINT
        .UID=DicomUID::Papyrus3ImplicitVRLittleEndianRETIRED,
        .IsRetired = true,
        .IsExplicitVR = false,
        .Endian = Endian::Little,
};

bool DicomTransferSyntax::operator==(const DicomTransferSyntax &other) const {
    return this->UID.uid == other.UID.uid;
}
