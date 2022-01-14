//
// Created by dhz on 2022/1/14.
//

#ifndef CPPX_DICOMUID_H
#define CPPX_DICOMUID_H


#include <string>

enum class DicomUidType {
    TransferSyntax,
    SOPClass,
    MetaSOPClass,
    ServiceClass,
    SOPInstance,
    ApplicationContextName,
    ApplicationHostingModel,
    CodingScheme,
    FrameOfReference,
    LDAP,
    MappingResource,
    ContextGroupName,
    Unknown
};

enum class DicomStorageCategory {
    None,
    Image,
    PresentationState,
    StructuredReport,
    Waveform,
    Document,
    Raw,
    Other,
    Private,
    Volume
};

struct DicomUID {
public:
    std::string uid;
    std::string name;
    DicomUidType type{DicomUidType::Unknown};
    bool retired{false};
    DicomUID() noexcept = default;

    bool operator==(const DicomUID &other) const {

        return this->uid == other.uid;
    }

public:

////////////////////////////////////-------------------DicomUID==========////////////////////////
    static DicomUID Empty;

    static DicomUID Verification;//("1.2.840.10008.1.1", "Verification SOP Class", DicomUidType.SOPClass, false);

///<summary>Transfer Syntax: Implicit VR Little Endian: Default Transfer Syntax for DICOM</summary>
    static DicomUID ImplicitVRLittleEndian;//("1.2.840.10008.1.2", "Implicit VR Little Endian: Default Transfer Syntax for DICOM", DicomUidType.TransferSyntax, false);

///<summary>Transfer Syntax: Explicit VR Little Endian</summary>
    static DicomUID ExplicitVRLittleEndian;//("1.2.840.10008.1.2.1", "Explicit VR Little Endian", DicomUidType.TransferSyntax, false);

///<summary>Transfer Syntax: Deflated Explicit VR Little Endian</summary>
    static DicomUID DeflatedExplicitVRLittleEndian;//("1.2.840.10008.1.2.1.99", "Deflated Explicit VR Little Endian", DicomUidType.TransferSyntax, false);

///<summary>Transfer Syntax: Explicit VR Big Endian (Retired)</summary>
    static DicomUID ExplicitVRBigEndianRETIRED;//("1.2.840.10008.1.2.2", "Explicit VR Big Endian (Retired)", DicomUidType.TransferSyntax, true);

///<summary>Transfer Syntax: JPEG Baseline (Process 1): Default Transfer Syntax for Lossy JPEG 8 Bit Image Compression</summary>
    static DicomUID JPEGBaseline8Bit;//("1.2.840.10008.1.2.4.50", "JPEG Baseline (Process 1): Default Transfer Syntax for Lossy JPEG 8 Bit Image Compression", DicomUidType.TransferSyntax, false);

///<summary>Transfer Syntax: JPEG Extended (Process 2 &amp; 4): Default Transfer Syntax for Lossy JPEG 12 Bit Image Compression (Process 4 only)</summary>
    static DicomUID JPEGExtended12Bit;//("1.2.840.10008.1.2.4.51", "JPEG Extended (Process 2 & 4): Default Transfer Syntax for Lossy JPEG 12 Bit Image Compression (Process 4 only)", DicomUidType.TransferSyntax, false);

///<summary>Transfer Syntax: JPEG Extended (Process 3 &amp; 5) (Retired)</summary>
    static DicomUID JPEGExtended35RETIRED;//("1.2.840.10008.1.2.4.52", "JPEG Extended (Process 3 & 5) (Retired)", DicomUidType.TransferSyntax, true);

///<summary>Transfer Syntax: JPEG Spectral Selection, Non-Hierarchical (Process 6 &amp; 8) (Retired)</summary>
    static DicomUID JPEGSpectralSelectionNonHierarchical68RETIRED;//("1.2.840.10008.1.2.4.53", "JPEG Spectral Selection, Non-Hierarchical (Process 6 & 8) (Retired)", DicomUidType.TransferSyntax, true);

///<summary>Transfer Syntax: JPEG Spectral Selection, Non-Hierarchical (Process 7 &amp; 9) (Retired)</summary>
    static DicomUID JPEGSpectralSelectionNonHierarchical79RETIRED;//("1.2.840.10008.1.2.4.54", "JPEG Spectral Selection, Non-Hierarchical (Process 7 & 9) (Retired)", DicomUidType.TransferSyntax, true);

///<summary>Transfer Syntax: JPEG Full Progression, Non-Hierarchical (Process 10 &amp; 12) (Retired)</summary>
    static DicomUID JPEGFullProgressionNonHierarchical1012RETIRED;//("1.2.840.10008.1.2.4.55", "JPEG Full Progression, Non-Hierarchical (Process 10 & 12) (Retired)", DicomUidType.TransferSyntax, true);

///<summary>Transfer Syntax: JPEG Full Progression, Non-Hierarchical (Process 11 &amp; 13) (Retired)</summary>
    static DicomUID JPEGFullProgressionNonHierarchical1113RETIRED;//("1.2.840.10008.1.2.4.56", "JPEG Full Progression, Non-Hierarchical (Process 11 & 13) (Retired)", DicomUidType.TransferSyntax, true);

///<summary>Transfer Syntax: JPEG Lossless, Non-Hierarchical (Process 14)</summary>
    static DicomUID JPEGLossless;//("1.2.840.10008.1.2.4.57", "JPEG Lossless, Non-Hierarchical (Process 14)", DicomUidType.TransferSyntax, false);

///<summary>Transfer Syntax: JPEG Lossless, Non-Hierarchical (Process 15) (Retired)</summary>
    static DicomUID JPEGLosslessNonHierarchical15RETIRED;//("1.2.840.10008.1.2.4.58", "JPEG Lossless, Non-Hierarchical (Process 15) (Retired)", DicomUidType.TransferSyntax, true);

///<summary>Transfer Syntax: JPEG Extended, Hierarchical (Process 16 &amp; 18) (Retired)</summary>
    static DicomUID JPEGExtendedHierarchical1618RETIRED;//("1.2.840.10008.1.2.4.59", "JPEG Extended, Hierarchical (Process 16 & 18) (Retired)", DicomUidType.TransferSyntax, true);

///<summary>Transfer Syntax: JPEG Extended, Hierarchical (Process 17 &amp; 19) (Retired)</summary>
    static DicomUID JPEGExtendedHierarchical1719RETIRED;//("1.2.840.10008.1.2.4.60", "JPEG Extended, Hierarchical (Process 17 & 19) (Retired)", DicomUidType.TransferSyntax, true);

///<summary>Transfer Syntax: JPEG Spectral Selection, Hierarchical (Process 20 &amp; 22) (Retired)</summary>
    static DicomUID JPEGSpectralSelectionHierarchical2022RETIRED;//("1.2.840.10008.1.2.4.61", "JPEG Spectral Selection, Hierarchical (Process 20 & 22) (Retired)", DicomUidType.TransferSyntax, true);

///<summary>Transfer Syntax: JPEG Spectral Selection, Hierarchical (Process 21 &amp; 23) (Retired)</summary>
    static DicomUID JPEGSpectralSelectionHierarchical2123RETIRED;//("1.2.840.10008.1.2.4.62", "JPEG Spectral Selection, Hierarchical (Process 21 & 23) (Retired)", DicomUidType.TransferSyntax, true);

///<summary>Transfer Syntax: JPEG Full Progression, Hierarchical (Process 24 &amp; 26) (Retired)</summary>
    static DicomUID JPEGFullProgressionHierarchical2426RETIRED;//("1.2.840.10008.1.2.4.63", "JPEG Full Progression, Hierarchical (Process 24 & 26) (Retired)", DicomUidType.TransferSyntax, true);

///<summary>Transfer Syntax: JPEG Full Progression, Hierarchical (Process 25 &amp; 27) (Retired)</summary>
    static DicomUID JPEGFullProgressionHierarchical2527RETIRED;//("1.2.840.10008.1.2.4.64", "JPEG Full Progression, Hierarchical (Process 25 & 27) (Retired)", DicomUidType.TransferSyntax, true);

///<summary>Transfer Syntax: JPEG Lossless, Hierarchical (Process 28) (Retired)</summary>
    static DicomUID JPEGLosslessHierarchical28RETIRED;//("1.2.840.10008.1.2.4.65", "JPEG Lossless, Hierarchical (Process 28) (Retired)", DicomUidType.TransferSyntax, true);

///<summary>Transfer Syntax: JPEG Lossless, Hierarchical (Process 29) (Retired)</summary>
    static DicomUID JPEGLosslessHierarchical29RETIRED;//("1.2.840.10008.1.2.4.66", "JPEG Lossless, Hierarchical (Process 29) (Retired)", DicomUidType.TransferSyntax, true);

///<summary>Transfer Syntax: JPEG Lossless, Non-Hierarchical, First-Order Prediction (Process 14 [Selection Value 1]): Default Transfer Syntax for Lossless JPEG Image Compression</summary>
    static DicomUID JPEGLosslessSV1;//("1.2.840.10008.1.2.4.70", "JPEG Lossless, Non-Hierarchical, First-Order Prediction (Process 14 [Selection Value 1]): Default Transfer Syntax for Lossless JPEG Image Compression", DicomUidType.TransferSyntax, false);

///<summary>Transfer Syntax: JPEG-LS Lossless Image Compression</summary>
    static DicomUID JPEGLSLossless;//("1.2.840.10008.1.2.4.80", "JPEG-LS Lossless Image Compression", DicomUidType.TransferSyntax, false);

///<summary>Transfer Syntax: JPEG-LS Lossy (Near-Lossless) Image Compression</summary>
    static DicomUID JPEGLSNearLossless;//("1.2.840.10008.1.2.4.81", "JPEG-LS Lossy (Near-Lossless) Image Compression", DicomUidType.TransferSyntax, false);

///<summary>Transfer Syntax: JPEG 2000 Image Compression (Lossless Only)</summary>
    static DicomUID JPEG2000Lossless;//("1.2.840.10008.1.2.4.90", "JPEG 2000 Image Compression (Lossless Only)", DicomUidType.TransferSyntax, false);

///<summary>Transfer Syntax: JPEG 2000 Image Compression</summary>
    static DicomUID JPEG2000;//("1.2.840.10008.1.2.4.91", "JPEG 2000 Image Compression", DicomUidType.TransferSyntax, false);

///<summary>Transfer Syntax: JPEG 2000 Part 2 Multi-component Image Compression (Lossless Only)</summary>
    static DicomUID JPEG2000MCLossless;//("1.2.840.10008.1.2.4.92", "JPEG 2000 Part 2 Multi-component Image Compression (Lossless Only)", DicomUidType.TransferSyntax, false);

///<summary>Transfer Syntax: JPEG 2000 Part 2 Multi-component Image Compression</summary>
    static DicomUID JPEG2000MC;//("1.2.840.10008.1.2.4.93", "JPEG 2000 Part 2 Multi-component Image Compression", DicomUidType.TransferSyntax, false);

///<summary>Transfer Syntax: JPIP Referenced</summary>
    static DicomUID JPIPReferenced;//("1.2.840.10008.1.2.4.94", "JPIP Referenced", DicomUidType.TransferSyntax, false);

///<summary>Transfer Syntax: JPIP Referenced Deflate</summary>
    static DicomUID JPIPReferencedDeflate;//("1.2.840.10008.1.2.4.95", "JPIP Referenced Deflate", DicomUidType.TransferSyntax, false);

///<summary>Transfer Syntax: MPEG2 Main Profile / Main Level</summary>
    static DicomUID MPEG2MPML;//("1.2.840.10008.1.2.4.100", "MPEG2 Main Profile / Main Level", DicomUidType.TransferSyntax, false);

///<summary>Transfer Syntax: MPEG2 Main Profile / High Level</summary>
    static DicomUID MPEG2MPHL;//("1.2.840.10008.1.2.4.101", "MPEG2 Main Profile / High Level", DicomUidType.TransferSyntax, false);

///<summary>Transfer Syntax: MPEG-4 AVC/H.264 High Profile / Level 4.1</summary>
    static DicomUID MPEG4HP41;//("1.2.840.10008.1.2.4.102", "MPEG-4 AVC/H.264 High Profile / Level 4.1", DicomUidType.TransferSyntax, false);

///<summary>Transfer Syntax: MPEG-4 AVC/H.264 BD-compatible High Profile / Level 4.1</summary>
    static DicomUID MPEG4HP41BD;//("1.2.840.10008.1.2.4.103", "MPEG-4 AVC/H.264 BD-compatible High Profile / Level 4.1", DicomUidType.TransferSyntax, false);

///<summary>Transfer Syntax: MPEG-4 AVC/H.264 High Profile / Level 4.2 For 2D Video</summary>
    static DicomUID MPEG4HP422D;//("1.2.840.10008.1.2.4.104", "MPEG-4 AVC/H.264 High Profile / Level 4.2 For 2D Video", DicomUidType.TransferSyntax, false);

///<summary>Transfer Syntax: MPEG-4 AVC/H.264 High Profile / Level 4.2 For 3D Video</summary>
    static DicomUID MPEG4HP423D;//("1.2.840.10008.1.2.4.105", "MPEG-4 AVC/H.264 High Profile / Level 4.2 For 3D Video", DicomUidType.TransferSyntax, false);

///<summary>Transfer Syntax: MPEG-4 AVC/H.264 Stereo High Profile / Level 4.2</summary>
    static DicomUID MPEG4HP42STEREO;//("1.2.840.10008.1.2.4.106", "MPEG-4 AVC/H.264 Stereo High Profile / Level 4.2", DicomUidType.TransferSyntax, false);

///<summary>Transfer Syntax: HEVC/H.265 Main Profile / Level 5.1</summary>
    static DicomUID HEVCMP51;//("1.2.840.10008.1.2.4.107", "HEVC/H.265 Main Profile / Level 5.1", DicomUidType.TransferSyntax, false);

///<summary>Transfer Syntax: HEVC/H.265 Main 10 Profile / Level 5.1</summary>
    static DicomUID HEVCM10P51;//("1.2.840.10008.1.2.4.108", "HEVC/H.265 Main 10 Profile / Level 5.1", DicomUidType.TransferSyntax, false);

///<summary>Transfer Syntax: RLE Lossless</summary>
    static DicomUID RLELossless;//("1.2.840.10008.1.2.5", "RLE Lossless", DicomUidType.TransferSyntax, false);

///<summary>Transfer Syntax: RFC 2557 MIME encapsulation (Retired)</summary>
    static DicomUID RFC2557MIMEEncapsulationRETIRED;//("1.2.840.10008.1.2.6.1", "RFC 2557 MIME encapsulation (Retired)", DicomUidType.TransferSyntax, true);

///<summary>Transfer Syntax: XML Encoding (Retired)</summary>
    static DicomUID XMLEncodingRETIRED;//("1.2.840.10008.1.2.6.2", "XML Encoding (Retired)", DicomUidType.TransferSyntax, true);

///<summary>Transfer Syntax: SMPTE ST 2110-20 Uncompressed Progressive Active Video</summary>
    static DicomUID SMPTEST211020UncompressedProgressiveActiveVideo;//("1.2.840.10008.1.2.7.1", "SMPTE ST 2110-20 Uncompressed Progressive Active Video", DicomUidType.TransferSyntax, false);

///<summary>Transfer Syntax: SMPTE ST 2110-20 Uncompressed Interlaced Active Video</summary>
    static DicomUID SMPTEST211020UncompressedInterlacedActiveVideo;//("1.2.840.10008.1.2.7.2", "SMPTE ST 2110-20 Uncompressed Interlaced Active Video", DicomUidType.TransferSyntax, false);

///<summary>Transfer Syntax: SMPTE ST 2110-30 PCM Digital Audio</summary>
    static DicomUID SMPTEST211030PCMDigitalAudio;//("1.2.840.10008.1.2.7.3", "SMPTE ST 2110-30 PCM Digital Audio", DicomUidType.TransferSyntax, false);

///<summary>SOP Class: Media Storage Directory Storage</summary>
    static DicomUID MediaStorageDirectoryStorage;//("1.2.840.10008.1.3.10", "Media Storage Directory Storage", DicomUidType.SOPClass, false);

///<summary>Well-known frame of reference: Talairach Brain Atlas Frame of Reference</summary>
    static DicomUID TalairachBrainAtlas;//("1.2.840.10008.1.4.1.1", "Talairach Brain Atlas Frame of Reference", DicomUidType.FrameOfReference, false);

///<summary>Well-known frame of reference: SPM2 T1 Frame of Reference</summary>
    static DicomUID SPM2T1;//("1.2.840.10008.1.4.1.2", "SPM2 T1 Frame of Reference", DicomUidType.FrameOfReference, false);

///<summary>Well-known frame of reference: SPM2 T2 Frame of Reference</summary>
    static DicomUID SPM2T2;//("1.2.840.10008.1.4.1.3", "SPM2 T2 Frame of Reference", DicomUidType.FrameOfReference, false);

///<summary>Well-known frame of reference: SPM2 PD Frame of Reference</summary>
    static DicomUID SPM2PD;//("1.2.840.10008.1.4.1.4", "SPM2 PD Frame of Reference", DicomUidType.FrameOfReference, false);

///<summary>Well-known frame of reference: SPM2 EPI Frame of Reference</summary>
    static DicomUID SPM2EPI;//("1.2.840.10008.1.4.1.5", "SPM2 EPI Frame of Reference", DicomUidType.FrameOfReference, false);

///<summary>Well-known frame of reference: SPM2 FIL T1 Frame of Reference</summary>
    static DicomUID SPM2FILT1;//("1.2.840.10008.1.4.1.6", "SPM2 FIL T1 Frame of Reference", DicomUidType.FrameOfReference, false);

///<summary>Well-known frame of reference: SPM2 PET Frame of Reference</summary>
    static DicomUID SPM2PET;//("1.2.840.10008.1.4.1.7", "SPM2 PET Frame of Reference", DicomUidType.FrameOfReference, false);

///<summary>Well-known frame of reference: SPM2 TRANSM Frame of Reference</summary>
    static DicomUID SPM2TRANSM;//("1.2.840.10008.1.4.1.8", "SPM2 TRANSM Frame of Reference", DicomUidType.FrameOfReference, false);

///<summary>Well-known frame of reference: SPM2 SPECT Frame of Reference</summary>
    static DicomUID SPM2SPECT;//("1.2.840.10008.1.4.1.9", "SPM2 SPECT Frame of Reference", DicomUidType.FrameOfReference, false);

///<summary>Well-known frame of reference: SPM2 GRAY Frame of Reference</summary>
    static DicomUID SPM2GRAY;//("1.2.840.10008.1.4.1.10", "SPM2 GRAY Frame of Reference", DicomUidType.FrameOfReference, false);

///<summary>Well-known frame of reference: SPM2 WHITE Frame of Reference</summary>
    static DicomUID SPM2WHITE;//("1.2.840.10008.1.4.1.11", "SPM2 WHITE Frame of Reference", DicomUidType.FrameOfReference, false);

///<summary>Well-known frame of reference: SPM2 CSF Frame of Reference</summary>
    static DicomUID SPM2CSF;//("1.2.840.10008.1.4.1.12", "SPM2 CSF Frame of Reference", DicomUidType.FrameOfReference, false);

///<summary>Well-known frame of reference: SPM2 BRAINMASK Frame of Reference</summary>
    static DicomUID SPM2BRAINMASK;//("1.2.840.10008.1.4.1.13", "SPM2 BRAINMASK Frame of Reference", DicomUidType.FrameOfReference, false);

///<summary>Well-known frame of reference: SPM2 AVG305T1 Frame of Reference</summary>
    static DicomUID SPM2AVG305T1;//("1.2.840.10008.1.4.1.14", "SPM2 AVG305T1 Frame of Reference", DicomUidType.FrameOfReference, false);

///<summary>Well-known frame of reference: SPM2 AVG152T1 Frame of Reference</summary>
    static DicomUID SPM2AVG152T1;//("1.2.840.10008.1.4.1.15", "SPM2 AVG152T1 Frame of Reference", DicomUidType.FrameOfReference, false);

///<summary>Well-known frame of reference: SPM2 AVG152T2 Frame of Reference</summary>
    static DicomUID SPM2AVG152T2;//("1.2.840.10008.1.4.1.16", "SPM2 AVG152T2 Frame of Reference", DicomUidType.FrameOfReference, false);

///<summary>Well-known frame of reference: SPM2 AVG152PD Frame of Reference</summary>
    static DicomUID SPM2AVG152PD;//("1.2.840.10008.1.4.1.17", "SPM2 AVG152PD Frame of Reference", DicomUidType.FrameOfReference, false);

///<summary>Well-known frame of reference: SPM2 SINGLESUBJT1 Frame of Reference</summary>
    static DicomUID SPM2SINGLESUBJT1;//("1.2.840.10008.1.4.1.18", "SPM2 SINGLESUBJT1 Frame of Reference", DicomUidType.FrameOfReference, false);

///<summary>Well-known frame of reference: ICBM 452 T1 Frame of Reference</summary>
    static DicomUID ICBM452T1;//("1.2.840.10008.1.4.2.1", "ICBM 452 T1 Frame of Reference", DicomUidType.FrameOfReference, false);

///<summary>Well-known frame of reference: ICBM Single Subject MRI Frame of Reference</summary>
    static DicomUID ICBMSingleSubjectMRI;//("1.2.840.10008.1.4.2.2", "ICBM Single Subject MRI Frame of Reference", DicomUidType.FrameOfReference, false);

///<summary>Well-known frame of reference: IEC 61217 Fixed Coordinate System Frame of Reference</summary>
    static DicomUID IEC61217FixedCoordinateSystem;//("1.2.840.10008.1.4.3.1", "IEC 61217 Fixed Coordinate System Frame of Reference", DicomUidType.FrameOfReference, false);

///<summary>Well-known frame of reference: Standard Robotic-Arm Coordinate System Frame of Reference</summary>
    static DicomUID StandardRoboticArmCoordinateSystem;//("1.2.840.10008.1.4.3.2", "Standard Robotic-Arm Coordinate System Frame of Reference", DicomUidType.FrameOfReference, false);

///<summary>Well-known frame of reference: SRI24 Frame of Reference</summary>
    static DicomUID SRI24;//("1.2.840.10008.1.4.4.1", "SRI24 Frame of Reference", DicomUidType.FrameOfReference, false);

///<summary>Well-known frame of reference: Colin27 Frame of Reference</summary>
    static DicomUID Colin27;//("1.2.840.10008.1.4.5.1", "Colin27 Frame of Reference", DicomUidType.FrameOfReference, false);

///<summary>Well-known frame of reference: LPBA40/AIR Frame of Reference</summary>
    static DicomUID LPBA40AIR;//("1.2.840.10008.1.4.6.1", "LPBA40/AIR Frame of Reference", DicomUidType.FrameOfReference, false);

///<summary>Well-known frame of reference: LPBA40/FLIRT Frame of Reference</summary>
    static DicomUID LPBA40FLIRT;//("1.2.840.10008.1.4.6.2", "LPBA40/FLIRT Frame of Reference", DicomUidType.FrameOfReference, false);

///<summary>Well-known frame of reference: LPBA40/SPM5 Frame of Reference</summary>
    static DicomUID LPBA40SPM5;//("1.2.840.10008.1.4.6.3", "LPBA40/SPM5 Frame of Reference", DicomUidType.FrameOfReference, false);

///<summary>Well-known SOP Instance: Hot Iron Color Palette SOP Instance</summary>
    static DicomUID HotIronPalette;//("1.2.840.10008.1.5.1", "Hot Iron Color Palette SOP Instance", DicomUidType.SOPInstance, false);

///<summary>Well-known SOP Instance: PET Color Palette SOP Instance</summary>
    static DicomUID PETPalette;//("1.2.840.10008.1.5.2", "PET Color Palette SOP Instance", DicomUidType.SOPInstance, false);

///<summary>Well-known SOP Instance: Hot Metal Blue Color Palette SOP Instance</summary>
    static DicomUID HotMetalBluePalette;//("1.2.840.10008.1.5.3", "Hot Metal Blue Color Palette SOP Instance", DicomUidType.SOPInstance, false);

///<summary>Well-known SOP Instance: PET 20 Step Color Palette SOP Instance</summary>
    static DicomUID PET20StepPalette;//("1.2.840.10008.1.5.4", "PET 20 Step Color Palette SOP Instance", DicomUidType.SOPInstance, false);

///<summary>Well-known SOP Instance: Spring Color Palette SOP Instance</summary>
    static DicomUID SpringPalette;//("1.2.840.10008.1.5.5", "Spring Color Palette SOP Instance", DicomUidType.SOPInstance, false);

///<summary>Well-known SOP Instance: Summer Color Palette SOP Instance</summary>
    static DicomUID SummerPalette;//("1.2.840.10008.1.5.6", "Summer Color Palette SOP Instance", DicomUidType.SOPInstance, false);

///<summary>Well-known SOP Instance: Fall Color Palette SOP Instance</summary>
    static DicomUID FallPalette;//("1.2.840.10008.1.5.7", "Fall Color Palette SOP Instance", DicomUidType.SOPInstance, false);

///<summary>Well-known SOP Instance: Winter Color Palette SOP Instance</summary>
    static DicomUID WinterPalette;//("1.2.840.10008.1.5.8", "Winter Color Palette SOP Instance", DicomUidType.SOPInstance, false);

///<summary>SOP Class: Basic Study Content Notification SOP Class (Retired)</summary>
    static DicomUID BasicStudyContentNotificationRETIRED;//("1.2.840.10008.1.9", "Basic Study Content Notification SOP Class (Retired)", DicomUidType.SOPClass, true);

///<summary>Transfer Syntax: Papyrus 3 Implicit VR Little Endian (Retired)</summary>
    static DicomUID Papyrus3ImplicitVRLittleEndianRETIRED;//("1.2.840.10008.1.20", "Papyrus 3 Implicit VR Little Endian (Retired)", DicomUidType.TransferSyntax, true);

///<summary>SOP Class: Storage Commitment Push Model SOP Class</summary>
    static DicomUID StorageCommitmentPushModel;//("1.2.840.10008.1.20.1", "Storage Commitment Push Model SOP Class", DicomUidType.SOPClass, false);

///<summary>Well-known SOP Instance: Storage Commitment Push Model SOP Instance</summary>
    static DicomUID StorageCommitmentPushModelInstance;//("1.2.840.10008.1.20.1.1", "Storage Commitment Push Model SOP Instance", DicomUidType.SOPInstance, false);

///<summary>SOP Class: Storage Commitment Pull Model SOP Class (Retired)</summary>
    static DicomUID StorageCommitmentPullModelRETIRED;//("1.2.840.10008.1.20.2", "Storage Commitment Pull Model SOP Class (Retired)", DicomUidType.SOPClass, true);

///<summary>Well-known SOP Instance: Storage Commitment Pull Model SOP Instance (Retired)</summary>
    static DicomUID StorageCommitmentPullModelInstanceRETIRED;//("1.2.840.10008.1.20.2.1", "Storage Commitment Pull Model SOP Instance (Retired)", DicomUidType.SOPInstance, true);

///<summary>SOP Class: Procedural Event Logging SOP Class</summary>
    static DicomUID ProceduralEventLogging;//("1.2.840.10008.1.40", "Procedural Event Logging SOP Class", DicomUidType.SOPClass, false);

///<summary>Well-known SOP Instance: Procedural Event Logging SOP Instance</summary>
    static DicomUID ProceduralEventLoggingInstance;//("1.2.840.10008.1.40.1", "Procedural Event Logging SOP Instance", DicomUidType.SOPInstance, false);

///<summary>SOP Class: Substance Administration Logging SOP Class</summary>
    static DicomUID SubstanceAdministrationLogging;//("1.2.840.10008.1.42", "Substance Administration Logging SOP Class", DicomUidType.SOPClass, false);

///<summary>Well-known SOP Instance: Substance Administration Logging SOP Instance</summary>
    static DicomUID SubstanceAdministrationLoggingInstance;//("1.2.840.10008.1.42.1", "Substance Administration Logging SOP Instance", DicomUidType.SOPInstance, false);

///<summary>DICOM UIDs as a Coding Scheme: DICOM UID Registry</summary>
    static DicomUID DCMUID;//("1.2.840.10008.2.6.1", "DICOM UID Registry", DicomUidType.CodingScheme, false);

///<summary>Coding Scheme: DICOM Controlled Terminology</summary>
    static DicomUID DCM;//("1.2.840.10008.2.16.4", "DICOM Controlled Terminology", DicomUidType.CodingScheme, false);

///<summary>Coding Scheme: Adult Mouse Anatomy Ontology</summary>
    static DicomUID MA;//("1.2.840.10008.2.16.5", "Adult Mouse Anatomy Ontology", DicomUidType.CodingScheme, false);

///<summary>Coding Scheme: Uberon Ontology</summary>
    static DicomUID UBERON;//("1.2.840.10008.2.16.6", "Uberon Ontology", DicomUidType.CodingScheme, false);

///<summary>Coding Scheme: Integrated Taxonomic Information System (ITIS) Taxonomic Serial Number (TSN)</summary>
    static DicomUID ITIS_TSN;//("1.2.840.10008.2.16.7", "Integrated Taxonomic Information System (ITIS) Taxonomic Serial Number (TSN)", DicomUidType.CodingScheme, false);

///<summary>Coding Scheme: Mouse Genome Initiative (MGI)</summary>
    static DicomUID MGI;//("1.2.840.10008.2.16.8", "Mouse Genome Initiative (MGI)", DicomUidType.CodingScheme, false);

///<summary>Coding Scheme: PubChem Compound CID</summary>
    static DicomUID PUBCHEM_CID;//("1.2.840.10008.2.16.9", "PubChem Compound CID", DicomUidType.CodingScheme, false);

///<summary>Coding Scheme: Dublin Core</summary>
    static DicomUID DC;//("1.2.840.10008.2.16.10", "Dublin Core", DicomUidType.CodingScheme, false);

///<summary>Coding Scheme: New York University Melanoma Clinical Cooperative Group</summary>
    static DicomUID NYUMCCG;//("1.2.840.10008.2.16.11", "New York University Melanoma Clinical Cooperative Group", DicomUidType.CodingScheme, false);

///<summary>Coding Scheme: Mayo Clinic Non-radiological Images Specific Body Structure Anatomical Surface Region Guide</summary>
    static DicomUID MAYONRISBSASRG;//("1.2.840.10008.2.16.12", "Mayo Clinic Non-radiological Images Specific Body Structure Anatomical Surface Region Guide", DicomUidType.CodingScheme, false);

///<summary>Coding Scheme: Image Biomarker Standardisation Initiative</summary>
    static DicomUID IBSI;//("1.2.840.10008.2.16.13", "Image Biomarker Standardisation Initiative", DicomUidType.CodingScheme, false);

///<summary>Coding Scheme: Radiomics Ontology</summary>
    static DicomUID RO;//("1.2.840.10008.2.16.14", "Radiomics Ontology", DicomUidType.CodingScheme, false);

///<summary>Coding Scheme: RadElement</summary>
    static DicomUID RADELEMENT;//("1.2.840.10008.2.16.15", "RadElement", DicomUidType.CodingScheme, false);

///<summary>Coding Scheme: ICD-11</summary>
    static DicomUID I11;//("1.2.840.10008.2.16.16", "ICD-11", DicomUidType.CodingScheme, false);

///<summary>Application Context Name: DICOM Application Context Name</summary>
    static DicomUID DICOMApplicationContext;//("1.2.840.10008.3.1.1.1", "DICOM Application Context Name", DicomUidType.ApplicationContextName, false);

///<summary>SOP Class: Detached Patient Management SOP Class (Retired)</summary>
    static DicomUID DetachedPatientManagementRETIRED;//("1.2.840.10008.3.1.2.1.1", "Detached Patient Management SOP Class (Retired)", DicomUidType.SOPClass, true);

///<summary>Meta SOP Class: Detached Patient Management Meta SOP Class (Retired)</summary>
    static DicomUID DetachedPatientManagementMetaRETIRED;//("1.2.840.10008.3.1.2.1.4", "Detached Patient Management Meta SOP Class (Retired)", DicomUidType.MetaSOPClass, true);

///<summary>SOP Class: Detached Visit Management SOP Class (Retired)</summary>
    static DicomUID DetachedVisitManagementRETIRED;//("1.2.840.10008.3.1.2.2.1", "Detached Visit Management SOP Class (Retired)", DicomUidType.SOPClass, true);

///<summary>SOP Class: Detached Study Management SOP Class (Retired)</summary>
    static DicomUID DetachedStudyManagementRETIRED;//("1.2.840.10008.3.1.2.3.1", "Detached Study Management SOP Class (Retired)", DicomUidType.SOPClass, true);

///<summary>SOP Class: Study Component Management SOP Class (Retired)</summary>
    static DicomUID StudyComponentManagementRETIRED;//("1.2.840.10008.3.1.2.3.2", "Study Component Management SOP Class (Retired)", DicomUidType.SOPClass, true);

///<summary>SOP Class: Modality Performed Procedure Step SOP Class</summary>
    static DicomUID ModalityPerformedProcedureStep;//("1.2.840.10008.3.1.2.3.3", "Modality Performed Procedure Step SOP Class", DicomUidType.SOPClass, false);

///<summary>SOP Class: Modality Performed Procedure Step Retrieve SOP Class</summary>
    static DicomUID ModalityPerformedProcedureStepRetrieve;//("1.2.840.10008.3.1.2.3.4", "Modality Performed Procedure Step Retrieve SOP Class", DicomUidType.SOPClass, false);

///<summary>SOP Class: Modality Performed Procedure Step Notification SOP Class</summary>
    static DicomUID ModalityPerformedProcedureStepNotification;//("1.2.840.10008.3.1.2.3.5", "Modality Performed Procedure Step Notification SOP Class", DicomUidType.SOPClass, false);

///<summary>SOP Class: Detached Results Management SOP Class (Retired)</summary>
    static DicomUID DetachedResultsManagementRETIRED;//("1.2.840.10008.3.1.2.5.1", "Detached Results Management SOP Class (Retired)", DicomUidType.SOPClass, true);

///<summary>Meta SOP Class: Detached Results Management Meta SOP Class (Retired)</summary>
    static DicomUID DetachedResultsManagementMetaRETIRED;//("1.2.840.10008.3.1.2.5.4", "Detached Results Management Meta SOP Class (Retired)", DicomUidType.MetaSOPClass, true);

///<summary>Meta SOP Class: Detached Study Management Meta SOP Class (Retired)</summary>
    static DicomUID DetachedStudyManagementMetaRETIRED;//("1.2.840.10008.3.1.2.5.5", "Detached Study Management Meta SOP Class (Retired)", DicomUidType.MetaSOPClass, true);

///<summary>SOP Class: Detached Interpretation Management SOP Class (Retired)</summary>
    static DicomUID DetachedInterpretationManagementRETIRED;//("1.2.840.10008.3.1.2.6.1", "Detached Interpretation Management SOP Class (Retired)", DicomUidType.SOPClass, true);

///<summary>Service Class: Storage Service Class</summary>
    static DicomUID Storage;//("1.2.840.10008.4.2", "Storage Service Class", DicomUidType.ServiceClass, false);

///<summary>SOP Class: Basic Film Session SOP Class</summary>
    static DicomUID BasicFilmSession;//("1.2.840.10008.5.1.1.1", "Basic Film Session SOP Class", DicomUidType.SOPClass, false);

///<summary>SOP Class: Basic Film Box SOP Class</summary>
    static DicomUID BasicFilmBox;//("1.2.840.10008.5.1.1.2", "Basic Film Box SOP Class", DicomUidType.SOPClass, false);

///<summary>SOP Class: Basic Grayscale Image Box SOP Class</summary>
    static DicomUID BasicGrayscaleImageBox;//("1.2.840.10008.5.1.1.4", "Basic Grayscale Image Box SOP Class", DicomUidType.SOPClass, false);

///<summary>SOP Class: Basic Color Image Box SOP Class</summary>
    static DicomUID BasicColorImageBox;//("1.2.840.10008.5.1.1.4.1", "Basic Color Image Box SOP Class", DicomUidType.SOPClass, false);

///<summary>SOP Class: Referenced Image Box SOP Class (Retired)</summary>
    static DicomUID ReferencedImageBoxRETIRED;//("1.2.840.10008.5.1.1.4.2", "Referenced Image Box SOP Class (Retired)", DicomUidType.SOPClass, true);

///<summary>Meta SOP Class: Basic Grayscale Print Management Meta SOP Class</summary>
    static DicomUID BasicGrayscalePrintManagementMeta;//("1.2.840.10008.5.1.1.9", "Basic Grayscale Print Management Meta SOP Class", DicomUidType.MetaSOPClass, false);

///<summary>Meta SOP Class: Referenced Grayscale Print Management Meta SOP Class (Retired)</summary>
    static DicomUID ReferencedGrayscalePrintManagementMetaRETIRED;//("1.2.840.10008.5.1.1.9.1", "Referenced Grayscale Print Management Meta SOP Class (Retired)", DicomUidType.MetaSOPClass, true);

///<summary>SOP Class: Print Job SOP Class</summary>
    static DicomUID PrintJob;//("1.2.840.10008.5.1.1.14", "Print Job SOP Class", DicomUidType.SOPClass, false);

///<summary>SOP Class: Basic Annotation Box SOP Class</summary>
    static DicomUID BasicAnnotationBox;//("1.2.840.10008.5.1.1.15", "Basic Annotation Box SOP Class", DicomUidType.SOPClass, false);

///<summary>SOP Class: Printer SOP Class</summary>
    static DicomUID Printer;//("1.2.840.10008.5.1.1.16", "Printer SOP Class", DicomUidType.SOPClass, false);

///<summary>SOP Class: Printer Configuration Retrieval SOP Class</summary>
    static DicomUID PrinterConfigurationRetrieval;//("1.2.840.10008.5.1.1.16.376", "Printer Configuration Retrieval SOP Class", DicomUidType.SOPClass, false);

///<summary>Well-known Printer SOP Instance: Printer SOP Instance</summary>
    static DicomUID PrinterInstance;//("1.2.840.10008.5.1.1.17", "Printer SOP Instance", DicomUidType.SOPInstance, false);

///<summary>Well-known Printer SOP Instance: Printer Configuration Retrieval SOP Instance</summary>
    static DicomUID PrinterConfigurationRetrievalInstance;//("1.2.840.10008.5.1.1.17.376", "Printer Configuration Retrieval SOP Instance", DicomUidType.SOPInstance, false);

///<summary>Meta SOP Class: Basic Color Print Management Meta SOP Class</summary>
    static DicomUID BasicColorPrintManagementMeta;//("1.2.840.10008.5.1.1.18", "Basic Color Print Management Meta SOP Class", DicomUidType.MetaSOPClass, false);

///<summary>Meta SOP Class: Referenced Color Print Management Meta SOP Class (Retired)</summary>
    static DicomUID ReferencedColorPrintManagementMetaRETIRED;//("1.2.840.10008.5.1.1.18.1", "Referenced Color Print Management Meta SOP Class (Retired)", DicomUidType.MetaSOPClass, true);

///<summary>SOP Class: VOI LUT Box SOP Class</summary>
    static DicomUID VOILUTBox;//("1.2.840.10008.5.1.1.22", "VOI LUT Box SOP Class", DicomUidType.SOPClass, false);

///<summary>SOP Class: Presentation LUT SOP Class</summary>
    static DicomUID PresentationLUT;//("1.2.840.10008.5.1.1.23", "Presentation LUT SOP Class", DicomUidType.SOPClass, false);

///<summary>SOP Class: Image Overlay Box SOP Class (Retired)</summary>
    static DicomUID ImageOverlayBoxRETIRED;//("1.2.840.10008.5.1.1.24", "Image Overlay Box SOP Class (Retired)", DicomUidType.SOPClass, true);

///<summary>SOP Class: Basic Print Image Overlay Box SOP Class (Retired)</summary>
    static DicomUID BasicPrintImageOverlayBoxRETIRED;//("1.2.840.10008.5.1.1.24.1", "Basic Print Image Overlay Box SOP Class (Retired)", DicomUidType.SOPClass, true);

///<summary>Well-known Print Queue SOP Instance: Print Queue SOP Instance (Retired)</summary>
    static DicomUID PrintQueueRETIRED;//("1.2.840.10008.5.1.1.25", "Print Queue SOP Instance (Retired)", DicomUidType.SOPInstance, true);

///<summary>SOP Class: Print Queue Management SOP Class (Retired)</summary>
    static DicomUID PrintQueueManagementRETIRED;//("1.2.840.10008.5.1.1.26", "Print Queue Management SOP Class (Retired)", DicomUidType.SOPClass, true);

///<summary>SOP Class: Stored Print Storage SOP Class (Retired)</summary>
    static DicomUID StoredPrintStorageRETIRED;//("1.2.840.10008.5.1.1.27", "Stored Print Storage SOP Class (Retired)", DicomUidType.SOPClass, true);

///<summary>SOP Class: Hardcopy Grayscale Image Storage SOP Class (Retired)</summary>
    static DicomUID HardcopyGrayscaleImageStorageRETIRED;//("1.2.840.10008.5.1.1.29", "Hardcopy Grayscale Image Storage SOP Class (Retired)", DicomUidType.SOPClass, true);

///<summary>SOP Class: Hardcopy Color Image Storage SOP Class (Retired)</summary>
    static DicomUID HardcopyColorImageStorageRETIRED;//("1.2.840.10008.5.1.1.30", "Hardcopy Color Image Storage SOP Class (Retired)", DicomUidType.SOPClass, true);

///<summary>SOP Class: Pull Print Request SOP Class (Retired)</summary>
    static DicomUID PullPrintRequestRETIRED;//("1.2.840.10008.5.1.1.31", "Pull Print Request SOP Class (Retired)", DicomUidType.SOPClass, true);

///<summary>Meta SOP Class: Pull Stored Print Management Meta SOP Class (Retired)</summary>
    static DicomUID PullStoredPrintManagementMetaRETIRED;//("1.2.840.10008.5.1.1.32", "Pull Stored Print Management Meta SOP Class (Retired)", DicomUidType.MetaSOPClass, true);

///<summary>SOP Class: Media Creation Management SOP Class UID</summary>
    static DicomUID MediaCreationManagement;//("1.2.840.10008.5.1.1.33", "Media Creation Management SOP Class UID", DicomUidType.SOPClass, false);

///<summary>SOP Class: Display System SOP Class</summary>
    static DicomUID DisplaySystem;//("1.2.840.10008.5.1.1.40", "Display System SOP Class", DicomUidType.SOPClass, false);

///<summary>Well-known SOP Instance: Display System SOP Instance</summary>
    static DicomUID DisplaySystemInstance;//("1.2.840.10008.5.1.1.40.1", "Display System SOP Instance", DicomUidType.SOPInstance, false);

///<summary>SOP Class: Computed Radiography Image Storage</summary>
    static DicomUID ComputedRadiographyImageStorage;//("1.2.840.10008.5.1.4.1.1.1", "Computed Radiography Image Storage", DicomUidType.SOPClass, false);

///<summary>SOP Class: Digital X-Ray Image Storage - For Presentation</summary>
    static DicomUID DigitalXRayImageStorageForPresentation;//("1.2.840.10008.5.1.4.1.1.1.1", "Digital X-Ray Image Storage - For Presentation", DicomUidType.SOPClass, false);

///<summary>SOP Class: Digital X-Ray Image Storage - For Processing</summary>
    static DicomUID DigitalXRayImageStorageForProcessing;//("1.2.840.10008.5.1.4.1.1.1.1.1", "Digital X-Ray Image Storage - For Processing", DicomUidType.SOPClass, false);

///<summary>SOP Class: Digital Mammography X-Ray Image Storage - For Presentation</summary>
    static DicomUID DigitalMammographyXRayImageStorageForPresentation;//("1.2.840.10008.5.1.4.1.1.1.2", "Digital Mammography X-Ray Image Storage - For Presentation", DicomUidType.SOPClass, false);

///<summary>SOP Class: Digital Mammography X-Ray Image Storage - For Processing</summary>
    static DicomUID DigitalMammographyXRayImageStorageForProcessing;//("1.2.840.10008.5.1.4.1.1.1.2.1", "Digital Mammography X-Ray Image Storage - For Processing", DicomUidType.SOPClass, false);

///<summary>SOP Class: Digital Intra-Oral X-Ray Image Storage - For Presentation</summary>
    static DicomUID DigitalIntraOralXRayImageStorageForPresentation;//("1.2.840.10008.5.1.4.1.1.1.3", "Digital Intra-Oral X-Ray Image Storage - For Presentation", DicomUidType.SOPClass, false);

///<summary>SOP Class: Digital Intra-Oral X-Ray Image Storage - For Processing</summary>
    static DicomUID DigitalIntraOralXRayImageStorageForProcessing;//("1.2.840.10008.5.1.4.1.1.1.3.1", "Digital Intra-Oral X-Ray Image Storage - For Processing", DicomUidType.SOPClass, false);

///<summary>SOP Class: CT Image Storage</summary>
    static DicomUID CTImageStorage;//("1.2.840.10008.5.1.4.1.1.2", "CT Image Storage", DicomUidType.SOPClass, false);

///<summary>SOP Class: Enhanced CT Image Storage</summary>
    static DicomUID EnhancedCTImageStorage;//("1.2.840.10008.5.1.4.1.1.2.1", "Enhanced CT Image Storage", DicomUidType.SOPClass, false);

///<summary>SOP Class: Legacy Converted Enhanced CT Image Storage</summary>
    static DicomUID LegacyConvertedEnhancedCTImageStorage;//("1.2.840.10008.5.1.4.1.1.2.2", "Legacy Converted Enhanced CT Image Storage", DicomUidType.SOPClass, false);

///<summary>SOP Class: Ultrasound Multi-frame Image Storage (Retired)</summary>
    static DicomUID UltrasoundMultiFrameImageStorageRetiredRETIRED;//("1.2.840.10008.5.1.4.1.1.3", "Ultrasound Multi-frame Image Storage (Retired)", DicomUidType.SOPClass, true);

///<summary>SOP Class: Ultrasound Multi-frame Image Storage</summary>
    static DicomUID UltrasoundMultiFrameImageStorage;//("1.2.840.10008.5.1.4.1.1.3.1", "Ultrasound Multi-frame Image Storage", DicomUidType.SOPClass, false);

///<summary>SOP Class: MR Image Storage</summary>
    static DicomUID MRImageStorage;//("1.2.840.10008.5.1.4.1.1.4", "MR Image Storage", DicomUidType.SOPClass, false);

///<summary>SOP Class: Enhanced MR Image Storage</summary>
    static DicomUID EnhancedMRImageStorage;//("1.2.840.10008.5.1.4.1.1.4.1", "Enhanced MR Image Storage", DicomUidType.SOPClass, false);

///<summary>SOP Class: MR Spectroscopy Storage</summary>
    static DicomUID MRSpectroscopyStorage;//("1.2.840.10008.5.1.4.1.1.4.2", "MR Spectroscopy Storage", DicomUidType.SOPClass, false);

///<summary>SOP Class: Enhanced MR Color Image Storage</summary>
    static DicomUID EnhancedMRColorImageStorage;//("1.2.840.10008.5.1.4.1.1.4.3", "Enhanced MR Color Image Storage", DicomUidType.SOPClass, false);

///<summary>SOP Class: Legacy Converted Enhanced MR Image Storage</summary>
    static DicomUID LegacyConvertedEnhancedMRImageStorage;//("1.2.840.10008.5.1.4.1.1.4.4", "Legacy Converted Enhanced MR Image Storage", DicomUidType.SOPClass, false);

///<summary>SOP Class: Nuclear Medicine Image Storage (Retired)</summary>
    static DicomUID NuclearMedicineImageStorageRetiredRETIRED;//("1.2.840.10008.5.1.4.1.1.5", "Nuclear Medicine Image Storage (Retired)", DicomUidType.SOPClass, true);

///<summary>SOP Class: Ultrasound Image Storage (Retired)</summary>
    static DicomUID UltrasoundImageStorageRetiredRETIRED;//("1.2.840.10008.5.1.4.1.1.6", "Ultrasound Image Storage (Retired)", DicomUidType.SOPClass, true);

///<summary>SOP Class: Ultrasound Image Storage</summary>
    static DicomUID UltrasoundImageStorage;//("1.2.840.10008.5.1.4.1.1.6.1", "Ultrasound Image Storage", DicomUidType.SOPClass, false);

///<summary>SOP Class: Enhanced US Volume Storage</summary>
    static DicomUID EnhancedUSVolumeStorage;//("1.2.840.10008.5.1.4.1.1.6.2", "Enhanced US Volume Storage", DicomUidType.SOPClass, false);

///<summary>SOP Class: Secondary Capture Image Storage</summary>
    static DicomUID SecondaryCaptureImageStorage;//("1.2.840.10008.5.1.4.1.1.7", "Secondary Capture Image Storage", DicomUidType.SOPClass, false);

///<summary>SOP Class: Multi-frame Single Bit Secondary Capture Image Storage</summary>
    static DicomUID MultiFrameSingleBitSecondaryCaptureImageStorage;//("1.2.840.10008.5.1.4.1.1.7.1", "Multi-frame Single Bit Secondary Capture Image Storage", DicomUidType.SOPClass, false);

///<summary>SOP Class: Multi-frame Grayscale Byte Secondary Capture Image Storage</summary>
    static DicomUID MultiFrameGrayscaleByteSecondaryCaptureImageStorage;//("1.2.840.10008.5.1.4.1.1.7.2", "Multi-frame Grayscale Byte Secondary Capture Image Storage", DicomUidType.SOPClass, false);

///<summary>SOP Class: Multi-frame Grayscale Word Secondary Capture Image Storage</summary>
    static DicomUID MultiFrameGrayscaleWordSecondaryCaptureImageStorage;//("1.2.840.10008.5.1.4.1.1.7.3", "Multi-frame Grayscale Word Secondary Capture Image Storage", DicomUidType.SOPClass, false);

///<summary>SOP Class: Multi-frame True Color Secondary Capture Image Storage</summary>
    static DicomUID MultiFrameTrueColorSecondaryCaptureImageStorage;//("1.2.840.10008.5.1.4.1.1.7.4", "Multi-frame True Color Secondary Capture Image Storage", DicomUidType.SOPClass, false);

///<summary>SOP Class: Standalone Overlay Storage (Retired)</summary>
    static DicomUID StandaloneOverlayStorageRETIRED;//("1.2.840.10008.5.1.4.1.1.8", "Standalone Overlay Storage (Retired)", DicomUidType.SOPClass, true);

///<summary>SOP Class: Standalone Curve Storage (Retired)</summary>
    static DicomUID StandaloneCurveStorageRETIRED;//("1.2.840.10008.5.1.4.1.1.9", "Standalone Curve Storage (Retired)", DicomUidType.SOPClass, true);

///<summary>SOP Class: Waveform Storage - Trial (Retired)</summary>
    static DicomUID WaveformStorageTrialRETIRED;//("1.2.840.10008.5.1.4.1.1.9.1", "Waveform Storage - Trial (Retired)", DicomUidType.SOPClass, true);

///<summary>SOP Class: 12-lead ECG Waveform Storage</summary>
    static DicomUID TwelveLeadECGWaveformStorage;//("1.2.840.10008.5.1.4.1.1.9.1.1", "12-lead ECG Waveform Storage", DicomUidType.SOPClass, false);

///<summary>SOP Class: General ECG Waveform Storage</summary>
    static DicomUID GeneralECGWaveformStorage;//("1.2.840.10008.5.1.4.1.1.9.1.2", "General ECG Waveform Storage", DicomUidType.SOPClass, false);

///<summary>SOP Class: Ambulatory ECG Waveform Storage</summary>
    static DicomUID AmbulatoryECGWaveformStorage;//("1.2.840.10008.5.1.4.1.1.9.1.3", "Ambulatory ECG Waveform Storage", DicomUidType.SOPClass, false);

///<summary>SOP Class: Hemodynamic Waveform Storage</summary>
    static DicomUID HemodynamicWaveformStorage;//("1.2.840.10008.5.1.4.1.1.9.2.1", "Hemodynamic Waveform Storage", DicomUidType.SOPClass, false);

///<summary>SOP Class: Cardiac Electrophysiology Waveform Storage</summary>
    static DicomUID CardiacElectrophysiologyWaveformStorage;//("1.2.840.10008.5.1.4.1.1.9.3.1", "Cardiac Electrophysiology Waveform Storage", DicomUidType.SOPClass, false);

///<summary>SOP Class: Basic Voice Audio Waveform Storage</summary>
    static DicomUID BasicVoiceAudioWaveformStorage;//("1.2.840.10008.5.1.4.1.1.9.4.1", "Basic Voice Audio Waveform Storage", DicomUidType.SOPClass, false);

///<summary>SOP Class: General Audio Waveform Storage</summary>
    static DicomUID GeneralAudioWaveformStorage;//("1.2.840.10008.5.1.4.1.1.9.4.2", "General Audio Waveform Storage", DicomUidType.SOPClass, false);

///<summary>SOP Class: Arterial Pulse Waveform Storage</summary>
    static DicomUID ArterialPulseWaveformStorage;//("1.2.840.10008.5.1.4.1.1.9.5.1", "Arterial Pulse Waveform Storage", DicomUidType.SOPClass, false);

///<summary>SOP Class: Respiratory Waveform Storage</summary>
    static DicomUID RespiratoryWaveformStorage;//("1.2.840.10008.5.1.4.1.1.9.6.1", "Respiratory Waveform Storage", DicomUidType.SOPClass, false);

///<summary>SOP Class: Multi-channel Respiratory Waveform Storage</summary>
    static DicomUID MultichannelRespiratoryWaveformStorage;//("1.2.840.10008.5.1.4.1.1.9.6.2", "Multi-channel Respiratory Waveform Storage", DicomUidType.SOPClass, false);

///<summary>SOP Class: Routine Scalp Electroencephalogram Waveform Storage</summary>
    static DicomUID RoutineScalpElectroencephalogramWaveformStorage;//("1.2.840.10008.5.1.4.1.1.9.7.1", "Routine Scalp Electroencephalogram Waveform Storage", DicomUidType.SOPClass, false);

///<summary>SOP Class: Electromyogram Waveform Storage</summary>
    static DicomUID ElectromyogramWaveformStorage;//("1.2.840.10008.5.1.4.1.1.9.7.2", "Electromyogram Waveform Storage", DicomUidType.SOPClass, false);

///<summary>SOP Class: Electrooculogram Waveform Storage</summary>
    static DicomUID ElectrooculogramWaveformStorage;//("1.2.840.10008.5.1.4.1.1.9.7.3", "Electrooculogram Waveform Storage", DicomUidType.SOPClass, false);

///<summary>SOP Class: Sleep Electroencephalogram Waveform Storage</summary>
    static DicomUID SleepElectroencephalogramWaveformStorage;//("1.2.840.10008.5.1.4.1.1.9.7.4", "Sleep Electroencephalogram Waveform Storage", DicomUidType.SOPClass, false);

///<summary>SOP Class: Body Position Waveform Storage</summary>
    static DicomUID BodyPositionWaveformStorage;//("1.2.840.10008.5.1.4.1.1.9.8.1", "Body Position Waveform Storage", DicomUidType.SOPClass, false);

///<summary>SOP Class: Standalone Modality LUT Storage (Retired)</summary>
    static DicomUID StandaloneModalityLUTStorageRETIRED;//("1.2.840.10008.5.1.4.1.1.10", "Standalone Modality LUT Storage (Retired)", DicomUidType.SOPClass, true);

///<summary>SOP Class: Standalone VOI LUT Storage (Retired)</summary>
    static DicomUID StandaloneVOILUTStorageRETIRED;//("1.2.840.10008.5.1.4.1.1.11", "Standalone VOI LUT Storage (Retired)", DicomUidType.SOPClass, true);

///<summary>SOP Class: Grayscale Softcopy Presentation State Storage</summary>
    static DicomUID GrayscaleSoftcopyPresentationStateStorage;//("1.2.840.10008.5.1.4.1.1.11.1", "Grayscale Softcopy Presentation State Storage", DicomUidType.SOPClass, false);

///<summary>SOP Class: Color Softcopy Presentation State Storage</summary>
    static DicomUID ColorSoftcopyPresentationStateStorage;//("1.2.840.10008.5.1.4.1.1.11.2", "Color Softcopy Presentation State Storage", DicomUidType.SOPClass, false);

///<summary>SOP Class: Pseudo-Color Softcopy Presentation State Storage</summary>
    static DicomUID PseudoColorSoftcopyPresentationStateStorage;//("1.2.840.10008.5.1.4.1.1.11.3", "Pseudo-Color Softcopy Presentation State Storage", DicomUidType.SOPClass, false);

///<summary>SOP Class: Blending Softcopy Presentation State Storage</summary>
    static DicomUID BlendingSoftcopyPresentationStateStorage;//("1.2.840.10008.5.1.4.1.1.11.4", "Blending Softcopy Presentation State Storage", DicomUidType.SOPClass, false);

///<summary>SOP Class: XA/XRF Grayscale Softcopy Presentation State Storage</summary>
    static DicomUID XAXRFGrayscaleSoftcopyPresentationStateStorage;//("1.2.840.10008.5.1.4.1.1.11.5", "XA/XRF Grayscale Softcopy Presentation State Storage", DicomUidType.SOPClass, false);

///<summary>SOP Class: Grayscale Planar MPR Volumetric Presentation State Storage</summary>
    static DicomUID GrayscalePlanarMPRVolumetricPresentationStateStorage;//("1.2.840.10008.5.1.4.1.1.11.6", "Grayscale Planar MPR Volumetric Presentation State Storage", DicomUidType.SOPClass, false);

///<summary>SOP Class: Compositing Planar MPR Volumetric Presentation State Storage</summary>
    static DicomUID CompositingPlanarMPRVolumetricPresentationStateStorage;//("1.2.840.10008.5.1.4.1.1.11.7", "Compositing Planar MPR Volumetric Presentation State Storage", DicomUidType.SOPClass, false);

///<summary>SOP Class: Advanced Blending Presentation State Storage</summary>
    static DicomUID AdvancedBlendingPresentationStateStorage;//("1.2.840.10008.5.1.4.1.1.11.8", "Advanced Blending Presentation State Storage", DicomUidType.SOPClass, false);

///<summary>SOP Class: Volume Rendering Volumetric Presentation State Storage</summary>
    static DicomUID VolumeRenderingVolumetricPresentationStateStorage;//("1.2.840.10008.5.1.4.1.1.11.9", "Volume Rendering Volumetric Presentation State Storage", DicomUidType.SOPClass, false);

///<summary>SOP Class: Segmented Volume Rendering Volumetric Presentation State Storage</summary>
    static DicomUID SegmentedVolumeRenderingVolumetricPresentationStateStorage;//("1.2.840.10008.5.1.4.1.1.11.10", "Segmented Volume Rendering Volumetric Presentation State Storage", DicomUidType.SOPClass, false);

///<summary>SOP Class: Multiple Volume Rendering Volumetric Presentation State Storage</summary>
    static DicomUID MultipleVolumeRenderingVolumetricPresentationStateStorage;//("1.2.840.10008.5.1.4.1.1.11.11", "Multiple Volume Rendering Volumetric Presentation State Storage", DicomUidType.SOPClass, false);

///<summary>SOP Class: X-Ray Angiographic Image Storage</summary>
    static DicomUID XRayAngiographicImageStorage;//("1.2.840.10008.5.1.4.1.1.12.1", "X-Ray Angiographic Image Storage", DicomUidType.SOPClass, false);

///<summary>SOP Class: Enhanced XA Image Storage</summary>
    static DicomUID EnhancedXAImageStorage;//("1.2.840.10008.5.1.4.1.1.12.1.1", "Enhanced XA Image Storage", DicomUidType.SOPClass, false);

///<summary>SOP Class: X-Ray Radiofluoroscopic Image Storage</summary>
    static DicomUID XRayRadiofluoroscopicImageStorage;//("1.2.840.10008.5.1.4.1.1.12.2", "X-Ray Radiofluoroscopic Image Storage", DicomUidType.SOPClass, false);

///<summary>SOP Class: Enhanced XRF Image Storage</summary>
    static DicomUID EnhancedXRFImageStorage;//("1.2.840.10008.5.1.4.1.1.12.2.1", "Enhanced XRF Image Storage", DicomUidType.SOPClass, false);

///<summary>SOP Class: X-Ray Angiographic Bi-Plane Image Storage (Retired)</summary>
    static DicomUID XRayAngiographicBiPlaneImageStorageRETIRED;//("1.2.840.10008.5.1.4.1.1.12.3", "X-Ray Angiographic Bi-Plane Image Storage (Retired)", DicomUidType.SOPClass, true);

///<summary>SOP Class: X-Ray 3D Angiographic Image Storage</summary>
    static DicomUID XRay3DAngiographicImageStorage;//("1.2.840.10008.5.1.4.1.1.13.1.1", "X-Ray 3D Angiographic Image Storage", DicomUidType.SOPClass, false);

///<summary>SOP Class: X-Ray 3D Craniofacial Image Storage</summary>
    static DicomUID XRay3DCraniofacialImageStorage;//("1.2.840.10008.5.1.4.1.1.13.1.2", "X-Ray 3D Craniofacial Image Storage", DicomUidType.SOPClass, false);

///<summary>SOP Class: Breast Tomosynthesis Image Storage</summary>
    static DicomUID BreastTomosynthesisImageStorage;//("1.2.840.10008.5.1.4.1.1.13.1.3", "Breast Tomosynthesis Image Storage", DicomUidType.SOPClass, false);

///<summary>SOP Class: Breast Projection X-Ray Image Storage - For Presentation</summary>
    static DicomUID BreastProjectionXRayImageStorageForPresentation;//("1.2.840.10008.5.1.4.1.1.13.1.4", "Breast Projection X-Ray Image Storage - For Presentation", DicomUidType.SOPClass, false);

///<summary>SOP Class: Breast Projection X-Ray Image Storage - For Processing</summary>
    static DicomUID BreastProjectionXRayImageStorageForProcessing;//("1.2.840.10008.5.1.4.1.1.13.1.5", "Breast Projection X-Ray Image Storage - For Processing", DicomUidType.SOPClass, false);

///<summary>SOP Class: Intravascular Optical Coherence Tomography Image Storage - For Presentation</summary>
    static DicomUID IntravascularOpticalCoherenceTomographyImageStorageForPresentation;//("1.2.840.10008.5.1.4.1.1.14.1", "Intravascular Optical Coherence Tomography Image Storage - For Presentation", DicomUidType.SOPClass, false);

///<summary>SOP Class: Intravascular Optical Coherence Tomography Image Storage - For Processing</summary>
    static DicomUID IntravascularOpticalCoherenceTomographyImageStorageForProcessing;//("1.2.840.10008.5.1.4.1.1.14.2", "Intravascular Optical Coherence Tomography Image Storage - For Processing", DicomUidType.SOPClass, false);

///<summary>SOP Class: Nuclear Medicine Image Storage</summary>
    static DicomUID NuclearMedicineImageStorage;//("1.2.840.10008.5.1.4.1.1.20", "Nuclear Medicine Image Storage", DicomUidType.SOPClass, false);

///<summary>SOP Class: Parametric Map Storage</summary>
    static DicomUID ParametricMapStorage;//("1.2.840.10008.5.1.4.1.1.30", "Parametric Map Storage", DicomUidType.SOPClass, false);

///<summary>SOP Class: Raw Data Storage</summary>
    static DicomUID RawDataStorage;//("1.2.840.10008.5.1.4.1.1.66", "Raw Data Storage", DicomUidType.SOPClass, false);

///<summary>SOP Class: Spatial Registration Storage</summary>
    static DicomUID SpatialRegistrationStorage;//("1.2.840.10008.5.1.4.1.1.66.1", "Spatial Registration Storage", DicomUidType.SOPClass, false);

///<summary>SOP Class: Spatial Fiducials Storage</summary>
    static DicomUID SpatialFiducialsStorage;//("1.2.840.10008.5.1.4.1.1.66.2", "Spatial Fiducials Storage", DicomUidType.SOPClass, false);

///<summary>SOP Class: Deformable Spatial Registration Storage</summary>
    static DicomUID DeformableSpatialRegistrationStorage;//("1.2.840.10008.5.1.4.1.1.66.3", "Deformable Spatial Registration Storage", DicomUidType.SOPClass, false);

///<summary>SOP Class: Segmentation Storage</summary>
    static DicomUID SegmentationStorage;//("1.2.840.10008.5.1.4.1.1.66.4", "Segmentation Storage", DicomUidType.SOPClass, false);

///<summary>SOP Class: Surface Segmentation Storage</summary>
    static DicomUID SurfaceSegmentationStorage;//("1.2.840.10008.5.1.4.1.1.66.5", "Surface Segmentation Storage", DicomUidType.SOPClass, false);

///<summary>SOP Class: Tractography Results Storage</summary>
    static DicomUID TractographyResultsStorage;//("1.2.840.10008.5.1.4.1.1.66.6", "Tractography Results Storage", DicomUidType.SOPClass, false);

///<summary>SOP Class: Real World Value Mapping Storage</summary>
    static DicomUID RealWorldValueMappingStorage;//("1.2.840.10008.5.1.4.1.1.67", "Real World Value Mapping Storage", DicomUidType.SOPClass, false);

///<summary>SOP Class: Surface Scan Mesh Storage</summary>
    static DicomUID SurfaceScanMeshStorage;//("1.2.840.10008.5.1.4.1.1.68.1", "Surface Scan Mesh Storage", DicomUidType.SOPClass, false);

///<summary>SOP Class: Surface Scan Point Cloud Storage</summary>
    static DicomUID SurfaceScanPointCloudStorage;//("1.2.840.10008.5.1.4.1.1.68.2", "Surface Scan Point Cloud Storage", DicomUidType.SOPClass, false);

///<summary>SOP Class: VL Image Storage - Trial (Retired)</summary>
    static DicomUID VLImageStorageTrialRETIRED;//("1.2.840.10008.5.1.4.1.1.77.1", "VL Image Storage - Trial (Retired)", DicomUidType.SOPClass, true);

///<summary>SOP Class: VL Multi-frame Image Storage - Trial (Retired)</summary>
    static DicomUID VLMultiFrameImageStorageTrialRETIRED;//("1.2.840.10008.5.1.4.1.1.77.2", "VL Multi-frame Image Storage - Trial (Retired)", DicomUidType.SOPClass, true);

///<summary>SOP Class: VL Endoscopic Image Storage</summary>
    static DicomUID VLEndoscopicImageStorage;//("1.2.840.10008.5.1.4.1.1.77.1.1", "VL Endoscopic Image Storage", DicomUidType.SOPClass, false);

///<summary>SOP Class: Video Endoscopic Image Storage</summary>
    static DicomUID VideoEndoscopicImageStorage;//("1.2.840.10008.5.1.4.1.1.77.1.1.1", "Video Endoscopic Image Storage", DicomUidType.SOPClass, false);

///<summary>SOP Class: VL Microscopic Image Storage</summary>
    static DicomUID VLMicroscopicImageStorage;//("1.2.840.10008.5.1.4.1.1.77.1.2", "VL Microscopic Image Storage", DicomUidType.SOPClass, false);

///<summary>SOP Class: Video Microscopic Image Storage</summary>
    static DicomUID VideoMicroscopicImageStorage;//("1.2.840.10008.5.1.4.1.1.77.1.2.1", "Video Microscopic Image Storage", DicomUidType.SOPClass, false);

///<summary>SOP Class: VL Slide-Coordinates Microscopic Image Storage</summary>
    static DicomUID VLSlideCoordinatesMicroscopicImageStorage;//("1.2.840.10008.5.1.4.1.1.77.1.3", "VL Slide-Coordinates Microscopic Image Storage", DicomUidType.SOPClass, false);

///<summary>SOP Class: VL Photographic Image Storage</summary>
    static DicomUID VLPhotographicImageStorage;//("1.2.840.10008.5.1.4.1.1.77.1.4", "VL Photographic Image Storage", DicomUidType.SOPClass, false);

///<summary>SOP Class: Video Photographic Image Storage</summary>
    static DicomUID VideoPhotographicImageStorage;//("1.2.840.10008.5.1.4.1.1.77.1.4.1", "Video Photographic Image Storage", DicomUidType.SOPClass, false);

///<summary>SOP Class: Ophthalmic Photography 8 Bit Image Storage</summary>
    static DicomUID OphthalmicPhotography8BitImageStorage;//("1.2.840.10008.5.1.4.1.1.77.1.5.1", "Ophthalmic Photography 8 Bit Image Storage", DicomUidType.SOPClass, false);

///<summary>SOP Class: Ophthalmic Photography 16 Bit Image Storage</summary>
    static DicomUID OphthalmicPhotography16BitImageStorage;//("1.2.840.10008.5.1.4.1.1.77.1.5.2", "Ophthalmic Photography 16 Bit Image Storage", DicomUidType.SOPClass, false);

///<summary>SOP Class: Stereometric Relationship Storage</summary>
    static DicomUID StereometricRelationshipStorage;//("1.2.840.10008.5.1.4.1.1.77.1.5.3", "Stereometric Relationship Storage", DicomUidType.SOPClass, false);

///<summary>SOP Class: Ophthalmic Tomography Image Storage</summary>
    static DicomUID OphthalmicTomographyImageStorage;//("1.2.840.10008.5.1.4.1.1.77.1.5.4", "Ophthalmic Tomography Image Storage", DicomUidType.SOPClass, false);

///<summary>SOP Class: Wide Field Ophthalmic Photography Stereographic Projection Image Storage</summary>
    static DicomUID WideFieldOphthalmicPhotographyStereographicProjectionImageStorage;//("1.2.840.10008.5.1.4.1.1.77.1.5.5", "Wide Field Ophthalmic Photography Stereographic Projection Image Storage", DicomUidType.SOPClass, false);

///<summary>SOP Class: Wide Field Ophthalmic Photography 3D Coordinates Image Storage</summary>
    static DicomUID WideFieldOphthalmicPhotography3DCoordinatesImageStorage;//("1.2.840.10008.5.1.4.1.1.77.1.5.6", "Wide Field Ophthalmic Photography 3D Coordinates Image Storage", DicomUidType.SOPClass, false);

///<summary>SOP Class: Ophthalmic Optical Coherence Tomography En Face Image Storage</summary>
    static DicomUID OphthalmicOpticalCoherenceTomographyEnFaceImageStorage;//("1.2.840.10008.5.1.4.1.1.77.1.5.7", "Ophthalmic Optical Coherence Tomography En Face Image Storage", DicomUidType.SOPClass, false);

///<summary>SOP Class: Ophthalmic Optical Coherence Tomography B-scan Volume Analysis Storage</summary>
    static DicomUID OphthalmicOpticalCoherenceTomographyBscanVolumeAnalysisStorage;//("1.2.840.10008.5.1.4.1.1.77.1.5.8", "Ophthalmic Optical Coherence Tomography B-scan Volume Analysis Storage", DicomUidType.SOPClass, false);

///<summary>SOP Class: VL Whole Slide Microscopy Image Storage</summary>
    static DicomUID VLWholeSlideMicroscopyImageStorage;//("1.2.840.10008.5.1.4.1.1.77.1.6", "VL Whole Slide Microscopy Image Storage", DicomUidType.SOPClass, false);

///<summary>SOP Class: Dermoscopic Photography Image Storage</summary>
    static DicomUID DermoscopicPhotographyImageStorage;//("1.2.840.10008.5.1.4.1.1.77.1.7", "Dermoscopic Photography Image Storage", DicomUidType.SOPClass, false);

///<summary>SOP Class: Lensometry Measurements Storage</summary>
    static DicomUID LensometryMeasurementsStorage;//("1.2.840.10008.5.1.4.1.1.78.1", "Lensometry Measurements Storage", DicomUidType.SOPClass, false);

///<summary>SOP Class: Autorefraction Measurements Storage</summary>
    static DicomUID AutorefractionMeasurementsStorage;//("1.2.840.10008.5.1.4.1.1.78.2", "Autorefraction Measurements Storage", DicomUidType.SOPClass, false);

///<summary>SOP Class: Keratometry Measurements Storage</summary>
    static DicomUID KeratometryMeasurementsStorage;//("1.2.840.10008.5.1.4.1.1.78.3", "Keratometry Measurements Storage", DicomUidType.SOPClass, false);

///<summary>SOP Class: Subjective Refraction Measurements Storage</summary>
    static DicomUID SubjectiveRefractionMeasurementsStorage;//("1.2.840.10008.5.1.4.1.1.78.4", "Subjective Refraction Measurements Storage", DicomUidType.SOPClass, false);

///<summary>SOP Class: Visual Acuity Measurements Storage</summary>
    static DicomUID VisualAcuityMeasurementsStorage;//("1.2.840.10008.5.1.4.1.1.78.5", "Visual Acuity Measurements Storage", DicomUidType.SOPClass, false);

///<summary>SOP Class: Spectacle Prescription Report Storage</summary>
    static DicomUID SpectaclePrescriptionReportStorage;//("1.2.840.10008.5.1.4.1.1.78.6", "Spectacle Prescription Report Storage", DicomUidType.SOPClass, false);

///<summary>SOP Class: Ophthalmic Axial Measurements Storage</summary>
    static DicomUID OphthalmicAxialMeasurementsStorage;//("1.2.840.10008.5.1.4.1.1.78.7", "Ophthalmic Axial Measurements Storage", DicomUidType.SOPClass, false);

///<summary>SOP Class: Intraocular Lens Calculations Storage</summary>
    static DicomUID IntraocularLensCalculationsStorage;//("1.2.840.10008.5.1.4.1.1.78.8", "Intraocular Lens Calculations Storage", DicomUidType.SOPClass, false);

///<summary>SOP Class: Macular Grid Thickness and Volume Report Storage</summary>
    static DicomUID MacularGridThicknessAndVolumeReportStorage;//("1.2.840.10008.5.1.4.1.1.79.1", "Macular Grid Thickness and Volume Report Storage", DicomUidType.SOPClass, false);

///<summary>SOP Class: Ophthalmic Visual Field Static Perimetry Measurements Storage</summary>
    static DicomUID OphthalmicVisualFieldStaticPerimetryMeasurementsStorage;//("1.2.840.10008.5.1.4.1.1.80.1", "Ophthalmic Visual Field Static Perimetry Measurements Storage", DicomUidType.SOPClass, false);

///<summary>SOP Class: Ophthalmic Thickness Map Storage</summary>
    static DicomUID OphthalmicThicknessMapStorage;//("1.2.840.10008.5.1.4.1.1.81.1", "Ophthalmic Thickness Map Storage", DicomUidType.SOPClass, false);

///<summary>SOP Class: Corneal Topography Map Storage</summary>
    static DicomUID CornealTopographyMapStorage;//("1.2.840.10008.5.1.4.1.1.82.1", "Corneal Topography Map Storage", DicomUidType.SOPClass, false);

///<summary>SOP Class: Text SR Storage - Trial (Retired)</summary>
    static DicomUID TextSRStorageTrialRETIRED;//("1.2.840.10008.5.1.4.1.1.88.1", "Text SR Storage - Trial (Retired)", DicomUidType.SOPClass, true);

///<summary>SOP Class: Audio SR Storage - Trial (Retired)</summary>
    static DicomUID AudioSRStorageTrialRETIRED;//("1.2.840.10008.5.1.4.1.1.88.2", "Audio SR Storage - Trial (Retired)", DicomUidType.SOPClass, true);

///<summary>SOP Class: Detail SR Storage - Trial (Retired)</summary>
    static DicomUID DetailSRStorageTrialRETIRED;//("1.2.840.10008.5.1.4.1.1.88.3", "Detail SR Storage - Trial (Retired)", DicomUidType.SOPClass, true);

///<summary>SOP Class: Comprehensive SR Storage - Trial (Retired)</summary>
    static DicomUID ComprehensiveSRStorageTrialRETIRED;//("1.2.840.10008.5.1.4.1.1.88.4", "Comprehensive SR Storage - Trial (Retired)", DicomUidType.SOPClass, true);

///<summary>SOP Class: Basic Text SR Storage</summary>
    static DicomUID BasicTextSRStorage;//("1.2.840.10008.5.1.4.1.1.88.11", "Basic Text SR Storage", DicomUidType.SOPClass, false);

///<summary>SOP Class: Enhanced SR Storage</summary>
    static DicomUID EnhancedSRStorage;//("1.2.840.10008.5.1.4.1.1.88.22", "Enhanced SR Storage", DicomUidType.SOPClass, false);

///<summary>SOP Class: Comprehensive SR Storage</summary>
    static DicomUID ComprehensiveSRStorage;//("1.2.840.10008.5.1.4.1.1.88.33", "Comprehensive SR Storage", DicomUidType.SOPClass, false);

///<summary>SOP Class: Comprehensive 3D SR Storage</summary>
    static DicomUID Comprehensive3DSRStorage;//("1.2.840.10008.5.1.4.1.1.88.34", "Comprehensive 3D SR Storage", DicomUidType.SOPClass, false);

///<summary>SOP Class: Extensible SR Storage</summary>
    static DicomUID ExtensibleSRStorage;//("1.2.840.10008.5.1.4.1.1.88.35", "Extensible SR Storage", DicomUidType.SOPClass, false);

///<summary>SOP Class: Procedure Log Storage</summary>
    static DicomUID ProcedureLogStorage;//("1.2.840.10008.5.1.4.1.1.88.40", "Procedure Log Storage", DicomUidType.SOPClass, false);

///<summary>SOP Class: Mammography CAD SR Storage</summary>
    static DicomUID MammographyCADSRStorage;//("1.2.840.10008.5.1.4.1.1.88.50", "Mammography CAD SR Storage", DicomUidType.SOPClass, false);

///<summary>SOP Class: Key Object Selection Document Storage</summary>
    static DicomUID KeyObjectSelectionDocumentStorage;//("1.2.840.10008.5.1.4.1.1.88.59", "Key Object Selection Document Storage", DicomUidType.SOPClass, false);

///<summary>SOP Class: Chest CAD SR Storage</summary>
    static DicomUID ChestCADSRStorage;//("1.2.840.10008.5.1.4.1.1.88.65", "Chest CAD SR Storage", DicomUidType.SOPClass, false);

///<summary>SOP Class: X-Ray Radiation Dose SR Storage</summary>
    static DicomUID XRayRadiationDoseSRStorage;//("1.2.840.10008.5.1.4.1.1.88.67", "X-Ray Radiation Dose SR Storage", DicomUidType.SOPClass, false);

///<summary>SOP Class: Radiopharmaceutical Radiation Dose SR Storage</summary>
    static DicomUID RadiopharmaceuticalRadiationDoseSRStorage;//("1.2.840.10008.5.1.4.1.1.88.68", "Radiopharmaceutical Radiation Dose SR Storage", DicomUidType.SOPClass, false);

///<summary>SOP Class: Colon CAD SR Storage</summary>
    static DicomUID ColonCADSRStorage;//("1.2.840.10008.5.1.4.1.1.88.69", "Colon CAD SR Storage", DicomUidType.SOPClass, false);

///<summary>SOP Class: Implantation Plan SR Storage</summary>
    static DicomUID ImplantationPlanSRStorage;//("1.2.840.10008.5.1.4.1.1.88.70", "Implantation Plan SR Storage", DicomUidType.SOPClass, false);

///<summary>SOP Class: Acquisition Context SR Storage</summary>
    static DicomUID AcquisitionContextSRStorage;//("1.2.840.10008.5.1.4.1.1.88.71", "Acquisition Context SR Storage", DicomUidType.SOPClass, false);

///<summary>SOP Class: Simplified Adult Echo SR Storage</summary>
    static DicomUID SimplifiedAdultEchoSRStorage;//("1.2.840.10008.5.1.4.1.1.88.72", "Simplified Adult Echo SR Storage", DicomUidType.SOPClass, false);

///<summary>SOP Class: Patient Radiation Dose SR Storage</summary>
    static DicomUID PatientRadiationDoseSRStorage;//("1.2.840.10008.5.1.4.1.1.88.73", "Patient Radiation Dose SR Storage", DicomUidType.SOPClass, false);

///<summary>SOP Class: Planned Imaging Agent Administration SR Storage</summary>
    static DicomUID PlannedImagingAgentAdministrationSRStorage;//("1.2.840.10008.5.1.4.1.1.88.74", "Planned Imaging Agent Administration SR Storage", DicomUidType.SOPClass, false);

///<summary>SOP Class: Performed Imaging Agent Administration SR Storage</summary>
    static DicomUID PerformedImagingAgentAdministrationSRStorage;//("1.2.840.10008.5.1.4.1.1.88.75", "Performed Imaging Agent Administration SR Storage", DicomUidType.SOPClass, false);

///<summary>SOP Class: Enhanced X-Ray Radiation Dose SR Storage</summary>
    static DicomUID EnhancedXRayRadiationDoseSRStorage;//("1.2.840.10008.5.1.4.1.1.88.76", "Enhanced X-Ray Radiation Dose SR Storage", DicomUidType.SOPClass, false);

///<summary>SOP Class: Content Assessment Results Storage</summary>
    static DicomUID ContentAssessmentResultsStorage;//("1.2.840.10008.5.1.4.1.1.90.1", "Content Assessment Results Storage", DicomUidType.SOPClass, false);

///<summary>SOP Class: Encapsulated PDF Storage</summary>
    static DicomUID EncapsulatedPDFStorage;//("1.2.840.10008.5.1.4.1.1.104.1", "Encapsulated PDF Storage", DicomUidType.SOPClass, false);

///<summary>SOP Class: Encapsulated CDA Storage</summary>
    static DicomUID EncapsulatedCDAStorage;//("1.2.840.10008.5.1.4.1.1.104.2", "Encapsulated CDA Storage", DicomUidType.SOPClass, false);

///<summary>SOP Class: Encapsulated STL Storage</summary>
    static DicomUID EncapsulatedSTLStorage;//("1.2.840.10008.5.1.4.1.1.104.3", "Encapsulated STL Storage", DicomUidType.SOPClass, false);

///<summary>SOP Class: Encapsulated OBJ Storage</summary>
    static DicomUID EncapsulatedOBJStorage;//("1.2.840.10008.5.1.4.1.1.104.4", "Encapsulated OBJ Storage", DicomUidType.SOPClass, false);

///<summary>SOP Class: Encapsulated MTL Storage</summary>
    static DicomUID EncapsulatedMTLStorage;//("1.2.840.10008.5.1.4.1.1.104.5", "Encapsulated MTL Storage", DicomUidType.SOPClass, false);

///<summary>SOP Class: Positron Emission Tomography Image Storage</summary>
    static DicomUID PositronEmissionTomographyImageStorage;//("1.2.840.10008.5.1.4.1.1.128", "Positron Emission Tomography Image Storage", DicomUidType.SOPClass, false);

///<summary>SOP Class: Legacy Converted Enhanced PET Image Storage</summary>
    static DicomUID LegacyConvertedEnhancedPETImageStorage;//("1.2.840.10008.5.1.4.1.1.128.1", "Legacy Converted Enhanced PET Image Storage", DicomUidType.SOPClass, false);

///<summary>SOP Class: Standalone PET Curve Storage (Retired)</summary>
    static DicomUID StandalonePETCurveStorageRETIRED;//("1.2.840.10008.5.1.4.1.1.129", "Standalone PET Curve Storage (Retired)", DicomUidType.SOPClass, true);

///<summary>SOP Class: Enhanced PET Image Storage</summary>
    static DicomUID EnhancedPETImageStorage;//("1.2.840.10008.5.1.4.1.1.130", "Enhanced PET Image Storage", DicomUidType.SOPClass, false);

///<summary>SOP Class: Basic Structured Display Storage</summary>
    static DicomUID BasicStructuredDisplayStorage;//("1.2.840.10008.5.1.4.1.1.131", "Basic Structured Display Storage", DicomUidType.SOPClass, false);

///<summary>SOP Class: CT Defined Procedure Protocol Storage</summary>
    static DicomUID CTDefinedProcedureProtocolStorage;//("1.2.840.10008.5.1.4.1.1.200.1", "CT Defined Procedure Protocol Storage", DicomUidType.SOPClass, false);

///<summary>SOP Class: CT Performed Procedure Protocol Storage</summary>
    static DicomUID CTPerformedProcedureProtocolStorage;//("1.2.840.10008.5.1.4.1.1.200.2", "CT Performed Procedure Protocol Storage", DicomUidType.SOPClass, false);

///<summary>SOP Class: Protocol Approval Storage</summary>
    static DicomUID ProtocolApprovalStorage;//("1.2.840.10008.5.1.4.1.1.200.3", "Protocol Approval Storage", DicomUidType.SOPClass, false);

///<summary>SOP Class: Protocol Approval Information Model - FIND</summary>
    static DicomUID ProtocolApprovalInformationModelFind;//("1.2.840.10008.5.1.4.1.1.200.4", "Protocol Approval Information Model - FIND", DicomUidType.SOPClass, false);

///<summary>SOP Class: Protocol Approval Information Model - MOVE</summary>
    static DicomUID ProtocolApprovalInformationModelMove;//("1.2.840.10008.5.1.4.1.1.200.5", "Protocol Approval Information Model - MOVE", DicomUidType.SOPClass, false);

///<summary>SOP Class: Protocol Approval Information Model - GET</summary>
    static DicomUID ProtocolApprovalInformationModelGet;//("1.2.840.10008.5.1.4.1.1.200.6", "Protocol Approval Information Model - GET", DicomUidType.SOPClass, false);

///<summary>SOP Class: XA Defined Procedure Protocol Storage</summary>
    static DicomUID XADefinedProcedureProtocolStorage;//("1.2.840.10008.5.1.4.1.1.200.7", "XA Defined Procedure Protocol Storage", DicomUidType.SOPClass, false);

///<summary>SOP Class: XA Performed Procedure Protocol Storage</summary>
    static DicomUID XAPerformedProcedureProtocolStorage;//("1.2.840.10008.5.1.4.1.1.200.8", "XA Performed Procedure Protocol Storage", DicomUidType.SOPClass, false);

///<summary>SOP Class: RT Image Storage</summary>
    static DicomUID RTImageStorage;//("1.2.840.10008.5.1.4.1.1.481.1", "RT Image Storage", DicomUidType.SOPClass, false);

///<summary>SOP Class: RT Dose Storage</summary>
    static DicomUID RTDoseStorage;//("1.2.840.10008.5.1.4.1.1.481.2", "RT Dose Storage", DicomUidType.SOPClass, false);

///<summary>SOP Class: RT Structure Set Storage</summary>
    static DicomUID RTStructureSetStorage;//("1.2.840.10008.5.1.4.1.1.481.3", "RT Structure Set Storage", DicomUidType.SOPClass, false);

///<summary>SOP Class: RT Beams Treatment Record Storage</summary>
    static DicomUID RTBeamsTreatmentRecordStorage;//("1.2.840.10008.5.1.4.1.1.481.4", "RT Beams Treatment Record Storage", DicomUidType.SOPClass, false);

///<summary>SOP Class: RT Plan Storage</summary>
    static DicomUID RTPlanStorage;//("1.2.840.10008.5.1.4.1.1.481.5", "RT Plan Storage", DicomUidType.SOPClass, false);

///<summary>SOP Class: RT Brachy Treatment Record Storage</summary>
    static DicomUID RTBrachyTreatmentRecordStorage;//("1.2.840.10008.5.1.4.1.1.481.6", "RT Brachy Treatment Record Storage", DicomUidType.SOPClass, false);

///<summary>SOP Class: RT Treatment Summary Record Storage</summary>
    static DicomUID RTTreatmentSummaryRecordStorage;//("1.2.840.10008.5.1.4.1.1.481.7", "RT Treatment Summary Record Storage", DicomUidType.SOPClass, false);

///<summary>SOP Class: RT Ion Plan Storage</summary>
    static DicomUID RTIonPlanStorage;//("1.2.840.10008.5.1.4.1.1.481.8", "RT Ion Plan Storage", DicomUidType.SOPClass, false);

///<summary>SOP Class: RT Ion Beams Treatment Record Storage</summary>
    static DicomUID RTIonBeamsTreatmentRecordStorage;//("1.2.840.10008.5.1.4.1.1.481.9", "RT Ion Beams Treatment Record Storage", DicomUidType.SOPClass, false);

///<summary>SOP Class: RT Physician Intent Storage</summary>
    static DicomUID RTPhysicianIntentStorage;//("1.2.840.10008.5.1.4.1.1.481.10", "RT Physician Intent Storage", DicomUidType.SOPClass, false);

///<summary>SOP Class: RT Segment Annotation Storage</summary>
    static DicomUID RTSegmentAnnotationStorage;//("1.2.840.10008.5.1.4.1.1.481.11", "RT Segment Annotation Storage", DicomUidType.SOPClass, false);

///<summary>SOP Class: RT Radiation Set Storage</summary>
    static DicomUID RTRadiationSetStorage;//("1.2.840.10008.5.1.4.1.1.481.12", "RT Radiation Set Storage", DicomUidType.SOPClass, false);

///<summary>SOP Class: C-Arm Photon-Electron Radiation Storage</summary>
    static DicomUID CArmPhotonElectronRadiationStorage;//("1.2.840.10008.5.1.4.1.1.481.13", "C-Arm Photon-Electron Radiation Storage", DicomUidType.SOPClass, false);

///<summary>SOP Class: Tomotherapeutic Radiation Storage</summary>
    static DicomUID TomotherapeuticRadiationStorage;//("1.2.840.10008.5.1.4.1.1.481.14", "Tomotherapeutic Radiation Storage", DicomUidType.SOPClass, false);

///<summary>SOP Class: Robotic-Arm Radiation Storage</summary>
    static DicomUID RoboticArmRadiationStorage;//("1.2.840.10008.5.1.4.1.1.481.15", "Robotic-Arm Radiation Storage", DicomUidType.SOPClass, false);

///<summary>SOP Class: RT Radiation Record Set Storage</summary>
    static DicomUID RTRadiationRecordSetStorage;//("1.2.840.10008.5.1.4.1.1.481.16", "RT Radiation Record Set Storage", DicomUidType.SOPClass, false);

///<summary>SOP Class: RT Radiation Salvage Record Storage</summary>
    static DicomUID RTRadiationSalvageRecordStorage;//("1.2.840.10008.5.1.4.1.1.481.17", "RT Radiation Salvage Record Storage", DicomUidType.SOPClass, false);

///<summary>SOP Class: Tomotherapeutic Radiation Record Storage</summary>
    static DicomUID TomotherapeuticRadiationRecordStorage;//("1.2.840.10008.5.1.4.1.1.481.18", "Tomotherapeutic Radiation Record Storage", DicomUidType.SOPClass, false);

///<summary>SOP Class: C-Arm Photon-Electron Radiation Record Storage</summary>
    static DicomUID CArmPhotonElectronRadiationRecordStorage;//("1.2.840.10008.5.1.4.1.1.481.19", "C-Arm Photon-Electron Radiation Record Storage", DicomUidType.SOPClass, false);

///<summary>SOP Class: Robotic Radiation Record Storage</summary>
    static DicomUID RoboticRadiationRecordStorage;//("1.2.840.10008.5.1.4.1.1.481.20", "Robotic Radiation Record Storage", DicomUidType.SOPClass, false);

///<summary>SOP Class: DICOS CT Image Storage</summary>
    static DicomUID DICOSCTImageStorage;//("1.2.840.10008.5.1.4.1.1.501.1", "DICOS CT Image Storage", DicomUidType.SOPClass, false);

///<summary>SOP Class: DICOS Digital X-Ray Image Storage - For Presentation</summary>
    static DicomUID DICOSDigitalXRayImageStorageForPresentation;//("1.2.840.10008.5.1.4.1.1.501.2.1", "DICOS Digital X-Ray Image Storage - For Presentation", DicomUidType.SOPClass, false);

///<summary>SOP Class: DICOS Digital X-Ray Image Storage - For Processing</summary>
    static DicomUID DICOSDigitalXRayImageStorageForProcessing;//("1.2.840.10008.5.1.4.1.1.501.2.2", "DICOS Digital X-Ray Image Storage - For Processing", DicomUidType.SOPClass, false);

///<summary>SOP Class: DICOS Threat Detection Report Storage</summary>
    static DicomUID DICOSThreatDetectionReportStorage;//("1.2.840.10008.5.1.4.1.1.501.3", "DICOS Threat Detection Report Storage", DicomUidType.SOPClass, false);

///<summary>SOP Class: DICOS 2D AIT Storage</summary>
    static DicomUID DICOS2DAITStorage;//("1.2.840.10008.5.1.4.1.1.501.4", "DICOS 2D AIT Storage", DicomUidType.SOPClass, false);

///<summary>SOP Class: DICOS 3D AIT Storage</summary>
    static DicomUID DICOS3DAITStorage;//("1.2.840.10008.5.1.4.1.1.501.5", "DICOS 3D AIT Storage", DicomUidType.SOPClass, false);

///<summary>SOP Class: DICOS Quadrupole Resonance (QR) Storage</summary>
    static DicomUID DICOSQuadrupoleResonanceStorage;//("1.2.840.10008.5.1.4.1.1.501.6", "DICOS Quadrupole Resonance (QR) Storage", DicomUidType.SOPClass, false);

///<summary>SOP Class: Eddy Current Image Storage</summary>
    static DicomUID EddyCurrentImageStorage;//("1.2.840.10008.5.1.4.1.1.601.1", "Eddy Current Image Storage", DicomUidType.SOPClass, false);

///<summary>SOP Class: Eddy Current Multi-frame Image Storage</summary>
    static DicomUID EddyCurrentMultiFrameImageStorage;//("1.2.840.10008.5.1.4.1.1.601.2", "Eddy Current Multi-frame Image Storage", DicomUidType.SOPClass, false);

///<summary>SOP Class: Patient Root Query/Retrieve Information Model - FIND</summary>
    static DicomUID PatientRootQueryRetrieveInformationModelFind;//("1.2.840.10008.5.1.4.1.2.1.1", "Patient Root Query/Retrieve Information Model - FIND", DicomUidType.SOPClass, false);

///<summary>SOP Class: Patient Root Query/Retrieve Information Model - MOVE</summary>
    static DicomUID PatientRootQueryRetrieveInformationModelMove;//("1.2.840.10008.5.1.4.1.2.1.2", "Patient Root Query/Retrieve Information Model - MOVE", DicomUidType.SOPClass, false);

///<summary>SOP Class: Patient Root Query/Retrieve Information Model - GET</summary>
    static DicomUID PatientRootQueryRetrieveInformationModelGet;//("1.2.840.10008.5.1.4.1.2.1.3", "Patient Root Query/Retrieve Information Model - GET", DicomUidType.SOPClass, false);

///<summary>SOP Class: Study Root Query/Retrieve Information Model - FIND</summary>
    static DicomUID StudyRootQueryRetrieveInformationModelFind;//("1.2.840.10008.5.1.4.1.2.2.1", "Study Root Query/Retrieve Information Model - FIND", DicomUidType.SOPClass, false);

///<summary>SOP Class: Study Root Query/Retrieve Information Model - MOVE</summary>
    static DicomUID StudyRootQueryRetrieveInformationModelMove;//("1.2.840.10008.5.1.4.1.2.2.2", "Study Root Query/Retrieve Information Model - MOVE", DicomUidType.SOPClass, false);

///<summary>SOP Class: Study Root Query/Retrieve Information Model - GET</summary>
    static DicomUID StudyRootQueryRetrieveInformationModelGet;//("1.2.840.10008.5.1.4.1.2.2.3", "Study Root Query/Retrieve Information Model - GET", DicomUidType.SOPClass, false);

///<summary>SOP Class: Patient/Study Only Query/Retrieve Information Model - FIND (Retired)</summary>
    static DicomUID PatientStudyOnlyQueryRetrieveInformationModelFindRETIRED;//("1.2.840.10008.5.1.4.1.2.3.1", "Patient/Study Only Query/Retrieve Information Model - FIND (Retired)", DicomUidType.SOPClass, true);

///<summary>SOP Class: Patient/Study Only Query/Retrieve Information Model - MOVE (Retired)</summary>
    static DicomUID PatientStudyOnlyQueryRetrieveInformationModelMoveRETIRED;//("1.2.840.10008.5.1.4.1.2.3.2", "Patient/Study Only Query/Retrieve Information Model - MOVE (Retired)", DicomUidType.SOPClass, true);

///<summary>SOP Class: Patient/Study Only Query/Retrieve Information Model - GET (Retired)</summary>
    static DicomUID PatientStudyOnlyQueryRetrieveInformationModelGetRETIRED;//("1.2.840.10008.5.1.4.1.2.3.3", "Patient/Study Only Query/Retrieve Information Model - GET (Retired)", DicomUidType.SOPClass, true);

///<summary>SOP Class: Composite Instance Root Retrieve - MOVE</summary>
    static DicomUID CompositeInstanceRootRetrieveMove;//("1.2.840.10008.5.1.4.1.2.4.2", "Composite Instance Root Retrieve - MOVE", DicomUidType.SOPClass, false);

///<summary>SOP Class: Composite Instance Root Retrieve - GET</summary>
    static DicomUID CompositeInstanceRootRetrieveGet;//("1.2.840.10008.5.1.4.1.2.4.3", "Composite Instance Root Retrieve - GET", DicomUidType.SOPClass, false);

///<summary>SOP Class: Composite Instance Retrieve Without Bulk Data - GET</summary>
    static DicomUID CompositeInstanceRetrieveWithoutBulkDataGet;//("1.2.840.10008.5.1.4.1.2.5.3", "Composite Instance Retrieve Without Bulk Data - GET", DicomUidType.SOPClass, false);

///<summary>SOP Class: Defined Procedure Protocol Information Model - FIND</summary>
    static DicomUID DefinedProcedureProtocolInformationModelFind;//("1.2.840.10008.5.1.4.20.1", "Defined Procedure Protocol Information Model - FIND", DicomUidType.SOPClass, false);

///<summary>SOP Class: Defined Procedure Protocol Information Model - MOVE</summary>
    static DicomUID DefinedProcedureProtocolInformationModelMove;//("1.2.840.10008.5.1.4.20.2", "Defined Procedure Protocol Information Model - MOVE", DicomUidType.SOPClass, false);

///<summary>SOP Class: Defined Procedure Protocol Information Model - GET</summary>
    static DicomUID DefinedProcedureProtocolInformationModelGet;//("1.2.840.10008.5.1.4.20.3", "Defined Procedure Protocol Information Model - GET", DicomUidType.SOPClass, false);

///<summary>SOP Class: Modality Worklist Information Model - FIND</summary>
    static DicomUID ModalityWorklistInformationModelFind;//("1.2.840.10008.5.1.4.31", "Modality Worklist Information Model - FIND", DicomUidType.SOPClass, false);

///<summary>Meta SOP Class: General Purpose Worklist Management Meta SOP Class (Retired)</summary>
    static DicomUID GeneralPurposeWorklistManagementMetaRETIRED;//("1.2.840.10008.5.1.4.32", "General Purpose Worklist Management Meta SOP Class (Retired)", DicomUidType.MetaSOPClass, true);

///<summary>SOP Class: General Purpose Worklist Information Model - FIND (Retired)</summary>
    static DicomUID GeneralPurposeWorklistInformationModelFindRETIRED;//("1.2.840.10008.5.1.4.32.1", "General Purpose Worklist Information Model - FIND (Retired)", DicomUidType.SOPClass, true);

///<summary>SOP Class: General Purpose Scheduled Procedure Step SOP Class (Retired)</summary>
    static DicomUID GeneralPurposeScheduledProcedureStepRETIRED;//("1.2.840.10008.5.1.4.32.2", "General Purpose Scheduled Procedure Step SOP Class (Retired)", DicomUidType.SOPClass, true);

///<summary>SOP Class: General Purpose Performed Procedure Step SOP Class (Retired)</summary>
    static DicomUID GeneralPurposePerformedProcedureStepRETIRED;//("1.2.840.10008.5.1.4.32.3", "General Purpose Performed Procedure Step SOP Class (Retired)", DicomUidType.SOPClass, true);

///<summary>SOP Class: Instance Availability Notification SOP Class</summary>
    static DicomUID InstanceAvailabilityNotification;//("1.2.840.10008.5.1.4.33", "Instance Availability Notification SOP Class", DicomUidType.SOPClass, false);

///<summary>SOP Class: RT Beams Delivery Instruction Storage - Trial (Retired)</summary>
    static DicomUID RTBeamsDeliveryInstructionStorageTrialRETIRED;//("1.2.840.10008.5.1.4.34.1", "RT Beams Delivery Instruction Storage - Trial (Retired)", DicomUidType.SOPClass, true);

///<summary>SOP Class: RT Conventional Machine Verification - Trial (Retired)</summary>
    static DicomUID RTConventionalMachineVerificationTrialRETIRED;//("1.2.840.10008.5.1.4.34.2", "RT Conventional Machine Verification - Trial (Retired)", DicomUidType.SOPClass, true);

///<summary>SOP Class: RT Ion Machine Verification - Trial (Retired)</summary>
    static DicomUID RTIonMachineVerificationTrialRETIRED;//("1.2.840.10008.5.1.4.34.3", "RT Ion Machine Verification - Trial (Retired)", DicomUidType.SOPClass, true);

///<summary>Service Class: Unified Worklist and Procedure Step Service Class - Trial (Retired)</summary>
    static DicomUID UnifiedWorklistAndProcedureStepTrialRETIRED;//("1.2.840.10008.5.1.4.34.4", "Unified Worklist and Procedure Step Service Class - Trial (Retired)", DicomUidType.ServiceClass, true);

///<summary>SOP Class: Unified Procedure Step - Push SOP Class - Trial (Retired)</summary>
    static DicomUID UnifiedProcedureStepPushTrialRETIRED;//("1.2.840.10008.5.1.4.34.4.1", "Unified Procedure Step - Push SOP Class - Trial (Retired)", DicomUidType.SOPClass, true);

///<summary>SOP Class: Unified Procedure Step - Watch SOP Class - Trial (Retired)</summary>
    static DicomUID UnifiedProcedureStepWatchTrialRETIRED;//("1.2.840.10008.5.1.4.34.4.2", "Unified Procedure Step - Watch SOP Class - Trial (Retired)", DicomUidType.SOPClass, true);

///<summary>SOP Class: Unified Procedure Step - Pull SOP Class - Trial (Retired)</summary>
    static DicomUID UnifiedProcedureStepPullTrialRETIRED;//("1.2.840.10008.5.1.4.34.4.3", "Unified Procedure Step - Pull SOP Class - Trial (Retired)", DicomUidType.SOPClass, true);

///<summary>SOP Class: Unified Procedure Step - Event SOP Class - Trial (Retired)</summary>
    static DicomUID UnifiedProcedureStepEventTrialRETIRED;//("1.2.840.10008.5.1.4.34.4.4", "Unified Procedure Step - Event SOP Class - Trial (Retired)", DicomUidType.SOPClass, true);

///<summary>Well-known SOP Instance: UPS Global Subscription SOP Instance</summary>
    static DicomUID UPSGlobalSubscriptionInstance;//("1.2.840.10008.5.1.4.34.5", "UPS Global Subscription SOP Instance", DicomUidType.SOPInstance, false);

///<summary>Well-known SOP Instance: UPS Filtered Global Subscription SOP Instance</summary>
    static DicomUID UPSFilteredGlobalSubscriptionInstance;//("1.2.840.10008.5.1.4.34.5.1", "UPS Filtered Global Subscription SOP Instance", DicomUidType.SOPInstance, false);

///<summary>Service Class: Unified Worklist and Procedure Step Service Class</summary>
    static DicomUID UnifiedWorklistAndProcedureStep;//("1.2.840.10008.5.1.4.34.6", "Unified Worklist and Procedure Step Service Class", DicomUidType.ServiceClass, false);

///<summary>SOP Class: Unified Procedure Step - Push SOP Class</summary>
    static DicomUID UnifiedProcedureStepPush;//("1.2.840.10008.5.1.4.34.6.1", "Unified Procedure Step - Push SOP Class", DicomUidType.SOPClass, false);

///<summary>SOP Class: Unified Procedure Step - Watch SOP Class</summary>
    static DicomUID UnifiedProcedureStepWatch;//("1.2.840.10008.5.1.4.34.6.2", "Unified Procedure Step - Watch SOP Class", DicomUidType.SOPClass, false);

///<summary>SOP Class: Unified Procedure Step - Pull SOP Class</summary>
    static DicomUID UnifiedProcedureStepPull;//("1.2.840.10008.5.1.4.34.6.3", "Unified Procedure Step - Pull SOP Class", DicomUidType.SOPClass, false);

///<summary>SOP Class: Unified Procedure Step - Event SOP Class</summary>
    static DicomUID UnifiedProcedureStepEvent;//("1.2.840.10008.5.1.4.34.6.4", "Unified Procedure Step - Event SOP Class", DicomUidType.SOPClass, false);

///<summary>SOP Class: Unified Procedure Step - Query SOP Class</summary>
    static DicomUID UnifiedProcedureStepQuery;//("1.2.840.10008.5.1.4.34.6.5", "Unified Procedure Step - Query SOP Class", DicomUidType.SOPClass, false);

///<summary>SOP Class: RT Beams Delivery Instruction Storage</summary>
    static DicomUID RTBeamsDeliveryInstructionStorage;//("1.2.840.10008.5.1.4.34.7", "RT Beams Delivery Instruction Storage", DicomUidType.SOPClass, false);

///<summary>SOP Class: RT Conventional Machine Verification</summary>
    static DicomUID RTConventionalMachineVerification;//("1.2.840.10008.5.1.4.34.8", "RT Conventional Machine Verification", DicomUidType.SOPClass, false);

///<summary>SOP Class: RT Ion Machine Verification</summary>
    static DicomUID RTIonMachineVerification;//("1.2.840.10008.5.1.4.34.9", "RT Ion Machine Verification", DicomUidType.SOPClass, false);

///<summary>SOP Class: RT Brachy Application Setup Delivery Instruction Storage</summary>
    static DicomUID RTBrachyApplicationSetupDeliveryInstructionStorage;//("1.2.840.10008.5.1.4.34.10", "RT Brachy Application Setup Delivery Instruction Storage", DicomUidType.SOPClass, false);

///<summary>SOP Class: General Relevant Patient Information Query</summary>
    static DicomUID GeneralRelevantPatientInformationQuery;//("1.2.840.10008.5.1.4.37.1", "General Relevant Patient Information Query", DicomUidType.SOPClass, false);

///<summary>SOP Class: Breast Imaging Relevant Patient Information Query</summary>
    static DicomUID BreastImagingRelevantPatientInformationQuery;//("1.2.840.10008.5.1.4.37.2", "Breast Imaging Relevant Patient Information Query", DicomUidType.SOPClass, false);

///<summary>SOP Class: Cardiac Relevant Patient Information Query</summary>
    static DicomUID CardiacRelevantPatientInformationQuery;//("1.2.840.10008.5.1.4.37.3", "Cardiac Relevant Patient Information Query", DicomUidType.SOPClass, false);

///<summary>SOP Class: Hanging Protocol Storage</summary>
    static DicomUID HangingProtocolStorage;//("1.2.840.10008.5.1.4.38.1", "Hanging Protocol Storage", DicomUidType.SOPClass, false);

///<summary>SOP Class: Hanging Protocol Information Model - FIND</summary>
    static DicomUID HangingProtocolInformationModelFind;//("1.2.840.10008.5.1.4.38.2", "Hanging Protocol Information Model - FIND", DicomUidType.SOPClass, false);

///<summary>SOP Class: Hanging Protocol Information Model - MOVE</summary>
    static DicomUID HangingProtocolInformationModelMove;//("1.2.840.10008.5.1.4.38.3", "Hanging Protocol Information Model - MOVE", DicomUidType.SOPClass, false);

///<summary>SOP Class: Hanging Protocol Information Model - GET</summary>
    static DicomUID HangingProtocolInformationModelGet;//("1.2.840.10008.5.1.4.38.4", "Hanging Protocol Information Model - GET", DicomUidType.SOPClass, false);

///<summary>SOP Class: Color Palette Storage</summary>
    static DicomUID ColorPaletteStorage;//("1.2.840.10008.5.1.4.39.1", "Color Palette Storage", DicomUidType.SOPClass, false);

///<summary>SOP Class: Color Palette Query/Retrieve Information Model - FIND</summary>
    static DicomUID ColorPaletteQueryRetrieveInformationModelFind;//("1.2.840.10008.5.1.4.39.2", "Color Palette Query/Retrieve Information Model - FIND", DicomUidType.SOPClass, false);

///<summary>SOP Class: Color Palette Query/Retrieve Information Model - MOVE</summary>
    static DicomUID ColorPaletteQueryRetrieveInformationModelMove;//("1.2.840.10008.5.1.4.39.3", "Color Palette Query/Retrieve Information Model - MOVE", DicomUidType.SOPClass, false);

///<summary>SOP Class: Color Palette Query/Retrieve Information Model - GET</summary>
    static DicomUID ColorPaletteQueryRetrieveInformationModelGet;//("1.2.840.10008.5.1.4.39.4", "Color Palette Query/Retrieve Information Model - GET", DicomUidType.SOPClass, false);

///<summary>SOP Class: Product Characteristics Query SOP Class</summary>
    static DicomUID ProductCharacteristicsQuery;//("1.2.840.10008.5.1.4.41", "Product Characteristics Query SOP Class", DicomUidType.SOPClass, false);

///<summary>SOP Class: Substance Approval Query SOP Class</summary>
    static DicomUID SubstanceApprovalQuery;//("1.2.840.10008.5.1.4.42", "Substance Approval Query SOP Class", DicomUidType.SOPClass, false);

///<summary>SOP Class: Generic Implant Template Storage</summary>
    static DicomUID GenericImplantTemplateStorage;//("1.2.840.10008.5.1.4.43.1", "Generic Implant Template Storage", DicomUidType.SOPClass, false);

///<summary>SOP Class: Generic Implant Template Information Model - FIND</summary>
    static DicomUID GenericImplantTemplateInformationModelFind;//("1.2.840.10008.5.1.4.43.2", "Generic Implant Template Information Model - FIND", DicomUidType.SOPClass, false);

///<summary>SOP Class: Generic Implant Template Information Model - MOVE</summary>
    static DicomUID GenericImplantTemplateInformationModelMove;//("1.2.840.10008.5.1.4.43.3", "Generic Implant Template Information Model - MOVE", DicomUidType.SOPClass, false);

///<summary>SOP Class: Generic Implant Template Information Model - GET</summary>
    static DicomUID GenericImplantTemplateInformationModelGet;//("1.2.840.10008.5.1.4.43.4", "Generic Implant Template Information Model - GET", DicomUidType.SOPClass, false);

///<summary>SOP Class: Implant Assembly Template Storage</summary>
    static DicomUID ImplantAssemblyTemplateStorage;//("1.2.840.10008.5.1.4.44.1", "Implant Assembly Template Storage", DicomUidType.SOPClass, false);

///<summary>SOP Class: Implant Assembly Template Information Model - FIND</summary>
    static DicomUID ImplantAssemblyTemplateInformationModelFind;//("1.2.840.10008.5.1.4.44.2", "Implant Assembly Template Information Model - FIND", DicomUidType.SOPClass, false);

///<summary>SOP Class: Implant Assembly Template Information Model - MOVE</summary>
    static DicomUID ImplantAssemblyTemplateInformationModelMove;//("1.2.840.10008.5.1.4.44.3", "Implant Assembly Template Information Model - MOVE", DicomUidType.SOPClass, false);

///<summary>SOP Class: Implant Assembly Template Information Model - GET</summary>
    static DicomUID ImplantAssemblyTemplateInformationModelGet;//("1.2.840.10008.5.1.4.44.4", "Implant Assembly Template Information Model - GET", DicomUidType.SOPClass, false);

///<summary>SOP Class: Implant Template Group Storage</summary>
    static DicomUID ImplantTemplateGroupStorage;//("1.2.840.10008.5.1.4.45.1", "Implant Template Group Storage", DicomUidType.SOPClass, false);

///<summary>SOP Class: Implant Template Group Information Model - FIND</summary>
    static DicomUID ImplantTemplateGroupInformationModelFind;//("1.2.840.10008.5.1.4.45.2", "Implant Template Group Information Model - FIND", DicomUidType.SOPClass, false);

///<summary>SOP Class: Implant Template Group Information Model - MOVE</summary>
    static DicomUID ImplantTemplateGroupInformationModelMove;//("1.2.840.10008.5.1.4.45.3", "Implant Template Group Information Model - MOVE", DicomUidType.SOPClass, false);

///<summary>SOP Class: Implant Template Group Information Model - GET</summary>
    static DicomUID ImplantTemplateGroupInformationModelGet;//("1.2.840.10008.5.1.4.45.4", "Implant Template Group Information Model - GET", DicomUidType.SOPClass, false);

///<summary>Application Hosting Model: Native DICOM Model</summary>
    static DicomUID NativeDICOMModel;//("1.2.840.10008.7.1.1", "Native DICOM Model", DicomUidType.ApplicationHostingModel, false);

///<summary>Application Hosting Model: Abstract Multi-Dimensional Image Model</summary>
    static DicomUID AbstractMultiDimensionalImageModel;//("1.2.840.10008.7.1.2", "Abstract Multi-Dimensional Image Model", DicomUidType.ApplicationHostingModel, false);

///<summary>Mapping Resource: DICOM Content Mapping Resource</summary>
    static DicomUID DICOMContentMappingResource;//("1.2.840.10008.8.1.1", "DICOM Content Mapping Resource", DicomUidType.MappingResource, false);

///<summary>SOP Class: Video Endoscopic Image Real-Time Communication</summary>
    static DicomUID VideoEndoscopicImageRealTimeCommunication;//("1.2.840.10008.10.1", "Video Endoscopic Image Real-Time Communication", DicomUidType.SOPClass, false);

///<summary>SOP Class: Video Photographic Image Real-Time Communication</summary>
    static DicomUID VideoPhotographicImageRealTimeCommunication;//("1.2.840.10008.10.2", "Video Photographic Image Real-Time Communication", DicomUidType.SOPClass, false);

///<summary>SOP Class: Audio Waveform Real-Time Communication</summary>
    static DicomUID AudioWaveformRealTimeCommunication;//("1.2.840.10008.10.3", "Audio Waveform Real-Time Communication", DicomUidType.SOPClass, false);

///<summary>SOP Class: Rendition Selection Document Real-Time Communication</summary>
    static DicomUID RenditionSelectionDocumentRealTimeCommunication;//("1.2.840.10008.10.4", "Rendition Selection Document Real-Time Communication", DicomUidType.SOPClass, false);

///<summary>LDAP OID: dicomDeviceName</summary>
    static DicomUID dicomDeviceName;//("1.2.840.10008.15.0.3.1", "dicomDeviceName", DicomUidType.LDAP, false);

///<summary>LDAP OID: dicomDescription</summary>
    static DicomUID dicomDescription;//("1.2.840.10008.15.0.3.2", "dicomDescription", DicomUidType.LDAP, false);

///<summary>LDAP OID: dicomManufacturer</summary>
    static DicomUID dicomManufacturer;//("1.2.840.10008.15.0.3.3", "dicomManufacturer", DicomUidType.LDAP, false);

///<summary>LDAP OID: dicomManufacturerModelName</summary>
    static DicomUID dicomManufacturerModelName;//("1.2.840.10008.15.0.3.4", "dicomManufacturerModelName", DicomUidType.LDAP, false);

///<summary>LDAP OID: dicomSoftwareVersion</summary>
    static DicomUID dicomSoftwareVersion;//("1.2.840.10008.15.0.3.5", "dicomSoftwareVersion", DicomUidType.LDAP, false);

///<summary>LDAP OID: dicomVendorData</summary>
    static DicomUID dicomVendorData;//("1.2.840.10008.15.0.3.6", "dicomVendorData", DicomUidType.LDAP, false);

///<summary>LDAP OID: dicomAETitle</summary>
    static DicomUID dicomAETitle;//("1.2.840.10008.15.0.3.7", "dicomAETitle", DicomUidType.LDAP, false);

///<summary>LDAP OID: dicomNetworkConnectionReference</summary>
    static DicomUID dicomNetworkConnectionReference;//("1.2.840.10008.15.0.3.8", "dicomNetworkConnectionReference", DicomUidType.LDAP, false);

///<summary>LDAP OID: dicomApplicationCluster</summary>
    static DicomUID dicomApplicationCluster;//("1.2.840.10008.15.0.3.9", "dicomApplicationCluster", DicomUidType.LDAP, false);

///<summary>LDAP OID: dicomAssociationInitiator</summary>
    static DicomUID dicomAssociationInitiator;//("1.2.840.10008.15.0.3.10", "dicomAssociationInitiator", DicomUidType.LDAP, false);

///<summary>LDAP OID: dicomAssociationAcceptor</summary>
    static DicomUID dicomAssociationAcceptor;//("1.2.840.10008.15.0.3.11", "dicomAssociationAcceptor", DicomUidType.LDAP, false);

///<summary>LDAP OID: dicomHostname</summary>
    static DicomUID dicomHostname;//("1.2.840.10008.15.0.3.12", "dicomHostname", DicomUidType.LDAP, false);

///<summary>LDAP OID: dicomPort</summary>
    static DicomUID dicomPort;//("1.2.840.10008.15.0.3.13", "dicomPort", DicomUidType.LDAP, false);

///<summary>LDAP OID: dicomSOPClass</summary>
    static DicomUID dicomSOPClass;//("1.2.840.10008.15.0.3.14", "dicomSOPClass", DicomUidType.LDAP, false);

///<summary>LDAP OID: dicomTransferRole</summary>
    static DicomUID dicomTransferRole;//("1.2.840.10008.15.0.3.15", "dicomTransferRole", DicomUidType.LDAP, false);

///<summary>LDAP OID: dicomTransferSyntax</summary>
    static DicomUID dicomTransferSyntax;//("1.2.840.10008.15.0.3.16", "dicomTransferSyntax", DicomUidType.LDAP, false);

///<summary>LDAP OID: dicomPrimaryDeviceType</summary>
    static DicomUID dicomPrimaryDeviceType;//("1.2.840.10008.15.0.3.17", "dicomPrimaryDeviceType", DicomUidType.LDAP, false);

///<summary>LDAP OID: dicomRelatedDeviceReference</summary>
    static DicomUID dicomRelatedDeviceReference;//("1.2.840.10008.15.0.3.18", "dicomRelatedDeviceReference", DicomUidType.LDAP, false);

///<summary>LDAP OID: dicomPreferredCalledAETitle</summary>
    static DicomUID dicomPreferredCalledAETitle;//("1.2.840.10008.15.0.3.19", "dicomPreferredCalledAETitle", DicomUidType.LDAP, false);

///<summary>LDAP OID: dicomTLSCyphersuite</summary>
    static DicomUID dicomTLSCyphersuite;//("1.2.840.10008.15.0.3.20", "dicomTLSCyphersuite", DicomUidType.LDAP, false);

///<summary>LDAP OID: dicomAuthorizedNodeCertificateReference</summary>
    static DicomUID dicomAuthorizedNodeCertificateReference;//("1.2.840.10008.15.0.3.21", "dicomAuthorizedNodeCertificateReference", DicomUidType.LDAP, false);

///<summary>LDAP OID: dicomThisNodeCertificateReference</summary>
    static DicomUID dicomThisNodeCertificateReference;//("1.2.840.10008.15.0.3.22", "dicomThisNodeCertificateReference", DicomUidType.LDAP, false);

///<summary>LDAP OID: dicomInstalled</summary>
    static DicomUID dicomInstalled;//("1.2.840.10008.15.0.3.23", "dicomInstalled", DicomUidType.LDAP, false);

///<summary>LDAP OID: dicomStationName</summary>
    static DicomUID dicomStationName;//("1.2.840.10008.15.0.3.24", "dicomStationName", DicomUidType.LDAP, false);

///<summary>LDAP OID: dicomDeviceSerialNumber</summary>
    static DicomUID dicomDeviceSerialNumber;//("1.2.840.10008.15.0.3.25", "dicomDeviceSerialNumber", DicomUidType.LDAP, false);

///<summary>LDAP OID: dicomInstitutionName</summary>
    static DicomUID dicomInstitutionName;//("1.2.840.10008.15.0.3.26", "dicomInstitutionName", DicomUidType.LDAP, false);

///<summary>LDAP OID: dicomInstitutionAddress</summary>
    static DicomUID dicomInstitutionAddress;//("1.2.840.10008.15.0.3.27", "dicomInstitutionAddress", DicomUidType.LDAP, false);

///<summary>LDAP OID: dicomInstitutionDepartmentName</summary>
    static DicomUID dicomInstitutionDepartmentName;//("1.2.840.10008.15.0.3.28", "dicomInstitutionDepartmentName", DicomUidType.LDAP, false);

///<summary>LDAP OID: dicomIssuerOfPatientID</summary>
    static DicomUID dicomIssuerOfPatientID;//("1.2.840.10008.15.0.3.29", "dicomIssuerOfPatientID", DicomUidType.LDAP, false);

///<summary>LDAP OID: dicomPreferredCallingAETitle</summary>
    static DicomUID dicomPreferredCallingAETitle;//("1.2.840.10008.15.0.3.30", "dicomPreferredCallingAETitle", DicomUidType.LDAP, false);

///<summary>LDAP OID: dicomSupportedCharacterSet</summary>
    static DicomUID dicomSupportedCharacterSet;//("1.2.840.10008.15.0.3.31", "dicomSupportedCharacterSet", DicomUidType.LDAP, false);

///<summary>LDAP OID: dicomConfigurationRoot</summary>
    static DicomUID dicomConfigurationRoot;//("1.2.840.10008.15.0.4.1", "dicomConfigurationRoot", DicomUidType.LDAP, false);

///<summary>LDAP OID: dicomDevicesRoot</summary>
    static DicomUID dicomDevicesRoot;//("1.2.840.10008.15.0.4.2", "dicomDevicesRoot", DicomUidType.LDAP, false);

///<summary>LDAP OID: dicomUniqueAETitlesRegistryRoot</summary>
    static DicomUID dicomUniqueAETitlesRegistryRoot;//("1.2.840.10008.15.0.4.3", "dicomUniqueAETitlesRegistryRoot", DicomUidType.LDAP, false);

///<summary>LDAP OID: dicomDevice</summary>
    static DicomUID dicomDevice;//("1.2.840.10008.15.0.4.4", "dicomDevice", DicomUidType.LDAP, false);

///<summary>LDAP OID: dicomNetworkAE</summary>
    static DicomUID dicomNetworkAE;//("1.2.840.10008.15.0.4.5", "dicomNetworkAE", DicomUidType.LDAP, false);

///<summary>LDAP OID: dicomNetworkConnection</summary>
    static DicomUID dicomNetworkConnection;//("1.2.840.10008.15.0.4.6", "dicomNetworkConnection", DicomUidType.LDAP, false);

///<summary>LDAP OID: dicomUniqueAETitle</summary>
    static DicomUID dicomUniqueAETitle;//("1.2.840.10008.15.0.4.7", "dicomUniqueAETitle", DicomUidType.LDAP, false);

///<summary>LDAP OID: dicomTransferCapability</summary>
    static DicomUID dicomTransferCapability;//("1.2.840.10008.15.0.4.8", "dicomTransferCapability", DicomUidType.LDAP, false);

///<summary>Synchronization Frame of Reference: Universal Coordinated Time</summary>
    static DicomUID UTC;//("1.2.840.10008.15.1.1", "Universal Coordinated Time", DicomUidType.FrameOfReference, false);

///<summary>Context Group Name: Anatomic Modifier (2)</summary>
    static DicomUID AnatomicModifier2;//("1.2.840.10008.6.1.1", "Anatomic Modifier (2)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Anatomic Region (4)</summary>
    static DicomUID AnatomicRegion4;//("1.2.840.10008.6.1.2", "Anatomic Region (4)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Transducer Approach (5)</summary>
    static DicomUID TransducerApproach5;//("1.2.840.10008.6.1.3", "Transducer Approach (5)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Transducer Orientation (6)</summary>
    static DicomUID TransducerOrientation6;//("1.2.840.10008.6.1.4", "Transducer Orientation (6)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Ultrasound Beam Path (7)</summary>
    static DicomUID UltrasoundBeamPath7;//("1.2.840.10008.6.1.5", "Ultrasound Beam Path (7)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Angiographic Interventional Devices (8)</summary>
    static DicomUID AngiographicInterventionalDevices8;//("1.2.840.10008.6.1.6", "Angiographic Interventional Devices (8)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Image Guided Therapeutic Procedures (9)</summary>
    static DicomUID ImageGuidedTherapeuticProcedures9;//("1.2.840.10008.6.1.7", "Image Guided Therapeutic Procedures (9)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Interventional Drug (10)</summary>
    static DicomUID InterventionalDrug10;//("1.2.840.10008.6.1.8", "Interventional Drug (10)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Route of Administration (11)</summary>
    static DicomUID RouteOfAdministration11;//("1.2.840.10008.6.1.9", "Route of Administration (11)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Radiographic Contrast Agent (12)</summary>
    static DicomUID RadiographicContrastAgent12;//("1.2.840.10008.6.1.10", "Radiographic Contrast Agent (12)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Radiographic Contrast Agent Ingredient (13)</summary>
    static DicomUID RadiographicContrastAgentIngredient13;//("1.2.840.10008.6.1.11", "Radiographic Contrast Agent Ingredient (13)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Isotopes in Radiopharmaceuticals (18)</summary>
    static DicomUID IsotopesInRadiopharmaceuticals18;//("1.2.840.10008.6.1.12", "Isotopes in Radiopharmaceuticals (18)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Patient Orientation (19)</summary>
    static DicomUID PatientOrientation19;//("1.2.840.10008.6.1.13", "Patient Orientation (19)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Patient Orientation Modifier (20)</summary>
    static DicomUID PatientOrientationModifier20;//("1.2.840.10008.6.1.14", "Patient Orientation Modifier (20)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Patient Equipment Relationship (21)</summary>
    static DicomUID PatientEquipmentRelationship21;//("1.2.840.10008.6.1.15", "Patient Equipment Relationship (21)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Cranio-Caudad Angulation (23)</summary>
    static DicomUID CranioCaudadAngulation23;//("1.2.840.10008.6.1.16", "Cranio-Caudad Angulation (23)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Radiopharmaceuticals (25)</summary>
    static DicomUID Radiopharmaceuticals25;//("1.2.840.10008.6.1.17", "Radiopharmaceuticals (25)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Nuclear Medicine Projections (26)</summary>
    static DicomUID NuclearMedicineProjections26;//("1.2.840.10008.6.1.18", "Nuclear Medicine Projections (26)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Acquisition Modality (29)</summary>
    static DicomUID AcquisitionModality29;//("1.2.840.10008.6.1.19", "Acquisition Modality (29)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: DICOM Devices (30)</summary>
    static DicomUID DICOMDevices30;//("1.2.840.10008.6.1.20", "DICOM Devices (30)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Abstract Priors (31)</summary>
    static DicomUID AbstractPriors31;//("1.2.840.10008.6.1.21", "Abstract Priors (31)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Numeric Value Qualifier (42)</summary>
    static DicomUID NumericValueQualifier42;//("1.2.840.10008.6.1.22", "Numeric Value Qualifier (42)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Units of Measurement (82)</summary>
    static DicomUID UnitsOfMeasurement82;//("1.2.840.10008.6.1.23", "Units of Measurement (82)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Units for Real World Value Mapping (83)</summary>
    static DicomUID UnitsForRealWorldValueMapping83;//("1.2.840.10008.6.1.24", "Units for Real World Value Mapping (83)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Level of Significance (220)</summary>
    static DicomUID LevelOfSignificance220;//("1.2.840.10008.6.1.25", "Level of Significance (220)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Measurement Range Concepts (221)</summary>
    static DicomUID MeasurementRangeConcepts221;//("1.2.840.10008.6.1.26", "Measurement Range Concepts (221)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Normality Codes (222)</summary>
    static DicomUID NormalityCodes222;//("1.2.840.10008.6.1.27", "Normality Codes (222)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Normal Range Values (223)</summary>
    static DicomUID NormalRangeValues223;//("1.2.840.10008.6.1.28", "Normal Range Values (223)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Selection Method (224)</summary>
    static DicomUID SelectionMethod224;//("1.2.840.10008.6.1.29", "Selection Method (224)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Measurement Uncertainty Concepts (225)</summary>
    static DicomUID MeasurementUncertaintyConcepts225;//("1.2.840.10008.6.1.30", "Measurement Uncertainty Concepts (225)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Population Statistical Descriptors (226)</summary>
    static DicomUID PopulationStatisticalDescriptors226;//("1.2.840.10008.6.1.31", "Population Statistical Descriptors (226)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Sample Statistical Descriptors (227)</summary>
    static DicomUID SampleStatisticalDescriptors227;//("1.2.840.10008.6.1.32", "Sample Statistical Descriptors (227)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Equation or Table (228)</summary>
    static DicomUID EquationOrTable228;//("1.2.840.10008.6.1.33", "Equation or Table (228)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Yes-No (230)</summary>
    static DicomUID YesNo230;//("1.2.840.10008.6.1.34", "Yes-No (230)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Present-Absent (240)</summary>
    static DicomUID PresentAbsent240;//("1.2.840.10008.6.1.35", "Present-Absent (240)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Normal-Abnormal (242)</summary>
    static DicomUID NormalAbnormal242;//("1.2.840.10008.6.1.36", "Normal-Abnormal (242)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Laterality (244)</summary>
    static DicomUID Laterality244;//("1.2.840.10008.6.1.37", "Laterality (244)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Positive-Negative (250)</summary>
    static DicomUID PositiveNegative250;//("1.2.840.10008.6.1.38", "Positive-Negative (250)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Severity of Complication (251)</summary>
    static DicomUID SeverityOfComplication251;//("1.2.840.10008.6.1.39", "Severity of Complication (251)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Observer Type (270)</summary>
    static DicomUID ObserverType270;//("1.2.840.10008.6.1.40", "Observer Type (270)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Observation Subject Class (271)</summary>
    static DicomUID ObservationSubjectClass271;//("1.2.840.10008.6.1.41", "Observation Subject Class (271)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Audio Channel Source (3000)</summary>
    static DicomUID AudioChannelSource3000;//("1.2.840.10008.6.1.42", "Audio Channel Source (3000)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: ECG Leads (3001)</summary>
    static DicomUID ECGLeads3001;//("1.2.840.10008.6.1.43", "ECG Leads (3001)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Hemodynamic Waveform Sources (3003)</summary>
    static DicomUID HemodynamicWaveformSources3003;//("1.2.840.10008.6.1.44", "Hemodynamic Waveform Sources (3003)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Cardiovascular Anatomic Locations (3010)</summary>
    static DicomUID CardiovascularAnatomicLocations3010;//("1.2.840.10008.6.1.45", "Cardiovascular Anatomic Locations (3010)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Electrophysiology Anatomic Locations (3011)</summary>
    static DicomUID ElectrophysiologyAnatomicLocations3011;//("1.2.840.10008.6.1.46", "Electrophysiology Anatomic Locations (3011)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Coronary Artery Segments (3014)</summary>
    static DicomUID CoronaryArterySegments3014;//("1.2.840.10008.6.1.47", "Coronary Artery Segments (3014)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Coronary Arteries (3015)</summary>
    static DicomUID CoronaryArteries3015;//("1.2.840.10008.6.1.48", "Coronary Arteries (3015)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Cardiovascular Anatomic Location Modifiers (3019)</summary>
    static DicomUID CardiovascularAnatomicLocationModifiers3019;//("1.2.840.10008.6.1.49", "Cardiovascular Anatomic Location Modifiers (3019)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Cardiology Units of Measurement (Retired) (3082)</summary>
    static DicomUID CardiologyUnitsOfMeasurement3082RETIRED;//("1.2.840.10008.6.1.50", "Cardiology Units of Measurement (Retired) (3082)", DicomUidType.ContextGroupName, true);

///<summary>Context Group Name: Time Synchronization Channel Types (3090)</summary>
    static DicomUID TimeSynchronizationChannelTypes3090;//("1.2.840.10008.6.1.51", "Time Synchronization Channel Types (3090)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Cardiac Procedural State Values (3101)</summary>
    static DicomUID CardiacProceduralStateValues3101;//("1.2.840.10008.6.1.52", "Cardiac Procedural State Values (3101)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Electrophysiology Measurement Functions and Techniques (3240)</summary>
    static DicomUID ElectrophysiologyMeasurementFunctionsAndTechniques3240;//("1.2.840.10008.6.1.53", "Electrophysiology Measurement Functions and Techniques (3240)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Hemodynamic Measurement Techniques (3241)</summary>
    static DicomUID HemodynamicMeasurementTechniques3241;//("1.2.840.10008.6.1.54", "Hemodynamic Measurement Techniques (3241)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Catheterization Procedure Phase (3250)</summary>
    static DicomUID CatheterizationProcedurePhase3250;//("1.2.840.10008.6.1.55", "Catheterization Procedure Phase (3250)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Electrophysiology Procedure Phase (3254)</summary>
    static DicomUID ElectrophysiologyProcedurePhase3254;//("1.2.840.10008.6.1.56", "Electrophysiology Procedure Phase (3254)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Stress Protocols (3261)</summary>
    static DicomUID StressProtocols3261;//("1.2.840.10008.6.1.57", "Stress Protocols (3261)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: ECG Patient State Values (3262)</summary>
    static DicomUID ECGPatientStateValues3262;//("1.2.840.10008.6.1.58", "ECG Patient State Values (3262)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Electrode Placement Values (3263)</summary>
    static DicomUID ElectrodePlacementValues3263;//("1.2.840.10008.6.1.59", "Electrode Placement Values (3263)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: XYZ Electrode Placement Values (Retired) (3264)</summary>
    static DicomUID XYZElectrodePlacementValues3264RETIRED;//("1.2.840.10008.6.1.60", "XYZ Electrode Placement Values (Retired) (3264)", DicomUidType.ContextGroupName, true);

///<summary>Context Group Name: Hemodynamic Physiological Challenges (3271)</summary>
    static DicomUID HemodynamicPhysiologicalChallenges3271;//("1.2.840.10008.6.1.61", "Hemodynamic Physiological Challenges (3271)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: ECG Annotations (3335)</summary>
    static DicomUID ECGAnnotations3335;//("1.2.840.10008.6.1.62", "ECG Annotations (3335)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Hemodynamic Annotations (3337)</summary>
    static DicomUID HemodynamicAnnotations3337;//("1.2.840.10008.6.1.63", "Hemodynamic Annotations (3337)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Electrophysiology Annotations (3339)</summary>
    static DicomUID ElectrophysiologyAnnotations3339;//("1.2.840.10008.6.1.64", "Electrophysiology Annotations (3339)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Procedure Log Titles (3400)</summary>
    static DicomUID ProcedureLogTitles3400;//("1.2.840.10008.6.1.65", "Procedure Log Titles (3400)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Types of Log Notes (3401)</summary>
    static DicomUID TypesOfLogNotes3401;//("1.2.840.10008.6.1.66", "Types of Log Notes (3401)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Patient Status and Events (3402)</summary>
    static DicomUID PatientStatusAndEvents3402;//("1.2.840.10008.6.1.67", "Patient Status and Events (3402)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Percutaneous Entry (3403)</summary>
    static DicomUID PercutaneousEntry3403;//("1.2.840.10008.6.1.68", "Percutaneous Entry (3403)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Staff Actions (3404)</summary>
    static DicomUID StaffActions3404;//("1.2.840.10008.6.1.69", "Staff Actions (3404)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Procedure Action Values (3405)</summary>
    static DicomUID ProcedureActionValues3405;//("1.2.840.10008.6.1.70", "Procedure Action Values (3405)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Non-coronary Transcatheter Interventions (3406)</summary>
    static DicomUID NonCoronaryTranscatheterInterventions3406;//("1.2.840.10008.6.1.71", "Non-coronary Transcatheter Interventions (3406)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Purpose of Reference to Object (3407)</summary>
    static DicomUID PurposeOfReferenceToObject3407;//("1.2.840.10008.6.1.72", "Purpose of Reference to Object (3407)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Actions With Consumables (3408)</summary>
    static DicomUID ActionsWithConsumables3408;//("1.2.840.10008.6.1.73", "Actions With Consumables (3408)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Administration of Drugs/Contrast (3409)</summary>
    static DicomUID AdministrationOfDrugsContrast3409;//("1.2.840.10008.6.1.74", "Administration of Drugs/Contrast (3409)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Numeric Parameters of Drugs/Contrast (3410)</summary>
    static DicomUID NumericParametersOfDrugsContrast3410;//("1.2.840.10008.6.1.75", "Numeric Parameters of Drugs/Contrast (3410)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Intracoronary Devices (3411)</summary>
    static DicomUID IntracoronaryDevices3411;//("1.2.840.10008.6.1.76", "Intracoronary Devices (3411)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Intervention Actions and Status (3412)</summary>
    static DicomUID InterventionActionsAndStatus3412;//("1.2.840.10008.6.1.77", "Intervention Actions and Status (3412)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Adverse Outcomes (3413)</summary>
    static DicomUID AdverseOutcomes3413;//("1.2.840.10008.6.1.78", "Adverse Outcomes (3413)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Procedure Urgency (3414)</summary>
    static DicomUID ProcedureUrgency3414;//("1.2.840.10008.6.1.79", "Procedure Urgency (3414)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Cardiac Rhythms (3415)</summary>
    static DicomUID CardiacRhythms3415;//("1.2.840.10008.6.1.80", "Cardiac Rhythms (3415)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Respiration Rhythms (3416)</summary>
    static DicomUID RespirationRhythms3416;//("1.2.840.10008.6.1.81", "Respiration Rhythms (3416)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Lesion Risk (3418)</summary>
    static DicomUID LesionRisk3418;//("1.2.840.10008.6.1.82", "Lesion Risk (3418)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Findings Titles (3419)</summary>
    static DicomUID FindingsTitles3419;//("1.2.840.10008.6.1.83", "Findings Titles (3419)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Procedure Action (3421)</summary>
    static DicomUID ProcedureAction3421;//("1.2.840.10008.6.1.84", "Procedure Action (3421)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Device Use Actions (3422)</summary>
    static DicomUID DeviceUseActions3422;//("1.2.840.10008.6.1.85", "Device Use Actions (3422)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Numeric Device Characteristics (3423)</summary>
    static DicomUID NumericDeviceCharacteristics3423;//("1.2.840.10008.6.1.86", "Numeric Device Characteristics (3423)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Intervention Parameters (3425)</summary>
    static DicomUID InterventionParameters3425;//("1.2.840.10008.6.1.87", "Intervention Parameters (3425)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Consumables Parameters (3426)</summary>
    static DicomUID ConsumablesParameters3426;//("1.2.840.10008.6.1.88", "Consumables Parameters (3426)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Equipment Events (3427)</summary>
    static DicomUID EquipmentEvents3427;//("1.2.840.10008.6.1.89", "Equipment Events (3427)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Imaging Procedures (3428)</summary>
    static DicomUID ImagingProcedures3428;//("1.2.840.10008.6.1.90", "Imaging Procedures (3428)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Catheterization Devices (3429)</summary>
    static DicomUID CatheterizationDevices3429;//("1.2.840.10008.6.1.91", "Catheterization Devices (3429)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: DateTime Qualifiers (3430)</summary>
    static DicomUID DateTimeQualifiers3430;//("1.2.840.10008.6.1.92", "DateTime Qualifiers (3430)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Peripheral Pulse Locations (3440)</summary>
    static DicomUID PeripheralPulseLocations3440;//("1.2.840.10008.6.1.93", "Peripheral Pulse Locations (3440)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Patient Assessments (3441)</summary>
    static DicomUID PatientAssessments3441;//("1.2.840.10008.6.1.94", "Patient Assessments (3441)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Peripheral Pulse Methods (3442)</summary>
    static DicomUID PeripheralPulseMethods3442;//("1.2.840.10008.6.1.95", "Peripheral Pulse Methods (3442)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Skin Condition (3446)</summary>
    static DicomUID SkinCondition3446;//("1.2.840.10008.6.1.96", "Skin Condition (3446)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Airway Assessment (3448)</summary>
    static DicomUID AirwayAssessment3448;//("1.2.840.10008.6.1.97", "Airway Assessment (3448)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Calibration Objects (3451)</summary>
    static DicomUID CalibrationObjects3451;//("1.2.840.10008.6.1.98", "Calibration Objects (3451)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Calibration Methods (3452)</summary>
    static DicomUID CalibrationMethods3452;//("1.2.840.10008.6.1.99", "Calibration Methods (3452)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Cardiac Volume Methods (3453)</summary>
    static DicomUID CardiacVolumeMethods3453;//("1.2.840.10008.6.1.100", "Cardiac Volume Methods (3453)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Index Methods (3455)</summary>
    static DicomUID IndexMethods3455;//("1.2.840.10008.6.1.101", "Index Methods (3455)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Sub-segment Methods (3456)</summary>
    static DicomUID SubSegmentMethods3456;//("1.2.840.10008.6.1.102", "Sub-segment Methods (3456)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Contour Realignment (3458)</summary>
    static DicomUID ContourRealignment3458;//("1.2.840.10008.6.1.103", "Contour Realignment (3458)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Circumferential Extent (3460)</summary>
    static DicomUID CircumferentialExtent3460;//("1.2.840.10008.6.1.104", "Circumferential Extent (3460)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Regional Extent (3461)</summary>
    static DicomUID RegionalExtent3461;//("1.2.840.10008.6.1.105", "Regional Extent (3461)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Chamber Identification (3462)</summary>
    static DicomUID ChamberIdentification3462;//("1.2.840.10008.6.1.106", "Chamber Identification (3462)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: QA Reference Methods (3465)</summary>
    static DicomUID QAReferenceMethods3465;//("1.2.840.10008.6.1.107", "QA Reference Methods (3465)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Plane Identification (3466)</summary>
    static DicomUID PlaneIdentification3466;//("1.2.840.10008.6.1.108", "Plane Identification (3466)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Ejection Fraction (3467)</summary>
    static DicomUID EjectionFraction3467;//("1.2.840.10008.6.1.109", "Ejection Fraction (3467)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: ED Volume (3468)</summary>
    static DicomUID EDVolume3468;//("1.2.840.10008.6.1.110", "ED Volume (3468)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: ES Volume (3469)</summary>
    static DicomUID ESVolume3469;//("1.2.840.10008.6.1.111", "ES Volume (3469)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Vessel Lumen Cross-sectional Area Calculation Methods (3470)</summary>
    static DicomUID VesselLumenCrossSectionalAreaCalculationMethods3470;//("1.2.840.10008.6.1.112", "Vessel Lumen Cross-sectional Area Calculation Methods (3470)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Estimated Volumes (3471)</summary>
    static DicomUID EstimatedVolumes3471;//("1.2.840.10008.6.1.113", "Estimated Volumes (3471)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Cardiac Contraction Phase (3472)</summary>
    static DicomUID CardiacContractionPhase3472;//("1.2.840.10008.6.1.114", "Cardiac Contraction Phase (3472)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: IVUS Procedure Phases (3480)</summary>
    static DicomUID IVUSProcedurePhases3480;//("1.2.840.10008.6.1.115", "IVUS Procedure Phases (3480)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: IVUS Distance Measurements (3481)</summary>
    static DicomUID IVUSDistanceMeasurements3481;//("1.2.840.10008.6.1.116", "IVUS Distance Measurements (3481)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: IVUS Area Measurements (3482)</summary>
    static DicomUID IVUSAreaMeasurements3482;//("1.2.840.10008.6.1.117", "IVUS Area Measurements (3482)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: IVUS Longitudinal Measurements (3483)</summary>
    static DicomUID IVUSLongitudinalMeasurements3483;//("1.2.840.10008.6.1.118", "IVUS Longitudinal Measurements (3483)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: IVUS Indices and Ratios (3484)</summary>
    static DicomUID IVUSIndicesAndRatios3484;//("1.2.840.10008.6.1.119", "IVUS Indices and Ratios (3484)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: IVUS Volume Measurements (3485)</summary>
    static DicomUID IVUSVolumeMeasurements3485;//("1.2.840.10008.6.1.120", "IVUS Volume Measurements (3485)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Vascular Measurement Sites (3486)</summary>
    static DicomUID VascularMeasurementSites3486;//("1.2.840.10008.6.1.121", "Vascular Measurement Sites (3486)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Intravascular Volumetric Regions (3487)</summary>
    static DicomUID IntravascularVolumetricRegions3487;//("1.2.840.10008.6.1.122", "Intravascular Volumetric Regions (3487)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Min/Max/Mean (3488)</summary>
    static DicomUID MinMaxMean3488;//("1.2.840.10008.6.1.123", "Min/Max/Mean (3488)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Calcium Distribution (3489)</summary>
    static DicomUID CalciumDistribution3489;//("1.2.840.10008.6.1.124", "Calcium Distribution (3489)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: IVUS Lesion Morphologies (3491)</summary>
    static DicomUID IVUSLesionMorphologies3491;//("1.2.840.10008.6.1.125", "IVUS Lesion Morphologies (3491)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Vascular Dissection Classifications (3492)</summary>
    static DicomUID VascularDissectionClassifications3492;//("1.2.840.10008.6.1.126", "Vascular Dissection Classifications (3492)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: IVUS Relative Stenosis Severities (3493)</summary>
    static DicomUID IVUSRelativeStenosisSeverities3493;//("1.2.840.10008.6.1.127", "IVUS Relative Stenosis Severities (3493)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: IVUS Non Morphological Findings (3494)</summary>
    static DicomUID IVUSNonMorphologicalFindings3494;//("1.2.840.10008.6.1.128", "IVUS Non Morphological Findings (3494)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: IVUS Plaque Composition (3495)</summary>
    static DicomUID IVUSPlaqueComposition3495;//("1.2.840.10008.6.1.129", "IVUS Plaque Composition (3495)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: IVUS Fiducial Points (3496)</summary>
    static DicomUID IVUSFiducialPoints3496;//("1.2.840.10008.6.1.130", "IVUS Fiducial Points (3496)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: IVUS Arterial Morphology (3497)</summary>
    static DicomUID IVUSArterialMorphology3497;//("1.2.840.10008.6.1.131", "IVUS Arterial Morphology (3497)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Pressure Units (3500)</summary>
    static DicomUID PressureUnits3500;//("1.2.840.10008.6.1.132", "Pressure Units (3500)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Hemodynamic Resistance Units (3502)</summary>
    static DicomUID HemodynamicResistanceUnits3502;//("1.2.840.10008.6.1.133", "Hemodynamic Resistance Units (3502)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Indexed Hemodynamic Resistance Units (3503)</summary>
    static DicomUID IndexedHemodynamicResistanceUnits3503;//("1.2.840.10008.6.1.134", "Indexed Hemodynamic Resistance Units (3503)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Catheter Size Units (3510)</summary>
    static DicomUID CatheterSizeUnits3510;//("1.2.840.10008.6.1.135", "Catheter Size Units (3510)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Specimen Collection (3515)</summary>
    static DicomUID SpecimenCollection3515;//("1.2.840.10008.6.1.136", "Specimen Collection (3515)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Blood Source Type (3520)</summary>
    static DicomUID BloodSourceType3520;//("1.2.840.10008.6.1.137", "Blood Source Type (3520)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Blood Gas Pressures (3524)</summary>
    static DicomUID BloodGasPressures3524;//("1.2.840.10008.6.1.138", "Blood Gas Pressures (3524)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Blood Gas Content (3525)</summary>
    static DicomUID BloodGasContent3525;//("1.2.840.10008.6.1.139", "Blood Gas Content (3525)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Blood Gas Saturation (3526)</summary>
    static DicomUID BloodGasSaturation3526;//("1.2.840.10008.6.1.140", "Blood Gas Saturation (3526)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Blood Base Excess (3527)</summary>
    static DicomUID BloodBaseExcess3527;//("1.2.840.10008.6.1.141", "Blood Base Excess (3527)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Blood pH (3528)</summary>
    static DicomUID BloodPH3528;//("1.2.840.10008.6.1.142", "Blood pH (3528)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Arterial / Venous Content (3529)</summary>
    static DicomUID ArterialVenousContent3529;//("1.2.840.10008.6.1.143", "Arterial / Venous Content (3529)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Oxygen Administration Actions (3530)</summary>
    static DicomUID OxygenAdministrationActions3530;//("1.2.840.10008.6.1.144", "Oxygen Administration Actions (3530)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Oxygen Administration (3531)</summary>
    static DicomUID OxygenAdministration3531;//("1.2.840.10008.6.1.145", "Oxygen Administration (3531)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Circulatory Support Actions (3550)</summary>
    static DicomUID CirculatorySupportActions3550;//("1.2.840.10008.6.1.146", "Circulatory Support Actions (3550)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Ventilation Actions (3551)</summary>
    static DicomUID VentilationActions3551;//("1.2.840.10008.6.1.147", "Ventilation Actions (3551)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Pacing Actions (3552)</summary>
    static DicomUID PacingActions3552;//("1.2.840.10008.6.1.148", "Pacing Actions (3552)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Circulatory Support (3553)</summary>
    static DicomUID CirculatorySupport3553;//("1.2.840.10008.6.1.149", "Circulatory Support (3553)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Ventilation (3554)</summary>
    static DicomUID Ventilation3554;//("1.2.840.10008.6.1.150", "Ventilation (3554)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Pacing (3555)</summary>
    static DicomUID Pacing3555;//("1.2.840.10008.6.1.151", "Pacing (3555)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Blood Pressure Methods (3560)</summary>
    static DicomUID BloodPressureMethods3560;//("1.2.840.10008.6.1.152", "Blood Pressure Methods (3560)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Relative Times (3600)</summary>
    static DicomUID RelativeTimes3600;//("1.2.840.10008.6.1.153", "Relative Times (3600)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Hemodynamic Patient State (3602)</summary>
    static DicomUID HemodynamicPatientState3602;//("1.2.840.10008.6.1.154", "Hemodynamic Patient State (3602)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Arterial Lesion Locations (3604)</summary>
    static DicomUID ArterialLesionLocations3604;//("1.2.840.10008.6.1.155", "Arterial Lesion Locations (3604)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Arterial Source Locations (3606)</summary>
    static DicomUID ArterialSourceLocations3606;//("1.2.840.10008.6.1.156", "Arterial Source Locations (3606)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Venous Source Locations (3607)</summary>
    static DicomUID VenousSourceLocations3607;//("1.2.840.10008.6.1.157", "Venous Source Locations (3607)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Atrial Source Locations (3608)</summary>
    static DicomUID AtrialSourceLocations3608;//("1.2.840.10008.6.1.158", "Atrial Source Locations (3608)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Ventricular Source Locations (3609)</summary>
    static DicomUID VentricularSourceLocations3609;//("1.2.840.10008.6.1.159", "Ventricular Source Locations (3609)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Gradient Source Locations (3610)</summary>
    static DicomUID GradientSourceLocations3610;//("1.2.840.10008.6.1.160", "Gradient Source Locations (3610)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Pressure Measurements (3611)</summary>
    static DicomUID PressureMeasurements3611;//("1.2.840.10008.6.1.161", "Pressure Measurements (3611)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Blood Velocity Measurements (3612)</summary>
    static DicomUID BloodVelocityMeasurements3612;//("1.2.840.10008.6.1.162", "Blood Velocity Measurements (3612)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Hemodynamic Time Measurements (3613)</summary>
    static DicomUID HemodynamicTimeMeasurements3613;//("1.2.840.10008.6.1.163", "Hemodynamic Time Measurements (3613)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Valve Areas, Non-mitral (3614)</summary>
    static DicomUID ValveAreasNonMitral3614;//("1.2.840.10008.6.1.164", "Valve Areas, Non-mitral (3614)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Valve Areas (3615)</summary>
    static DicomUID ValveAreas3615;//("1.2.840.10008.6.1.165", "Valve Areas (3615)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Hemodynamic Period Measurements (3616)</summary>
    static DicomUID HemodynamicPeriodMeasurements3616;//("1.2.840.10008.6.1.166", "Hemodynamic Period Measurements (3616)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Valve Flows (3617)</summary>
    static DicomUID ValveFlows3617;//("1.2.840.10008.6.1.167", "Valve Flows (3617)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Hemodynamic Flows (3618)</summary>
    static DicomUID HemodynamicFlows3618;//("1.2.840.10008.6.1.168", "Hemodynamic Flows (3618)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Hemodynamic Resistance Measurements (3619)</summary>
    static DicomUID HemodynamicResistanceMeasurements3619;//("1.2.840.10008.6.1.169", "Hemodynamic Resistance Measurements (3619)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Hemodynamic Ratios (3620)</summary>
    static DicomUID HemodynamicRatios3620;//("1.2.840.10008.6.1.170", "Hemodynamic Ratios (3620)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Fractional Flow Reserve (3621)</summary>
    static DicomUID FractionalFlowReserve3621;//("1.2.840.10008.6.1.171", "Fractional Flow Reserve (3621)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Measurement Type (3627)</summary>
    static DicomUID MeasurementType3627;//("1.2.840.10008.6.1.172", "Measurement Type (3627)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Cardiac Output Methods (3628)</summary>
    static DicomUID CardiacOutputMethods3628;//("1.2.840.10008.6.1.173", "Cardiac Output Methods (3628)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Procedure Intent (3629)</summary>
    static DicomUID ProcedureIntent3629;//("1.2.840.10008.6.1.174", "Procedure Intent (3629)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Cardiovascular Anatomic Locations (3630)</summary>
    static DicomUID CardiovascularAnatomicLocations3630;//("1.2.840.10008.6.1.175", "Cardiovascular Anatomic Locations (3630)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Hypertension (3640)</summary>
    static DicomUID Hypertension3640;//("1.2.840.10008.6.1.176", "Hypertension (3640)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Hemodynamic Assessments (3641)</summary>
    static DicomUID HemodynamicAssessments3641;//("1.2.840.10008.6.1.177", "Hemodynamic Assessments (3641)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Degree Findings (3642)</summary>
    static DicomUID DegreeFindings3642;//("1.2.840.10008.6.1.178", "Degree Findings (3642)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Hemodynamic Measurement Phase (3651)</summary>
    static DicomUID HemodynamicMeasurementPhase3651;//("1.2.840.10008.6.1.179", "Hemodynamic Measurement Phase (3651)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Body Surface Area Equations (3663)</summary>
    static DicomUID BodySurfaceAreaEquations3663;//("1.2.840.10008.6.1.180", "Body Surface Area Equations (3663)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Oxygen Consumption Equations and Tables (3664)</summary>
    static DicomUID OxygenConsumptionEquationsAndTables3664;//("1.2.840.10008.6.1.181", "Oxygen Consumption Equations and Tables (3664)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: P50 Equations (3666)</summary>
    static DicomUID P50Equations3666;//("1.2.840.10008.6.1.182", "P50 Equations (3666)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Framingham Scores (3667)</summary>
    static DicomUID FraminghamScores3667;//("1.2.840.10008.6.1.183", "Framingham Scores (3667)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Framingham Tables (3668)</summary>
    static DicomUID FraminghamTables3668;//("1.2.840.10008.6.1.184", "Framingham Tables (3668)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: ECG Procedure Types (3670)</summary>
    static DicomUID ECGProcedureTypes3670;//("1.2.840.10008.6.1.185", "ECG Procedure Types (3670)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Reason for ECG Exam (3671)</summary>
    static DicomUID ReasonForECGExam3671;//("1.2.840.10008.6.1.186", "Reason for ECG Exam (3671)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Pacemakers (3672)</summary>
    static DicomUID Pacemakers3672;//("1.2.840.10008.6.1.187", "Pacemakers (3672)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Diagnosis (Retired) (3673)</summary>
    static DicomUID Diagnosis3673RETIRED;//("1.2.840.10008.6.1.188", "Diagnosis (Retired) (3673)", DicomUidType.ContextGroupName, true);

///<summary>Context Group Name: Other Filters (Retired) (3675)</summary>
    static DicomUID OtherFilters3675RETIRED;//("1.2.840.10008.6.1.189", "Other Filters (Retired) (3675)", DicomUidType.ContextGroupName, true);

///<summary>Context Group Name: Lead Measurement Technique (3676)</summary>
    static DicomUID LeadMeasurementTechnique3676;//("1.2.840.10008.6.1.190", "Lead Measurement Technique (3676)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Summary Codes ECG (3677)</summary>
    static DicomUID SummaryCodesECG3677;//("1.2.840.10008.6.1.191", "Summary Codes ECG (3677)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: QT Correction Algorithms (3678)</summary>
    static DicomUID QTCorrectionAlgorithms3678;//("1.2.840.10008.6.1.192", "QT Correction Algorithms (3678)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: ECG Morphology Descriptions (Retired) (3679)</summary>
    static DicomUID ECGMorphologyDescriptions3679RETIRED;//("1.2.840.10008.6.1.193", "ECG Morphology Descriptions (Retired) (3679)", DicomUidType.ContextGroupName, true);

///<summary>Context Group Name: ECG Lead Noise Descriptions (3680)</summary>
    static DicomUID ECGLeadNoiseDescriptions3680;//("1.2.840.10008.6.1.194", "ECG Lead Noise Descriptions (3680)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: ECG Lead Noise Modifiers (Retired) (3681)</summary>
    static DicomUID ECGLeadNoiseModifiers3681RETIRED;//("1.2.840.10008.6.1.195", "ECG Lead Noise Modifiers (Retired) (3681)", DicomUidType.ContextGroupName, true);

///<summary>Context Group Name: Probability (Retired) (3682)</summary>
    static DicomUID Probability3682RETIRED;//("1.2.840.10008.6.1.196", "Probability (Retired) (3682)", DicomUidType.ContextGroupName, true);

///<summary>Context Group Name: Modifiers (Retired) (3683)</summary>
    static DicomUID Modifiers3683RETIRED;//("1.2.840.10008.6.1.197", "Modifiers (Retired) (3683)", DicomUidType.ContextGroupName, true);

///<summary>Context Group Name: Trend (Retired) (3684)</summary>
    static DicomUID Trend3684RETIRED;//("1.2.840.10008.6.1.198", "Trend (Retired) (3684)", DicomUidType.ContextGroupName, true);

///<summary>Context Group Name: Conjunctive Terms (Retired) (3685)</summary>
    static DicomUID ConjunctiveTerms3685RETIRED;//("1.2.840.10008.6.1.199", "Conjunctive Terms (Retired) (3685)", DicomUidType.ContextGroupName, true);

///<summary>Context Group Name: ECG Interpretive Statements (Retired) (3686)</summary>
    static DicomUID ECGInterpretiveStatements3686RETIRED;//("1.2.840.10008.6.1.200", "ECG Interpretive Statements (Retired) (3686)", DicomUidType.ContextGroupName, true);

///<summary>Context Group Name: Electrophysiology Waveform Durations (3687)</summary>
    static DicomUID ElectrophysiologyWaveformDurations3687;//("1.2.840.10008.6.1.201", "Electrophysiology Waveform Durations (3687)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Electrophysiology Waveform Voltages (3688)</summary>
    static DicomUID ElectrophysiologyWaveformVoltages3688;//("1.2.840.10008.6.1.202", "Electrophysiology Waveform Voltages (3688)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Cath Diagnosis (3700)</summary>
    static DicomUID CathDiagnosis3700;//("1.2.840.10008.6.1.203", "Cath Diagnosis (3700)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Cardiac Valves and Tracts (3701)</summary>
    static DicomUID CardiacValvesAndTracts3701;//("1.2.840.10008.6.1.204", "Cardiac Valves and Tracts (3701)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Wall Motion (3703)</summary>
    static DicomUID WallMotion3703;//("1.2.840.10008.6.1.205", "Wall Motion (3703)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Myocardium Wall Morphology Findings (3704)</summary>
    static DicomUID MyocardiumWallMorphologyFindings3704;//("1.2.840.10008.6.1.206", "Myocardium Wall Morphology Findings (3704)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Chamber Size (3705)</summary>
    static DicomUID ChamberSize3705;//("1.2.840.10008.6.1.207", "Chamber Size (3705)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Overall Contractility (3706)</summary>
    static DicomUID OverallContractility3706;//("1.2.840.10008.6.1.208", "Overall Contractility (3706)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: VSD Description (3707)</summary>
    static DicomUID VSDDescription3707;//("1.2.840.10008.6.1.209", "VSD Description (3707)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Aortic Root Description (3709)</summary>
    static DicomUID AorticRootDescription3709;//("1.2.840.10008.6.1.210", "Aortic Root Description (3709)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Coronary Dominance (3710)</summary>
    static DicomUID CoronaryDominance3710;//("1.2.840.10008.6.1.211", "Coronary Dominance (3710)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Valvular Abnormalities (3711)</summary>
    static DicomUID ValvularAbnormalities3711;//("1.2.840.10008.6.1.212", "Valvular Abnormalities (3711)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Vessel Descriptors (3712)</summary>
    static DicomUID VesselDescriptors3712;//("1.2.840.10008.6.1.213", "Vessel Descriptors (3712)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: TIMI Flow Characteristics (3713)</summary>
    static DicomUID TIMIFlowCharacteristics3713;//("1.2.840.10008.6.1.214", "TIMI Flow Characteristics (3713)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Thrombus (3714)</summary>
    static DicomUID Thrombus3714;//("1.2.840.10008.6.1.215", "Thrombus (3714)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Lesion Margin (3715)</summary>
    static DicomUID LesionMargin3715;//("1.2.840.10008.6.1.216", "Lesion Margin (3715)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Severity (3716)</summary>
    static DicomUID Severity3716;//("1.2.840.10008.6.1.217", "Severity (3716)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Myocardial Wall Segments (3717)</summary>
    static DicomUID MyocardialWallSegments3717;//("1.2.840.10008.6.1.218", "Myocardial Wall Segments (3717)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Myocardial Wall Segments in Projection (3718)</summary>
    static DicomUID MyocardialWallSegmentsInProjection3718;//("1.2.840.10008.6.1.219", "Myocardial Wall Segments in Projection (3718)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Canadian Clinical Classification (3719)</summary>
    static DicomUID CanadianClinicalClassification3719;//("1.2.840.10008.6.1.220", "Canadian Clinical Classification (3719)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Cardiac History Dates (Retired) (3720)</summary>
    static DicomUID CardiacHistoryDates3720RETIRED;//("1.2.840.10008.6.1.221", "Cardiac History Dates (Retired) (3720)", DicomUidType.ContextGroupName, true);

///<summary>Context Group Name: Cardiovascular Surgeries (3721)</summary>
    static DicomUID CardiovascularSurgeries3721;//("1.2.840.10008.6.1.222", "Cardiovascular Surgeries (3721)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Diabetic Therapy (3722)</summary>
    static DicomUID DiabeticTherapy3722;//("1.2.840.10008.6.1.223", "Diabetic Therapy (3722)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: MI Types (3723)</summary>
    static DicomUID MITypes3723;//("1.2.840.10008.6.1.224", "MI Types (3723)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Smoking History (3724)</summary>
    static DicomUID SmokingHistory3724;//("1.2.840.10008.6.1.225", "Smoking History (3724)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Indications for Coronary Intervention (3726)</summary>
    static DicomUID IndicationsForCoronaryIntervention3726;//("1.2.840.10008.6.1.226", "Indications for Coronary Intervention (3726)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Indications for Catheterization (3727)</summary>
    static DicomUID IndicationsForCatheterization3727;//("1.2.840.10008.6.1.227", "Indications for Catheterization (3727)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Cath Findings (3728)</summary>
    static DicomUID CathFindings3728;//("1.2.840.10008.6.1.228", "Cath Findings (3728)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Admission Status (3729)</summary>
    static DicomUID AdmissionStatus3729;//("1.2.840.10008.6.1.229", "Admission Status (3729)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Insurance Payor (3730)</summary>
    static DicomUID InsurancePayor3730;//("1.2.840.10008.6.1.230", "Insurance Payor (3730)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Primary Cause of Death (3733)</summary>
    static DicomUID PrimaryCauseOfDeath3733;//("1.2.840.10008.6.1.231", "Primary Cause of Death (3733)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Acute Coronary Syndrome Time Period (3735)</summary>
    static DicomUID AcuteCoronarySyndromeTimePeriod3735;//("1.2.840.10008.6.1.232", "Acute Coronary Syndrome Time Period (3735)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: NYHA Classification (3736)</summary>
    static DicomUID NYHAClassification3736;//("1.2.840.10008.6.1.233", "NYHA Classification (3736)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Non-invasive Test - Ischemia (3737)</summary>
    static DicomUID NonInvasiveTestIschemia3737;//("1.2.840.10008.6.1.234", "Non-invasive Test - Ischemia (3737)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Pre-Cath Angina Type (3738)</summary>
    static DicomUID PreCathAnginaType3738;//("1.2.840.10008.6.1.235", "Pre-Cath Angina Type (3738)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Cath Procedure Type (3739)</summary>
    static DicomUID CathProcedureType3739;//("1.2.840.10008.6.1.236", "Cath Procedure Type (3739)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Thrombolytic Administration (3740)</summary>
    static DicomUID ThrombolyticAdministration3740;//("1.2.840.10008.6.1.237", "Thrombolytic Administration (3740)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Medication Administration, Lab Visit (3741)</summary>
    static DicomUID MedicationAdministrationLabVisit3741;//("1.2.840.10008.6.1.238", "Medication Administration, Lab Visit (3741)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Medication Administration, PCI (3742)</summary>
    static DicomUID MedicationAdministrationPCI3742;//("1.2.840.10008.6.1.239", "Medication Administration, PCI (3742)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Clopidogrel/Ticlopidine Administration (3743)</summary>
    static DicomUID ClopidogrelTiclopidineAdministration3743;//("1.2.840.10008.6.1.240", "Clopidogrel/Ticlopidine Administration (3743)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: EF Testing Method (3744)</summary>
    static DicomUID EFTestingMethod3744;//("1.2.840.10008.6.1.241", "EF Testing Method (3744)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Calculation Method (3745)</summary>
    static DicomUID CalculationMethod3745;//("1.2.840.10008.6.1.242", "Calculation Method (3745)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Percutaneous Entry Site (3746)</summary>
    static DicomUID PercutaneousEntrySite3746;//("1.2.840.10008.6.1.243", "Percutaneous Entry Site (3746)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Percutaneous Closure (3747)</summary>
    static DicomUID PercutaneousClosure3747;//("1.2.840.10008.6.1.244", "Percutaneous Closure (3747)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Angiographic EF Testing Method (3748)</summary>
    static DicomUID AngiographicEFTestingMethod3748;//("1.2.840.10008.6.1.245", "Angiographic EF Testing Method (3748)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: PCI Procedure Result (3749)</summary>
    static DicomUID PCIProcedureResult3749;//("1.2.840.10008.6.1.246", "PCI Procedure Result (3749)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Previously Dilated Lesion (3750)</summary>
    static DicomUID PreviouslyDilatedLesion3750;//("1.2.840.10008.6.1.247", "Previously Dilated Lesion (3750)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Guidewire Crossing (3752)</summary>
    static DicomUID GuidewireCrossing3752;//("1.2.840.10008.6.1.248", "Guidewire Crossing (3752)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Vascular Complications (3754)</summary>
    static DicomUID VascularComplications3754;//("1.2.840.10008.6.1.249", "Vascular Complications (3754)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Cath Complications (3755)</summary>
    static DicomUID CathComplications3755;//("1.2.840.10008.6.1.250", "Cath Complications (3755)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Cardiac Patient Risk Factors (3756)</summary>
    static DicomUID CardiacPatientRiskFactors3756;//("1.2.840.10008.6.1.251", "Cardiac Patient Risk Factors (3756)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Cardiac Diagnostic Procedures (3757)</summary>
    static DicomUID CardiacDiagnosticProcedures3757;//("1.2.840.10008.6.1.252", "Cardiac Diagnostic Procedures (3757)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Cardiovascular Family History (3758)</summary>
    static DicomUID CardiovascularFamilyHistory3758;//("1.2.840.10008.6.1.253", "Cardiovascular Family History (3758)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Hypertension Therapy (3760)</summary>
    static DicomUID HypertensionTherapy3760;//("1.2.840.10008.6.1.254", "Hypertension Therapy (3760)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Antilipemic Agents (3761)</summary>
    static DicomUID AntilipemicAgents3761;//("1.2.840.10008.6.1.255", "Antilipemic Agents (3761)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Antiarrhythmic Agents (3762)</summary>
    static DicomUID AntiarrhythmicAgents3762;//("1.2.840.10008.6.1.256", "Antiarrhythmic Agents (3762)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Myocardial Infarction Therapies (3764)</summary>
    static DicomUID MyocardialInfarctionTherapies3764;//("1.2.840.10008.6.1.257", "Myocardial Infarction Therapies (3764)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Concern Types (3769)</summary>
    static DicomUID ConcernTypes3769;//("1.2.840.10008.6.1.258", "Concern Types (3769)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Problem Status (3770)</summary>
    static DicomUID ProblemStatus3770;//("1.2.840.10008.6.1.259", "Problem Status (3770)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Health Status (3772)</summary>
    static DicomUID HealthStatus3772;//("1.2.840.10008.6.1.260", "Health Status (3772)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Use Status (3773)</summary>
    static DicomUID UseStatus3773;//("1.2.840.10008.6.1.261", "Use Status (3773)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Social History (3774)</summary>
    static DicomUID SocialHistory3774;//("1.2.840.10008.6.1.262", "Social History (3774)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Implanted Devices (3777)</summary>
    static DicomUID ImplantedDevices3777;//("1.2.840.10008.6.1.263", "Implanted Devices (3777)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Plaque Structures (3802)</summary>
    static DicomUID PlaqueStructures3802;//("1.2.840.10008.6.1.264", "Plaque Structures (3802)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Stenosis Measurement Methods (3804)</summary>
    static DicomUID StenosisMeasurementMethods3804;//("1.2.840.10008.6.1.265", "Stenosis Measurement Methods (3804)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Stenosis Types (3805)</summary>
    static DicomUID StenosisTypes3805;//("1.2.840.10008.6.1.266", "Stenosis Types (3805)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Stenosis Shape (3806)</summary>
    static DicomUID StenosisShape3806;//("1.2.840.10008.6.1.267", "Stenosis Shape (3806)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Volume Measurement Methods (3807)</summary>
    static DicomUID VolumeMeasurementMethods3807;//("1.2.840.10008.6.1.268", "Volume Measurement Methods (3807)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Aneurysm Types (3808)</summary>
    static DicomUID AneurysmTypes3808;//("1.2.840.10008.6.1.269", "Aneurysm Types (3808)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Associated Conditions (3809)</summary>
    static DicomUID AssociatedConditions3809;//("1.2.840.10008.6.1.270", "Associated Conditions (3809)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Vascular Morphology (3810)</summary>
    static DicomUID VascularMorphology3810;//("1.2.840.10008.6.1.271", "Vascular Morphology (3810)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Stent Findings (3813)</summary>
    static DicomUID StentFindings3813;//("1.2.840.10008.6.1.272", "Stent Findings (3813)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Stent Composition (3814)</summary>
    static DicomUID StentComposition3814;//("1.2.840.10008.6.1.273", "Stent Composition (3814)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Source of Vascular Finding (3815)</summary>
    static DicomUID SourceOfVascularFinding3815;//("1.2.840.10008.6.1.274", "Source of Vascular Finding (3815)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Vascular Sclerosis Types (3817)</summary>
    static DicomUID VascularSclerosisTypes3817;//("1.2.840.10008.6.1.275", "Vascular Sclerosis Types (3817)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Non-invasive Vascular Procedures (3820)</summary>
    static DicomUID NonInvasiveVascularProcedures3820;//("1.2.840.10008.6.1.276", "Non-invasive Vascular Procedures (3820)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Papillary Muscle Included/Excluded (3821)</summary>
    static DicomUID PapillaryMuscleIncludedExcluded3821;//("1.2.840.10008.6.1.277", "Papillary Muscle Included/Excluded (3821)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Respiratory Status (3823)</summary>
    static DicomUID RespiratoryStatus3823;//("1.2.840.10008.6.1.278", "Respiratory Status (3823)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Heart Rhythm (3826)</summary>
    static DicomUID HeartRhythm3826;//("1.2.840.10008.6.1.279", "Heart Rhythm (3826)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Vessel Segments (3827)</summary>
    static DicomUID VesselSegments3827;//("1.2.840.10008.6.1.280", "Vessel Segments (3827)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Pulmonary Arteries (3829)</summary>
    static DicomUID PulmonaryArteries3829;//("1.2.840.10008.6.1.281", "Pulmonary Arteries (3829)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Stenosis Length (3831)</summary>
    static DicomUID StenosisLength3831;//("1.2.840.10008.6.1.282", "Stenosis Length (3831)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Stenosis Grade (3832)</summary>
    static DicomUID StenosisGrade3832;//("1.2.840.10008.6.1.283", "Stenosis Grade (3832)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Cardiac Ejection Fraction (3833)</summary>
    static DicomUID CardiacEjectionFraction3833;//("1.2.840.10008.6.1.284", "Cardiac Ejection Fraction (3833)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Cardiac Volume Measurements (3835)</summary>
    static DicomUID CardiacVolumeMeasurements3835;//("1.2.840.10008.6.1.285", "Cardiac Volume Measurements (3835)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Time-based Perfusion Measurements (3836)</summary>
    static DicomUID TimeBasedPerfusionMeasurements3836;//("1.2.840.10008.6.1.286", "Time-based Perfusion Measurements (3836)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Fiducial Feature (3837)</summary>
    static DicomUID FiducialFeature3837;//("1.2.840.10008.6.1.287", "Fiducial Feature (3837)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Diameter Derivation (3838)</summary>
    static DicomUID DiameterDerivation3838;//("1.2.840.10008.6.1.288", "Diameter Derivation (3838)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Coronary Veins (3839)</summary>
    static DicomUID CoronaryVeins3839;//("1.2.840.10008.6.1.289", "Coronary Veins (3839)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Pulmonary Veins (3840)</summary>
    static DicomUID PulmonaryVeins3840;//("1.2.840.10008.6.1.290", "Pulmonary Veins (3840)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Myocardial Subsegment (3843)</summary>
    static DicomUID MyocardialSubsegment3843;//("1.2.840.10008.6.1.291", "Myocardial Subsegment (3843)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Partial View Section for Mammography (4005)</summary>
    static DicomUID PartialViewSectionForMammography4005;//("1.2.840.10008.6.1.292", "Partial View Section for Mammography (4005)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: DX Anatomy Imaged (4009)</summary>
    static DicomUID DXAnatomyImaged4009;//("1.2.840.10008.6.1.293", "DX Anatomy Imaged (4009)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: DX View (4010)</summary>
    static DicomUID DXView4010;//("1.2.840.10008.6.1.294", "DX View (4010)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: DX View Modifier (4011)</summary>
    static DicomUID DXViewModifier4011;//("1.2.840.10008.6.1.295", "DX View Modifier (4011)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Projection Eponymous Name (4012)</summary>
    static DicomUID ProjectionEponymousName4012;//("1.2.840.10008.6.1.296", "Projection Eponymous Name (4012)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Anatomic Region for Mammography (4013)</summary>
    static DicomUID AnatomicRegionForMammography4013;//("1.2.840.10008.6.1.297", "Anatomic Region for Mammography (4013)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: View for Mammography (4014)</summary>
    static DicomUID ViewForMammography4014;//("1.2.840.10008.6.1.298", "View for Mammography (4014)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: View Modifier for Mammography (4015)</summary>
    static DicomUID ViewModifierForMammography4015;//("1.2.840.10008.6.1.299", "View Modifier for Mammography (4015)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Anatomic Region for Intra-oral Radiography (4016)</summary>
    static DicomUID AnatomicRegionForIntraOralRadiography4016;//("1.2.840.10008.6.1.300", "Anatomic Region for Intra-oral Radiography (4016)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Anatomic Region Modifier for Intra-oral Radiography (4017)</summary>
    static DicomUID AnatomicRegionModifierForIntraOralRadiography4017;//("1.2.840.10008.6.1.301", "Anatomic Region Modifier for Intra-oral Radiography (4017)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Primary Anatomic Structure for Intra-oral Radiography (Permanent Dentition - Designation of Teeth) (4018)</summary>
    static DicomUID PrimaryAnatomicStructureForIntraOralRadiographyPermanentDentitionDesignationOfTeeth4018;//("1.2.840.10008.6.1.302", "Primary Anatomic Structure for Intra-oral Radiography (Permanent Dentition - Designation of Teeth) (4018)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Primary Anatomic Structure for Intra-oral Radiography (Deciduous Dentition - Designation of Teeth) (4019)</summary>
    static DicomUID PrimaryAnatomicStructureForIntraOralRadiographyDeciduousDentitionDesignationOfTeeth4019;//("1.2.840.10008.6.1.303", "Primary Anatomic Structure for Intra-oral Radiography (Deciduous Dentition - Designation of Teeth) (4019)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: PET Radionuclide (4020)</summary>
    static DicomUID PETRadionuclide4020;//("1.2.840.10008.6.1.304", "PET Radionuclide (4020)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: PET Radiopharmaceutical (4021)</summary>
    static DicomUID PETRadiopharmaceutical4021;//("1.2.840.10008.6.1.305", "PET Radiopharmaceutical (4021)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Craniofacial Anatomic Regions (4028)</summary>
    static DicomUID CraniofacialAnatomicRegions4028;//("1.2.840.10008.6.1.306", "Craniofacial Anatomic Regions (4028)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: CT, MR and PET Anatomy Imaged (4030)</summary>
    static DicomUID CTMRAndPETAnatomyImaged4030;//("1.2.840.10008.6.1.307", "CT, MR and PET Anatomy Imaged (4030)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Common Anatomic Regions (4031)</summary>
    static DicomUID CommonAnatomicRegions4031;//("1.2.840.10008.6.1.308", "Common Anatomic Regions (4031)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: MR Spectroscopy Metabolites (4032)</summary>
    static DicomUID MRSpectroscopyMetabolites4032;//("1.2.840.10008.6.1.309", "MR Spectroscopy Metabolites (4032)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: MR Proton Spectroscopy Metabolites (4033)</summary>
    static DicomUID MRProtonSpectroscopyMetabolites4033;//("1.2.840.10008.6.1.310", "MR Proton Spectroscopy Metabolites (4033)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Endoscopy Anatomic Regions (4040)</summary>
    static DicomUID EndoscopyAnatomicRegions4040;//("1.2.840.10008.6.1.311", "Endoscopy Anatomic Regions (4040)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: XA/XRF Anatomy Imaged (4042)</summary>
    static DicomUID XAXRFAnatomyImaged4042;//("1.2.840.10008.6.1.312", "XA/XRF Anatomy Imaged (4042)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Drug or Contrast Agent Characteristics (4050)</summary>
    static DicomUID DrugOrContrastAgentCharacteristics4050;//("1.2.840.10008.6.1.313", "Drug or Contrast Agent Characteristics (4050)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: General Devices (4051)</summary>
    static DicomUID GeneralDevices4051;//("1.2.840.10008.6.1.314", "General Devices (4051)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Phantom Devices (4052)</summary>
    static DicomUID PhantomDevices4052;//("1.2.840.10008.6.1.315", "Phantom Devices (4052)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Ophthalmic Imaging Agent (4200)</summary>
    static DicomUID OphthalmicImagingAgent4200;//("1.2.840.10008.6.1.316", "Ophthalmic Imaging Agent (4200)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Patient Eye Movement Command (4201)</summary>
    static DicomUID PatientEyeMovementCommand4201;//("1.2.840.10008.6.1.317", "Patient Eye Movement Command (4201)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Ophthalmic Photography Acquisition Device (4202)</summary>
    static DicomUID OphthalmicPhotographyAcquisitionDevice4202;//("1.2.840.10008.6.1.318", "Ophthalmic Photography Acquisition Device (4202)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Ophthalmic Photography Illumination (4203)</summary>
    static DicomUID OphthalmicPhotographyIllumination4203;//("1.2.840.10008.6.1.319", "Ophthalmic Photography Illumination (4203)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Ophthalmic Filter (4204)</summary>
    static DicomUID OphthalmicFilter4204;//("1.2.840.10008.6.1.320", "Ophthalmic Filter (4204)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Ophthalmic Lens (4205)</summary>
    static DicomUID OphthalmicLens4205;//("1.2.840.10008.6.1.321", "Ophthalmic Lens (4205)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Ophthalmic Channel Description (4206)</summary>
    static DicomUID OphthalmicChannelDescription4206;//("1.2.840.10008.6.1.322", "Ophthalmic Channel Description (4206)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Ophthalmic Image Position (4207)</summary>
    static DicomUID OphthalmicImagePosition4207;//("1.2.840.10008.6.1.323", "Ophthalmic Image Position (4207)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Mydriatic Agent (4208)</summary>
    static DicomUID MydriaticAgent4208;//("1.2.840.10008.6.1.324", "Mydriatic Agent (4208)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Ophthalmic Anatomic Structure Imaged (4209)</summary>
    static DicomUID OphthalmicAnatomicStructureImaged4209;//("1.2.840.10008.6.1.325", "Ophthalmic Anatomic Structure Imaged (4209)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Ophthalmic Tomography Acquisition Device (4210)</summary>
    static DicomUID OphthalmicTomographyAcquisitionDevice4210;//("1.2.840.10008.6.1.326", "Ophthalmic Tomography Acquisition Device (4210)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Ophthalmic OCT Anatomic Structure Imaged (4211)</summary>
    static DicomUID OphthalmicOCTAnatomicStructureImaged4211;//("1.2.840.10008.6.1.327", "Ophthalmic OCT Anatomic Structure Imaged (4211)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Languages (5000)</summary>
    static DicomUID Languages5000;//("1.2.840.10008.6.1.328", "Languages (5000)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Countries (5001)</summary>
    static DicomUID Countries5001;//("1.2.840.10008.6.1.329", "Countries (5001)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Overall Breast Composition (6000)</summary>
    static DicomUID OverallBreastComposition6000;//("1.2.840.10008.6.1.330", "Overall Breast Composition (6000)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Overall Breast Composition from BI-RADS® (6001)</summary>
    static DicomUID OverallBreastCompositionFromBIRADS6001;//("1.2.840.10008.6.1.331", "Overall Breast Composition from BI-RADS® (6001)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Change Since Last Mammogram or Prior Surgery (6002)</summary>
    static DicomUID ChangeSinceLastMammogramOrPriorSurgery6002;//("1.2.840.10008.6.1.332", "Change Since Last Mammogram or Prior Surgery (6002)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Change Since Last Mammogram or Prior Surgery from BI-RADS® (6003)</summary>
    static DicomUID ChangeSinceLastMammogramOrPriorSurgeryFromBIRADS6003;//("1.2.840.10008.6.1.333", "Change Since Last Mammogram or Prior Surgery from BI-RADS® (6003)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Mammography Characteristics of Shape (6004)</summary>
    static DicomUID MammographyCharacteristicsOfShape6004;//("1.2.840.10008.6.1.334", "Mammography Characteristics of Shape (6004)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Characteristics of Shape from BI-RADS® (6005)</summary>
    static DicomUID CharacteristicsOfShapeFromBIRADS6005;//("1.2.840.10008.6.1.335", "Characteristics of Shape from BI-RADS® (6005)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Mammography Characteristics of Margin (6006)</summary>
    static DicomUID MammographyCharacteristicsOfMargin6006;//("1.2.840.10008.6.1.336", "Mammography Characteristics of Margin (6006)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Characteristics of Margin from BI-RADS® (6007)</summary>
    static DicomUID CharacteristicsOfMarginFromBIRADS6007;//("1.2.840.10008.6.1.337", "Characteristics of Margin from BI-RADS® (6007)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Density Modifier (6008)</summary>
    static DicomUID DensityModifier6008;//("1.2.840.10008.6.1.338", "Density Modifier (6008)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Density Modifier from BI-RADS® (6009)</summary>
    static DicomUID DensityModifierFromBIRADS6009;//("1.2.840.10008.6.1.339", "Density Modifier from BI-RADS® (6009)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Mammography Calcification Types (6010)</summary>
    static DicomUID MammographyCalcificationTypes6010;//("1.2.840.10008.6.1.340", "Mammography Calcification Types (6010)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Calcification Types from BI-RADS® (6011)</summary>
    static DicomUID CalcificationTypesFromBIRADS6011;//("1.2.840.10008.6.1.341", "Calcification Types from BI-RADS® (6011)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Calcification Distribution Modifier (6012)</summary>
    static DicomUID CalcificationDistributionModifier6012;//("1.2.840.10008.6.1.342", "Calcification Distribution Modifier (6012)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Calcification Distribution Modifier from BI-RADS® (6013)</summary>
    static DicomUID CalcificationDistributionModifierFromBIRADS6013;//("1.2.840.10008.6.1.343", "Calcification Distribution Modifier from BI-RADS® (6013)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Mammography Single Image Finding (6014)</summary>
    static DicomUID MammographySingleImageFinding6014;//("1.2.840.10008.6.1.344", "Mammography Single Image Finding (6014)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Single Image Finding from BI-RADS® (6015)</summary>
    static DicomUID SingleImageFindingFromBIRADS6015;//("1.2.840.10008.6.1.345", "Single Image Finding from BI-RADS® (6015)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Mammography Composite Feature (6016)</summary>
    static DicomUID MammographyCompositeFeature6016;//("1.2.840.10008.6.1.346", "Mammography Composite Feature (6016)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Composite Feature from BI-RADS® (6017)</summary>
    static DicomUID CompositeFeatureFromBIRADS6017;//("1.2.840.10008.6.1.347", "Composite Feature from BI-RADS® (6017)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Clockface Location or Region (6018)</summary>
    static DicomUID ClockfaceLocationOrRegion6018;//("1.2.840.10008.6.1.348", "Clockface Location or Region (6018)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Clockface Location or Region from BI-RADS® (6019)</summary>
    static DicomUID ClockfaceLocationOrRegionFromBIRADS6019;//("1.2.840.10008.6.1.349", "Clockface Location or Region from BI-RADS® (6019)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Quadrant Location (6020)</summary>
    static DicomUID QuadrantLocation6020;//("1.2.840.10008.6.1.350", "Quadrant Location (6020)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Quadrant Location from BI-RADS® (6021)</summary>
    static DicomUID QuadrantLocationFromBIRADS6021;//("1.2.840.10008.6.1.351", "Quadrant Location from BI-RADS® (6021)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Side (6022)</summary>
    static DicomUID Side6022;//("1.2.840.10008.6.1.352", "Side (6022)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Side from BI-RADS® (6023)</summary>
    static DicomUID SideFromBIRADS6023;//("1.2.840.10008.6.1.353", "Side from BI-RADS® (6023)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Depth (6024)</summary>
    static DicomUID Depth6024;//("1.2.840.10008.6.1.354", "Depth (6024)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Depth from BI-RADS® (6025)</summary>
    static DicomUID DepthFromBIRADS6025;//("1.2.840.10008.6.1.355", "Depth from BI-RADS® (6025)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Mammography Assessment (6026)</summary>
    static DicomUID MammographyAssessment6026;//("1.2.840.10008.6.1.356", "Mammography Assessment (6026)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Assessment from BI-RADS® (6027)</summary>
    static DicomUID AssessmentFromBIRADS6027;//("1.2.840.10008.6.1.357", "Assessment from BI-RADS® (6027)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Mammography Recommended Follow-up (6028)</summary>
    static DicomUID MammographyRecommendedFollowUp6028;//("1.2.840.10008.6.1.358", "Mammography Recommended Follow-up (6028)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Recommended Follow-up from BI-RADS® (6029)</summary>
    static DicomUID RecommendedFollowUpFromBIRADS6029;//("1.2.840.10008.6.1.359", "Recommended Follow-up from BI-RADS® (6029)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Mammography Pathology Codes (6030)</summary>
    static DicomUID MammographyPathologyCodes6030;//("1.2.840.10008.6.1.360", "Mammography Pathology Codes (6030)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Benign Pathology Codes from BI-RADS® (6031)</summary>
    static DicomUID BenignPathologyCodesFromBIRADS6031;//("1.2.840.10008.6.1.361", "Benign Pathology Codes from BI-RADS® (6031)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: High Risk Lesions Pathology Codes from BI-RADS® (6032)</summary>
    static DicomUID HighRiskLesionsPathologyCodesFromBIRADS6032;//("1.2.840.10008.6.1.362", "High Risk Lesions Pathology Codes from BI-RADS® (6032)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Malignant Pathology Codes from BI-RADS® (6033)</summary>
    static DicomUID MalignantPathologyCodesFromBIRADS6033;//("1.2.840.10008.6.1.363", "Malignant Pathology Codes from BI-RADS® (6033)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Intended Use of CAD Output (6034)</summary>
    static DicomUID IntendedUseOfCADOutput6034;//("1.2.840.10008.6.1.364", "Intended Use of CAD Output (6034)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Composite Feature Relations (6035)</summary>
    static DicomUID CompositeFeatureRelations6035;//("1.2.840.10008.6.1.365", "Composite Feature Relations (6035)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Scope of Feature (6036)</summary>
    static DicomUID ScopeOfFeature6036;//("1.2.840.10008.6.1.366", "Scope of Feature (6036)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Mammography Quantitative Temporal Difference Type (6037)</summary>
    static DicomUID MammographyQuantitativeTemporalDifferenceType6037;//("1.2.840.10008.6.1.367", "Mammography Quantitative Temporal Difference Type (6037)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Mammography Qualitative Temporal Difference Type (6038)</summary>
    static DicomUID MammographyQualitativeTemporalDifferenceType6038;//("1.2.840.10008.6.1.368", "Mammography Qualitative Temporal Difference Type (6038)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Nipple Characteristic (6039)</summary>
    static DicomUID NippleCharacteristic6039;//("1.2.840.10008.6.1.369", "Nipple Characteristic (6039)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Non-lesion Object Type (6040)</summary>
    static DicomUID NonLesionObjectType6040;//("1.2.840.10008.6.1.370", "Non-lesion Object Type (6040)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Mammography Image Quality Finding (6041)</summary>
    static DicomUID MammographyImageQualityFinding6041;//("1.2.840.10008.6.1.371", "Mammography Image Quality Finding (6041)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Status of Results (6042)</summary>
    static DicomUID StatusOfResults6042;//("1.2.840.10008.6.1.372", "Status of Results (6042)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Types of Mammography CAD Analysis (6043)</summary>
    static DicomUID TypesOfMammographyCADAnalysis6043;//("1.2.840.10008.6.1.373", "Types of Mammography CAD Analysis (6043)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Types of Image Quality Assessment (6044)</summary>
    static DicomUID TypesOfImageQualityAssessment6044;//("1.2.840.10008.6.1.374", "Types of Image Quality Assessment (6044)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Mammography Types of Quality Control Standard (6045)</summary>
    static DicomUID MammographyTypesOfQualityControlStandard6045;//("1.2.840.10008.6.1.375", "Mammography Types of Quality Control Standard (6045)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Units of Follow-up Interval (6046)</summary>
    static DicomUID UnitsOfFollowUpInterval6046;//("1.2.840.10008.6.1.376", "Units of Follow-up Interval (6046)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: CAD Processing and Findings Summary (6047)</summary>
    static DicomUID CADProcessingAndFindingsSummary6047;//("1.2.840.10008.6.1.377", "CAD Processing and Findings Summary (6047)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: CAD Operating Point Axis Label (6048)</summary>
    static DicomUID CADOperatingPointAxisLabel6048;//("1.2.840.10008.6.1.378", "CAD Operating Point Axis Label (6048)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Breast Procedure Reported (6050)</summary>
    static DicomUID BreastProcedureReported6050;//("1.2.840.10008.6.1.379", "Breast Procedure Reported (6050)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Breast Procedure Reason (6051)</summary>
    static DicomUID BreastProcedureReason6051;//("1.2.840.10008.6.1.380", "Breast Procedure Reason (6051)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Breast Imaging Report Section Title (6052)</summary>
    static DicomUID BreastImagingReportSectionTitle6052;//("1.2.840.10008.6.1.381", "Breast Imaging Report Section Title (6052)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Breast Imaging Report Elements (6053)</summary>
    static DicomUID BreastImagingReportElements6053;//("1.2.840.10008.6.1.382", "Breast Imaging Report Elements (6053)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Breast Imaging Findings (6054)</summary>
    static DicomUID BreastImagingFindings6054;//("1.2.840.10008.6.1.383", "Breast Imaging Findings (6054)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Breast Clinical Finding or Indicated Problem (6055)</summary>
    static DicomUID BreastClinicalFindingOrIndicatedProblem6055;//("1.2.840.10008.6.1.384", "Breast Clinical Finding or Indicated Problem (6055)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Associated Findings for Breast (6056)</summary>
    static DicomUID AssociatedFindingsForBreast6056;//("1.2.840.10008.6.1.385", "Associated Findings for Breast (6056)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Ductography Findings for Breast (6057)</summary>
    static DicomUID DuctographyFindingsForBreast6057;//("1.2.840.10008.6.1.386", "Ductography Findings for Breast (6057)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Procedure Modifiers for Breast (6058)</summary>
    static DicomUID ProcedureModifiersForBreast6058;//("1.2.840.10008.6.1.387", "Procedure Modifiers for Breast (6058)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Breast Implant Types (6059)</summary>
    static DicomUID BreastImplantTypes6059;//("1.2.840.10008.6.1.388", "Breast Implant Types (6059)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Breast Biopsy Techniques (6060)</summary>
    static DicomUID BreastBiopsyTechniques6060;//("1.2.840.10008.6.1.389", "Breast Biopsy Techniques (6060)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Breast Imaging Procedure Modifiers (6061)</summary>
    static DicomUID BreastImagingProcedureModifiers6061;//("1.2.840.10008.6.1.390", "Breast Imaging Procedure Modifiers (6061)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Interventional Procedure Complications (6062)</summary>
    static DicomUID InterventionalProcedureComplications6062;//("1.2.840.10008.6.1.391", "Interventional Procedure Complications (6062)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Interventional Procedure Results (6063)</summary>
    static DicomUID InterventionalProcedureResults6063;//("1.2.840.10008.6.1.392", "Interventional Procedure Results (6063)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Ultrasound Findings for Breast (6064)</summary>
    static DicomUID UltrasoundFindingsForBreast6064;//("1.2.840.10008.6.1.393", "Ultrasound Findings for Breast (6064)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Instrument Approach (6065)</summary>
    static DicomUID InstrumentApproach6065;//("1.2.840.10008.6.1.394", "Instrument Approach (6065)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Target Confirmation (6066)</summary>
    static DicomUID TargetConfirmation6066;//("1.2.840.10008.6.1.395", "Target Confirmation (6066)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Fluid Color (6067)</summary>
    static DicomUID FluidColor6067;//("1.2.840.10008.6.1.396", "Fluid Color (6067)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Tumor Stages From AJCC (6068)</summary>
    static DicomUID TumorStagesFromAJCC6068;//("1.2.840.10008.6.1.397", "Tumor Stages From AJCC (6068)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Nottingham Combined Histologic Grade (6069)</summary>
    static DicomUID NottinghamCombinedHistologicGrade6069;//("1.2.840.10008.6.1.398", "Nottingham Combined Histologic Grade (6069)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Bloom-Richardson Histologic Grade (6070)</summary>
    static DicomUID BloomRichardsonHistologicGrade6070;//("1.2.840.10008.6.1.399", "Bloom-Richardson Histologic Grade (6070)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Histologic Grading Method (6071)</summary>
    static DicomUID HistologicGradingMethod6071;//("1.2.840.10008.6.1.400", "Histologic Grading Method (6071)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Breast Implant Findings (6072)</summary>
    static DicomUID BreastImplantFindings6072;//("1.2.840.10008.6.1.401", "Breast Implant Findings (6072)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Gynecological Hormones (6080)</summary>
    static DicomUID GynecologicalHormones6080;//("1.2.840.10008.6.1.402", "Gynecological Hormones (6080)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Breast Cancer Risk Factors (6081)</summary>
    static DicomUID BreastCancerRiskFactors6081;//("1.2.840.10008.6.1.403", "Breast Cancer Risk Factors (6081)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Gynecological Procedures (6082)</summary>
    static DicomUID GynecologicalProcedures6082;//("1.2.840.10008.6.1.404", "Gynecological Procedures (6082)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Procedures for Breast (6083)</summary>
    static DicomUID ProceduresForBreast6083;//("1.2.840.10008.6.1.405", "Procedures for Breast (6083)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Mammoplasty Procedures (6084)</summary>
    static DicomUID MammoplastyProcedures6084;//("1.2.840.10008.6.1.406", "Mammoplasty Procedures (6084)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Therapies for Breast (6085)</summary>
    static DicomUID TherapiesForBreast6085;//("1.2.840.10008.6.1.407", "Therapies for Breast (6085)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Menopausal Phase (6086)</summary>
    static DicomUID MenopausalPhase6086;//("1.2.840.10008.6.1.408", "Menopausal Phase (6086)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: General Risk Factors (6087)</summary>
    static DicomUID GeneralRiskFactors6087;//("1.2.840.10008.6.1.409", "General Risk Factors (6087)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: OB-GYN Maternal Risk Factors (6088)</summary>
    static DicomUID OBGYNMaternalRiskFactors6088;//("1.2.840.10008.6.1.410", "OB-GYN Maternal Risk Factors (6088)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Substances (6089)</summary>
    static DicomUID Substances6089;//("1.2.840.10008.6.1.411", "Substances (6089)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Relative Usage, Exposure Amount (6090)</summary>
    static DicomUID RelativeUsageExposureAmount6090;//("1.2.840.10008.6.1.412", "Relative Usage, Exposure Amount (6090)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Relative Frequency of Event Values (6091)</summary>
    static DicomUID RelativeFrequencyOfEventValues6091;//("1.2.840.10008.6.1.413", "Relative Frequency of Event Values (6091)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Quantitative Concepts for Usage, Exposure (6092)</summary>
    static DicomUID QuantitativeConceptsForUsageExposure6092;//("1.2.840.10008.6.1.414", "Quantitative Concepts for Usage, Exposure (6092)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Qualitative Concepts for Usage, Exposure Amount (6093)</summary>
    static DicomUID QualitativeConceptsForUsageExposureAmount6093;//("1.2.840.10008.6.1.415", "Qualitative Concepts for Usage, Exposure Amount (6093)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Qualitative Concepts for Usage, Exposure Frequency (6094)</summary>
    static DicomUID QualitativeConceptsForUsageExposureFrequency6094;//("1.2.840.10008.6.1.416", "Qualitative Concepts for Usage, Exposure Frequency (6094)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Numeric Properties of Procedures (6095)</summary>
    static DicomUID NumericPropertiesOfProcedures6095;//("1.2.840.10008.6.1.417", "Numeric Properties of Procedures (6095)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Pregnancy Status (6096)</summary>
    static DicomUID PregnancyStatus6096;//("1.2.840.10008.6.1.418", "Pregnancy Status (6096)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Side of Family (6097)</summary>
    static DicomUID SideOfFamily6097;//("1.2.840.10008.6.1.419", "Side of Family (6097)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Chest Component Categories (6100)</summary>
    static DicomUID ChestComponentCategories6100;//("1.2.840.10008.6.1.420", "Chest Component Categories (6100)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Chest Finding or Feature (6101)</summary>
    static DicomUID ChestFindingOrFeature6101;//("1.2.840.10008.6.1.421", "Chest Finding or Feature (6101)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Chest Finding or Feature Modifier (6102)</summary>
    static DicomUID ChestFindingOrFeatureModifier6102;//("1.2.840.10008.6.1.422", "Chest Finding or Feature Modifier (6102)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Abnormal Lines Finding or Feature (6103)</summary>
    static DicomUID AbnormalLinesFindingOrFeature6103;//("1.2.840.10008.6.1.423", "Abnormal Lines Finding or Feature (6103)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Abnormal Opacity Finding or Feature (6104)</summary>
    static DicomUID AbnormalOpacityFindingOrFeature6104;//("1.2.840.10008.6.1.424", "Abnormal Opacity Finding or Feature (6104)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Abnormal Lucency Finding or Feature (6105)</summary>
    static DicomUID AbnormalLucencyFindingOrFeature6105;//("1.2.840.10008.6.1.425", "Abnormal Lucency Finding or Feature (6105)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Abnormal Texture Finding or Feature (6106)</summary>
    static DicomUID AbnormalTextureFindingOrFeature6106;//("1.2.840.10008.6.1.426", "Abnormal Texture Finding or Feature (6106)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Width Descriptor (6107)</summary>
    static DicomUID WidthDescriptor6107;//("1.2.840.10008.6.1.427", "Width Descriptor (6107)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Chest Anatomic Structure Abnormal Distribution (6108)</summary>
    static DicomUID ChestAnatomicStructureAbnormalDistribution6108;//("1.2.840.10008.6.1.428", "Chest Anatomic Structure Abnormal Distribution (6108)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Radiographic Anatomy Finding or Feature (6109)</summary>
    static DicomUID RadiographicAnatomyFindingOrFeature6109;//("1.2.840.10008.6.1.429", "Radiographic Anatomy Finding or Feature (6109)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Lung Anatomy Finding or Feature (6110)</summary>
    static DicomUID LungAnatomyFindingOrFeature6110;//("1.2.840.10008.6.1.430", "Lung Anatomy Finding or Feature (6110)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Bronchovascular Anatomy Finding or Feature (6111)</summary>
    static DicomUID BronchovascularAnatomyFindingOrFeature6111;//("1.2.840.10008.6.1.431", "Bronchovascular Anatomy Finding or Feature (6111)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Pleura Anatomy Finding or Feature (6112)</summary>
    static DicomUID PleuraAnatomyFindingOrFeature6112;//("1.2.840.10008.6.1.432", "Pleura Anatomy Finding or Feature (6112)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Mediastinum Anatomy Finding or Feature (6113)</summary>
    static DicomUID MediastinumAnatomyFindingOrFeature6113;//("1.2.840.10008.6.1.433", "Mediastinum Anatomy Finding or Feature (6113)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Osseous Anatomy Finding or Feature (6114)</summary>
    static DicomUID OsseousAnatomyFindingOrFeature6114;//("1.2.840.10008.6.1.434", "Osseous Anatomy Finding or Feature (6114)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Osseous Anatomy Modifiers (6115)</summary>
    static DicomUID OsseousAnatomyModifiers6115;//("1.2.840.10008.6.1.435", "Osseous Anatomy Modifiers (6115)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Muscular Anatomy (6116)</summary>
    static DicomUID MuscularAnatomy6116;//("1.2.840.10008.6.1.436", "Muscular Anatomy (6116)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Vascular Anatomy (6117)</summary>
    static DicomUID VascularAnatomy6117;//("1.2.840.10008.6.1.437", "Vascular Anatomy (6117)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Size Descriptor (6118)</summary>
    static DicomUID SizeDescriptor6118;//("1.2.840.10008.6.1.438", "Size Descriptor (6118)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Chest Border Shape (6119)</summary>
    static DicomUID ChestBorderShape6119;//("1.2.840.10008.6.1.439", "Chest Border Shape (6119)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Chest Border Definition (6120)</summary>
    static DicomUID ChestBorderDefinition6120;//("1.2.840.10008.6.1.440", "Chest Border Definition (6120)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Chest Orientation Descriptor (6121)</summary>
    static DicomUID ChestOrientationDescriptor6121;//("1.2.840.10008.6.1.441", "Chest Orientation Descriptor (6121)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Chest Content Descriptor (6122)</summary>
    static DicomUID ChestContentDescriptor6122;//("1.2.840.10008.6.1.442", "Chest Content Descriptor (6122)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Chest Opacity Descriptor (6123)</summary>
    static DicomUID ChestOpacityDescriptor6123;//("1.2.840.10008.6.1.443", "Chest Opacity Descriptor (6123)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Location in Chest (6124)</summary>
    static DicomUID LocationInChest6124;//("1.2.840.10008.6.1.444", "Location in Chest (6124)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: General Chest Location (6125)</summary>
    static DicomUID GeneralChestLocation6125;//("1.2.840.10008.6.1.445", "General Chest Location (6125)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Location in Lung (6126)</summary>
    static DicomUID LocationInLung6126;//("1.2.840.10008.6.1.446", "Location in Lung (6126)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Segment Location in Lung (6127)</summary>
    static DicomUID SegmentLocationInLung6127;//("1.2.840.10008.6.1.447", "Segment Location in Lung (6127)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Chest Distribution Descriptor (6128)</summary>
    static DicomUID ChestDistributionDescriptor6128;//("1.2.840.10008.6.1.448", "Chest Distribution Descriptor (6128)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Chest Site Involvement (6129)</summary>
    static DicomUID ChestSiteInvolvement6129;//("1.2.840.10008.6.1.449", "Chest Site Involvement (6129)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Severity Descriptor (6130)</summary>
    static DicomUID SeverityDescriptor6130;//("1.2.840.10008.6.1.450", "Severity Descriptor (6130)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Chest Texture Descriptor (6131)</summary>
    static DicomUID ChestTextureDescriptor6131;//("1.2.840.10008.6.1.451", "Chest Texture Descriptor (6131)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Chest Calcification Descriptor (6132)</summary>
    static DicomUID ChestCalcificationDescriptor6132;//("1.2.840.10008.6.1.452", "Chest Calcification Descriptor (6132)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Chest Quantitative Temporal Difference Type (6133)</summary>
    static DicomUID ChestQuantitativeTemporalDifferenceType6133;//("1.2.840.10008.6.1.453", "Chest Quantitative Temporal Difference Type (6133)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Chest Qualitative Temporal Difference Type (6134)</summary>
    static DicomUID ChestQualitativeTemporalDifferenceType6134;//("1.2.840.10008.6.1.454", "Chest Qualitative Temporal Difference Type (6134)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Image Quality Finding (6135)</summary>
    static DicomUID ImageQualityFinding6135;//("1.2.840.10008.6.1.455", "Image Quality Finding (6135)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Chest Types of Quality Control Standard (6136)</summary>
    static DicomUID ChestTypesOfQualityControlStandard6136;//("1.2.840.10008.6.1.456", "Chest Types of Quality Control Standard (6136)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Types of CAD Analysis (6137)</summary>
    static DicomUID TypesOfCADAnalysis6137;//("1.2.840.10008.6.1.457", "Types of CAD Analysis (6137)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Chest Non-lesion Object Type (6138)</summary>
    static DicomUID ChestNonLesionObjectType6138;//("1.2.840.10008.6.1.458", "Chest Non-lesion Object Type (6138)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Non-lesion Modifiers (6139)</summary>
    static DicomUID NonLesionModifiers6139;//("1.2.840.10008.6.1.459", "Non-lesion Modifiers (6139)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Calculation Methods (6140)</summary>
    static DicomUID CalculationMethods6140;//("1.2.840.10008.6.1.460", "Calculation Methods (6140)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Attenuation Coefficient Measurements (6141)</summary>
    static DicomUID AttenuationCoefficientMeasurements6141;//("1.2.840.10008.6.1.461", "Attenuation Coefficient Measurements (6141)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Calculated Value (6142)</summary>
    static DicomUID CalculatedValue6142;//("1.2.840.10008.6.1.462", "Calculated Value (6142)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Lesion Response (6143)</summary>
    static DicomUID LesionResponse6143;//("1.2.840.10008.6.1.463", "Lesion Response (6143)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: RECIST Defined Lesion Response (6144)</summary>
    static DicomUID RECISTDefinedLesionResponse6144;//("1.2.840.10008.6.1.464", "RECIST Defined Lesion Response (6144)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Baseline Category (6145)</summary>
    static DicomUID BaselineCategory6145;//("1.2.840.10008.6.1.465", "Baseline Category (6145)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Background Echotexture (6151)</summary>
    static DicomUID BackgroundEchotexture6151;//("1.2.840.10008.6.1.466", "Background Echotexture (6151)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Orientation (6152)</summary>
    static DicomUID Orientation6152;//("1.2.840.10008.6.1.467", "Orientation (6152)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Lesion Boundary (6153)</summary>
    static DicomUID LesionBoundary6153;//("1.2.840.10008.6.1.468", "Lesion Boundary (6153)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Echo Pattern (6154)</summary>
    static DicomUID EchoPattern6154;//("1.2.840.10008.6.1.469", "Echo Pattern (6154)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Posterior Acoustic Features (6155)</summary>
    static DicomUID PosteriorAcousticFeatures6155;//("1.2.840.10008.6.1.470", "Posterior Acoustic Features (6155)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Vascularity (6157)</summary>
    static DicomUID Vascularity6157;//("1.2.840.10008.6.1.471", "Vascularity (6157)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Correlation to Other Findings (6158)</summary>
    static DicomUID CorrelationToOtherFindings6158;//("1.2.840.10008.6.1.472", "Correlation to Other Findings (6158)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Malignancy Type (6159)</summary>
    static DicomUID MalignancyType6159;//("1.2.840.10008.6.1.473", "Malignancy Type (6159)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Breast Primary Tumor Assessment From AJCC (6160)</summary>
    static DicomUID BreastPrimaryTumorAssessmentFromAJCC6160;//("1.2.840.10008.6.1.474", "Breast Primary Tumor Assessment From AJCC (6160)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Clinical Regional Lymph Node Assessment for Breast (6161)</summary>
    static DicomUID ClinicalRegionalLymphNodeAssessmentForBreast6161;//("1.2.840.10008.6.1.475", "Clinical Regional Lymph Node Assessment for Breast (6161)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Assessment of Metastasis for Breast (6162)</summary>
    static DicomUID AssessmentOfMetastasisForBreast6162;//("1.2.840.10008.6.1.476", "Assessment of Metastasis for Breast (6162)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Menstrual Cycle Phase (6163)</summary>
    static DicomUID MenstrualCyclePhase6163;//("1.2.840.10008.6.1.477", "Menstrual Cycle Phase (6163)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Time Intervals (6164)</summary>
    static DicomUID TimeIntervals6164;//("1.2.840.10008.6.1.478", "Time Intervals (6164)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Breast Linear Measurements (6165)</summary>
    static DicomUID BreastLinearMeasurements6165;//("1.2.840.10008.6.1.479", "Breast Linear Measurements (6165)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: CAD Geometry Secondary Graphical Representation (6166)</summary>
    static DicomUID CADGeometrySecondaryGraphicalRepresentation6166;//("1.2.840.10008.6.1.480", "CAD Geometry Secondary Graphical Representation (6166)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Diagnostic Imaging Report Document Titles (7000)</summary>
    static DicomUID DiagnosticImagingReportDocumentTitles7000;//("1.2.840.10008.6.1.481", "Diagnostic Imaging Report Document Titles (7000)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Diagnostic Imaging Report Headings (7001)</summary>
    static DicomUID DiagnosticImagingReportHeadings7001;//("1.2.840.10008.6.1.482", "Diagnostic Imaging Report Headings (7001)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Diagnostic Imaging Report Elements (7002)</summary>
    static DicomUID DiagnosticImagingReportElements7002;//("1.2.840.10008.6.1.483", "Diagnostic Imaging Report Elements (7002)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Diagnostic Imaging Report Purposes of Reference (7003)</summary>
    static DicomUID DiagnosticImagingReportPurposesOfReference7003;//("1.2.840.10008.6.1.484", "Diagnostic Imaging Report Purposes of Reference (7003)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Waveform Purposes of Reference (7004)</summary>
    static DicomUID WaveformPurposesOfReference7004;//("1.2.840.10008.6.1.485", "Waveform Purposes of Reference (7004)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Contributing Equipment Purposes of Reference (7005)</summary>
    static DicomUID ContributingEquipmentPurposesOfReference7005;//("1.2.840.10008.6.1.486", "Contributing Equipment Purposes of Reference (7005)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: SR Document Purposes of Reference (7006)</summary>
    static DicomUID SRDocumentPurposesOfReference7006;//("1.2.840.10008.6.1.487", "SR Document Purposes of Reference (7006)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Signature Purpose (7007)</summary>
    static DicomUID SignaturePurpose7007;//("1.2.840.10008.6.1.488", "Signature Purpose (7007)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Media Import (7008)</summary>
    static DicomUID MediaImport7008;//("1.2.840.10008.6.1.489", "Media Import (7008)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Key Object Selection Document Title (7010)</summary>
    static DicomUID KeyObjectSelectionDocumentTitle7010;//("1.2.840.10008.6.1.490", "Key Object Selection Document Title (7010)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Rejected for Quality Reasons (7011)</summary>
    static DicomUID RejectedForQualityReasons7011;//("1.2.840.10008.6.1.491", "Rejected for Quality Reasons (7011)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Best in Set (7012)</summary>
    static DicomUID BestInSet7012;//("1.2.840.10008.6.1.492", "Best in Set (7012)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Document Titles (7020)</summary>
    static DicomUID DocumentTitles7020;//("1.2.840.10008.6.1.493", "Document Titles (7020)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: RCS Registration Method Type (7100)</summary>
    static DicomUID RCSRegistrationMethodType7100;//("1.2.840.10008.6.1.494", "RCS Registration Method Type (7100)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Brain Atlas Fiducials (7101)</summary>
    static DicomUID BrainAtlasFiducials7101;//("1.2.840.10008.6.1.495", "Brain Atlas Fiducials (7101)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Segmentation Property Categories (7150)</summary>
    static DicomUID SegmentationPropertyCategories7150;//("1.2.840.10008.6.1.496", "Segmentation Property Categories (7150)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Segmentation Property Types (7151)</summary>
    static DicomUID SegmentationPropertyTypes7151;//("1.2.840.10008.6.1.497", "Segmentation Property Types (7151)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Cardiac Structure Segmentation Types (7152)</summary>
    static DicomUID CardiacStructureSegmentationTypes7152;//("1.2.840.10008.6.1.498", "Cardiac Structure Segmentation Types (7152)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: CNS Segmentation Types (7153)</summary>
    static DicomUID CNSSegmentationTypes7153;//("1.2.840.10008.6.1.499", "CNS Segmentation Types (7153)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Abdominal Segmentation Types (7154)</summary>
    static DicomUID AbdominalSegmentationTypes7154;//("1.2.840.10008.6.1.500", "Abdominal Segmentation Types (7154)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Thoracic Segmentation Types (7155)</summary>
    static DicomUID ThoracicSegmentationTypes7155;//("1.2.840.10008.6.1.501", "Thoracic Segmentation Types (7155)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Vascular Segmentation Types (7156)</summary>
    static DicomUID VascularSegmentationTypes7156;//("1.2.840.10008.6.1.502", "Vascular Segmentation Types (7156)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Device Segmentation Types (7157)</summary>
    static DicomUID DeviceSegmentationTypes7157;//("1.2.840.10008.6.1.503", "Device Segmentation Types (7157)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Artifact Segmentation Types (7158)</summary>
    static DicomUID ArtifactSegmentationTypes7158;//("1.2.840.10008.6.1.504", "Artifact Segmentation Types (7158)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Lesion Segmentation Types (7159)</summary>
    static DicomUID LesionSegmentationTypes7159;//("1.2.840.10008.6.1.505", "Lesion Segmentation Types (7159)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Pelvic Organ Segmentation Types (7160)</summary>
    static DicomUID PelvicOrganSegmentationTypes7160;//("1.2.840.10008.6.1.506", "Pelvic Organ Segmentation Types (7160)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Physiology Segmentation Types (7161)</summary>
    static DicomUID PhysiologySegmentationTypes7161;//("1.2.840.10008.6.1.507", "Physiology Segmentation Types (7161)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Referenced Image Purposes of Reference (7201)</summary>
    static DicomUID ReferencedImagePurposesOfReference7201;//("1.2.840.10008.6.1.508", "Referenced Image Purposes of Reference (7201)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Source Image Purposes of Reference (7202)</summary>
    static DicomUID SourceImagePurposesOfReference7202;//("1.2.840.10008.6.1.509", "Source Image Purposes of Reference (7202)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Image Derivation (7203)</summary>
    static DicomUID ImageDerivation7203;//("1.2.840.10008.6.1.510", "Image Derivation (7203)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Purpose of Reference to Alternate Representation (7205)</summary>
    static DicomUID PurposeOfReferenceToAlternateRepresentation7205;//("1.2.840.10008.6.1.511", "Purpose of Reference to Alternate Representation (7205)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Related Series Purposes of Reference (7210)</summary>
    static DicomUID RelatedSeriesPurposesOfReference7210;//("1.2.840.10008.6.1.512", "Related Series Purposes of Reference (7210)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Multi-Frame Subset Type (7250)</summary>
    static DicomUID MultiFrameSubsetType7250;//("1.2.840.10008.6.1.513", "Multi-Frame Subset Type (7250)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Person Roles (7450)</summary>
    static DicomUID PersonRoles7450;//("1.2.840.10008.6.1.514", "Person Roles (7450)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Family Member (7451)</summary>
    static DicomUID FamilyMember7451;//("1.2.840.10008.6.1.515", "Family Member (7451)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Organizational Roles (7452)</summary>
    static DicomUID OrganizationalRoles7452;//("1.2.840.10008.6.1.516", "Organizational Roles (7452)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Performing Roles (7453)</summary>
    static DicomUID PerformingRoles7453;//("1.2.840.10008.6.1.517", "Performing Roles (7453)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Animal Taxonomic Rank Values (7454)</summary>
    static DicomUID AnimalTaxonomicRankValues7454;//("1.2.840.10008.6.1.518", "Animal Taxonomic Rank Values (7454)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Sex (7455)</summary>
    static DicomUID Sex7455;//("1.2.840.10008.6.1.519", "Sex (7455)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Units of Measure for Age (7456)</summary>
    static DicomUID UnitsOfMeasureForAge7456;//("1.2.840.10008.6.1.520", "Units of Measure for Age (7456)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Units of Linear Measurement (7460)</summary>
    static DicomUID UnitsOfLinearMeasurement7460;//("1.2.840.10008.6.1.521", "Units of Linear Measurement (7460)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Units of Area Measurement (7461)</summary>
    static DicomUID UnitsOfAreaMeasurement7461;//("1.2.840.10008.6.1.522", "Units of Area Measurement (7461)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Units of Volume Measurement (7462)</summary>
    static DicomUID UnitsOfVolumeMeasurement7462;//("1.2.840.10008.6.1.523", "Units of Volume Measurement (7462)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Linear Measurements (7470)</summary>
    static DicomUID LinearMeasurements7470;//("1.2.840.10008.6.1.524", "Linear Measurements (7470)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Area Measurements (7471)</summary>
    static DicomUID AreaMeasurements7471;//("1.2.840.10008.6.1.525", "Area Measurements (7471)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Volume Measurements (7472)</summary>
    static DicomUID VolumeMeasurements7472;//("1.2.840.10008.6.1.526", "Volume Measurements (7472)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: General Area Calculation Methods (7473)</summary>
    static DicomUID GeneralAreaCalculationMethods7473;//("1.2.840.10008.6.1.527", "General Area Calculation Methods (7473)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: General Volume Calculation Methods (7474)</summary>
    static DicomUID GeneralVolumeCalculationMethods7474;//("1.2.840.10008.6.1.528", "General Volume Calculation Methods (7474)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Breed (7480)</summary>
    static DicomUID Breed7480;//("1.2.840.10008.6.1.529", "Breed (7480)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Breed Registry (7481)</summary>
    static DicomUID BreedRegistry7481;//("1.2.840.10008.6.1.530", "Breed Registry (7481)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Workitem Definition (9231)</summary>
    static DicomUID WorkitemDefinition9231;//("1.2.840.10008.6.1.531", "Workitem Definition (9231)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Non-DICOM Output Types (Retired) (9232)</summary>
    static DicomUID NonDICOMOutputTypes9232RETIRED;//("1.2.840.10008.6.1.532", "Non-DICOM Output Types (Retired) (9232)", DicomUidType.ContextGroupName, true);

///<summary>Context Group Name: Procedure Discontinuation Reasons (9300)</summary>
    static DicomUID ProcedureDiscontinuationReasons9300;//("1.2.840.10008.6.1.533", "Procedure Discontinuation Reasons (9300)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Scope of Accumulation (10000)</summary>
    static DicomUID ScopeOfAccumulation10000;//("1.2.840.10008.6.1.534", "Scope of Accumulation (10000)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: UID Types (10001)</summary>
    static DicomUID UIDTypes10001;//("1.2.840.10008.6.1.535", "UID Types (10001)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Irradiation Event Types (10002)</summary>
    static DicomUID IrradiationEventTypes10002;//("1.2.840.10008.6.1.536", "Irradiation Event Types (10002)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Equipment Plane Identification (10003)</summary>
    static DicomUID EquipmentPlaneIdentification10003;//("1.2.840.10008.6.1.537", "Equipment Plane Identification (10003)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Fluoro Modes (10004)</summary>
    static DicomUID FluoroModes10004;//("1.2.840.10008.6.1.538", "Fluoro Modes (10004)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: X-Ray Filter Materials (10006)</summary>
    static DicomUID XRayFilterMaterials10006;//("1.2.840.10008.6.1.539", "X-Ray Filter Materials (10006)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: X-Ray Filter Types (10007)</summary>
    static DicomUID XRayFilterTypes10007;//("1.2.840.10008.6.1.540", "X-Ray Filter Types (10007)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Dose Related Distance Measurements (10008)</summary>
    static DicomUID DoseRelatedDistanceMeasurements10008;//("1.2.840.10008.6.1.541", "Dose Related Distance Measurements (10008)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Measured/Calculated (10009)</summary>
    static DicomUID MeasuredCalculated10009;//("1.2.840.10008.6.1.542", "Measured/Calculated (10009)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Dose Measurement Devices (10010)</summary>
    static DicomUID DoseMeasurementDevices10010;//("1.2.840.10008.6.1.543", "Dose Measurement Devices (10010)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Effective Dose Evaluation Method (10011)</summary>
    static DicomUID EffectiveDoseEvaluationMethod10011;//("1.2.840.10008.6.1.544", "Effective Dose Evaluation Method (10011)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: CT Acquisition Type (10013)</summary>
    static DicomUID CTAcquisitionType10013;//("1.2.840.10008.6.1.545", "CT Acquisition Type (10013)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Contrast Imaging Technique (10014)</summary>
    static DicomUID ContrastImagingTechnique10014;//("1.2.840.10008.6.1.546", "Contrast Imaging Technique (10014)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: CT Dose Reference Authorities (10015)</summary>
    static DicomUID CTDoseReferenceAuthorities10015;//("1.2.840.10008.6.1.547", "CT Dose Reference Authorities (10015)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Anode Target Material (10016)</summary>
    static DicomUID AnodeTargetMaterial10016;//("1.2.840.10008.6.1.548", "Anode Target Material (10016)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: X-Ray Grid (10017)</summary>
    static DicomUID XRayGrid10017;//("1.2.840.10008.6.1.549", "X-Ray Grid (10017)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Ultrasound Protocol Types (12001)</summary>
    static DicomUID UltrasoundProtocolTypes12001;//("1.2.840.10008.6.1.550", "Ultrasound Protocol Types (12001)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Ultrasound Protocol Stage Types (12002)</summary>
    static DicomUID UltrasoundProtocolStageTypes12002;//("1.2.840.10008.6.1.551", "Ultrasound Protocol Stage Types (12002)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: OB-GYN Dates (12003)</summary>
    static DicomUID OBGYNDates12003;//("1.2.840.10008.6.1.552", "OB-GYN Dates (12003)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Fetal Biometry Ratios (12004)</summary>
    static DicomUID FetalBiometryRatios12004;//("1.2.840.10008.6.1.553", "Fetal Biometry Ratios (12004)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Fetal Biometry Measurements (12005)</summary>
    static DicomUID FetalBiometryMeasurements12005;//("1.2.840.10008.6.1.554", "Fetal Biometry Measurements (12005)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Fetal Long Bones Biometry Measurements (12006)</summary>
    static DicomUID FetalLongBonesBiometryMeasurements12006;//("1.2.840.10008.6.1.555", "Fetal Long Bones Biometry Measurements (12006)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Fetal Cranium (12007)</summary>
    static DicomUID FetalCranium12007;//("1.2.840.10008.6.1.556", "Fetal Cranium (12007)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: OB-GYN Amniotic Sac (12008)</summary>
    static DicomUID OBGYNAmnioticSac12008;//("1.2.840.10008.6.1.557", "OB-GYN Amniotic Sac (12008)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Early Gestation Biometry Measurements (12009)</summary>
    static DicomUID EarlyGestationBiometryMeasurements12009;//("1.2.840.10008.6.1.558", "Early Gestation Biometry Measurements (12009)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Ultrasound Pelvis and Uterus (12011)</summary>
    static DicomUID UltrasoundPelvisAndUterus12011;//("1.2.840.10008.6.1.559", "Ultrasound Pelvis and Uterus (12011)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: OB Equations and Tables (12012)</summary>
    static DicomUID OBEquationsAndTables12012;//("1.2.840.10008.6.1.560", "OB Equations and Tables (12012)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Gestational Age Equations and Tables (12013)</summary>
    static DicomUID GestationalAgeEquationsAndTables12013;//("1.2.840.10008.6.1.561", "Gestational Age Equations and Tables (12013)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: OB Fetal Body Weight Equations and Tables (12014)</summary>
    static DicomUID OBFetalBodyWeightEquationsAndTables12014;//("1.2.840.10008.6.1.562", "OB Fetal Body Weight Equations and Tables (12014)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Fetal Growth Equations and Tables (12015)</summary>
    static DicomUID FetalGrowthEquationsAndTables12015;//("1.2.840.10008.6.1.563", "Fetal Growth Equations and Tables (12015)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Estimated Fetal Weight Percentile Equations and Tables (12016)</summary>
    static DicomUID EstimatedFetalWeightPercentileEquationsAndTables12016;//("1.2.840.10008.6.1.564", "Estimated Fetal Weight Percentile Equations and Tables (12016)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Growth Distribution Rank (12017)</summary>
    static DicomUID GrowthDistributionRank12017;//("1.2.840.10008.6.1.565", "Growth Distribution Rank (12017)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: OB-GYN Summary (12018)</summary>
    static DicomUID OBGYNSummary12018;//("1.2.840.10008.6.1.566", "OB-GYN Summary (12018)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: OB-GYN Fetus Summary (12019)</summary>
    static DicomUID OBGYNFetusSummary12019;//("1.2.840.10008.6.1.567", "OB-GYN Fetus Summary (12019)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Vascular Summary (12101)</summary>
    static DicomUID VascularSummary12101;//("1.2.840.10008.6.1.568", "Vascular Summary (12101)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Temporal Periods Relating to Procedure or Therapy (12102)</summary>
    static DicomUID TemporalPeriodsRelatingToProcedureOrTherapy12102;//("1.2.840.10008.6.1.569", "Temporal Periods Relating to Procedure or Therapy (12102)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Vascular Ultrasound Anatomic Location (12103)</summary>
    static DicomUID VascularUltrasoundAnatomicLocation12103;//("1.2.840.10008.6.1.570", "Vascular Ultrasound Anatomic Location (12103)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Extracranial Arteries (12104)</summary>
    static DicomUID ExtracranialArteries12104;//("1.2.840.10008.6.1.571", "Extracranial Arteries (12104)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Intracranial Cerebral Vessels (12105)</summary>
    static DicomUID IntracranialCerebralVessels12105;//("1.2.840.10008.6.1.572", "Intracranial Cerebral Vessels (12105)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Intracranial Cerebral Vessels (Unilateral) (12106)</summary>
    static DicomUID IntracranialCerebralVesselsUnilateral12106;//("1.2.840.10008.6.1.573", "Intracranial Cerebral Vessels (Unilateral) (12106)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Upper Extremity Arteries (12107)</summary>
    static DicomUID UpperExtremityArteries12107;//("1.2.840.10008.6.1.574", "Upper Extremity Arteries (12107)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Upper Extremity Veins (12108)</summary>
    static DicomUID UpperExtremityVeins12108;//("1.2.840.10008.6.1.575", "Upper Extremity Veins (12108)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Lower Extremity Arteries (12109)</summary>
    static DicomUID LowerExtremityArteries12109;//("1.2.840.10008.6.1.576", "Lower Extremity Arteries (12109)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Lower Extremity Veins (12110)</summary>
    static DicomUID LowerExtremityVeins12110;//("1.2.840.10008.6.1.577", "Lower Extremity Veins (12110)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Abdominopelvic Arteries (Paired) (12111)</summary>
    static DicomUID AbdominopelvicArteriesPaired12111;//("1.2.840.10008.6.1.578", "Abdominopelvic Arteries (Paired) (12111)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Abdominopelvic Arteries (Unpaired) (12112)</summary>
    static DicomUID AbdominopelvicArteriesUnpaired12112;//("1.2.840.10008.6.1.579", "Abdominopelvic Arteries (Unpaired) (12112)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Abdominopelvic Veins (Paired) (12113)</summary>
    static DicomUID AbdominopelvicVeinsPaired12113;//("1.2.840.10008.6.1.580", "Abdominopelvic Veins (Paired) (12113)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Abdominopelvic Veins (Unpaired) (12114)</summary>
    static DicomUID AbdominopelvicVeinsUnpaired12114;//("1.2.840.10008.6.1.581", "Abdominopelvic Veins (Unpaired) (12114)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Renal Vessels (12115)</summary>
    static DicomUID RenalVessels12115;//("1.2.840.10008.6.1.582", "Renal Vessels (12115)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Vessel Segment Modifiers (12116)</summary>
    static DicomUID VesselSegmentModifiers12116;//("1.2.840.10008.6.1.583", "Vessel Segment Modifiers (12116)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Vessel Branch Modifiers (12117)</summary>
    static DicomUID VesselBranchModifiers12117;//("1.2.840.10008.6.1.584", "Vessel Branch Modifiers (12117)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Vascular Ultrasound Property (12119)</summary>
    static DicomUID VascularUltrasoundProperty12119;//("1.2.840.10008.6.1.585", "Vascular Ultrasound Property (12119)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Blood Velocity Measurements by Ultrasound (12120)</summary>
    static DicomUID BloodVelocityMeasurementsByUltrasound12120;//("1.2.840.10008.6.1.586", "Blood Velocity Measurements by Ultrasound (12120)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Vascular Indices and Ratios (12121)</summary>
    static DicomUID VascularIndicesAndRatios12121;//("1.2.840.10008.6.1.587", "Vascular Indices and Ratios (12121)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Other Vascular Properties (12122)</summary>
    static DicomUID OtherVascularProperties12122;//("1.2.840.10008.6.1.588", "Other Vascular Properties (12122)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Carotid Ratios (12123)</summary>
    static DicomUID CarotidRatios12123;//("1.2.840.10008.6.1.589", "Carotid Ratios (12123)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Renal Ratios (12124)</summary>
    static DicomUID RenalRatios12124;//("1.2.840.10008.6.1.590", "Renal Ratios (12124)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Pelvic Vasculature Anatomical Location (12140)</summary>
    static DicomUID PelvicVasculatureAnatomicalLocation12140;//("1.2.840.10008.6.1.591", "Pelvic Vasculature Anatomical Location (12140)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Fetal Vasculature Anatomical Location (12141)</summary>
    static DicomUID FetalVasculatureAnatomicalLocation12141;//("1.2.840.10008.6.1.592", "Fetal Vasculature Anatomical Location (12141)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Echocardiography Left Ventricle (12200)</summary>
    static DicomUID EchocardiographyLeftVentricle12200;//("1.2.840.10008.6.1.593", "Echocardiography Left Ventricle (12200)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Left Ventricle Linear (12201)</summary>
    static DicomUID LeftVentricleLinear12201;//("1.2.840.10008.6.1.594", "Left Ventricle Linear (12201)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Left Ventricle Volume (12202)</summary>
    static DicomUID LeftVentricleVolume12202;//("1.2.840.10008.6.1.595", "Left Ventricle Volume (12202)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Left Ventricle Other (12203)</summary>
    static DicomUID LeftVentricleOther12203;//("1.2.840.10008.6.1.596", "Left Ventricle Other (12203)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Echocardiography Right Ventricle (12204)</summary>
    static DicomUID EchocardiographyRightVentricle12204;//("1.2.840.10008.6.1.597", "Echocardiography Right Ventricle (12204)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Echocardiography Left Atrium (12205)</summary>
    static DicomUID EchocardiographyLeftAtrium12205;//("1.2.840.10008.6.1.598", "Echocardiography Left Atrium (12205)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Echocardiography Right Atrium (12206)</summary>
    static DicomUID EchocardiographyRightAtrium12206;//("1.2.840.10008.6.1.599", "Echocardiography Right Atrium (12206)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Echocardiography Mitral Valve (12207)</summary>
    static DicomUID EchocardiographyMitralValve12207;//("1.2.840.10008.6.1.600", "Echocardiography Mitral Valve (12207)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Echocardiography Tricuspid Valve (12208)</summary>
    static DicomUID EchocardiographyTricuspidValve12208;//("1.2.840.10008.6.1.601", "Echocardiography Tricuspid Valve (12208)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Echocardiography Pulmonic Valve (12209)</summary>
    static DicomUID EchocardiographyPulmonicValve12209;//("1.2.840.10008.6.1.602", "Echocardiography Pulmonic Valve (12209)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Echocardiography Pulmonary Artery (12210)</summary>
    static DicomUID EchocardiographyPulmonaryArtery12210;//("1.2.840.10008.6.1.603", "Echocardiography Pulmonary Artery (12210)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Echocardiography Aortic Valve (12211)</summary>
    static DicomUID EchocardiographyAorticValve12211;//("1.2.840.10008.6.1.604", "Echocardiography Aortic Valve (12211)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Echocardiography Aorta (12212)</summary>
    static DicomUID EchocardiographyAorta12212;//("1.2.840.10008.6.1.605", "Echocardiography Aorta (12212)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Echocardiography Pulmonary Veins (12214)</summary>
    static DicomUID EchocardiographyPulmonaryVeins12214;//("1.2.840.10008.6.1.606", "Echocardiography Pulmonary Veins (12214)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Echocardiography Vena Cavae (12215)</summary>
    static DicomUID EchocardiographyVenaCavae12215;//("1.2.840.10008.6.1.607", "Echocardiography Vena Cavae (12215)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Echocardiography Hepatic Veins (12216)</summary>
    static DicomUID EchocardiographyHepaticVeins12216;//("1.2.840.10008.6.1.608", "Echocardiography Hepatic Veins (12216)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Echocardiography Cardiac Shunt (12217)</summary>
    static DicomUID EchocardiographyCardiacShunt12217;//("1.2.840.10008.6.1.609", "Echocardiography Cardiac Shunt (12217)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Echocardiography Congenital (12218)</summary>
    static DicomUID EchocardiographyCongenital12218;//("1.2.840.10008.6.1.610", "Echocardiography Congenital (12218)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Pulmonary Vein Modifiers (12219)</summary>
    static DicomUID PulmonaryVeinModifiers12219;//("1.2.840.10008.6.1.611", "Pulmonary Vein Modifiers (12219)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Echocardiography Common Measurements (12220)</summary>
    static DicomUID EchocardiographyCommonMeasurements12220;//("1.2.840.10008.6.1.612", "Echocardiography Common Measurements (12220)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Flow Direction (12221)</summary>
    static DicomUID FlowDirection12221;//("1.2.840.10008.6.1.613", "Flow Direction (12221)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Orifice Flow Properties (12222)</summary>
    static DicomUID OrificeFlowProperties12222;//("1.2.840.10008.6.1.614", "Orifice Flow Properties (12222)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Echocardiography Stroke Volume Origin (12223)</summary>
    static DicomUID EchocardiographyStrokeVolumeOrigin12223;//("1.2.840.10008.6.1.615", "Echocardiography Stroke Volume Origin (12223)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Ultrasound Image Modes (12224)</summary>
    static DicomUID UltrasoundImageModes12224;//("1.2.840.10008.6.1.616", "Ultrasound Image Modes (12224)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Echocardiography Image View (12226)</summary>
    static DicomUID EchocardiographyImageView12226;//("1.2.840.10008.6.1.617", "Echocardiography Image View (12226)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Echocardiography Measurement Method (12227)</summary>
    static DicomUID EchocardiographyMeasurementMethod12227;//("1.2.840.10008.6.1.618", "Echocardiography Measurement Method (12227)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Echocardiography Volume Methods (12228)</summary>
    static DicomUID EchocardiographyVolumeMethods12228;//("1.2.840.10008.6.1.619", "Echocardiography Volume Methods (12228)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Echocardiography Area Methods (12229)</summary>
    static DicomUID EchocardiographyAreaMethods12229;//("1.2.840.10008.6.1.620", "Echocardiography Area Methods (12229)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Gradient Methods (12230)</summary>
    static DicomUID GradientMethods12230;//("1.2.840.10008.6.1.621", "Gradient Methods (12230)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Volume Flow Methods (12231)</summary>
    static DicomUID VolumeFlowMethods12231;//("1.2.840.10008.6.1.622", "Volume Flow Methods (12231)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Myocardium Mass Methods (12232)</summary>
    static DicomUID MyocardiumMassMethods12232;//("1.2.840.10008.6.1.623", "Myocardium Mass Methods (12232)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Cardiac Phase (12233)</summary>
    static DicomUID CardiacPhase12233;//("1.2.840.10008.6.1.624", "Cardiac Phase (12233)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Respiration State (12234)</summary>
    static DicomUID RespirationState12234;//("1.2.840.10008.6.1.625", "Respiration State (12234)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Mitral Valve Anatomic Sites (12235)</summary>
    static DicomUID MitralValveAnatomicSites12235;//("1.2.840.10008.6.1.626", "Mitral Valve Anatomic Sites (12235)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Echo Anatomic Sites (12236)</summary>
    static DicomUID EchoAnatomicSites12236;//("1.2.840.10008.6.1.627", "Echo Anatomic Sites (12236)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Echocardiography Anatomic Site Modifiers (12237)</summary>
    static DicomUID EchocardiographyAnatomicSiteModifiers12237;//("1.2.840.10008.6.1.628", "Echocardiography Anatomic Site Modifiers (12237)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Wall Motion Scoring Schemes (12238)</summary>
    static DicomUID WallMotionScoringSchemes12238;//("1.2.840.10008.6.1.629", "Wall Motion Scoring Schemes (12238)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Cardiac Output Properties (12239)</summary>
    static DicomUID CardiacOutputProperties12239;//("1.2.840.10008.6.1.630", "Cardiac Output Properties (12239)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Left Ventricle Area (12240)</summary>
    static DicomUID LeftVentricleArea12240;//("1.2.840.10008.6.1.631", "Left Ventricle Area (12240)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Tricuspid Valve Finding Sites (12241)</summary>
    static DicomUID TricuspidValveFindingSites12241;//("1.2.840.10008.6.1.632", "Tricuspid Valve Finding Sites (12241)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Aortic Valve Finding Sites (12242)</summary>
    static DicomUID AorticValveFindingSites12242;//("1.2.840.10008.6.1.633", "Aortic Valve Finding Sites (12242)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Left Ventricle Finding Sites (12243)</summary>
    static DicomUID LeftVentricleFindingSites12243;//("1.2.840.10008.6.1.634", "Left Ventricle Finding Sites (12243)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Congenital Finding Sites (12244)</summary>
    static DicomUID CongenitalFindingSites12244;//("1.2.840.10008.6.1.635", "Congenital Finding Sites (12244)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Surface Processing Algorithm Families (7162)</summary>
    static DicomUID SurfaceProcessingAlgorithmFamilies7162;//("1.2.840.10008.6.1.636", "Surface Processing Algorithm Families (7162)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Stress Test Procedure Phases (3207)</summary>
    static DicomUID StressTestProcedurePhases3207;//("1.2.840.10008.6.1.637", "Stress Test Procedure Phases (3207)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Stages (3778)</summary>
    static DicomUID Stages3778;//("1.2.840.10008.6.1.638", "Stages (3778)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: S-M-L Size Descriptor (252)</summary>
    static DicomUID SMLSizeDescriptor252;//("1.2.840.10008.6.1.735", "S-M-L Size Descriptor (252)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Major Coronary Arteries (3016)</summary>
    static DicomUID MajorCoronaryArteries3016;//("1.2.840.10008.6.1.736", "Major Coronary Arteries (3016)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Units of Radioactivity (3083)</summary>
    static DicomUID UnitsOfRadioactivity3083;//("1.2.840.10008.6.1.737", "Units of Radioactivity (3083)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Rest-Stress (3102)</summary>
    static DicomUID RestStress3102;//("1.2.840.10008.6.1.738", "Rest-Stress (3102)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: PET Cardiology Protocols (3106)</summary>
    static DicomUID PETCardiologyProtocols3106;//("1.2.840.10008.6.1.739", "PET Cardiology Protocols (3106)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: PET Cardiology Radiopharmaceuticals (3107)</summary>
    static DicomUID PETCardiologyRadiopharmaceuticals3107;//("1.2.840.10008.6.1.740", "PET Cardiology Radiopharmaceuticals (3107)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: NM/PET Procedures (3108)</summary>
    static DicomUID NMPETProcedures3108;//("1.2.840.10008.6.1.741", "NM/PET Procedures (3108)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Nuclear Cardiology Protocols (3110)</summary>
    static DicomUID NuclearCardiologyProtocols3110;//("1.2.840.10008.6.1.742", "Nuclear Cardiology Protocols (3110)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Nuclear Cardiology Radiopharmaceuticals (3111)</summary>
    static DicomUID NuclearCardiologyRadiopharmaceuticals3111;//("1.2.840.10008.6.1.743", "Nuclear Cardiology Radiopharmaceuticals (3111)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Attenuation Correction (3112)</summary>
    static DicomUID AttenuationCorrection3112;//("1.2.840.10008.6.1.744", "Attenuation Correction (3112)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Types of Perfusion Defects (3113)</summary>
    static DicomUID TypesOfPerfusionDefects3113;//("1.2.840.10008.6.1.745", "Types of Perfusion Defects (3113)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Study Quality (3114)</summary>
    static DicomUID StudyQuality3114;//("1.2.840.10008.6.1.746", "Study Quality (3114)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Stress Imaging Quality Issues (3115)</summary>
    static DicomUID StressImagingQualityIssues3115;//("1.2.840.10008.6.1.747", "Stress Imaging Quality Issues (3115)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: NM Extracardiac Findings (3116)</summary>
    static DicomUID NMExtracardiacFindings3116;//("1.2.840.10008.6.1.748", "NM Extracardiac Findings (3116)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Attenuation Correction Methods (3117)</summary>
    static DicomUID AttenuationCorrectionMethods3117;//("1.2.840.10008.6.1.749", "Attenuation Correction Methods (3117)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Level of Risk (3118)</summary>
    static DicomUID LevelOfRisk3118;//("1.2.840.10008.6.1.750", "Level of Risk (3118)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: LV Function (3119)</summary>
    static DicomUID LVFunction3119;//("1.2.840.10008.6.1.751", "LV Function (3119)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Perfusion Findings (3120)</summary>
    static DicomUID PerfusionFindings3120;//("1.2.840.10008.6.1.752", "Perfusion Findings (3120)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Perfusion Morphology (3121)</summary>
    static DicomUID PerfusionMorphology3121;//("1.2.840.10008.6.1.753", "Perfusion Morphology (3121)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Ventricular Enlargement (3122)</summary>
    static DicomUID VentricularEnlargement3122;//("1.2.840.10008.6.1.754", "Ventricular Enlargement (3122)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Stress Test Procedure (3200)</summary>
    static DicomUID StressTestProcedure3200;//("1.2.840.10008.6.1.755", "Stress Test Procedure (3200)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Indications for Stress Test (3201)</summary>
    static DicomUID IndicationsForStressTest3201;//("1.2.840.10008.6.1.756", "Indications for Stress Test (3201)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Chest Pain (3202)</summary>
    static DicomUID ChestPain3202;//("1.2.840.10008.6.1.757", "Chest Pain (3202)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Exerciser Device (3203)</summary>
    static DicomUID ExerciserDevice3203;//("1.2.840.10008.6.1.758", "Exerciser Device (3203)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Stress Agents (3204)</summary>
    static DicomUID StressAgents3204;//("1.2.840.10008.6.1.759", "Stress Agents (3204)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Indications for Pharmacological Stress Test (3205)</summary>
    static DicomUID IndicationsForPharmacologicalStressTest3205;//("1.2.840.10008.6.1.760", "Indications for Pharmacological Stress Test (3205)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Non-invasive Cardiac Imaging Procedures (3206)</summary>
    static DicomUID NonInvasiveCardiacImagingProcedures3206;//("1.2.840.10008.6.1.761", "Non-invasive Cardiac Imaging Procedures (3206)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Summary Codes Exercise ECG (3208)</summary>
    static DicomUID SummaryCodesExerciseECG3208;//("1.2.840.10008.6.1.763", "Summary Codes Exercise ECG (3208)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Summary Codes Stress Imaging (3209)</summary>
    static DicomUID SummaryCodesStressImaging3209;//("1.2.840.10008.6.1.764", "Summary Codes Stress Imaging (3209)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Speed of Response (3210)</summary>
    static DicomUID SpeedOfResponse3210;//("1.2.840.10008.6.1.765", "Speed of Response (3210)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: BP Response (3211)</summary>
    static DicomUID BPResponse3211;//("1.2.840.10008.6.1.766", "BP Response (3211)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Treadmill Speed (3212)</summary>
    static DicomUID TreadmillSpeed3212;//("1.2.840.10008.6.1.767", "Treadmill Speed (3212)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Stress Hemodynamic Findings (3213)</summary>
    static DicomUID StressHemodynamicFindings3213;//("1.2.840.10008.6.1.768", "Stress Hemodynamic Findings (3213)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Perfusion Finding Method (3215)</summary>
    static DicomUID PerfusionFindingMethod3215;//("1.2.840.10008.6.1.769", "Perfusion Finding Method (3215)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Comparison Finding (3217)</summary>
    static DicomUID ComparisonFinding3217;//("1.2.840.10008.6.1.770", "Comparison Finding (3217)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Stress Symptoms (3220)</summary>
    static DicomUID StressSymptoms3220;//("1.2.840.10008.6.1.771", "Stress Symptoms (3220)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Stress Test Termination Reasons (3221)</summary>
    static DicomUID StressTestTerminationReasons3221;//("1.2.840.10008.6.1.772", "Stress Test Termination Reasons (3221)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: QTc Measurements (3227)</summary>
    static DicomUID QTcMeasurements3227;//("1.2.840.10008.6.1.773", "QTc Measurements (3227)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: ECG Timing Measurements (3228)</summary>
    static DicomUID ECGTimingMeasurements3228;//("1.2.840.10008.6.1.774", "ECG Timing Measurements (3228)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: ECG Axis Measurements (3229)</summary>
    static DicomUID ECGAxisMeasurements3229;//("1.2.840.10008.6.1.775", "ECG Axis Measurements (3229)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: ECG Findings (3230)</summary>
    static DicomUID ECGFindings3230;//("1.2.840.10008.6.1.776", "ECG Findings (3230)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: ST Segment Findings (3231)</summary>
    static DicomUID STSegmentFindings3231;//("1.2.840.10008.6.1.777", "ST Segment Findings (3231)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: ST Segment Location (3232)</summary>
    static DicomUID STSegmentLocation3232;//("1.2.840.10008.6.1.778", "ST Segment Location (3232)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: ST Segment Morphology (3233)</summary>
    static DicomUID STSegmentMorphology3233;//("1.2.840.10008.6.1.779", "ST Segment Morphology (3233)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Ectopic Beat Morphology (3234)</summary>
    static DicomUID EctopicBeatMorphology3234;//("1.2.840.10008.6.1.780", "Ectopic Beat Morphology (3234)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Perfusion Comparison Findings (3235)</summary>
    static DicomUID PerfusionComparisonFindings3235;//("1.2.840.10008.6.1.781", "Perfusion Comparison Findings (3235)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Tolerance Comparison Findings (3236)</summary>
    static DicomUID ToleranceComparisonFindings3236;//("1.2.840.10008.6.1.782", "Tolerance Comparison Findings (3236)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Wall Motion Comparison Findings (3237)</summary>
    static DicomUID WallMotionComparisonFindings3237;//("1.2.840.10008.6.1.783", "Wall Motion Comparison Findings (3237)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Stress Scoring Scales (3238)</summary>
    static DicomUID StressScoringScales3238;//("1.2.840.10008.6.1.784", "Stress Scoring Scales (3238)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Perceived Exertion Scales (3239)</summary>
    static DicomUID PerceivedExertionScales3239;//("1.2.840.10008.6.1.785", "Perceived Exertion Scales (3239)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Ventricle Identification (3463)</summary>
    static DicomUID VentricleIdentification3463;//("1.2.840.10008.6.1.786", "Ventricle Identification (3463)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Colon Overall Assessment (6200)</summary>
    static DicomUID ColonOverallAssessment6200;//("1.2.840.10008.6.1.787", "Colon Overall Assessment (6200)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Colon Finding or Feature (6201)</summary>
    static DicomUID ColonFindingOrFeature6201;//("1.2.840.10008.6.1.788", "Colon Finding or Feature (6201)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Colon Finding or Feature Modifier (6202)</summary>
    static DicomUID ColonFindingOrFeatureModifier6202;//("1.2.840.10008.6.1.789", "Colon Finding or Feature Modifier (6202)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Colon Non-lesion Object Type (6203)</summary>
    static DicomUID ColonNonLesionObjectType6203;//("1.2.840.10008.6.1.790", "Colon Non-lesion Object Type (6203)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Anatomic Non-colon Findings (6204)</summary>
    static DicomUID AnatomicNonColonFindings6204;//("1.2.840.10008.6.1.791", "Anatomic Non-colon Findings (6204)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Clockface Location for Colon (6205)</summary>
    static DicomUID ClockfaceLocationForColon6205;//("1.2.840.10008.6.1.792", "Clockface Location for Colon (6205)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Recumbent Patient Orientation for Colon (6206)</summary>
    static DicomUID RecumbentPatientOrientationForColon6206;//("1.2.840.10008.6.1.793", "Recumbent Patient Orientation for Colon (6206)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Colon Quantitative Temporal Difference Type (6207)</summary>
    static DicomUID ColonQuantitativeTemporalDifferenceType6207;//("1.2.840.10008.6.1.794", "Colon Quantitative Temporal Difference Type (6207)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Colon Types of Quality Control Standard (6208)</summary>
    static DicomUID ColonTypesOfQualityControlStandard6208;//("1.2.840.10008.6.1.795", "Colon Types of Quality Control Standard (6208)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Colon Morphology Descriptor (6209)</summary>
    static DicomUID ColonMorphologyDescriptor6209;//("1.2.840.10008.6.1.796", "Colon Morphology Descriptor (6209)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Location in Intestinal Tract (6210)</summary>
    static DicomUID LocationInIntestinalTract6210;//("1.2.840.10008.6.1.797", "Location in Intestinal Tract (6210)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Colon CAD Material Description (6211)</summary>
    static DicomUID ColonCADMaterialDescription6211;//("1.2.840.10008.6.1.798", "Colon CAD Material Description (6211)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Calculated Value for Colon Findings (6212)</summary>
    static DicomUID CalculatedValueForColonFindings6212;//("1.2.840.10008.6.1.799", "Calculated Value for Colon Findings (6212)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Ophthalmic Horizontal Directions (4214)</summary>
    static DicomUID OphthalmicHorizontalDirections4214;//("1.2.840.10008.6.1.800", "Ophthalmic Horizontal Directions (4214)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Ophthalmic Vertical Directions (4215)</summary>
    static DicomUID OphthalmicVerticalDirections4215;//("1.2.840.10008.6.1.801", "Ophthalmic Vertical Directions (4215)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Ophthalmic Visual Acuity Type (4216)</summary>
    static DicomUID OphthalmicVisualAcuityType4216;//("1.2.840.10008.6.1.802", "Ophthalmic Visual Acuity Type (4216)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Arterial Pulse Waveform (3004)</summary>
    static DicomUID ArterialPulseWaveform3004;//("1.2.840.10008.6.1.803", "Arterial Pulse Waveform (3004)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Respiration Waveform (3005)</summary>
    static DicomUID RespirationWaveform3005;//("1.2.840.10008.6.1.804", "Respiration Waveform (3005)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Ultrasound Contrast/Bolus Agents (12030)</summary>
    static DicomUID UltrasoundContrastBolusAgents12030;//("1.2.840.10008.6.1.805", "Ultrasound Contrast/Bolus Agents (12030)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Protocol Interval Events (12031)</summary>
    static DicomUID ProtocolIntervalEvents12031;//("1.2.840.10008.6.1.806", "Protocol Interval Events (12031)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Transducer Scan Pattern (12032)</summary>
    static DicomUID TransducerScanPattern12032;//("1.2.840.10008.6.1.807", "Transducer Scan Pattern (12032)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Ultrasound Transducer Geometry (12033)</summary>
    static DicomUID UltrasoundTransducerGeometry12033;//("1.2.840.10008.6.1.808", "Ultrasound Transducer Geometry (12033)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Ultrasound Transducer Beam Steering (12034)</summary>
    static DicomUID UltrasoundTransducerBeamSteering12034;//("1.2.840.10008.6.1.809", "Ultrasound Transducer Beam Steering (12034)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Ultrasound Transducer Application (12035)</summary>
    static DicomUID UltrasoundTransducerApplication12035;//("1.2.840.10008.6.1.810", "Ultrasound Transducer Application (12035)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Instance Availability Status (50)</summary>
    static DicomUID InstanceAvailabilityStatus50;//("1.2.840.10008.6.1.811", "Instance Availability Status (50)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Modality PPS Discontinuation Reasons (9301)</summary>
    static DicomUID ModalityPPSDiscontinuationReasons9301;//("1.2.840.10008.6.1.812", "Modality PPS Discontinuation Reasons (9301)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Media Import PPS Discontinuation Reasons (9302)</summary>
    static DicomUID MediaImportPPSDiscontinuationReasons9302;//("1.2.840.10008.6.1.813", "Media Import PPS Discontinuation Reasons (9302)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: DX Anatomy Imaged for Animals (7482)</summary>
    static DicomUID DXAnatomyImagedForAnimals7482;//("1.2.840.10008.6.1.814", "DX Anatomy Imaged for Animals (7482)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Common Anatomic Regions for Animals (7483)</summary>
    static DicomUID CommonAnatomicRegionsForAnimals7483;//("1.2.840.10008.6.1.815", "Common Anatomic Regions for Animals (7483)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: DX View for Animals (7484)</summary>
    static DicomUID DXViewForAnimals7484;//("1.2.840.10008.6.1.816", "DX View for Animals (7484)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Institutional Departments, Units and Services (7030)</summary>
    static DicomUID InstitutionalDepartmentsUnitsAndServices7030;//("1.2.840.10008.6.1.817", "Institutional Departments, Units and Services (7030)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Purpose of Reference to Predecessor Report (7009)</summary>
    static DicomUID PurposeOfReferenceToPredecessorReport7009;//("1.2.840.10008.6.1.818", "Purpose of Reference to Predecessor Report (7009)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Visual Fixation Quality During Acquisition (4220)</summary>
    static DicomUID VisualFixationQualityDuringAcquisition4220;//("1.2.840.10008.6.1.819", "Visual Fixation Quality During Acquisition (4220)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Visual Fixation Quality Problem (4221)</summary>
    static DicomUID VisualFixationQualityProblem4221;//("1.2.840.10008.6.1.820", "Visual Fixation Quality Problem (4221)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Ophthalmic Macular Grid Problem (4222)</summary>
    static DicomUID OphthalmicMacularGridProblem4222;//("1.2.840.10008.6.1.821", "Ophthalmic Macular Grid Problem (4222)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Organizations (5002)</summary>
    static DicomUID Organizations5002;//("1.2.840.10008.6.1.822", "Organizations (5002)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Mixed Breeds (7486)</summary>
    static DicomUID MixedBreeds7486;//("1.2.840.10008.6.1.823", "Mixed Breeds (7486)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Broselow-Luten Pediatric Size Categories (7040)</summary>
    static DicomUID BroselowLutenPediatricSizeCategories7040;//("1.2.840.10008.6.1.824", "Broselow-Luten Pediatric Size Categories (7040)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: CMDCTECC Calcium Scoring Patient Size Categories (7042)</summary>
    static DicomUID CMDCTECCCalciumScoringPatientSizeCategories7042;//("1.2.840.10008.6.1.825", "CMDCTECC Calcium Scoring Patient Size Categories (7042)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Cardiac Ultrasound Report Titles (12245)</summary>
    static DicomUID CardiacUltrasoundReportTitles12245;//("1.2.840.10008.6.1.826", "Cardiac Ultrasound Report Titles (12245)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Cardiac Ultrasound Indication for Study (12246)</summary>
    static DicomUID CardiacUltrasoundIndicationForStudy12246;//("1.2.840.10008.6.1.827", "Cardiac Ultrasound Indication for Study (12246)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Pediatric, Fetal and Congenital Cardiac Surgical Interventions (12247)</summary>
    static DicomUID PediatricFetalAndCongenitalCardiacSurgicalInterventions12247;//("1.2.840.10008.6.1.828", "Pediatric, Fetal and Congenital Cardiac Surgical Interventions (12247)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Cardiac Ultrasound Summary Codes (12248)</summary>
    static DicomUID CardiacUltrasoundSummaryCodes12248;//("1.2.840.10008.6.1.829", "Cardiac Ultrasound Summary Codes (12248)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Cardiac Ultrasound Fetal Summary Codes (12249)</summary>
    static DicomUID CardiacUltrasoundFetalSummaryCodes12249;//("1.2.840.10008.6.1.830", "Cardiac Ultrasound Fetal Summary Codes (12249)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Cardiac Ultrasound Common Linear Measurements (12250)</summary>
    static DicomUID CardiacUltrasoundCommonLinearMeasurements12250;//("1.2.840.10008.6.1.831", "Cardiac Ultrasound Common Linear Measurements (12250)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Cardiac Ultrasound Linear Valve Measurements (12251)</summary>
    static DicomUID CardiacUltrasoundLinearValveMeasurements12251;//("1.2.840.10008.6.1.832", "Cardiac Ultrasound Linear Valve Measurements (12251)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Cardiac Ultrasound Cardiac Function (12252)</summary>
    static DicomUID CardiacUltrasoundCardiacFunction12252;//("1.2.840.10008.6.1.833", "Cardiac Ultrasound Cardiac Function (12252)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Cardiac Ultrasound Area Measurements (12253)</summary>
    static DicomUID CardiacUltrasoundAreaMeasurements12253;//("1.2.840.10008.6.1.834", "Cardiac Ultrasound Area Measurements (12253)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Cardiac Ultrasound Hemodynamic Measurements (12254)</summary>
    static DicomUID CardiacUltrasoundHemodynamicMeasurements12254;//("1.2.840.10008.6.1.835", "Cardiac Ultrasound Hemodynamic Measurements (12254)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Cardiac Ultrasound Myocardium Measurements (12255)</summary>
    static DicomUID CardiacUltrasoundMyocardiumMeasurements12255;//("1.2.840.10008.6.1.836", "Cardiac Ultrasound Myocardium Measurements (12255)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Cardiac Ultrasound Left Ventricle (12257)</summary>
    static DicomUID CardiacUltrasoundLeftVentricle12257;//("1.2.840.10008.6.1.838", "Cardiac Ultrasound Left Ventricle (12257)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Cardiac Ultrasound Right Ventricle (12258)</summary>
    static DicomUID CardiacUltrasoundRightVentricle12258;//("1.2.840.10008.6.1.839", "Cardiac Ultrasound Right Ventricle (12258)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Cardiac Ultrasound Ventricles Measurements (12259)</summary>
    static DicomUID CardiacUltrasoundVentriclesMeasurements12259;//("1.2.840.10008.6.1.840", "Cardiac Ultrasound Ventricles Measurements (12259)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Cardiac Ultrasound Pulmonary Artery (12260)</summary>
    static DicomUID CardiacUltrasoundPulmonaryArtery12260;//("1.2.840.10008.6.1.841", "Cardiac Ultrasound Pulmonary Artery (12260)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Cardiac Ultrasound Pulmonary Vein (12261)</summary>
    static DicomUID CardiacUltrasoundPulmonaryVein12261;//("1.2.840.10008.6.1.842", "Cardiac Ultrasound Pulmonary Vein (12261)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Cardiac Ultrasound Pulmonary Valve (12262)</summary>
    static DicomUID CardiacUltrasoundPulmonaryValve12262;//("1.2.840.10008.6.1.843", "Cardiac Ultrasound Pulmonary Valve (12262)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Cardiac Ultrasound Venous Return Pulmonary Measurements (12263)</summary>
    static DicomUID CardiacUltrasoundVenousReturnPulmonaryMeasurements12263;//("1.2.840.10008.6.1.844", "Cardiac Ultrasound Venous Return Pulmonary Measurements (12263)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Cardiac Ultrasound Venous Return Systemic Measurements (12264)</summary>
    static DicomUID CardiacUltrasoundVenousReturnSystemicMeasurements12264;//("1.2.840.10008.6.1.845", "Cardiac Ultrasound Venous Return Systemic Measurements (12264)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Cardiac Ultrasound Atria and Atrial Septum Measurements (12265)</summary>
    static DicomUID CardiacUltrasoundAtriaAndAtrialSeptumMeasurements12265;//("1.2.840.10008.6.1.846", "Cardiac Ultrasound Atria and Atrial Septum Measurements (12265)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Cardiac Ultrasound Mitral Valve (12266)</summary>
    static DicomUID CardiacUltrasoundMitralValve12266;//("1.2.840.10008.6.1.847", "Cardiac Ultrasound Mitral Valve (12266)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Cardiac Ultrasound Tricuspid Valve (12267)</summary>
    static DicomUID CardiacUltrasoundTricuspidValve12267;//("1.2.840.10008.6.1.848", "Cardiac Ultrasound Tricuspid Valve (12267)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Cardiac Ultrasound Atrioventricular Valves Measurements (12268)</summary>
    static DicomUID CardiacUltrasoundAtrioventricularValvesMeasurements12268;//("1.2.840.10008.6.1.849", "Cardiac Ultrasound Atrioventricular Valves Measurements (12268)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Cardiac Ultrasound Interventricular Septum Measurements (12269)</summary>
    static DicomUID CardiacUltrasoundInterventricularSeptumMeasurements12269;//("1.2.840.10008.6.1.850", "Cardiac Ultrasound Interventricular Septum Measurements (12269)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Cardiac Ultrasound Aortic Valve (12270)</summary>
    static DicomUID CardiacUltrasoundAorticValve12270;//("1.2.840.10008.6.1.851", "Cardiac Ultrasound Aortic Valve (12270)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Cardiac Ultrasound Outflow Tracts Measurements (12271)</summary>
    static DicomUID CardiacUltrasoundOutflowTractsMeasurements12271;//("1.2.840.10008.6.1.852", "Cardiac Ultrasound Outflow Tracts Measurements (12271)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Cardiac Ultrasound Semilunar Valves, Annulate and Sinuses Measurements (12272)</summary>
    static DicomUID CardiacUltrasoundSemilunarValvesAnnulateAndSinusesMeasurements12272;//("1.2.840.10008.6.1.853", "Cardiac Ultrasound Semilunar Valves, Annulate and Sinuses Measurements (12272)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Cardiac Ultrasound Aortic Sinotubular Junction (12273)</summary>
    static DicomUID CardiacUltrasoundAorticSinotubularJunction12273;//("1.2.840.10008.6.1.854", "Cardiac Ultrasound Aortic Sinotubular Junction (12273)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Cardiac Ultrasound Aorta Measurements (12274)</summary>
    static DicomUID CardiacUltrasoundAortaMeasurements12274;//("1.2.840.10008.6.1.855", "Cardiac Ultrasound Aorta Measurements (12274)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Cardiac Ultrasound Coronary Arteries Measurements (12275)</summary>
    static DicomUID CardiacUltrasoundCoronaryArteriesMeasurements12275;//("1.2.840.10008.6.1.856", "Cardiac Ultrasound Coronary Arteries Measurements (12275)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Cardiac Ultrasound Aorto Pulmonary Connections Measurements (12276)</summary>
    static DicomUID CardiacUltrasoundAortoPulmonaryConnectionsMeasurements12276;//("1.2.840.10008.6.1.857", "Cardiac Ultrasound Aorto Pulmonary Connections Measurements (12276)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Cardiac Ultrasound Pericardium and Pleura Measurements (12277)</summary>
    static DicomUID CardiacUltrasoundPericardiumAndPleuraMeasurements12277;//("1.2.840.10008.6.1.858", "Cardiac Ultrasound Pericardium and Pleura Measurements (12277)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Cardiac Ultrasound Fetal General Measurements (12279)</summary>
    static DicomUID CardiacUltrasoundFetalGeneralMeasurements12279;//("1.2.840.10008.6.1.859", "Cardiac Ultrasound Fetal General Measurements (12279)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Cardiac Ultrasound Target Sites (12280)</summary>
    static DicomUID CardiacUltrasoundTargetSites12280;//("1.2.840.10008.6.1.860", "Cardiac Ultrasound Target Sites (12280)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Cardiac Ultrasound Target Site Modifiers (12281)</summary>
    static DicomUID CardiacUltrasoundTargetSiteModifiers12281;//("1.2.840.10008.6.1.861", "Cardiac Ultrasound Target Site Modifiers (12281)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Cardiac Ultrasound Venous Return Systemic Finding Sites (12282)</summary>
    static DicomUID CardiacUltrasoundVenousReturnSystemicFindingSites12282;//("1.2.840.10008.6.1.862", "Cardiac Ultrasound Venous Return Systemic Finding Sites (12282)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Cardiac Ultrasound Venous Return Pulmonary Finding Sites (12283)</summary>
    static DicomUID CardiacUltrasoundVenousReturnPulmonaryFindingSites12283;//("1.2.840.10008.6.1.863", "Cardiac Ultrasound Venous Return Pulmonary Finding Sites (12283)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Cardiac Ultrasound Atria and Atrial Septum Finding Sites (12284)</summary>
    static DicomUID CardiacUltrasoundAtriaAndAtrialSeptumFindingSites12284;//("1.2.840.10008.6.1.864", "Cardiac Ultrasound Atria and Atrial Septum Finding Sites (12284)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Cardiac Ultrasound Atrioventricular Valves Finding Sites (12285)</summary>
    static DicomUID CardiacUltrasoundAtrioventricularValvesFindingSites12285;//("1.2.840.10008.6.1.865", "Cardiac Ultrasound Atrioventricular Valves Finding Sites (12285)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Cardiac Ultrasound Interventricular Septum Finding Sites (12286)</summary>
    static DicomUID CardiacUltrasoundInterventricularSeptumFindingSites12286;//("1.2.840.10008.6.1.866", "Cardiac Ultrasound Interventricular Septum Finding Sites (12286)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Cardiac Ultrasound Ventricles Finding Sites (12287)</summary>
    static DicomUID CardiacUltrasoundVentriclesFindingSites12287;//("1.2.840.10008.6.1.867", "Cardiac Ultrasound Ventricles Finding Sites (12287)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Cardiac Ultrasound Outflow Tracts Finding Sites (12288)</summary>
    static DicomUID CardiacUltrasoundOutflowTractsFindingSites12288;//("1.2.840.10008.6.1.868", "Cardiac Ultrasound Outflow Tracts Finding Sites (12288)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Cardiac Ultrasound Semilunar Valves, Annulus and Sinuses Finding Sites (12289)</summary>
    static DicomUID CardiacUltrasoundSemilunarValvesAnnulusAndSinusesFindingSites12289;//("1.2.840.10008.6.1.869", "Cardiac Ultrasound Semilunar Valves, Annulus and Sinuses Finding Sites (12289)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Cardiac Ultrasound Pulmonary Arteries Finding Sites (12290)</summary>
    static DicomUID CardiacUltrasoundPulmonaryArteriesFindingSites12290;//("1.2.840.10008.6.1.870", "Cardiac Ultrasound Pulmonary Arteries Finding Sites (12290)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Cardiac Ultrasound Aorta Finding Sites (12291)</summary>
    static DicomUID CardiacUltrasoundAortaFindingSites12291;//("1.2.840.10008.6.1.871", "Cardiac Ultrasound Aorta Finding Sites (12291)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Cardiac Ultrasound Coronary Arteries Finding Sites (12292)</summary>
    static DicomUID CardiacUltrasoundCoronaryArteriesFindingSites12292;//("1.2.840.10008.6.1.872", "Cardiac Ultrasound Coronary Arteries Finding Sites (12292)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Cardiac Ultrasound Aortopulmonary Connections Finding Sites (12293)</summary>
    static DicomUID CardiacUltrasoundAortopulmonaryConnectionsFindingSites12293;//("1.2.840.10008.6.1.873", "Cardiac Ultrasound Aortopulmonary Connections Finding Sites (12293)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Cardiac Ultrasound Pericardium and Pleura Finding Sites (12294)</summary>
    static DicomUID CardiacUltrasoundPericardiumAndPleuraFindingSites12294;//("1.2.840.10008.6.1.874", "Cardiac Ultrasound Pericardium and Pleura Finding Sites (12294)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Ophthalmic Ultrasound Axial Measurements Type (4230)</summary>
    static DicomUID OphthalmicUltrasoundAxialMeasurementsType4230;//("1.2.840.10008.6.1.876", "Ophthalmic Ultrasound Axial Measurements Type (4230)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Lens Status (4231)</summary>
    static DicomUID LensStatus4231;//("1.2.840.10008.6.1.877", "Lens Status (4231)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Vitreous Status (4232)</summary>
    static DicomUID VitreousStatus4232;//("1.2.840.10008.6.1.878", "Vitreous Status (4232)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Ophthalmic Axial Length Measurements Segment Names (4233)</summary>
    static DicomUID OphthalmicAxialLengthMeasurementsSegmentNames4233;//("1.2.840.10008.6.1.879", "Ophthalmic Axial Length Measurements Segment Names (4233)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Refractive Surgery Types (4234)</summary>
    static DicomUID RefractiveSurgeryTypes4234;//("1.2.840.10008.6.1.880", "Refractive Surgery Types (4234)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Keratometry Descriptors (4235)</summary>
    static DicomUID KeratometryDescriptors4235;//("1.2.840.10008.6.1.881", "Keratometry Descriptors (4235)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: IOL Calculation Formula (4236)</summary>
    static DicomUID IOLCalculationFormula4236;//("1.2.840.10008.6.1.882", "IOL Calculation Formula (4236)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Lens Constant Type (4237)</summary>
    static DicomUID LensConstantType4237;//("1.2.840.10008.6.1.883", "Lens Constant Type (4237)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Refractive Error Types (4238)</summary>
    static DicomUID RefractiveErrorTypes4238;//("1.2.840.10008.6.1.884", "Refractive Error Types (4238)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Anterior Chamber Depth Definition (4239)</summary>
    static DicomUID AnteriorChamberDepthDefinition4239;//("1.2.840.10008.6.1.885", "Anterior Chamber Depth Definition (4239)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Ophthalmic Measurement or Calculation Data Source (4240)</summary>
    static DicomUID OphthalmicMeasurementOrCalculationDataSource4240;//("1.2.840.10008.6.1.886", "Ophthalmic Measurement or Calculation Data Source (4240)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Ophthalmic Axial Length Selection Method (4241)</summary>
    static DicomUID OphthalmicAxialLengthSelectionMethod4241;//("1.2.840.10008.6.1.887", "Ophthalmic Axial Length Selection Method (4241)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Ophthalmic Quality Metric Type (4243)</summary>
    static DicomUID OphthalmicQualityMetricType4243;//("1.2.840.10008.6.1.889", "Ophthalmic Quality Metric Type (4243)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Ophthalmic Agent Concentration Units (4244)</summary>
    static DicomUID OphthalmicAgentConcentrationUnits4244;//("1.2.840.10008.6.1.890", "Ophthalmic Agent Concentration Units (4244)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Functional Condition Present During Acquisition (91)</summary>
    static DicomUID FunctionalConditionPresentDuringAcquisition91;//("1.2.840.10008.6.1.891", "Functional Condition Present During Acquisition (91)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Joint Position During Acquisition (92)</summary>
    static DicomUID JointPositionDuringAcquisition92;//("1.2.840.10008.6.1.892", "Joint Position During Acquisition (92)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Joint Positioning Method (93)</summary>
    static DicomUID JointPositioningMethod93;//("1.2.840.10008.6.1.893", "Joint Positioning Method (93)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Physical Force Applied During Acquisition (94)</summary>
    static DicomUID PhysicalForceAppliedDuringAcquisition94;//("1.2.840.10008.6.1.894", "Physical Force Applied During Acquisition (94)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: ECG Control Variables Numeric (3690)</summary>
    static DicomUID ECGControlVariablesNumeric3690;//("1.2.840.10008.6.1.895", "ECG Control Variables Numeric (3690)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: ECG Control Variables Text (3691)</summary>
    static DicomUID ECGControlVariablesText3691;//("1.2.840.10008.6.1.896", "ECG Control Variables Text (3691)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: WSI Referenced Image Purposes of Reference (8120)</summary>
    static DicomUID WSIReferencedImagePurposesOfReference8120;//("1.2.840.10008.6.1.897", "WSI Referenced Image Purposes of Reference (8120)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Microscopy Lens Type (8121)</summary>
    static DicomUID MicroscopyLensType8121;//("1.2.840.10008.6.1.898", "Microscopy Lens Type (8121)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Microscopy Illuminator and Sensor Color (8122)</summary>
    static DicomUID MicroscopyIlluminatorAndSensorColor8122;//("1.2.840.10008.6.1.899", "Microscopy Illuminator and Sensor Color (8122)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Microscopy Illumination Method (8123)</summary>
    static DicomUID MicroscopyIlluminationMethod8123;//("1.2.840.10008.6.1.900", "Microscopy Illumination Method (8123)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Microscopy Filter (8124)</summary>
    static DicomUID MicroscopyFilter8124;//("1.2.840.10008.6.1.901", "Microscopy Filter (8124)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Microscopy Illuminator Type (8125)</summary>
    static DicomUID MicroscopyIlluminatorType8125;//("1.2.840.10008.6.1.902", "Microscopy Illuminator Type (8125)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Audit Event ID (400)</summary>
    static DicomUID AuditEventID400;//("1.2.840.10008.6.1.903", "Audit Event ID (400)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Audit Event Type Code (401)</summary>
    static DicomUID AuditEventTypeCode401;//("1.2.840.10008.6.1.904", "Audit Event Type Code (401)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Audit Active Participant Role ID Code (402)</summary>
    static DicomUID AuditActiveParticipantRoleIDCode402;//("1.2.840.10008.6.1.905", "Audit Active Participant Role ID Code (402)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Security Alert Type Code (403)</summary>
    static DicomUID SecurityAlertTypeCode403;//("1.2.840.10008.6.1.906", "Security Alert Type Code (403)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Audit Participant Object ID Type Code (404)</summary>
    static DicomUID AuditParticipantObjectIDTypeCode404;//("1.2.840.10008.6.1.907", "Audit Participant Object ID Type Code (404)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Media Type Code (405)</summary>
    static DicomUID MediaTypeCode405;//("1.2.840.10008.6.1.908", "Media Type Code (405)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Visual Field Static Perimetry Test Patterns (4250)</summary>
    static DicomUID VisualFieldStaticPerimetryTestPatterns4250;//("1.2.840.10008.6.1.909", "Visual Field Static Perimetry Test Patterns (4250)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Visual Field Static Perimetry Test Strategies (4251)</summary>
    static DicomUID VisualFieldStaticPerimetryTestStrategies4251;//("1.2.840.10008.6.1.910", "Visual Field Static Perimetry Test Strategies (4251)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Visual Field Static Perimetry Screening Test Modes (4252)</summary>
    static DicomUID VisualFieldStaticPerimetryScreeningTestModes4252;//("1.2.840.10008.6.1.911", "Visual Field Static Perimetry Screening Test Modes (4252)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Visual Field Static Perimetry Fixation Strategy (4253)</summary>
    static DicomUID VisualFieldStaticPerimetryFixationStrategy4253;//("1.2.840.10008.6.1.912", "Visual Field Static Perimetry Fixation Strategy (4253)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Visual Field Static Perimetry Test Analysis Results (4254)</summary>
    static DicomUID VisualFieldStaticPerimetryTestAnalysisResults4254;//("1.2.840.10008.6.1.913", "Visual Field Static Perimetry Test Analysis Results (4254)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Visual Field Illumination Color (4255)</summary>
    static DicomUID VisualFieldIlluminationColor4255;//("1.2.840.10008.6.1.914", "Visual Field Illumination Color (4255)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Visual Field Procedure Modifier (4256)</summary>
    static DicomUID VisualFieldProcedureModifier4256;//("1.2.840.10008.6.1.915", "Visual Field Procedure Modifier (4256)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Visual Field Global Index Name (4257)</summary>
    static DicomUID VisualFieldGlobalIndexName4257;//("1.2.840.10008.6.1.916", "Visual Field Global Index Name (4257)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Abstract Multi-dimensional Image Model Component Semantics (7180)</summary>
    static DicomUID AbstractMultiDimensionalImageModelComponentSemantics7180;//("1.2.840.10008.6.1.917", "Abstract Multi-dimensional Image Model Component Semantics (7180)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Abstract Multi-dimensional Image Model Component Units (7181)</summary>
    static DicomUID AbstractMultiDimensionalImageModelComponentUnits7181;//("1.2.840.10008.6.1.918", "Abstract Multi-dimensional Image Model Component Units (7181)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Abstract Multi-dimensional Image Model Dimension Semantics (7182)</summary>
    static DicomUID AbstractMultiDimensionalImageModelDimensionSemantics7182;//("1.2.840.10008.6.1.919", "Abstract Multi-dimensional Image Model Dimension Semantics (7182)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Abstract Multi-dimensional Image Model Dimension Units (7183)</summary>
    static DicomUID AbstractMultiDimensionalImageModelDimensionUnits7183;//("1.2.840.10008.6.1.920", "Abstract Multi-dimensional Image Model Dimension Units (7183)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Abstract Multi-dimensional Image Model Axis Direction (7184)</summary>
    static DicomUID AbstractMultiDimensionalImageModelAxisDirection7184;//("1.2.840.10008.6.1.921", "Abstract Multi-dimensional Image Model Axis Direction (7184)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Abstract Multi-dimensional Image Model Axis Orientation (7185)</summary>
    static DicomUID AbstractMultiDimensionalImageModelAxisOrientation7185;//("1.2.840.10008.6.1.922", "Abstract Multi-dimensional Image Model Axis Orientation (7185)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Abstract Multi-dimensional Image Model Qualitative Dimension Sample Semantics (7186)</summary>
    static DicomUID AbstractMultiDimensionalImageModelQualitativeDimensionSampleSemantics7186;//("1.2.840.10008.6.1.923", "Abstract Multi-dimensional Image Model Qualitative Dimension Sample Semantics (7186)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Planning Methods (7320)</summary>
    static DicomUID PlanningMethods7320;//("1.2.840.10008.6.1.924", "Planning Methods (7320)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: De-identification Method (7050)</summary>
    static DicomUID DeIdentificationMethod7050;//("1.2.840.10008.6.1.925", "De-identification Method (7050)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Measurement Orientation (12118)</summary>
    static DicomUID MeasurementOrientation12118;//("1.2.840.10008.6.1.926", "Measurement Orientation (12118)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: ECG Global Waveform Durations (3689)</summary>
    static DicomUID ECGGlobalWaveformDurations3689;//("1.2.840.10008.6.1.927", "ECG Global Waveform Durations (3689)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: ICDs (3692)</summary>
    static DicomUID ICDs3692;//("1.2.840.10008.6.1.930", "ICDs (3692)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Radiotherapy General Workitem Definition (9241)</summary>
    static DicomUID RadiotherapyGeneralWorkitemDefinition9241;//("1.2.840.10008.6.1.931", "Radiotherapy General Workitem Definition (9241)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Radiotherapy Acquisition Workitem Definition (9242)</summary>
    static DicomUID RadiotherapyAcquisitionWorkitemDefinition9242;//("1.2.840.10008.6.1.932", "Radiotherapy Acquisition Workitem Definition (9242)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Radiotherapy Registration Workitem Definition (9243)</summary>
    static DicomUID RadiotherapyRegistrationWorkitemDefinition9243;//("1.2.840.10008.6.1.933", "Radiotherapy Registration Workitem Definition (9243)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Contrast Bolus Substance (3850)</summary>
    static DicomUID ContrastBolusSubstance3850;//("1.2.840.10008.6.1.934", "Contrast Bolus Substance (3850)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Label Types (10022)</summary>
    static DicomUID LabelTypes10022;//("1.2.840.10008.6.1.935", "Label Types (10022)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Ophthalmic Mapping Units for Real World Value Mapping (4260)</summary>
    static DicomUID OphthalmicMappingUnitsForRealWorldValueMapping4260;//("1.2.840.10008.6.1.936", "Ophthalmic Mapping Units for Real World Value Mapping (4260)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Ophthalmic Mapping Acquisition Method (4261)</summary>
    static DicomUID OphthalmicMappingAcquisitionMethod4261;//("1.2.840.10008.6.1.937", "Ophthalmic Mapping Acquisition Method (4261)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Retinal Thickness Definition (4262)</summary>
    static DicomUID RetinalThicknessDefinition4262;//("1.2.840.10008.6.1.938", "Retinal Thickness Definition (4262)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Ophthalmic Thickness Map Value Type (4263)</summary>
    static DicomUID OphthalmicThicknessMapValueType4263;//("1.2.840.10008.6.1.939", "Ophthalmic Thickness Map Value Type (4263)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Ophthalmic Map Purposes of Reference (4264)</summary>
    static DicomUID OphthalmicMapPurposesOfReference4264;//("1.2.840.10008.6.1.940", "Ophthalmic Map Purposes of Reference (4264)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Ophthalmic Thickness Deviation Categories (4265)</summary>
    static DicomUID OphthalmicThicknessDeviationCategories4265;//("1.2.840.10008.6.1.941", "Ophthalmic Thickness Deviation Categories (4265)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Ophthalmic Anatomic Structure Reference Point (4266)</summary>
    static DicomUID OphthalmicAnatomicStructureReferencePoint4266;//("1.2.840.10008.6.1.942", "Ophthalmic Anatomic Structure Reference Point (4266)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Cardiac Synchronization Technique (3104)</summary>
    static DicomUID CardiacSynchronizationTechnique3104;//("1.2.840.10008.6.1.943", "Cardiac Synchronization Technique (3104)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Staining Protocols (8130)</summary>
    static DicomUID StainingProtocols8130;//("1.2.840.10008.6.1.944", "Staining Protocols (8130)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Size Specific Dose Estimation Method for CT (10023)</summary>
    static DicomUID SizeSpecificDoseEstimationMethodForCT10023;//("1.2.840.10008.6.1.947", "Size Specific Dose Estimation Method for CT (10023)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Pathology Imaging Protocols (8131)</summary>
    static DicomUID PathologyImagingProtocols8131;//("1.2.840.10008.6.1.948", "Pathology Imaging Protocols (8131)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Magnification Selection (8132)</summary>
    static DicomUID MagnificationSelection8132;//("1.2.840.10008.6.1.949", "Magnification Selection (8132)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Tissue Selection (8133)</summary>
    static DicomUID TissueSelection8133;//("1.2.840.10008.6.1.950", "Tissue Selection (8133)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: General Region of Interest Measurement Modifiers (7464)</summary>
    static DicomUID GeneralRegionOfInterestMeasurementModifiers7464;//("1.2.840.10008.6.1.951", "General Region of Interest Measurement Modifiers (7464)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Measurements Derived From Multiple ROI Measurements (7465)</summary>
    static DicomUID MeasurementsDerivedFromMultipleROIMeasurements7465;//("1.2.840.10008.6.1.952", "Measurements Derived From Multiple ROI Measurements (7465)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Surface Scan Acquisition Types (8201)</summary>
    static DicomUID SurfaceScanAcquisitionTypes8201;//("1.2.840.10008.6.1.953", "Surface Scan Acquisition Types (8201)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Surface Scan Mode Types (8202)</summary>
    static DicomUID SurfaceScanModeTypes8202;//("1.2.840.10008.6.1.954", "Surface Scan Mode Types (8202)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Surface Scan Registration Method Types (8203)</summary>
    static DicomUID SurfaceScanRegistrationMethodTypes8203;//("1.2.840.10008.6.1.956", "Surface Scan Registration Method Types (8203)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Basic Cardiac Views (27)</summary>
    static DicomUID BasicCardiacViews27;//("1.2.840.10008.6.1.957", "Basic Cardiac Views (27)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: CT Reconstruction Algorithm (10033)</summary>
    static DicomUID CTReconstructionAlgorithm10033;//("1.2.840.10008.6.1.958", "CT Reconstruction Algorithm (10033)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Detector Types (10030)</summary>
    static DicomUID DetectorTypes10030;//("1.2.840.10008.6.1.959", "Detector Types (10030)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: CR/DR Mechanical Configuration (10031)</summary>
    static DicomUID CRDRMechanicalConfiguration10031;//("1.2.840.10008.6.1.960", "CR/DR Mechanical Configuration (10031)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Projection X-Ray Acquisition Device Types (10032)</summary>
    static DicomUID ProjectionXRayAcquisitionDeviceTypes10032;//("1.2.840.10008.6.1.961", "Projection X-Ray Acquisition Device Types (10032)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Abstract Segmentation Types (7165)</summary>
    static DicomUID AbstractSegmentationTypes7165;//("1.2.840.10008.6.1.962", "Abstract Segmentation Types (7165)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Common Tissue Segmentation Types (7166)</summary>
    static DicomUID CommonTissueSegmentationTypes7166;//("1.2.840.10008.6.1.963", "Common Tissue Segmentation Types (7166)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Peripheral Nervous System Segmentation Types (7167)</summary>
    static DicomUID PeripheralNervousSystemSegmentationTypes7167;//("1.2.840.10008.6.1.964", "Peripheral Nervous System Segmentation Types (7167)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Corneal Topography Mapping Units for Real World Value Mapping (4267)</summary>
    static DicomUID CornealTopographyMappingUnitsForRealWorldValueMapping4267;//("1.2.840.10008.6.1.965", "Corneal Topography Mapping Units for Real World Value Mapping (4267)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Corneal Topography Map Value Type (4268)</summary>
    static DicomUID CornealTopographyMapValueType4268;//("1.2.840.10008.6.1.966", "Corneal Topography Map Value Type (4268)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Brain Structures for Volumetric Measurements (7140)</summary>
    static DicomUID BrainStructuresForVolumetricMeasurements7140;//("1.2.840.10008.6.1.967", "Brain Structures for Volumetric Measurements (7140)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: RT Dose Derivation (7220)</summary>
    static DicomUID RTDoseDerivation7220;//("1.2.840.10008.6.1.968", "RT Dose Derivation (7220)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: RT Dose Purpose of Reference (7221)</summary>
    static DicomUID RTDosePurposeOfReference7221;//("1.2.840.10008.6.1.969", "RT Dose Purpose of Reference (7221)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Spectroscopy Purpose of Reference (7215)</summary>
    static DicomUID SpectroscopyPurposeOfReference7215;//("1.2.840.10008.6.1.970", "Spectroscopy Purpose of Reference (7215)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Scheduled Processing Parameter Concept Codes for RT Treatment (9250)</summary>
    static DicomUID ScheduledProcessingParameterConceptCodesForRTTreatment9250;//("1.2.840.10008.6.1.971", "Scheduled Processing Parameter Concept Codes for RT Treatment (9250)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Radiopharmaceutical Organ Dose Reference Authority (10040)</summary>
    static DicomUID RadiopharmaceuticalOrganDoseReferenceAuthority10040;//("1.2.840.10008.6.1.972", "Radiopharmaceutical Organ Dose Reference Authority (10040)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Source of Radioisotope Activity Information (10041)</summary>
    static DicomUID SourceOfRadioisotopeActivityInformation10041;//("1.2.840.10008.6.1.973", "Source of Radioisotope Activity Information (10041)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Intravenous Extravasation Symptoms (10043)</summary>
    static DicomUID IntravenousExtravasationSymptoms10043;//("1.2.840.10008.6.1.975", "Intravenous Extravasation Symptoms (10043)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Radiosensitive Organs (10044)</summary>
    static DicomUID RadiosensitiveOrgans10044;//("1.2.840.10008.6.1.976", "Radiosensitive Organs (10044)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Radiopharmaceutical Patient State (10045)</summary>
    static DicomUID RadiopharmaceuticalPatientState10045;//("1.2.840.10008.6.1.977", "Radiopharmaceutical Patient State (10045)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: GFR Measurements (10046)</summary>
    static DicomUID GFRMeasurements10046;//("1.2.840.10008.6.1.978", "GFR Measurements (10046)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: GFR Measurement Methods (10047)</summary>
    static DicomUID GFRMeasurementMethods10047;//("1.2.840.10008.6.1.979", "GFR Measurement Methods (10047)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Visual Evaluation Methods (8300)</summary>
    static DicomUID VisualEvaluationMethods8300;//("1.2.840.10008.6.1.980", "Visual Evaluation Methods (8300)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Test Pattern Codes (8301)</summary>
    static DicomUID TestPatternCodes8301;//("1.2.840.10008.6.1.981", "Test Pattern Codes (8301)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Measurement Pattern Codes (8302)</summary>
    static DicomUID MeasurementPatternCodes8302;//("1.2.840.10008.6.1.982", "Measurement Pattern Codes (8302)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Display Device Type (8303)</summary>
    static DicomUID DisplayDeviceType8303;//("1.2.840.10008.6.1.983", "Display Device Type (8303)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: SUV Units (85)</summary>
    static DicomUID SUVUnits85;//("1.2.840.10008.6.1.984", "SUV Units (85)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: T1 Measurement Methods (4100)</summary>
    static DicomUID T1MeasurementMethods4100;//("1.2.840.10008.6.1.985", "T1 Measurement Methods (4100)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Tracer Kinetic Models (4101)</summary>
    static DicomUID TracerKineticModels4101;//("1.2.840.10008.6.1.986", "Tracer Kinetic Models (4101)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Perfusion Measurement Methods (4102)</summary>
    static DicomUID PerfusionMeasurementMethods4102;//("1.2.840.10008.6.1.987", "Perfusion Measurement Methods (4102)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Arterial Input Function Measurement Methods (4103)</summary>
    static DicomUID ArterialInputFunctionMeasurementMethods4103;//("1.2.840.10008.6.1.988", "Arterial Input Function Measurement Methods (4103)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Bolus Arrival Time Derivation Methods (4104)</summary>
    static DicomUID BolusArrivalTimeDerivationMethods4104;//("1.2.840.10008.6.1.989", "Bolus Arrival Time Derivation Methods (4104)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Perfusion Analysis Methods (4105)</summary>
    static DicomUID PerfusionAnalysisMethods4105;//("1.2.840.10008.6.1.990", "Perfusion Analysis Methods (4105)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Quantitative Methods used for Perfusion And Tracer Kinetic Models (4106)</summary>
    static DicomUID QuantitativeMethodsUsedForPerfusionAndTracerKineticModels4106;//("1.2.840.10008.6.1.991", "Quantitative Methods used for Perfusion And Tracer Kinetic Models (4106)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Tracer Kinetic Model Parameters (4107)</summary>
    static DicomUID TracerKineticModelParameters4107;//("1.2.840.10008.6.1.992", "Tracer Kinetic Model Parameters (4107)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Perfusion Model Parameters (4108)</summary>
    static DicomUID PerfusionModelParameters4108;//("1.2.840.10008.6.1.993", "Perfusion Model Parameters (4108)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Model-Independent Dynamic Contrast Analysis Parameters (4109)</summary>
    static DicomUID ModelIndependentDynamicContrastAnalysisParameters4109;//("1.2.840.10008.6.1.994", "Model-Independent Dynamic Contrast Analysis Parameters (4109)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Tracer Kinetic Modeling Covariates (4110)</summary>
    static DicomUID TracerKineticModelingCovariates4110;//("1.2.840.10008.6.1.995", "Tracer Kinetic Modeling Covariates (4110)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Contrast Characteristics (4111)</summary>
    static DicomUID ContrastCharacteristics4111;//("1.2.840.10008.6.1.996", "Contrast Characteristics (4111)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Measurement Report Document Titles (7021)</summary>
    static DicomUID MeasurementReportDocumentTitles7021;//("1.2.840.10008.6.1.997", "Measurement Report Document Titles (7021)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Quantitative Diagnostic Imaging Procedures (100)</summary>
    static DicomUID QuantitativeDiagnosticImagingProcedures100;//("1.2.840.10008.6.1.998", "Quantitative Diagnostic Imaging Procedures (100)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: PET Region of Interest Measurements (7466)</summary>
    static DicomUID PETRegionOfInterestMeasurements7466;//("1.2.840.10008.6.1.999", "PET Region of Interest Measurements (7466)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Gray Level Co-occurrence Matrix Measurements (7467)</summary>
    static DicomUID GrayLevelCoOccurrenceMatrixMeasurements7467;//("1.2.840.10008.6.1.1000", "Gray Level Co-occurrence Matrix Measurements (7467)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Texture Measurements (7468)</summary>
    static DicomUID TextureMeasurements7468;//("1.2.840.10008.6.1.1001", "Texture Measurements (7468)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Time Point Types (6146)</summary>
    static DicomUID TimePointTypes6146;//("1.2.840.10008.6.1.1002", "Time Point Types (6146)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Generic Intensity and Size Measurements (7469)</summary>
    static DicomUID GenericIntensityAndSizeMeasurements7469;//("1.2.840.10008.6.1.1003", "Generic Intensity and Size Measurements (7469)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Response Criteria (6147)</summary>
    static DicomUID ResponseCriteria6147;//("1.2.840.10008.6.1.1004", "Response Criteria (6147)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Fetal Biometry Anatomic Sites (12020)</summary>
    static DicomUID FetalBiometryAnatomicSites12020;//("1.2.840.10008.6.1.1005", "Fetal Biometry Anatomic Sites (12020)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Fetal Long Bone Anatomic Sites (12021)</summary>
    static DicomUID FetalLongBoneAnatomicSites12021;//("1.2.840.10008.6.1.1006", "Fetal Long Bone Anatomic Sites (12021)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Fetal Cranium Anatomic Sites (12022)</summary>
    static DicomUID FetalCraniumAnatomicSites12022;//("1.2.840.10008.6.1.1007", "Fetal Cranium Anatomic Sites (12022)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Pelvis and Uterus Anatomic Sites (12023)</summary>
    static DicomUID PelvisAndUterusAnatomicSites12023;//("1.2.840.10008.6.1.1008", "Pelvis and Uterus Anatomic Sites (12023)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Parametric Map Derivation Image Purpose of Reference (7222)</summary>
    static DicomUID ParametricMapDerivationImagePurposeOfReference7222;//("1.2.840.10008.6.1.1009", "Parametric Map Derivation Image Purpose of Reference (7222)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Physical Quantity Descriptors (9000)</summary>
    static DicomUID PhysicalQuantityDescriptors9000;//("1.2.840.10008.6.1.1010", "Physical Quantity Descriptors (9000)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Lymph Node Anatomic Sites (7600)</summary>
    static DicomUID LymphNodeAnatomicSites7600;//("1.2.840.10008.6.1.1011", "Lymph Node Anatomic Sites (7600)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Head and Neck Cancer Anatomic Sites (7601)</summary>
    static DicomUID HeadAndNeckCancerAnatomicSites7601;//("1.2.840.10008.6.1.1012", "Head and Neck Cancer Anatomic Sites (7601)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Fiber Tracts In Brainstem (7701)</summary>
    static DicomUID FiberTractsInBrainstem7701;//("1.2.840.10008.6.1.1013", "Fiber Tracts In Brainstem (7701)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Projection and Thalamic Fibers (7702)</summary>
    static DicomUID ProjectionAndThalamicFibers7702;//("1.2.840.10008.6.1.1014", "Projection and Thalamic Fibers (7702)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Association Fibers (7703)</summary>
    static DicomUID AssociationFibers7703;//("1.2.840.10008.6.1.1015", "Association Fibers (7703)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Limbic System Tracts (7704)</summary>
    static DicomUID LimbicSystemTracts7704;//("1.2.840.10008.6.1.1016", "Limbic System Tracts (7704)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Commissural Fibers (7705)</summary>
    static DicomUID CommissuralFibers7705;//("1.2.840.10008.6.1.1017", "Commissural Fibers (7705)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Cranial Nerves (7706)</summary>
    static DicomUID CranialNerves7706;//("1.2.840.10008.6.1.1018", "Cranial Nerves (7706)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Spinal Cord Fibers (7707)</summary>
    static DicomUID SpinalCordFibers7707;//("1.2.840.10008.6.1.1019", "Spinal Cord Fibers (7707)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Tractography Anatomic Sites (7710)</summary>
    static DicomUID TractographyAnatomicSites7710;//("1.2.840.10008.6.1.1020", "Tractography Anatomic Sites (7710)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Primary Anatomic Structure for Intra-oral Radiography (Supernumerary Dentition - Designation of Teeth) (4025)</summary>
    static DicomUID PrimaryAnatomicStructureForIntraOralRadiographySupernumeraryDentitionDesignationOfTeeth4025;//("1.2.840.10008.6.1.1021", "Primary Anatomic Structure for Intra-oral Radiography (Supernumerary Dentition - Designation of Teeth) (4025)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Primary Anatomic Structure for Intra-oral and Craniofacial Radiography - Teeth (4026)</summary>
    static DicomUID PrimaryAnatomicStructureForIntraOralAndCraniofacialRadiographyTeeth4026;//("1.2.840.10008.6.1.1022", "Primary Anatomic Structure for Intra-oral and Craniofacial Radiography - Teeth (4026)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: IEC61217 Device Position Parameters (9401)</summary>
    static DicomUID IEC61217DevicePositionParameters9401;//("1.2.840.10008.6.1.1023", "IEC61217 Device Position Parameters (9401)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: IEC61217 Gantry Position Parameters (9402)</summary>
    static DicomUID IEC61217GantryPositionParameters9402;//("1.2.840.10008.6.1.1024", "IEC61217 Gantry Position Parameters (9402)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: IEC61217 Patient Support Position Parameters (9403)</summary>
    static DicomUID IEC61217PatientSupportPositionParameters9403;//("1.2.840.10008.6.1.1025", "IEC61217 Patient Support Position Parameters (9403)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Actionable Finding Classification (7035)</summary>
    static DicomUID ActionableFindingClassification7035;//("1.2.840.10008.6.1.1026", "Actionable Finding Classification (7035)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Image Quality Assessment (7036)</summary>
    static DicomUID ImageQualityAssessment7036;//("1.2.840.10008.6.1.1027", "Image Quality Assessment (7036)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Summary Radiation Exposure Quantities (10050)</summary>
    static DicomUID SummaryRadiationExposureQuantities10050;//("1.2.840.10008.6.1.1028", "Summary Radiation Exposure Quantities (10050)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Wide Field Ophthalmic Photography Transformation Method (4245)</summary>
    static DicomUID WideFieldOphthalmicPhotographyTransformationMethod4245;//("1.2.840.10008.6.1.1029", "Wide Field Ophthalmic Photography Transformation Method (4245)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: PET Units (84)</summary>
    static DicomUID PETUnits84;//("1.2.840.10008.6.1.1030", "PET Units (84)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Implant Materials (7300)</summary>
    static DicomUID ImplantMaterials7300;//("1.2.840.10008.6.1.1031", "Implant Materials (7300)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Intervention Types (7301)</summary>
    static DicomUID InterventionTypes7301;//("1.2.840.10008.6.1.1032", "Intervention Types (7301)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Implant Templates View Orientations (7302)</summary>
    static DicomUID ImplantTemplatesViewOrientations7302;//("1.2.840.10008.6.1.1033", "Implant Templates View Orientations (7302)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Implant Templates Modified View Orientations (7303)</summary>
    static DicomUID ImplantTemplatesModifiedViewOrientations7303;//("1.2.840.10008.6.1.1034", "Implant Templates Modified View Orientations (7303)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Implant Target Anatomy (7304)</summary>
    static DicomUID ImplantTargetAnatomy7304;//("1.2.840.10008.6.1.1035", "Implant Target Anatomy (7304)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Implant Planning Landmarks (7305)</summary>
    static DicomUID ImplantPlanningLandmarks7305;//("1.2.840.10008.6.1.1036", "Implant Planning Landmarks (7305)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Human Hip Implant Planning Landmarks (7306)</summary>
    static DicomUID HumanHipImplantPlanningLandmarks7306;//("1.2.840.10008.6.1.1037", "Human Hip Implant Planning Landmarks (7306)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Implant Component Types (7307)</summary>
    static DicomUID ImplantComponentTypes7307;//("1.2.840.10008.6.1.1038", "Implant Component Types (7307)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Human Hip Implant Component Types (7308)</summary>
    static DicomUID HumanHipImplantComponentTypes7308;//("1.2.840.10008.6.1.1039", "Human Hip Implant Component Types (7308)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Human Trauma Implant Component Types (7309)</summary>
    static DicomUID HumanTraumaImplantComponentTypes7309;//("1.2.840.10008.6.1.1040", "Human Trauma Implant Component Types (7309)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Implant Fixation Method (7310)</summary>
    static DicomUID ImplantFixationMethod7310;//("1.2.840.10008.6.1.1041", "Implant Fixation Method (7310)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Device Participating Roles (7445)</summary>
    static DicomUID DeviceParticipatingRoles7445;//("1.2.840.10008.6.1.1042", "Device Participating Roles (7445)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Container Types (8101)</summary>
    static DicomUID ContainerTypes8101;//("1.2.840.10008.6.1.1043", "Container Types (8101)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Container Component Types (8102)</summary>
    static DicomUID ContainerComponentTypes8102;//("1.2.840.10008.6.1.1044", "Container Component Types (8102)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Anatomic Pathology Specimen Types (8103)</summary>
    static DicomUID AnatomicPathologySpecimenTypes8103;//("1.2.840.10008.6.1.1045", "Anatomic Pathology Specimen Types (8103)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Breast Tissue Specimen Types (8104)</summary>
    static DicomUID BreastTissueSpecimenTypes8104;//("1.2.840.10008.6.1.1046", "Breast Tissue Specimen Types (8104)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Specimen Collection Procedure (8109)</summary>
    static DicomUID SpecimenCollectionProcedure8109;//("1.2.840.10008.6.1.1047", "Specimen Collection Procedure (8109)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Specimen Sampling Procedure (8110)</summary>
    static DicomUID SpecimenSamplingProcedure8110;//("1.2.840.10008.6.1.1048", "Specimen Sampling Procedure (8110)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Specimen Preparation Procedure (8111)</summary>
    static DicomUID SpecimenPreparationProcedure8111;//("1.2.840.10008.6.1.1049", "Specimen Preparation Procedure (8111)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Specimen Stains (8112)</summary>
    static DicomUID SpecimenStains8112;//("1.2.840.10008.6.1.1050", "Specimen Stains (8112)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Specimen Preparation Steps (8113)</summary>
    static DicomUID SpecimenPreparationSteps8113;//("1.2.840.10008.6.1.1051", "Specimen Preparation Steps (8113)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Specimen Fixatives (8114)</summary>
    static DicomUID SpecimenFixatives8114;//("1.2.840.10008.6.1.1052", "Specimen Fixatives (8114)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Specimen Embedding Media (8115)</summary>
    static DicomUID SpecimenEmbeddingMedia8115;//("1.2.840.10008.6.1.1053", "Specimen Embedding Media (8115)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Source of Projection X-Ray Dose Information (10020)</summary>
    static DicomUID SourceOfProjectionXRayDoseInformation10020;//("1.2.840.10008.6.1.1054", "Source of Projection X-Ray Dose Information (10020)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Source of CT Dose Information (10021)</summary>
    static DicomUID SourceOfCTDoseInformation10021;//("1.2.840.10008.6.1.1055", "Source of CT Dose Information (10021)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Radiation Dose Reference Points (10025)</summary>
    static DicomUID RadiationDoseReferencePoints10025;//("1.2.840.10008.6.1.1056", "Radiation Dose Reference Points (10025)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Volumetric View Description (501)</summary>
    static DicomUID VolumetricViewDescription501;//("1.2.840.10008.6.1.1057", "Volumetric View Description (501)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Volumetric View Modifier (502)</summary>
    static DicomUID VolumetricViewModifier502;//("1.2.840.10008.6.1.1058", "Volumetric View Modifier (502)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Diffusion Acquisition Value Types (7260)</summary>
    static DicomUID DiffusionAcquisitionValueTypes7260;//("1.2.840.10008.6.1.1059", "Diffusion Acquisition Value Types (7260)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Diffusion Model Value Types (7261)</summary>
    static DicomUID DiffusionModelValueTypes7261;//("1.2.840.10008.6.1.1060", "Diffusion Model Value Types (7261)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Diffusion Tractography Algorithm Families (7262)</summary>
    static DicomUID DiffusionTractographyAlgorithmFamilies7262;//("1.2.840.10008.6.1.1061", "Diffusion Tractography Algorithm Families (7262)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Diffusion Tractography Measurement Types (7263)</summary>
    static DicomUID DiffusionTractographyMeasurementTypes7263;//("1.2.840.10008.6.1.1062", "Diffusion Tractography Measurement Types (7263)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Research Animal Source Registries (7490)</summary>
    static DicomUID ResearchAnimalSourceRegistries7490;//("1.2.840.10008.6.1.1063", "Research Animal Source Registries (7490)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Yes-No Only (231)</summary>
    static DicomUID YesNoOnly231;//("1.2.840.10008.6.1.1064", "Yes-No Only (231)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Biosafety Levels (601)</summary>
    static DicomUID BiosafetyLevels601;//("1.2.840.10008.6.1.1065", "Biosafety Levels (601)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Biosafety Control Reasons (602)</summary>
    static DicomUID BiosafetyControlReasons602;//("1.2.840.10008.6.1.1066", "Biosafety Control Reasons (602)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Sex - Male Female or Both (7457)</summary>
    static DicomUID SexMaleFemaleOrBoth7457;//("1.2.840.10008.6.1.1067", "Sex - Male Female or Both (7457)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Animal Room Types (603)</summary>
    static DicomUID AnimalRoomTypes603;//("1.2.840.10008.6.1.1068", "Animal Room Types (603)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Device Reuse (604)</summary>
    static DicomUID DeviceReuse604;//("1.2.840.10008.6.1.1069", "Device Reuse (604)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Animal Bedding Material (605)</summary>
    static DicomUID AnimalBeddingMaterial605;//("1.2.840.10008.6.1.1070", "Animal Bedding Material (605)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Animal Shelter Types (606)</summary>
    static DicomUID AnimalShelterTypes606;//("1.2.840.10008.6.1.1071", "Animal Shelter Types (606)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Animal Feed Types (607)</summary>
    static DicomUID AnimalFeedTypes607;//("1.2.840.10008.6.1.1072", "Animal Feed Types (607)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Animal Feed Sources (608)</summary>
    static DicomUID AnimalFeedSources608;//("1.2.840.10008.6.1.1073", "Animal Feed Sources (608)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Animal Feeding Methods (609)</summary>
    static DicomUID AnimalFeedingMethods609;//("1.2.840.10008.6.1.1074", "Animal Feeding Methods (609)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Water Types (610)</summary>
    static DicomUID WaterTypes610;//("1.2.840.10008.6.1.1075", "Water Types (610)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Anesthesia Category Code Type for Small Animal Anesthesia (611)</summary>
    static DicomUID AnesthesiaCategoryCodeTypeForSmallAnimalAnesthesia611;//("1.2.840.10008.6.1.1076", "Anesthesia Category Code Type for Small Animal Anesthesia (611)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Anesthesia Category Code Type from Anesthesia Quality Initiative (AQI) (612)</summary>
    static DicomUID AnesthesiaCategoryCodeTypeFromAnesthesiaQualityInitiativeAQI612;//("1.2.840.10008.6.1.1077", "Anesthesia Category Code Type from Anesthesia Quality Initiative (AQI) (612)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Anesthesia Induction Code Type for Small Animal Anesthesia (613)</summary>
    static DicomUID AnesthesiaInductionCodeTypeForSmallAnimalAnesthesia613;//("1.2.840.10008.6.1.1078", "Anesthesia Induction Code Type for Small Animal Anesthesia (613)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Anesthesia Induction Code Type from Anesthesia Quality Initiative (AQI) (614)</summary>
    static DicomUID AnesthesiaInductionCodeTypeFromAnesthesiaQualityInitiativeAQI614;//("1.2.840.10008.6.1.1079", "Anesthesia Induction Code Type from Anesthesia Quality Initiative (AQI) (614)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Anesthesia Maintenance Code Type for Small Animal Anesthesia (615)</summary>
    static DicomUID AnesthesiaMaintenanceCodeTypeForSmallAnimalAnesthesia615;//("1.2.840.10008.6.1.1080", "Anesthesia Maintenance Code Type for Small Animal Anesthesia (615)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Anesthesia Maintenance Code Type from Anesthesia Quality Initiative (AQI) (616)</summary>
    static DicomUID AnesthesiaMaintenanceCodeTypeFromAnesthesiaQualityInitiativeAQI616;//("1.2.840.10008.6.1.1081", "Anesthesia Maintenance Code Type from Anesthesia Quality Initiative (AQI) (616)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Airway Management Method Code Type for Small Animal Anesthesia (617)</summary>
    static DicomUID AirwayManagementMethodCodeTypeForSmallAnimalAnesthesia617;//("1.2.840.10008.6.1.1082", "Airway Management Method Code Type for Small Animal Anesthesia (617)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Airway Management Method Code Type from Anesthesia Quality Initiative (AQI) (618)</summary>
    static DicomUID AirwayManagementMethodCodeTypeFromAnesthesiaQualityInitiativeAQI618;//("1.2.840.10008.6.1.1083", "Airway Management Method Code Type from Anesthesia Quality Initiative (AQI) (618)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Airway Management Sub-Method Code Type for Small Animal Anesthesia (619)</summary>
    static DicomUID AirwayManagementSubMethodCodeTypeForSmallAnimalAnesthesia619;//("1.2.840.10008.6.1.1084", "Airway Management Sub-Method Code Type for Small Animal Anesthesia (619)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Airway Management Sub-Method Code Type from Anesthesia Quality Initiative (AQI) (620)</summary>
    static DicomUID AirwayManagementSubMethodCodeTypeFromAnesthesiaQualityInitiativeAQI620;//("1.2.840.10008.6.1.1085", "Airway Management Sub-Method Code Type from Anesthesia Quality Initiative (AQI) (620)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Type of Medication for Small Animal Anesthesia (621)</summary>
    static DicomUID TypeOfMedicationForSmallAnimalAnesthesia621;//("1.2.840.10008.6.1.1086", "Type of Medication for Small Animal Anesthesia (621)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Medication Type Code Type from Anesthesia Quality Initiative (AQI) (622)</summary>
    static DicomUID MedicationTypeCodeTypeFromAnesthesiaQualityInitiativeAQI622;//("1.2.840.10008.6.1.1087", "Medication Type Code Type from Anesthesia Quality Initiative (AQI) (622)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Medication for Small Animal Anesthesia (623)</summary>
    static DicomUID MedicationForSmallAnimalAnesthesia623;//("1.2.840.10008.6.1.1088", "Medication for Small Animal Anesthesia (623)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Inhalational Anesthesia Agents for Small Animal Anesthesia (624)</summary>
    static DicomUID InhalationalAnesthesiaAgentsForSmallAnimalAnesthesia624;//("1.2.840.10008.6.1.1089", "Inhalational Anesthesia Agents for Small Animal Anesthesia (624)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Injectable Anesthesia Agents for Small Animal Anesthesia (625)</summary>
    static DicomUID InjectableAnesthesiaAgentsForSmallAnimalAnesthesia625;//("1.2.840.10008.6.1.1090", "Injectable Anesthesia Agents for Small Animal Anesthesia (625)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Premedication Agents for Small Animal Anesthesia (626)</summary>
    static DicomUID PremedicationAgentsForSmallAnimalAnesthesia626;//("1.2.840.10008.6.1.1091", "Premedication Agents for Small Animal Anesthesia (626)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Neuromuscular Blocking Agents for Small Animal Anesthesia (627)</summary>
    static DicomUID NeuromuscularBlockingAgentsForSmallAnimalAnesthesia627;//("1.2.840.10008.6.1.1092", "Neuromuscular Blocking Agents for Small Animal Anesthesia (627)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Ancillary Medications for Small Animal Anesthesia (628)</summary>
    static DicomUID AncillaryMedicationsForSmallAnimalAnesthesia628;//("1.2.840.10008.6.1.1093", "Ancillary Medications for Small Animal Anesthesia (628)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Carrier Gases for Small Animal Anesthesia (629)</summary>
    static DicomUID CarrierGasesForSmallAnimalAnesthesia629;//("1.2.840.10008.6.1.1094", "Carrier Gases for Small Animal Anesthesia (629)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Local Anesthetics for Small Animal Anesthesia (630)</summary>
    static DicomUID LocalAnestheticsForSmallAnimalAnesthesia630;//("1.2.840.10008.6.1.1095", "Local Anesthetics for Small Animal Anesthesia (630)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Phase of Procedure Requiring Anesthesia (631)</summary>
    static DicomUID PhaseOfProcedureRequiringAnesthesia631;//("1.2.840.10008.6.1.1096", "Phase of Procedure Requiring Anesthesia (631)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Phase of Surgical Procedure Requiring Anesthesia (632)</summary>
    static DicomUID PhaseOfSurgicalProcedureRequiringAnesthesia632;//("1.2.840.10008.6.1.1097", "Phase of Surgical Procedure Requiring Anesthesia (632)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Phase of Imaging Procedure Requiring Anesthesia (633)</summary>
    static DicomUID PhaseOfImagingProcedureRequiringAnesthesia633;//("1.2.840.10008.6.1.1098", "Phase of Imaging Procedure Requiring Anesthesia (633)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Phase of Animal Handling (634)</summary>
    static DicomUID PhaseOfAnimalHandling634;//("1.2.840.10008.6.1.1099", "Phase of Animal Handling (634)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Heating Method (635)</summary>
    static DicomUID HeatingMethod635;//("1.2.840.10008.6.1.1100", "Heating Method (635)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Temperature Sensor Device Component Type for Small Animal Procedures (636)</summary>
    static DicomUID TemperatureSensorDeviceComponentTypeForSmallAnimalProcedures636;//("1.2.840.10008.6.1.1101", "Temperature Sensor Device Component Type for Small Animal Procedures (636)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Exogenous Substance Types (637)</summary>
    static DicomUID ExogenousSubstanceTypes637;//("1.2.840.10008.6.1.1102", "Exogenous Substance Types (637)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Exogenous Substance (638)</summary>
    static DicomUID ExogenousSubstance638;//("1.2.840.10008.6.1.1103", "Exogenous Substance (638)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Tumor Graft Histologic Type (639)</summary>
    static DicomUID TumorGraftHistologicType639;//("1.2.840.10008.6.1.1104", "Tumor Graft Histologic Type (639)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Fibrils (640)</summary>
    static DicomUID Fibrils640;//("1.2.840.10008.6.1.1105", "Fibrils (640)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Viruses (641)</summary>
    static DicomUID Viruses641;//("1.2.840.10008.6.1.1106", "Viruses (641)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Cytokines (642)</summary>
    static DicomUID Cytokines642;//("1.2.840.10008.6.1.1107", "Cytokines (642)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Toxins (643)</summary>
    static DicomUID Toxins643;//("1.2.840.10008.6.1.1108", "Toxins (643)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Exogenous Substance Administration Sites (644)</summary>
    static DicomUID ExogenousSubstanceAdministrationSites644;//("1.2.840.10008.6.1.1109", "Exogenous Substance Administration Sites (644)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Exogenous Substance Tissue of Origin (645)</summary>
    static DicomUID ExogenousSubstanceTissueOfOrigin645;//("1.2.840.10008.6.1.1110", "Exogenous Substance Tissue of Origin (645)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Preclinical Small Animal Imaging Procedures (646)</summary>
    static DicomUID PreclinicalSmallAnimalImagingProcedures646;//("1.2.840.10008.6.1.1111", "Preclinical Small Animal Imaging Procedures (646)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Position Reference Indicator for Frame of Reference (647)</summary>
    static DicomUID PositionReferenceIndicatorForFrameOfReference647;//("1.2.840.10008.6.1.1112", "Position Reference Indicator for Frame of Reference (647)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Present-Absent Only (241)</summary>
    static DicomUID PresentAbsentOnly241;//("1.2.840.10008.6.1.1113", "Present-Absent Only (241)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Water Equivalent Diameter Method (10024)</summary>
    static DicomUID WaterEquivalentDiameterMethod10024;//("1.2.840.10008.6.1.1114", "Water Equivalent Diameter Method (10024)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Radiotherapy Purposes of Reference (7022)</summary>
    static DicomUID RadiotherapyPurposesOfReference7022;//("1.2.840.10008.6.1.1115", "Radiotherapy Purposes of Reference (7022)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Content Assessment Types (701)</summary>
    static DicomUID ContentAssessmentTypes701;//("1.2.840.10008.6.1.1116", "Content Assessment Types (701)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: RT Content Assessment Types (702)</summary>
    static DicomUID RTContentAssessmentTypes702;//("1.2.840.10008.6.1.1117", "RT Content Assessment Types (702)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Basis of Assessment (703)</summary>
    static DicomUID BasisOfAssessment703;//("1.2.840.10008.6.1.1118", "Basis of Assessment (703)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Reader Specialty (7449)</summary>
    static DicomUID ReaderSpecialty7449;//("1.2.840.10008.6.1.1119", "Reader Specialty (7449)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Requested Report Types (9233)</summary>
    static DicomUID RequestedReportTypes9233;//("1.2.840.10008.6.1.1120", "Requested Report Types (9233)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: CT Transverse Plane Reference Basis (1000)</summary>
    static DicomUID CTTransversePlaneReferenceBasis1000;//("1.2.840.10008.6.1.1121", "CT Transverse Plane Reference Basis (1000)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Anatomical Reference Basis (1001)</summary>
    static DicomUID AnatomicalReferenceBasis1001;//("1.2.840.10008.6.1.1122", "Anatomical Reference Basis (1001)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Anatomical Reference Basis - Head (1002)</summary>
    static DicomUID AnatomicalReferenceBasisHead1002;//("1.2.840.10008.6.1.1123", "Anatomical Reference Basis - Head (1002)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Anatomical Reference Basis - Spine (1003)</summary>
    static DicomUID AnatomicalReferenceBasisSpine1003;//("1.2.840.10008.6.1.1124", "Anatomical Reference Basis - Spine (1003)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Anatomical Reference Basis - Chest (1004)</summary>
    static DicomUID AnatomicalReferenceBasisChest1004;//("1.2.840.10008.6.1.1125", "Anatomical Reference Basis - Chest (1004)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Anatomical Reference Basis - Abdomen/Pelvis (1005)</summary>
    static DicomUID AnatomicalReferenceBasisAbdomenPelvis1005;//("1.2.840.10008.6.1.1126", "Anatomical Reference Basis - Abdomen/Pelvis (1005)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Anatomical Reference Basis - Extremities (1006)</summary>
    static DicomUID AnatomicalReferenceBasisExtremities1006;//("1.2.840.10008.6.1.1127", "Anatomical Reference Basis - Extremities (1006)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Reference Geometry - Planes (1010)</summary>
    static DicomUID ReferenceGeometryPlanes1010;//("1.2.840.10008.6.1.1128", "Reference Geometry - Planes (1010)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Reference Geometry - Points (1011)</summary>
    static DicomUID ReferenceGeometryPoints1011;//("1.2.840.10008.6.1.1129", "Reference Geometry - Points (1011)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Patient Alignment Methods (1015)</summary>
    static DicomUID PatientAlignmentMethods1015;//("1.2.840.10008.6.1.1130", "Patient Alignment Methods (1015)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Contraindications For CT Imaging (1200)</summary>
    static DicomUID ContraindicationsForCTImaging1200;//("1.2.840.10008.6.1.1131", "Contraindications For CT Imaging (1200)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Fiducials Categories (7110)</summary>
    static DicomUID FiducialsCategories7110;//("1.2.840.10008.6.1.1132", "Fiducials Categories (7110)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Fiducials (7111)</summary>
    static DicomUID Fiducials7111;//("1.2.840.10008.6.1.1133", "Fiducials (7111)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Non-Image Source Instance Purposes of Reference (7013)</summary>
    static DicomUID NonImageSourceInstancePurposesOfReference7013;//("1.2.840.10008.6.1.1134", "Non-Image Source Instance Purposes of Reference (7013)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: RT Process Output (7023)</summary>
    static DicomUID RTProcessOutput7023;//("1.2.840.10008.6.1.1135", "RT Process Output (7023)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: RT Process Input (7024)</summary>
    static DicomUID RTProcessInput7024;//("1.2.840.10008.6.1.1136", "RT Process Input (7024)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: RT Process Input Used (7025)</summary>
    static DicomUID RTProcessInputUsed7025;//("1.2.840.10008.6.1.1137", "RT Process Input Used (7025)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Prostate Anatomy (6300)</summary>
    static DicomUID ProstateAnatomy6300;//("1.2.840.10008.6.1.1138", "Prostate Anatomy (6300)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Prostate Sector Anatomy from PI-RADS v2 (6301)</summary>
    static DicomUID ProstateSectorAnatomyFromPIRADSV26301;//("1.2.840.10008.6.1.1139", "Prostate Sector Anatomy from PI-RADS v2 (6301)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Prostate Sector Anatomy from European Concensus 16 Sector (Minimal) Model (6302)</summary>
    static DicomUID ProstateSectorAnatomyFromEuropeanConcensus16SectorMinimalModel6302;//("1.2.840.10008.6.1.1140", "Prostate Sector Anatomy from European Concensus 16 Sector (Minimal) Model (6302)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Prostate Sector Anatomy from European Concensus 27 Sector (Optimal) Model (6303)</summary>
    static DicomUID ProstateSectorAnatomyFromEuropeanConcensus27SectorOptimalModel6303;//("1.2.840.10008.6.1.1141", "Prostate Sector Anatomy from European Concensus 27 Sector (Optimal) Model (6303)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Measurement Selection Reasons (12301)</summary>
    static DicomUID MeasurementSelectionReasons12301;//("1.2.840.10008.6.1.1142", "Measurement Selection Reasons (12301)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Echo Finding Observation Types (12302)</summary>
    static DicomUID EchoFindingObservationTypes12302;//("1.2.840.10008.6.1.1143", "Echo Finding Observation Types (12302)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Echo Measurement Types (12303)</summary>
    static DicomUID EchoMeasurementTypes12303;//("1.2.840.10008.6.1.1144", "Echo Measurement Types (12303)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Echo Measured Properties (12304)</summary>
    static DicomUID EchoMeasuredProperties12304;//("1.2.840.10008.6.1.1145", "Echo Measured Properties (12304)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Basic Echo Anatomic Sites (12305)</summary>
    static DicomUID BasicEchoAnatomicSites12305;//("1.2.840.10008.6.1.1146", "Basic Echo Anatomic Sites (12305)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Echo Flow Directions (12306)</summary>
    static DicomUID EchoFlowDirections12306;//("1.2.840.10008.6.1.1147", "Echo Flow Directions (12306)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Cardiac Phases and Time Points (12307)</summary>
    static DicomUID CardiacPhasesAndTimePoints12307;//("1.2.840.10008.6.1.1148", "Cardiac Phases and Time Points (12307)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Core Echo Measurements (12300)</summary>
    static DicomUID CoreEchoMeasurements12300;//("1.2.840.10008.6.1.1149", "Core Echo Measurements (12300)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: OCT-A Processing Algorithm Families (4270)</summary>
    static DicomUID OCTAProcessingAlgorithmFamilies4270;//("1.2.840.10008.6.1.1150", "OCT-A Processing Algorithm Families (4270)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: En Face Image Types (4271)</summary>
    static DicomUID EnFaceImageTypes4271;//("1.2.840.10008.6.1.1151", "En Face Image Types (4271)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Opt Scan Pattern Types (4272)</summary>
    static DicomUID OptScanPatternTypes4272;//("1.2.840.10008.6.1.1152", "Opt Scan Pattern Types (4272)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Retinal Segmentation Surfaces (4273)</summary>
    static DicomUID RetinalSegmentationSurfaces4273;//("1.2.840.10008.6.1.1153", "Retinal Segmentation Surfaces (4273)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Organs for Radiation Dose Estimates (10060)</summary>
    static DicomUID OrgansForRadiationDoseEstimates10060;//("1.2.840.10008.6.1.1154", "Organs for Radiation Dose Estimates (10060)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Absorbed Radiation Dose Types (10061)</summary>
    static DicomUID AbsorbedRadiationDoseTypes10061;//("1.2.840.10008.6.1.1155", "Absorbed Radiation Dose Types (10061)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Equivalent Radiation Dose Types (10062)</summary>
    static DicomUID EquivalentRadiationDoseTypes10062;//("1.2.840.10008.6.1.1156", "Equivalent Radiation Dose Types (10062)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Radiation Dose Estimate Distribution Representation (10063)</summary>
    static DicomUID RadiationDoseEstimateDistributionRepresentation10063;//("1.2.840.10008.6.1.1157", "Radiation Dose Estimate Distribution Representation (10063)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Patient Model Type (10064)</summary>
    static DicomUID PatientModelType10064;//("1.2.840.10008.6.1.1158", "Patient Model Type (10064)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Radiation Transport Model Type (10065)</summary>
    static DicomUID RadiationTransportModelType10065;//("1.2.840.10008.6.1.1159", "Radiation Transport Model Type (10065)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Attenuator Category (10066)</summary>
    static DicomUID AttenuatorCategory10066;//("1.2.840.10008.6.1.1160", "Attenuator Category (10066)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Radiation Attenuator Materials (10067)</summary>
    static DicomUID RadiationAttenuatorMaterials10067;//("1.2.840.10008.6.1.1161", "Radiation Attenuator Materials (10067)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Estimate Method Types (10068)</summary>
    static DicomUID EstimateMethodTypes10068;//("1.2.840.10008.6.1.1162", "Estimate Method Types (10068)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Radiation Dose Estimation Parameter  (10069)</summary>
    static DicomUID RadiationDoseEstimationParameter10069;//("1.2.840.10008.6.1.1163", "Radiation Dose Estimation Parameter  (10069)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Radiation Dose Types (10070)</summary>
    static DicomUID RadiationDoseTypes10070;//("1.2.840.10008.6.1.1164", "Radiation Dose Types (10070)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: MR Diffusion Component Semantics (7270)</summary>
    static DicomUID MRDiffusionComponentSemantics7270;//("1.2.840.10008.6.1.1165", "MR Diffusion Component Semantics (7270)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: MR Diffusion Anisotropy Indices (7271)</summary>
    static DicomUID MRDiffusionAnisotropyIndices7271;//("1.2.840.10008.6.1.1166", "MR Diffusion Anisotropy Indices (7271)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: MR Diffusion Model Parameters (7272)</summary>
    static DicomUID MRDiffusionModelParameters7272;//("1.2.840.10008.6.1.1167", "MR Diffusion Model Parameters (7272)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: MR Diffusion Models (7273)</summary>
    static DicomUID MRDiffusionModels7273;//("1.2.840.10008.6.1.1168", "MR Diffusion Models (7273)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: MR Diffusion Model Fitting Methods (7274)</summary>
    static DicomUID MRDiffusionModelFittingMethods7274;//("1.2.840.10008.6.1.1169", "MR Diffusion Model Fitting Methods (7274)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: MR Diffusion Model Specific Methods (7275)</summary>
    static DicomUID MRDiffusionModelSpecificMethods7275;//("1.2.840.10008.6.1.1170", "MR Diffusion Model Specific Methods (7275)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: MR Diffusion Model Inputs (7276)</summary>
    static DicomUID MRDiffusionModelInputs7276;//("1.2.840.10008.6.1.1171", "MR Diffusion Model Inputs (7276)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Units of Diffusion Rate Area Over Time (7277)</summary>
    static DicomUID UnitsOfDiffusionRateAreaOverTime7277;//("1.2.840.10008.6.1.1172", "Units of Diffusion Rate Area Over Time (7277)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Pediatric Size Categories (7039)</summary>
    static DicomUID PediatricSizeCategories7039;//("1.2.840.10008.6.1.1173", "Pediatric Size Categories (7039)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Calcium Scoring Patient Size Categories (7041)</summary>
    static DicomUID CalciumScoringPatientSizeCategories7041;//("1.2.840.10008.6.1.1174", "Calcium Scoring Patient Size Categories (7041)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Reason for Repeating Acquisition (10034)</summary>
    static DicomUID ReasonForRepeatingAcquisition10034;//("1.2.840.10008.6.1.1175", "Reason for Repeating Acquisition (10034)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Protocol Assertion Codes (800)</summary>
    static DicomUID ProtocolAssertionCodes800;//("1.2.840.10008.6.1.1176", "Protocol Assertion Codes (800)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Radiotherapeutic Dose Measurement Devices (7026)</summary>
    static DicomUID RadiotherapeuticDoseMeasurementDevices7026;//("1.2.840.10008.6.1.1177", "Radiotherapeutic Dose Measurement Devices (7026)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Export Additional Information Document Titles (7014)</summary>
    static DicomUID ExportAdditionalInformationDocumentTitles7014;//("1.2.840.10008.6.1.1178", "Export Additional Information Document Titles (7014)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Export Delay Reasons (7015)</summary>
    static DicomUID ExportDelayReasons7015;//("1.2.840.10008.6.1.1179", "Export Delay Reasons (7015)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Level of Difficulty (7016)</summary>
    static DicomUID LevelOfDifficulty7016;//("1.2.840.10008.6.1.1180", "Level of Difficulty (7016)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Category of Teaching Material - Imaging (7017)</summary>
    static DicomUID CategoryOfTeachingMaterialImaging7017;//("1.2.840.10008.6.1.1181", "Category of Teaching Material - Imaging (7017)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Miscellaneous Document Titles (7018)</summary>
    static DicomUID MiscellaneousDocumentTitles7018;//("1.2.840.10008.6.1.1182", "Miscellaneous Document Titles (7018)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Segmentation Non-Image Source Purposes of Reference (7019)</summary>
    static DicomUID SegmentationNonImageSourcePurposesOfReference7019;//("1.2.840.10008.6.1.1183", "Segmentation Non-Image Source Purposes of Reference (7019)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Longitudinal Temporal Event Types (280)</summary>
    static DicomUID LongitudinalTemporalEventTypes280;//("1.2.840.10008.6.1.1184", "Longitudinal Temporal Event Types (280)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Non-lesion Object Type - Physical Objects (6401)</summary>
    static DicomUID NonLesionObjectTypePhysicalObjects6401;//("1.2.840.10008.6.1.1185", "Non-lesion Object Type - Physical Objects (6401)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Non-lesion Object Type - Substances (6402)</summary>
    static DicomUID NonLesionObjectTypeSubstances6402;//("1.2.840.10008.6.1.1186", "Non-lesion Object Type - Substances (6402)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Non-lesion Object Type - Tissues (6403)</summary>
    static DicomUID NonLesionObjectTypeTissues6403;//("1.2.840.10008.6.1.1187", "Non-lesion Object Type - Tissues (6403)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Chest Non-lesion Object Type - Physical Objects (6404)</summary>
    static DicomUID ChestNonLesionObjectTypePhysicalObjects6404;//("1.2.840.10008.6.1.1188", "Chest Non-lesion Object Type - Physical Objects (6404)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Chest Non-lesion Object Type - Tissues (6405)</summary>
    static DicomUID ChestNonLesionObjectTypeTissues6405;//("1.2.840.10008.6.1.1189", "Chest Non-lesion Object Type - Tissues (6405)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Tissue Segmentation Property Types (7191)</summary>
    static DicomUID TissueSegmentationPropertyTypes7191;//("1.2.840.10008.6.1.1190", "Tissue Segmentation Property Types (7191)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Anatomical Structure Segmentation Property Types (7192)</summary>
    static DicomUID AnatomicalStructureSegmentationPropertyTypes7192;//("1.2.840.10008.6.1.1191", "Anatomical Structure Segmentation Property Types (7192)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Physical Object Segmentation Property Types (7193)</summary>
    static DicomUID PhysicalObjectSegmentationPropertyTypes7193;//("1.2.840.10008.6.1.1192", "Physical Object Segmentation Property Types (7193)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Morphologically Abnormal Structure Segmentation Property Types (7194)</summary>
    static DicomUID MorphologicallyAbnormalStructureSegmentationPropertyTypes7194;//("1.2.840.10008.6.1.1193", "Morphologically Abnormal Structure Segmentation Property Types (7194)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Function Segmentation Property Types (7195)</summary>
    static DicomUID FunctionSegmentationPropertyTypes7195;//("1.2.840.10008.6.1.1194", "Function Segmentation Property Types (7195)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Spatial and Relational Concept Segmentation Property Types (7196)</summary>
    static DicomUID SpatialAndRelationalConceptSegmentationPropertyTypes7196;//("1.2.840.10008.6.1.1195", "Spatial and Relational Concept Segmentation Property Types (7196)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Body Substance Segmentation Property Types (7197)</summary>
    static DicomUID BodySubstanceSegmentationPropertyTypes7197;//("1.2.840.10008.6.1.1196", "Body Substance Segmentation Property Types (7197)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Substance Segmentation Property Types (7198)</summary>
    static DicomUID SubstanceSegmentationPropertyTypes7198;//("1.2.840.10008.6.1.1197", "Substance Segmentation Property Types (7198)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Interpretation Request Discontinuation Reasons (9303)</summary>
    static DicomUID InterpretationRequestDiscontinuationReasons9303;//("1.2.840.10008.6.1.1198", "Interpretation Request Discontinuation Reasons (9303)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Gray Level Run Length Based Features (7475)</summary>
    static DicomUID GrayLevelRunLengthBasedFeatures7475;//("1.2.840.10008.6.1.1199", "Gray Level Run Length Based Features (7475)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Gray Level Size Zone Based Features (7476)</summary>
    static DicomUID GrayLevelSizeZoneBasedFeatures7476;//("1.2.840.10008.6.1.1200", "Gray Level Size Zone Based Features (7476)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Encapsulated Document Source Purposes of Reference (7060)</summary>
    static DicomUID EncapsulatedDocumentSourcePurposesOfReference7060;//("1.2.840.10008.6.1.1201", "Encapsulated Document Source Purposes of Reference (7060)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Model Document Titles (7061)</summary>
    static DicomUID ModelDocumentTitles7061;//("1.2.840.10008.6.1.1202", "Model Document Titles (7061)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Purpose of Reference to Predecessor 3D Model (7062)</summary>
    static DicomUID PurposeOfReferenceToPredecessor3DModel7062;//("1.2.840.10008.6.1.1203", "Purpose of Reference to Predecessor 3D Model (7062)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Model Scale Units (7063)</summary>
    static DicomUID ModelScaleUnits7063;//("1.2.840.10008.6.1.1204", "Model Scale Units (7063)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Model Usage (7064)</summary>
    static DicomUID ModelUsage7064;//("1.2.840.10008.6.1.1205", "Model Usage (7064)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Radiation Dose Units (10071)</summary>
    static DicomUID RadiationDoseUnits10071;//("1.2.840.10008.6.1.1206", "Radiation Dose Units (10071)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Radiotherapy Fiducials (7112)</summary>
    static DicomUID RadiotherapyFiducials7112;//("1.2.840.10008.6.1.1207", "Radiotherapy Fiducials (7112)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Multi-energy Relevant Materials (300)</summary>
    static DicomUID MultiEnergyRelevantMaterials300;//("1.2.840.10008.6.1.1208", "Multi-energy Relevant Materials (300)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Multi-energy Material Units (301)</summary>
    static DicomUID MultiEnergyMaterialUnits301;//("1.2.840.10008.6.1.1209", "Multi-energy Material Units (301)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Dosimetric Objective Types (9500)</summary>
    static DicomUID DosimetricObjectiveTypes9500;//("1.2.840.10008.6.1.1210", "Dosimetric Objective Types (9500)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Prescription Anatomy Categories (9501)</summary>
    static DicomUID PrescriptionAnatomyCategories9501;//("1.2.840.10008.6.1.1211", "Prescription Anatomy Categories (9501)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: RT Segment Annotation Categories (9502)</summary>
    static DicomUID RTSegmentAnnotationCategories9502;//("1.2.840.10008.6.1.1212", "RT Segment Annotation Categories (9502)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Radiotherapy Therapeutic Role Categories (9503)</summary>
    static DicomUID RadiotherapyTherapeuticRoleCategories9503;//("1.2.840.10008.6.1.1213", "Radiotherapy Therapeutic Role Categories (9503)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: RT Geometric Information (9504)</summary>
    static DicomUID RTGeometricInformation9504;//("1.2.840.10008.6.1.1214", "RT Geometric Information (9504)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Fixation or Positioning Devices (9505)</summary>
    static DicomUID FixationOrPositioningDevices9505;//("1.2.840.10008.6.1.1215", "Fixation or Positioning Devices (9505)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Brachytherapy Devices (9506)</summary>
    static DicomUID BrachytherapyDevices9506;//("1.2.840.10008.6.1.1216", "Brachytherapy Devices (9506)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: External Body Models (9507)</summary>
    static DicomUID ExternalBodyModels9507;//("1.2.840.10008.6.1.1217", "External Body Models (9507)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Non-specific Volumes (9508)</summary>
    static DicomUID NonSpecificVolumes9508;//("1.2.840.10008.6.1.1218", "Non-specific Volumes (9508)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Purpose of Reference For RT Physician Intent Input (9509)</summary>
    static DicomUID PurposeOfReferenceForRTPhysicianIntentInput9509;//("1.2.840.10008.6.1.1219", "Purpose of Reference For RT Physician Intent Input (9509)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Purpose of Reference For RT Treatment Planning Input (9510)</summary>
    static DicomUID PurposeOfReferenceForRTTreatmentPlanningInput9510;//("1.2.840.10008.6.1.1220", "Purpose of Reference For RT Treatment Planning Input (9510)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: General External Radiotherapy Procedure Techniques (9511)</summary>
    static DicomUID GeneralExternalRadiotherapyProcedureTechniques9511;//("1.2.840.10008.6.1.1221", "General External Radiotherapy Procedure Techniques (9511)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Tomotherapeutic Radiotherapy Procedure Techniques (9512)</summary>
    static DicomUID TomotherapeuticRadiotherapyProcedureTechniques9512;//("1.2.840.10008.6.1.1222", "Tomotherapeutic Radiotherapy Procedure Techniques (9512)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Fixation Devices (9513)</summary>
    static DicomUID FixationDevices9513;//("1.2.840.10008.6.1.1223", "Fixation Devices (9513)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Anatomical Structures For Radiotherapy (9514)</summary>
    static DicomUID AnatomicalStructuresForRadiotherapy9514;//("1.2.840.10008.6.1.1224", "Anatomical Structures For Radiotherapy (9514)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: RT Patient Support Devices (9515)</summary>
    static DicomUID RTPatientSupportDevices9515;//("1.2.840.10008.6.1.1225", "RT Patient Support Devices (9515)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Radiotherapy Bolus Device Types (9516)</summary>
    static DicomUID RadiotherapyBolusDeviceTypes9516;//("1.2.840.10008.6.1.1226", "Radiotherapy Bolus Device Types (9516)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Radiotherapy Block Device Types (9517)</summary>
    static DicomUID RadiotherapyBlockDeviceTypes9517;//("1.2.840.10008.6.1.1227", "Radiotherapy Block Device Types (9517)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Radiotherapy Accessory No-slot Holder Device Types (9518)</summary>
    static DicomUID RadiotherapyAccessoryNoSlotHolderDeviceTypes9518;//("1.2.840.10008.6.1.1228", "Radiotherapy Accessory No-slot Holder Device Types (9518)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Radiotherapy Accessory Slot Holder Device Types (9519)</summary>
    static DicomUID RadiotherapyAccessorySlotHolderDeviceTypes9519;//("1.2.840.10008.6.1.1229", "Radiotherapy Accessory Slot Holder Device Types (9519)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Segmented RT Accessory Devices (9520)</summary>
    static DicomUID SegmentedRTAccessoryDevices9520;//("1.2.840.10008.6.1.1230", "Segmented RT Accessory Devices (9520)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Radiotherapy Treatment Energy Unit (9521)</summary>
    static DicomUID RadiotherapyTreatmentEnergyUnit9521;//("1.2.840.10008.6.1.1231", "Radiotherapy Treatment Energy Unit (9521)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Multi-source Radiotherapy Procedure Techniques (9522)</summary>
    static DicomUID MultiSourceRadiotherapyProcedureTechniques9522;//("1.2.840.10008.6.1.1232", "Multi-source Radiotherapy Procedure Techniques (9522)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Robotic Radiotherapy Procedure Techniques (9523)</summary>
    static DicomUID RoboticRadiotherapyProcedureTechniques9523;//("1.2.840.10008.6.1.1233", "Robotic Radiotherapy Procedure Techniques (9523)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Radiotherapy Procedure Techniques (9524)</summary>
    static DicomUID RadiotherapyProcedureTechniques9524;//("1.2.840.10008.6.1.1234", "Radiotherapy Procedure Techniques (9524)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Radiation Therapy Particle (9525)</summary>
    static DicomUID RadiationTherapyParticle9525;//("1.2.840.10008.6.1.1235", "Radiation Therapy Particle (9525)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Ion Therapy Particle (9526)</summary>
    static DicomUID IonTherapyParticle9526;//("1.2.840.10008.6.1.1236", "Ion Therapy Particle (9526)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Teletherapy Isotope (9527)</summary>
    static DicomUID TeletherapyIsotope9527;//("1.2.840.10008.6.1.1237", "Teletherapy Isotope (9527)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Brachytherapy Isotope (9528)</summary>
    static DicomUID BrachytherapyIsotope9528;//("1.2.840.10008.6.1.1238", "Brachytherapy Isotope (9528)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Single Dose Dosimetric Objectives (9529)</summary>
    static DicomUID SingleDoseDosimetricObjectives9529;//("1.2.840.10008.6.1.1239", "Single Dose Dosimetric Objectives (9529)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Percentage and Dose Dosimetric Objectives (9530)</summary>
    static DicomUID PercentageAndDoseDosimetricObjectives9530;//("1.2.840.10008.6.1.1240", "Percentage and Dose Dosimetric Objectives (9530)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Volume and Dose Dosimetric Objectives (9531)</summary>
    static DicomUID VolumeAndDoseDosimetricObjectives9531;//("1.2.840.10008.6.1.1241", "Volume and Dose Dosimetric Objectives (9531)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: No-Parameter Dosimetric Objectives (9532)</summary>
    static DicomUID NoParameterDosimetricObjectives9532;//("1.2.840.10008.6.1.1242", "No-Parameter Dosimetric Objectives (9532)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Delivery Time Structure (9533)</summary>
    static DicomUID DeliveryTimeStructure9533;//("1.2.840.10008.6.1.1243", "Delivery Time Structure (9533)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Radiotherapy Targets (9534)</summary>
    static DicomUID RadiotherapyTargets9534;//("1.2.840.10008.6.1.1244", "Radiotherapy Targets (9534)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Radiotherapy Dose Calculation Roles (9535)</summary>
    static DicomUID RadiotherapyDoseCalculationRoles9535;//("1.2.840.10008.6.1.1245", "Radiotherapy Dose Calculation Roles (9535)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Radiotherapy Prescribing and Segmenting Person Roles (9536)</summary>
    static DicomUID RadiotherapyPrescribingAndSegmentingPersonRoles9536;//("1.2.840.10008.6.1.1246", "Radiotherapy Prescribing and Segmenting Person Roles (9536)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Effective Dose Calculation Method Categories (9537)</summary>
    static DicomUID EffectiveDoseCalculationMethodCategories9537;//("1.2.840.10008.6.1.1247", "Effective Dose Calculation Method Categories (9537)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Radiation Transport-based Effective Dose Method Modifiers (9538)</summary>
    static DicomUID RadiationTransportBasedEffectiveDoseMethodModifiers9538;//("1.2.840.10008.6.1.1248", "Radiation Transport-based Effective Dose Method Modifiers (9538)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Fractionation-based Effective Dose Method Modifiers (9539)</summary>
    static DicomUID FractionationBasedEffectiveDoseMethodModifiers9539;//("1.2.840.10008.6.1.1249", "Fractionation-based Effective Dose Method Modifiers (9539)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Imaging Agent Administration Adverse Events (60)</summary>
    static DicomUID ImagingAgentAdministrationAdverseEvents60;//("1.2.840.10008.6.1.1250", "Imaging Agent Administration Adverse Events (60)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Time Relative to Procedure (61)</summary>
    static DicomUID TimeRelativeToProcedure61;//("1.2.840.10008.6.1.1251", "Time Relative to Procedure (61)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Imaging Agent Administration Phase Type (62)</summary>
    static DicomUID ImagingAgentAdministrationPhaseType62;//("1.2.840.10008.6.1.1252", "Imaging Agent Administration Phase Type (62)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Imaging Agent Administration Mode (63)</summary>
    static DicomUID ImagingAgentAdministrationMode63;//("1.2.840.10008.6.1.1253", "Imaging Agent Administration Mode (63)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Imaging Agent Administration Patient State (64)</summary>
    static DicomUID ImagingAgentAdministrationPatientState64;//("1.2.840.10008.6.1.1254", "Imaging Agent Administration Patient State (64)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Pre-medication For Imaging Agent Administration (65)</summary>
    static DicomUID PreMedicationForImagingAgentAdministration65;//("1.2.840.10008.6.1.1255", "Pre-medication For Imaging Agent Administration (65)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Medication For Imaging Agent Administration (66)</summary>
    static DicomUID MedicationForImagingAgentAdministration66;//("1.2.840.10008.6.1.1256", "Medication For Imaging Agent Administration (66)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Imaging Agent Administration Completion Status (67)</summary>
    static DicomUID ImagingAgentAdministrationCompletionStatus67;//("1.2.840.10008.6.1.1257", "Imaging Agent Administration Completion Status (67)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Imaging Agent Administration Pharmaceutical Unit of Presentation (68)</summary>
    static DicomUID ImagingAgentAdministrationPharmaceuticalUnitOfPresentation68;//("1.2.840.10008.6.1.1258", "Imaging Agent Administration Pharmaceutical Unit of Presentation (68)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Imaging Agent Administration Consumables (69)</summary>
    static DicomUID ImagingAgentAdministrationConsumables69;//("1.2.840.10008.6.1.1259", "Imaging Agent Administration Consumables (69)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Flush (70)</summary>
    static DicomUID Flush70;//("1.2.840.10008.6.1.1260", "Flush (70)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Imaging Agent Administration Injector Event Type (71)</summary>
    static DicomUID ImagingAgentAdministrationInjectorEventType71;//("1.2.840.10008.6.1.1261", "Imaging Agent Administration Injector Event Type (71)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Imaging Agent Administration Step Type (72)</summary>
    static DicomUID ImagingAgentAdministrationStepType72;//("1.2.840.10008.6.1.1262", "Imaging Agent Administration Step Type (72)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Bolus Shaping Curves (73)</summary>
    static DicomUID BolusShapingCurves73;//("1.2.840.10008.6.1.1263", "Bolus Shaping Curves (73)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Imaging Agent Administration Consumable Catheter Type (74)</summary>
    static DicomUID ImagingAgentAdministrationConsumableCatheterType74;//("1.2.840.10008.6.1.1264", "Imaging Agent Administration Consumable Catheter Type (74)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Low-high-equal (75)</summary>
    static DicomUID LowHighEqual75;//("1.2.840.10008.6.1.1265", "Low-high-equal (75)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Type of Pre-medication (76)</summary>
    static DicomUID TypeOfPreMedication76;//("1.2.840.10008.6.1.1266", "Type of Pre-medication (76)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Laterality with Median (245)</summary>
    static DicomUID LateralityWithMedian245;//("1.2.840.10008.6.1.1267", "Laterality with Median (245)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Dermatology Anatomic Sites (4029)</summary>
    static DicomUID DermatologyAnatomicSites4029;//("1.2.840.10008.6.1.1268", "Dermatology Anatomic Sites (4029)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Quantitative Image Features (218)</summary>
    static DicomUID QuantitativeImageFeatures218;//("1.2.840.10008.6.1.1269", "Quantitative Image Features (218)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Global Shape Descriptors (7477)</summary>
    static DicomUID GlobalShapeDescriptors7477;//("1.2.840.10008.6.1.1270", "Global Shape Descriptors (7477)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Intensity Histogram Features (7478)</summary>
    static DicomUID IntensityHistogramFeatures7478;//("1.2.840.10008.6.1.1271", "Intensity Histogram Features (7478)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Grey Level Distance Zone Based Features (7479)</summary>
    static DicomUID GreyLevelDistanceZoneBasedFeatures7479;//("1.2.840.10008.6.1.1272", "Grey Level Distance Zone Based Features (7479)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Neighbourhood Grey Tone Difference Based Features (7500)</summary>
    static DicomUID NeighbourhoodGreyToneDifferenceBasedFeatures7500;//("1.2.840.10008.6.1.1273", "Neighbourhood Grey Tone Difference Based Features (7500)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Neighbouring Grey Level Dependence Based Features (7501)</summary>
    static DicomUID NeighbouringGreyLevelDependenceBasedFeatures7501;//("1.2.840.10008.6.1.1274", "Neighbouring Grey Level Dependence Based Features (7501)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Cornea Measurement Method Descriptors (4242)</summary>
    static DicomUID CorneaMeasurementMethodDescriptors4242;//("1.2.840.10008.6.1.1275", "Cornea Measurement Method Descriptors (4242)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Segmented Radiotherapeutic Dose Measurement Devices (7027)</summary>
    static DicomUID SegmentedRadiotherapeuticDoseMeasurementDevices7027;//("1.2.840.10008.6.1.1276", "Segmented Radiotherapeutic Dose Measurement Devices (7027)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Clinical Course of Disease (6098)</summary>
    static DicomUID ClinicalCourseOfDisease6098;//("1.2.840.10008.6.1.1277", "Clinical Course of Disease (6098)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Racial Group (6099)</summary>
    static DicomUID RacialGroup6099;//("1.2.840.10008.6.1.1278", "Racial Group (6099)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Relative Laterality (246)</summary>
    static DicomUID RelativeLaterality246;//("1.2.840.10008.6.1.1279", "Relative Laterality (246)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Brain Lesion Segmentation Types With Necrosis (7168)</summary>
    static DicomUID BrainLesionSegmentationTypesWithNecrosis7168;//("1.2.840.10008.6.1.1280", "Brain Lesion Segmentation Types With Necrosis (7168)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Brain Lesion Segmentation Types Without Necrosis (7169)</summary>
    static DicomUID BrainLesionSegmentationTypesWithoutNecrosis7169;//("1.2.840.10008.6.1.1281", "Brain Lesion Segmentation Types Without Necrosis (7169)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Non-Acquisition Modality (32)</summary>
    static DicomUID NonAcquisitionModality32;//("1.2.840.10008.6.1.1282", "Non-Acquisition Modality (32)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Modality (33)</summary>
    static DicomUID Modality33;//("1.2.840.10008.6.1.1283", "Modality (33)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Laterality Left-Right Only (247)</summary>
    static DicomUID LateralityLeftRightOnly247;//("1.2.840.10008.6.1.1284", "Laterality Left-Right Only (247)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Qualitative Evaluation Modifier Types (210)</summary>
    static DicomUID QualitativeEvaluationModifierTypes210;//("1.2.840.10008.6.1.1285", "Qualitative Evaluation Modifier Types (210)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Qualitative Evaluation Modifier Values (211)</summary>
    static DicomUID QualitativeEvaluationModifierValues211;//("1.2.840.10008.6.1.1286", "Qualitative Evaluation Modifier Values (211)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Generic Anatomic Location Modifiers (212)</summary>
    static DicomUID GenericAnatomicLocationModifiers212;//("1.2.840.10008.6.1.1287", "Generic Anatomic Location Modifiers (212)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Beam Limiting Device Types (9541)</summary>
    static DicomUID BeamLimitingDeviceTypes9541;//("1.2.840.10008.6.1.1288", "Beam Limiting Device Types (9541)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Compensator Device Types (9542)</summary>
    static DicomUID CompensatorDeviceTypes9542;//("1.2.840.10008.6.1.1289", "Compensator Device Types (9542)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Radiotherapy Treatment Machine Modes (9543)</summary>
    static DicomUID RadiotherapyTreatmentMachineModes9543;//("1.2.840.10008.6.1.1290", "Radiotherapy Treatment Machine Modes (9543)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Radiotherapy Distance Reference Locations (9544)</summary>
    static DicomUID RadiotherapyDistanceReferenceLocations9544;//("1.2.840.10008.6.1.1291", "Radiotherapy Distance Reference Locations (9544)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Fixed Beam Limiting Device Types (9545)</summary>
    static DicomUID FixedBeamLimitingDeviceTypes9545;//("1.2.840.10008.6.1.1292", "Fixed Beam Limiting Device Types (9545)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Radiotherapy Wedge Types (9546)</summary>
    static DicomUID RadiotherapyWedgeTypes9546;//("1.2.840.10008.6.1.1293", "Radiotherapy Wedge Types (9546)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: RT Beam Limiting Device Orientation Labels (9547)</summary>
    static DicomUID RTBeamLimitingDeviceOrientationLabels9547;//("1.2.840.10008.6.1.1294", "RT Beam Limiting Device Orientation Labels (9547)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: General Accessory Device Types (9548)</summary>
    static DicomUID GeneralAccessoryDeviceTypes9548;//("1.2.840.10008.6.1.1295", "General Accessory Device Types (9548)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Radiation Generation Mode Types (9549)</summary>
    static DicomUID RadiationGenerationModeTypes9549;//("1.2.840.10008.6.1.1296", "Radiation Generation Mode Types (9549)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: C-Arm Photon-Electron Delivery Rate Units (9550)</summary>
    static DicomUID CArmPhotonElectronDeliveryRateUnits9550;//("1.2.840.10008.6.1.1297", "C-Arm Photon-Electron Delivery Rate Units (9550)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Treatment Delivery Device Types (9551)</summary>
    static DicomUID TreatmentDeliveryDeviceTypes9551;//("1.2.840.10008.6.1.1298", "Treatment Delivery Device Types (9551)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: C-Arm Photon-Electron Dosimeter Units (9552)</summary>
    static DicomUID CArmPhotonElectronDosimeterUnits9552;//("1.2.840.10008.6.1.1299", "C-Arm Photon-Electron Dosimeter Units (9552)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Treatment Points (9553)</summary>
    static DicomUID TreatmentPoints9553;//("1.2.840.10008.6.1.1300", "Treatment Points (9553)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Equipment Reference Points (9554)</summary>
    static DicomUID EquipmentReferencePoints9554;//("1.2.840.10008.6.1.1301", "Equipment Reference Points (9554)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Radiotherapy Treatment Planning Person Roles (9555)</summary>
    static DicomUID RadiotherapyTreatmentPlanningPersonRoles9555;//("1.2.840.10008.6.1.1302", "Radiotherapy Treatment Planning Person Roles (9555)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Real Time Video Rendition Titles (7070)</summary>
    static DicomUID RealTimeVideoRenditionTitles7070;//("1.2.840.10008.6.1.1303", "Real Time Video Rendition Titles (7070)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Geometry Graphical Representation (219)</summary>
    static DicomUID GeometryGraphicalRepresentation219;//("1.2.840.10008.6.1.1304", "Geometry Graphical Representation (219)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Visual Explanation (217)</summary>
    static DicomUID VisualExplanation217;//("1.2.840.10008.6.1.1305", "Visual Explanation (217)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Prostate Sector Anatomy from PI-RADS v2.1 (6304)</summary>
    static DicomUID ProstateSectorAnatomyFromPIRADSV216304;//("1.2.840.10008.6.1.1306", "Prostate Sector Anatomy from PI-RADS v2.1 (6304)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Radiotherapy Robotic Node Sets (9556)</summary>
    static DicomUID RadiotherapyRoboticNodeSets9556;//("1.2.840.10008.6.1.1307", "Radiotherapy Robotic Node Sets (9556)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Tomotherapeutic Dosimeter Units (9557)</summary>
    static DicomUID TomotherapeuticDosimeterUnits9557;//("1.2.840.10008.6.1.1308", "Tomotherapeutic Dosimeter Units (9557)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Tomotherapeutic Dose Rate Units (9558)</summary>
    static DicomUID TomotherapeuticDoseRateUnits9558;//("1.2.840.10008.6.1.1309", "Tomotherapeutic Dose Rate Units (9558)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Robotic Delivery Device Dosimeter Units (9559)</summary>
    static DicomUID RoboticDeliveryDeviceDosimeterUnits9559;//("1.2.840.10008.6.1.1310", "Robotic Delivery Device Dosimeter Units (9559)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Robotic Delivery Device Dose Rate Units (9560)</summary>
    static DicomUID RoboticDeliveryDeviceDoseRateUnits9560;//("1.2.840.10008.6.1.1311", "Robotic Delivery Device Dose Rate Units (9560)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Anatomic Structures (8134)</summary>
    static DicomUID AnatomicStructures8134;//("1.2.840.10008.6.1.1312", "Anatomic Structures (8134)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Mediastinum Finding or Feature (6148)</summary>
    static DicomUID MediastinumFindingOrFeature6148;//("1.2.840.10008.6.1.1313", "Mediastinum Finding or Feature (6148)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Mediastinum Anatomy (6149)</summary>
    static DicomUID MediastinumAnatomy6149;//("1.2.840.10008.6.1.1314", "Mediastinum Anatomy (6149)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Vascular Ultrasound Report Document Titles (12100)</summary>
    static DicomUID VascularUltrasoundReportDocumentTitles12100;//("1.2.840.10008.6.1.1315", "Vascular Ultrasound Report Document Titles (12100)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Parts of Organs (Non-Lateralized) (12130)</summary>
    static DicomUID PartsOfOrgansNonLateralized12130;//("1.2.840.10008.6.1.1316", "Parts of Organs (Non-Lateralized) (12130)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Parts of Organs (Lateralized) (12131)</summary>
    static DicomUID PartsOfOrgansLateralized12131;//("1.2.840.10008.6.1.1317", "Parts of Organs (Lateralized) (12131)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Treatment Termination Reasons (9561)</summary>
    static DicomUID TreatmentTerminationReasons9561;//("1.2.840.10008.6.1.1318", "Treatment Termination Reasons (9561)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Radiotherapy Treatment Delivery Person Roles (9562)</summary>
    static DicomUID RadiotherapyTreatmentDeliveryPersonRoles9562;//("1.2.840.10008.6.1.1319", "Radiotherapy Treatment Delivery Person Roles (9562)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Interlock Resolutions (9563)</summary>
    static DicomUID InterlockResolutions9563;//("1.2.840.10008.6.1.1320", "Interlock Resolutions (9563)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Treatment Session Confirmation Assertions (9564)</summary>
    static DicomUID TreatmentSessionConfirmationAssertions9564;//("1.2.840.10008.6.1.1321", "Treatment Session Confirmation Assertions (9564)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Treatment Tolerance Violation Causes (9565)</summary>
    static DicomUID TreatmentToleranceViolationCauses9565;//("1.2.840.10008.6.1.1322", "Treatment Tolerance Violation Causes (9565)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Clinical Tolerance Violation Types (9566)</summary>
    static DicomUID ClinicalToleranceViolationTypes9566;//("1.2.840.10008.6.1.1323", "Clinical Tolerance Violation Types (9566)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Machine Tolerance Violation Types (9567)</summary>
    static DicomUID MachineToleranceViolationTypes9567;//("1.2.840.10008.6.1.1324", "Machine Tolerance Violation Types (9567)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Treatment Interlocks (9568)</summary>
    static DicomUID TreatmentInterlocks9568;//("1.2.840.10008.6.1.1325", "Treatment Interlocks (9568)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Isocentric Patient Support Position Parameters (9569)</summary>
    static DicomUID IsocentricPatientSupportPositionParameters9569;//("1.2.840.10008.6.1.1326", "Isocentric Patient Support Position Parameters (9569)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: RT Overridden Treatment Parameters (9570)</summary>
    static DicomUID RTOverriddenTreatmentParameters9570;//("1.2.840.10008.6.1.1327", "RT Overridden Treatment Parameters (9570)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: EEG Leads (3030)</summary>
    static DicomUID EEGLeads3030;//("1.2.840.10008.6.1.1328", "EEG Leads (3030)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Lead locations near or in muscles (3031)</summary>
    static DicomUID LeadLocationsNearOrInMuscles3031;//("1.2.840.10008.6.1.1329", "Lead locations near or in muscles (3031)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Lead locations near peripheral nerves (3032)</summary>
    static DicomUID LeadLocationsNearPeripheralNerves3032;//("1.2.840.10008.6.1.1330", "Lead locations near peripheral nerves (3032)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: EOG Leads (3033)</summary>
    static DicomUID EOGLeads3033;//("1.2.840.10008.6.1.1331", "EOG Leads (3033)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Body Position Channels (3034)</summary>
    static DicomUID BodyPositionChannels3034;//("1.2.840.10008.6.1.1332", "Body Position Channels (3034)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: EEG Annotations – Neurophysiologic Enumerations (EEG) (3035)</summary>
    static DicomUID EEGAnnotationsNeurophysiologicEnumerationsEEG3035;//("1.2.840.10008.6.1.1333", "EEG Annotations – Neurophysiologic Enumerations (EEG) (3035)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: EMG Annotations – Neurophysiological Enumerations (EMG) (3036)</summary>
    static DicomUID EMGAnnotationsNeurophysiologicalEnumerationsEMG3036;//("1.2.840.10008.6.1.1334", "EMG Annotations – Neurophysiological Enumerations (EMG) (3036)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: EOG Annotations – Neurophysiological Enumerations (EOG) (3037)</summary>
    static DicomUID EOGAnnotationsNeurophysiologicalEnumerationsEOG3037;//("1.2.840.10008.6.1.1335", "EOG Annotations – Neurophysiological Enumerations (EOG) (3037)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Pattern Events  (3038)</summary>
    static DicomUID PatternEvents3038;//("1.2.840.10008.6.1.1336", "Pattern Events  (3038)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Device-related and Environment-related Events (3039)</summary>
    static DicomUID DeviceRelatedAndEnvironmentRelatedEvents3039;//("1.2.840.10008.6.1.1337", "Device-related and Environment-related Events (3039)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: EEG Annotations - Neurological Monitoring Measurements (3040)</summary>
    static DicomUID EEGAnnotationsNeurologicalMonitoringMeasurements3040;//("1.2.840.10008.6.1.1338", "EEG Annotations - Neurological Monitoring Measurements (3040)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: OB-GYN Ultrasound Report Document Titles (12024)</summary>
    static DicomUID OBGYNUltrasoundReportDocumentTitles12024;//("1.2.840.10008.6.1.1339", "OB-GYN Ultrasound Report Document Titles (12024)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Automation of Measurement (7230)</summary>
    static DicomUID AutomationOfMeasurement7230;//("1.2.840.10008.6.1.1340", "Automation of Measurement (7230)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: OB-GYN Ultrasound Beam Path (12025)</summary>
    static DicomUID OBGYNUltrasoundBeamPath12025;//("1.2.840.10008.6.1.1341", "OB-GYN Ultrasound Beam Path (12025)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Angle Measurements (7550)</summary>
    static DicomUID AngleMeasurements7550;//("1.2.840.10008.6.1.1342", "Angle Measurements (7550)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Generic Purpose of Reference to Images and Coordinates in Measurements (7551)</summary>
    static DicomUID GenericPurposeOfReferenceToImagesAndCoordinatesInMeasurements7551;//("1.2.840.10008.6.1.1343", "Generic Purpose of Reference to Images and Coordinates in Measurements (7551)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Generic Purpose of Reference to Images in Measurements (7552)</summary>
    static DicomUID GenericPurposeOfReferenceToImagesInMeasurements7552;//("1.2.840.10008.6.1.1344", "Generic Purpose of Reference to Images in Measurements (7552)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Generic Purpose of Reference to Coordinates in Measurements (7553)</summary>
    static DicomUID GenericPurposeOfReferenceToCoordinatesInMeasurements7553;//("1.2.840.10008.6.1.1345", "Generic Purpose of Reference to Coordinates in Measurements (7553)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Fitzpatrick Skin Type (4401)</summary>
    static DicomUID FitzpatrickSkinType4401;//("1.2.840.10008.6.1.1346", "Fitzpatrick Skin Type (4401)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: History of Malignant Melanoma (4402)</summary>
    static DicomUID HistoryOfMalignantMelanoma4402;//("1.2.840.10008.6.1.1347", "History of Malignant Melanoma (4402)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: History of Melanoma in Situ (4403)</summary>
    static DicomUID HistoryOfMelanomaInSitu4403;//("1.2.840.10008.6.1.1348", "History of Melanoma in Situ (4403)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: History of Non-Melanoma Skin Cancer (4404)</summary>
    static DicomUID HistoryOfNonMelanomaSkinCancer4404;//("1.2.840.10008.6.1.1349", "History of Non-Melanoma Skin Cancer (4404)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: History of Non-Melanoma Skin Cancer (4405)</summary>
    static DicomUID HistoryOfNonMelanomaSkinCancer4405;//("1.2.840.10008.6.1.1350", "History of Non-Melanoma Skin Cancer (4405)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Patient Reported Lesion Characteristics (4406)</summary>
    static DicomUID PatientReportedLesionCharacteristics4406;//("1.2.840.10008.6.1.1351", "Patient Reported Lesion Characteristics (4406)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Lesion Palpation Findings (4407)</summary>
    static DicomUID LesionPalpationFindings4407;//("1.2.840.10008.6.1.1352", "Lesion Palpation Findings (4407)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Lesion Visual Findings (4408)</summary>
    static DicomUID LesionVisualFindings4408;//("1.2.840.10008.6.1.1353", "Lesion Visual Findings (4408)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Lesion Visual Findings (4409)</summary>
    static DicomUID LesionVisualFindings4409;//("1.2.840.10008.6.1.1354", "Lesion Visual Findings (4409)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Abdominopelvic Vessels (12125)</summary>
    static DicomUID AbdominopelvicVessels12125;//("1.2.840.10008.6.1.1355", "Abdominopelvic Vessels (12125)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Numeric Value Failure Qualifier (43)</summary>
    static DicomUID NumericValueFailureQualifier43;//("1.2.840.10008.6.1.1356", "Numeric Value Failure Qualifier (43)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Numeric Value Unknown Qualifier (44)</summary>
    static DicomUID NumericValueUnknownQualifier44;//("1.2.840.10008.6.1.1357", "Numeric Value Unknown Qualifier (44)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Couinaud Liver Segments (7170)</summary>
    static DicomUID CouinaudLiverSegments7170;//("1.2.840.10008.6.1.1358", "Couinaud Liver Segments (7170)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Liver Segmentation Types (7171)</summary>
    static DicomUID LiverSegmentationTypes7171;//("1.2.840.10008.6.1.1359", "Liver Segmentation Types (7171)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Contraindications For XA Imaging (1201)</summary>
    static DicomUID ContraindicationsForXAImaging1201;//("1.2.840.10008.6.1.1360", "Contraindications For XA Imaging (1201)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Neurophysiologic Stimulation Modes (3041)</summary>
    static DicomUID NeurophysiologicStimulationModes3041;//("1.2.840.10008.6.1.1361", "Neurophysiologic Stimulation Modes (3041)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Reported Value Types (10072)</summary>
    static DicomUID ReportedValueTypes10072;//("1.2.840.10008.6.1.1362", "Reported Value Types (10072)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: Value Timings (10073)</summary>
    static DicomUID ValueTimings10073;//("1.2.840.10008.6.1.1363", "Value Timings (10073)", DicomUidType.ContextGroupName, false);

///<summary>Context Group Name: RDSR Frame of Reference Origins (10074)</summary>
    static DicomUID RDSRFrameOfReferenceOrigins10074;//("1.2.840.10008.6.1.1364", "RDSR Frame of Reference Origins (10074)", DicomUidType.ContextGroupName, false);

    static DicomUID GEPrivateImplicitVRBigEndian;

};

struct Endian {
public:
    static struct Endian Big;
    static struct Endian Little;
    static struct Endian Network;

    explicit Endian(bool isBigEndian) : _isBigEndian(isBigEndian) {
    }

    Endian() : _isBigEndian(false) {
        std::uint16_t m_endianCheck = 0x00FF;
        auto *pBytePointer = (std::uint8_t *) &m_endianCheck;
        std::uint8_t px = pBytePointer[0];
        _isBigEndian = px == 0xff;
    }

private:
    bool _isBigEndian;
};

struct DicomTransferSyntax {
public:
    DicomUID UID;
    bool IsRetired{false};
    bool IsExplicitVR;
    bool IsEncapsulated;
    bool IsLossy;
    std::string LossyCompressionMethod;
    bool IsDeflate;
    struct Endian Endian;
    bool SwapPixelData;

    bool operator==(const DicomTransferSyntax &other) const;

public:
    static DicomTransferSyntax ImplicitVRBigEndian;

/// <summary>GE Private Implicit VR Big Endian</summary>
/// <remarks>Same as Implicit VR Little Endian except for big endian pixel data.</remarks>
    static DicomTransferSyntax GEPrivateImplicitVRBigEndian;

/// <summary>Implicit VR Little Endian</summary>
    static DicomTransferSyntax ImplicitVRLittleEndian;

/// <summary>Explicit VR Little Endian</summary>
    static DicomTransferSyntax ExplicitVRLittleEndian;

/// <summary>Explicit VR Big Endian</summary>
    static DicomTransferSyntax ExplicitVRBigEndian;


/// <summary>Deflated Explicit VR Little Endian</summary>
    static DicomTransferSyntax DeflatedExplicitVRLittleEndian;


/// <summary>JPEG Baseline (Process 1)</summary>
    static DicomTransferSyntax JPEGProcess1;


/// <summary>JPEG Extended (Process 2 &amp; 4)</summary>
    static DicomTransferSyntax JPEGProcess2_4;


/// <summary>JPEG Extended (Process 3 &amp; 5) (Retired)</summary>
    static DicomTransferSyntax JPEGProcess3_5Retired;


/// <summary>JPEG Spectral Selection, Non-Hierarchical (Process 6 &amp; 8) (Retired)</summary>
    static DicomTransferSyntax JPEGProcess6_8Retired;


/// <summary>JPEG Spectral Selection, Non-Hierarchical (Process 7 &amp; 9) (Retired)</summary>
    static DicomTransferSyntax JPEGProcess7_9Retired;

/// <summary>JPEG Full Progression, Non-Hierarchical (Process 10 &amp; 12) (Retired)</summary>
    static DicomTransferSyntax JPEGProcess10_12Retired;

/// <summary>JPEG Full Progression, Non-Hierarchical (Process 11 &amp; 13) (Retired)</summary>
    static DicomTransferSyntax JPEGProcess11_13Retired;


/// <summary>JPEG Lossless, Non-Hierarchical (Process 14)</summary>
    static DicomTransferSyntax JPEGProcess14;


/// <summary>JPEG Lossless, Non-Hierarchical (Process 15) (Retired)</summary>
    static DicomTransferSyntax JPEGProcess15Retired;

/// <summary>JPEG Extended, Hierarchical (Process 16 &amp; 18) (Retired)</summary>
    static DicomTransferSyntax JPEGProcess16_18Retired;


/// <summary>JPEG Extended, Hierarchical (Process 17 &amp; 19) (Retired)</summary>
    static DicomTransferSyntax JPEGProcess17_19Retired;


/// <summary>JPEG Spectral Selection, Hierarchical (Process 20 &amp; 22) (Retired)</summary>
    static DicomTransferSyntax JPEGProcess20_22Retired;


/// <summary>JPEG Spectral Selection, Hierarchical (Process 21 &amp; 23) (Retired)</summary>
    static DicomTransferSyntax JPEGProcess21_23Retired;


/// <summary>JPEG Full Progression, Hierarchical (Process 24 &amp; 26) (Retired)</summary>
    static DicomTransferSyntax JPEGProcess24_26Retired;


/// <summary>JPEG Full Progression, Hierarchical (Process 25 &amp; 27) (Retired)</summary>
    static DicomTransferSyntax JPEGProcess25_27Retired;


/// <summary>JPEG Lossless, Hierarchical (Process 28) (Retired)</summary>
    static DicomTransferSyntax JPEGProcess28Retired;


/// <summary>JPEG Lossless, Hierarchical (Process 29) (Retired)</summary>
    static DicomTransferSyntax JPEGProcess29Retired;


/// <summary>JPEG Lossless, Non-Hierarchical, First-Order Prediction (Process 14 [Selection Value 1])</summary>
    static DicomTransferSyntax JPEGProcess14SV1;

/// <summary>JPEG-LS Lossless Image Compression</summary>
    static DicomTransferSyntax JPEGLSLossless;


/// <summary>JPEG-LS Lossy (Near-Lossless) Image Compression</summary>
    static DicomTransferSyntax JPEGLSNearLossless;


/// <summary>JPEG 2000 Lossless Image Compression</summary>
    static DicomTransferSyntax JPEG2000Lossless;


/// <summary>JPEG 2000 Lossy Image Compression</summary>
    static DicomTransferSyntax JPEG2000Lossy;


///<summary>JPEG 2000 Part 2 Multi-component Image Compression (Lossless Only)</summary>
    static DicomTransferSyntax JPEG2000Part2MultiComponentLosslessOnly;


///<summary>JPEG 2000 Part 2 Multi-component Image Compression</summary>
    static DicomTransferSyntax JPEG2000Part2MultiComponent;

///<summary>JPIP Referenced</summary>
    static DicomTransferSyntax JPIPReferenced;


///<summary>JPIP Referenced Deflate</summary>
    static DicomTransferSyntax JPIPReferencedDeflate;


/// <summary>MPEG2 Main Profile @ Main Level</summary>
    static DicomTransferSyntax MPEG2;

///<summary>MPEG2 Main Profile / High Level</summary>
    static DicomTransferSyntax MPEG2MainProfileHighLevel;


///<summary>MPEG-4 AVC/H.264 High Profile / Level 4.1</summary>
    static DicomTransferSyntax MPEG4AVCH264HighProfileLevel41;


///<summary>MPEG-4 AVC/H.264 BD-compatible High Profile / Level 4.1</summary>
    static DicomTransferSyntax MPEG4AVCH264BDCompatibleHighProfileLevel41;


///<summary>MPEG-4 AVC/H.264 High Profile / Level 4.2 For 2D Video</summary>
    static DicomTransferSyntax MPEG4AVCH264HighProfileLevel42For2DVideo;


///<summary>MPEG-4 AVC/H.264 High Profile / Level 4.2 For 3D Video</summary>
    static DicomTransferSyntax MPEG4AVCH264HighProfileLevel42For3DVideo;


///<summary>MPEG-4 AVC/H.264 Stereo High Profile / Level 4.2</summary>
    static DicomTransferSyntax MPEG4AVCH264StereoHighProfileLevel42;


///<summary>HEVC/H.265 Main Profile / Level 5.1</summary>
    static DicomTransferSyntax HEVCH265MainProfileLevel51;

///<summary>HEVC/H.265 Main 10 Profile / Level 5.1</summary>
    static DicomTransferSyntax HEVCH265Main10ProfileLevel51;


/// <summary>RLE Lossless</summary>
    static DicomTransferSyntax RLELossless;

///<summary>RFC 2557 MIME encapsulation</summary>
    static DicomTransferSyntax RFC2557MIMEEncapsulation;

///<summary>XML Encoding</summary>
    static DicomTransferSyntax XMLEncoding;
///<summary>Papyrus 3 Implicit VR Little Endian (Retired)</summary>
    static DicomTransferSyntax Papyrus3ImplicitVRLittleEndianRetired;

};


#endif //CPPX_DICOMUID_H
