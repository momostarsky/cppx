//
// Created by dhz on 2022/1/14.
//

#include "../include/DicomUID.h"

Endian Endian::Big = Endian{true};//NOLINT

Endian Endian::Little = Endian{false}; //NOLINT

Endian Endian::Network = Endian{true};//NOLINT


DicomUID DicomUID::Empty = DicomUID{
        .uid="",
        .name="Empty",
        .type=DicomUidType::Unknown,
};


DicomUID  DicomUID::GEPrivateImplicitVRBigEndian = DicomUID{"1.2.840.113619.5.2",///NOLINT
                                                            "Private GE Implicit VR Big Endian",
                                                            DicomUidType::TransferSyntax};

///<summary>SOP Class: Verification SOP Class</summary>
DicomUID  DicomUID::Verification = DicomUID{"1.2.840.10008.1.1",///NOLINT
                                            "Verification SOP Class", DicomUidType::SOPClass, false};

///<summary>Transfer Syntax: Implicit VR Little Endian: Default Transfer Syntax for DICOM</summary>
DicomUID  DicomUID::ImplicitVRLittleEndian = DicomUID{"1.2.840.10008.1.2",///NOLINT
                                                      "Implicit VR Little Endian: Default Transfer Syntax for DICOM",
                                                      DicomUidType::TransferSyntax, false};

///<summary>Transfer Syntax: Explicit VR Little Endian</summary>
DicomUID  DicomUID::ExplicitVRLittleEndian = DicomUID{"1.2.840.10008.1.2.1",///NOLINT
                                                      "Explicit VR Little Endian", DicomUidType::TransferSyntax, false};

///<summary>Transfer Syntax: Deflated Explicit VR Little Endian</summary>
DicomUID  DicomUID::DeflatedExplicitVRLittleEndian = DicomUID{"1.2.840.10008.1.2.1.99",///NOLINT
                                                              "Deflated Explicit VR Little Endian",
                                                              DicomUidType::TransferSyntax, false};

///<summary>Transfer Syntax: Explicit VR Big Endian (Retired)</summary>
DicomUID  DicomUID::ExplicitVRBigEndianRETIRED = DicomUID{"1.2.840.10008.1.2.2",///NOLINT
                                                          "Explicit VR Big Endian (Retired)",
                                                          DicomUidType::TransferSyntax, true};

///<summary>Transfer Syntax: JPEG Baseline (Process 1): Default Transfer Syntax for Lossy JPEG 8 Bit Image Compression</summary>
DicomUID  DicomUID::JPEGBaseline8Bit = DicomUID{"1.2.840.10008.1.2.4.50",///NOLINT
                                                "JPEG Baseline (Process 1): Default Transfer Syntax for Lossy JPEG 8 Bit Image Compression",
                                                DicomUidType::TransferSyntax, false};

///<summary>Transfer Syntax: JPEG Extended (Process 2 &amp; 4): Default Transfer Syntax for Lossy JPEG 12 Bit Image Compression (Process 4 only)</summary>
DicomUID  DicomUID::JPEGExtended12Bit = DicomUID{"1.2.840.10008.1.2.4.51",///NOLINT
                                                 "JPEG Extended (Process 2 & 4): Default Transfer Syntax for Lossy JPEG 12 Bit Image Compression (Process 4 only)",
                                                 DicomUidType::TransferSyntax, false};

///<summary>Transfer Syntax: JPEG Extended (Process 3 &amp; 5) (Retired)</summary>
DicomUID  DicomUID::JPEGExtended35RETIRED = DicomUID{"1.2.840.10008.1.2.4.52",///NOLINT
                                                     "JPEG Extended (Process 3 & 5) (Retired)",
                                                     DicomUidType::TransferSyntax, true};

///<summary>Transfer Syntax: JPEG Spectral Selection, Non-Hierarchical (Process 6 &amp; 8) (Retired)</summary>
DicomUID  DicomUID::JPEGSpectralSelectionNonHierarchical68RETIRED = DicomUID{"1.2.840.10008.1.2.4.53",///NOLINT
                                                                             "JPEG Spectral Selection, Non-Hierarchical (Process 6 & 8) (Retired)",
                                                                             DicomUidType::TransferSyntax, true};

///<summary>Transfer Syntax: JPEG Spectral Selection, Non-Hierarchical (Process 7 &amp; 9) (Retired)</summary>
DicomUID  DicomUID::JPEGSpectralSelectionNonHierarchical79RETIRED = DicomUID{"1.2.840.10008.1.2.4.54",///NOLINT

                                                                             "JPEG Spectral Selection, Non-Hierarchical (Process 7 & 9) (Retired)",
                                                                             DicomUidType::TransferSyntax, true};

///<summary>Transfer Syntax: JPEG Full Progression, Non-Hierarchical (Process 10 &amp; 12) (Retired)</summary>
DicomUID  DicomUID::JPEGFullProgressionNonHierarchical1012RETIRED = DicomUID{"1.2.840.10008.1.2.4.55",///NOLINT

                                                                             "JPEG Full Progression, Non-Hierarchical (Process 10 & 12) (Retired)",
                                                                             DicomUidType::TransferSyntax, true};

///<summary>Transfer Syntax: JPEG Full Progression, Non-Hierarchical (Process 11 &amp; 13) (Retired)</summary>
DicomUID  DicomUID::JPEGFullProgressionNonHierarchical1113RETIRED = DicomUID{"1.2.840.10008.1.2.4.56",///NOLINT

                                                                             "JPEG Full Progression, Non-Hierarchical (Process 11 & 13) (Retired)",
                                                                             DicomUidType::TransferSyntax, true};

///<summary>Transfer Syntax: JPEG Lossless, Non-Hierarchical (Process 14)</summary>
DicomUID  DicomUID::JPEGLossless = DicomUID{"1.2.840.10008.1.2.4.57",///NOLINT
                                            "JPEG Lossless, Non-Hierarchical (Process 14)",
                                            DicomUidType::TransferSyntax, false};

///<summary>Transfer Syntax: JPEG Lossless, Non-Hierarchical (Process 15) (Retired)</summary>
DicomUID  DicomUID::JPEGLosslessNonHierarchical15RETIRED = DicomUID{"1.2.840.10008.1.2.4.58",///NOLINT
                                                                    "JPEG Lossless, Non-Hierarchical (Process 15) (Retired)",
                                                                    DicomUidType::TransferSyntax, true};

///<summary>Transfer Syntax: JPEG Extended, Hierarchical (Process 16 &amp; 18) (Retired)</summary>
DicomUID  DicomUID::JPEGExtendedHierarchical1618RETIRED = DicomUID{"1.2.840.10008.1.2.4.59",///NOLINT
                                                                   "JPEG Extended, Hierarchical (Process 16 & 18) (Retired)",
                                                                   DicomUidType::TransferSyntax, true};

///<summary>Transfer Syntax: JPEG Extended, Hierarchical (Process 17 &amp; 19) (Retired)</summary>
DicomUID  DicomUID::JPEGExtendedHierarchical1719RETIRED = DicomUID{"1.2.840.10008.1.2.4.60",///NOLINT
                                                                   "JPEG Extended, Hierarchical (Process 17 & 19) (Retired)",
                                                                   DicomUidType::TransferSyntax, true};

///<summary>Transfer Syntax: JPEG Spectral Selection, Hierarchical (Process 20 &amp; 22) (Retired)</summary>
DicomUID  DicomUID::JPEGSpectralSelectionHierarchical2022RETIRED = DicomUID{"1.2.840.10008.1.2.4.61",///NOLINT
                                                                            "JPEG Spectral Selection, Hierarchical (Process 20 & 22) (Retired)",
                                                                            DicomUidType::TransferSyntax, true};

///<summary>Transfer Syntax: JPEG Spectral Selection, Hierarchical (Process 21 &amp; 23) (Retired)</summary>
DicomUID  DicomUID::JPEGSpectralSelectionHierarchical2123RETIRED = DicomUID{"1.2.840.10008.1.2.4.62",///NOLINT
                                                                            "JPEG Spectral Selection, Hierarchical (Process 21 & 23) (Retired)",
                                                                            DicomUidType::TransferSyntax, true};

///<summary>Transfer Syntax: JPEG Full Progression, Hierarchical (Process 24 &amp; 26) (Retired)</summary>
DicomUID  DicomUID::JPEGFullProgressionHierarchical2426RETIRED = DicomUID{"1.2.840.10008.1.2.4.63",///NOLINT
                                                                          "JPEG Full Progression, Hierarchical (Process 24 & 26) (Retired)",
                                                                          DicomUidType::TransferSyntax, true};

///<summary>Transfer Syntax: JPEG Full Progression, Hierarchical (Process 25 &amp; 27) (Retired)</summary>
DicomUID  DicomUID::JPEGFullProgressionHierarchical2527RETIRED = DicomUID{"1.2.840.10008.1.2.4.64",///NOLINT
                                                                          "JPEG Full Progression, Hierarchical (Process 25 & 27) (Retired)",
                                                                          DicomUidType::TransferSyntax, true};

///<summary>Transfer Syntax: JPEG Lossless, Hierarchical (Process 28) (Retired)</summary>
DicomUID  DicomUID::JPEGLosslessHierarchical28RETIRED = DicomUID{"1.2.840.10008.1.2.4.65",///NOLINT
                                                                 "JPEG Lossless, Hierarchical (Process 28) (Retired)",
                                                                 DicomUidType::TransferSyntax, true};

///<summary>Transfer Syntax: JPEG Lossless, Hierarchical (Process 29) (Retired)</summary>
DicomUID  DicomUID::JPEGLosslessHierarchical29RETIRED = DicomUID{"1.2.840.10008.1.2.4.66",///NOLINT
                                                                 "JPEG Lossless, Hierarchical (Process 29) (Retired)",
                                                                 DicomUidType::TransferSyntax, true};

///<summary>Transfer Syntax: JPEG Lossless, Non-Hierarchical, First-Order Prediction (Process 14 [Selection Value 1]): Default Transfer Syntax for Lossless JPEG Image Compression</summary>
DicomUID  DicomUID::JPEGLosslessSV1 = DicomUID{"1.2.840.10008.1.2.4.70",///NOLINT
                                               "JPEG Lossless, Non-Hierarchical, First-Order Prediction (Process 14 [Selection Value 1]): Default Transfer Syntax for Lossless JPEG Image Compression",
                                               DicomUidType::TransferSyntax, false};

///<summary>Transfer Syntax: JPEG-LS Lossless Image Compression</summary>
DicomUID  DicomUID::JPEGLSLossless = DicomUID{"1.2.840.10008.1.2.4.80",///NOLINT
                                              "JPEG-LS Lossless Image Compression", DicomUidType::TransferSyntax,
                                              false};

///<summary>Transfer Syntax: JPEG-LS Lossy (Near-Lossless) Image Compression</summary>
DicomUID  DicomUID::JPEGLSNearLossless = DicomUID{"1.2.840.10008.1.2.4.81",///NOLINT
                                                  "JPEG-LS Lossy (Near-Lossless) Image Compression",
                                                  DicomUidType::TransferSyntax, false};

///<summary>Transfer Syntax: JPEG 2000 Image Compression (Lossless Only)</summary>
DicomUID  DicomUID::JPEG2000Lossless = DicomUID{"1.2.840.10008.1.2.4.90",///NOLINT
                                                "JPEG 2000 Image Compression (Lossless Only)",
                                                DicomUidType::TransferSyntax, false};

///<summary>Transfer Syntax: JPEG 2000 Image Compression</summary>
DicomUID  DicomUID::JPEG2000 = DicomUID{"1.2.840.10008.1.2.4.91",///NOLINT
                                        "JPEG 2000 Image Compression", DicomUidType::TransferSyntax, false};

///<summary>Transfer Syntax: JPEG 2000 Part 2 Multi-component Image Compression (Lossless Only)</summary>
DicomUID  DicomUID::JPEG2000MCLossless = DicomUID{"1.2.840.10008.1.2.4.92",///NOLINT
                                                  "JPEG 2000 Part 2 Multi-component Image Compression (Lossless Only)",
                                                  DicomUidType::TransferSyntax, false};

///<summary>Transfer Syntax: JPEG 2000 Part 2 Multi-component Image Compression</summary>
DicomUID  DicomUID::JPEG2000MC = DicomUID{"1.2.840.10008.1.2.4.93",///NOLINT

                                          "JPEG 2000 Part 2 Multi-component Image Compression",
                                          DicomUidType::TransferSyntax, false};

///<summary>Transfer Syntax: JPIP Referenced</summary>
DicomUID  DicomUID::JPIPReferenced = DicomUID{"1.2.840.10008.1.2.4.94",///NOLINT

                                              "JPIP Referenced", DicomUidType::TransferSyntax, false};

///<summary>Transfer Syntax: JPIP Referenced Deflate</summary>
DicomUID  DicomUID::JPIPReferencedDeflate = DicomUID{"1.2.840.10008.1.2.4.95",///NOLINT

                                                     "JPIP Referenced Deflate", DicomUidType::TransferSyntax, false};

///<summary>Transfer Syntax: MPEG2 Main Profile / Main Level</summary>
DicomUID  DicomUID::MPEG2MPML = DicomUID{"1.2.840.10008.1.2.4.100",///NOLINT

                                         "MPEG2 Main Profile / Main Level", DicomUidType::TransferSyntax, false};

///<summary>Transfer Syntax: MPEG2 Main Profile / High Level</summary>
DicomUID  DicomUID::MPEG2MPHL = DicomUID{"1.2.840.10008.1.2.4.101",///NOLINT

                                         "MPEG2 Main Profile / High Level", DicomUidType::TransferSyntax, false};

///<summary>Transfer Syntax: MPEG-4 AVC/H.264 High Profile / Level 4.1</summary>
DicomUID  DicomUID::MPEG4HP41 = DicomUID{"1.2.840.10008.1.2.4.102",///NOLINT

                                         "MPEG-4 AVC/H.264 High Profile / Level 4.1",///NOLINT

                                         DicomUidType::TransferSyntax, false};

///<summary>Transfer Syntax: MPEG-4 AVC/H.264 BD-compatible High Profile / Level 4.1</summary>
DicomUID  DicomUID::MPEG4HP41BD = DicomUID{"1.2.840.10008.1.2.4.103",///NOLINT

                                           "MPEG-4 AVC/H.264 BD-compatible High Profile / Level 4.1",///NOLINT

                                           DicomUidType::TransferSyntax, false};

///<summary>Transfer Syntax: MPEG-4 AVC/H.264 High Profile / Level 4.2 For 2D Video</summary>
DicomUID  DicomUID::MPEG4HP422D = DicomUID{"1.2.840.10008.1.2.4.104",///NOLINT

                                           "MPEG-4 AVC/H.264 High Profile / Level 4.2 For 2D Video",
                                           DicomUidType::TransferSyntax, false};

///<summary>Transfer Syntax: MPEG-4 AVC/H.264 High Profile / Level 4.2 For 3D Video</summary>
DicomUID  DicomUID::MPEG4HP423D = DicomUID{"1.2.840.10008.1.2.4.105",///NOLINT

                                           "MPEG-4 AVC/H.264 High Profile / Level 4.2 For 3D Video",
                                           DicomUidType::TransferSyntax, false};

///<summary>Transfer Syntax: MPEG-4 AVC/H.264 Stereo High Profile / Level 4.2</summary>
DicomUID  DicomUID::MPEG4HP42STEREO = DicomUID{"1.2.840.10008.1.2.4.106",///NOLINT

                                               "MPEG-4 AVC/H.264 Stereo High Profile / Level 4.2",///NOLINT

                                               DicomUidType::TransferSyntax, false};

///<summary>Transfer Syntax: HEVC/H.265 Main Profile / Level 5.1</summary>
DicomUID  DicomUID::HEVCMP51 = DicomUID{"1.2.840.10008.1.2.4.107",///NOLINT

                                        "HEVC/H.265 Main Profile / Level 5.1",///NOLINT

                                        DicomUidType::TransferSyntax, false};

///<summary>Transfer Syntax: HEVC/H.265 Main 10 Profile / Level 5.1</summary>
DicomUID  DicomUID::HEVCM10P51 = DicomUID{"1.2.840.10008.1.2.4.108",///NOLINT
                                          "HEVC/H.265 Main 10 Profile / Level 5.1",///NOLINT
                                          DicomUidType::TransferSyntax, false};

///<summary>Transfer Syntax: RLE Lossless</summary>
DicomUID  DicomUID::RLELossless = DicomUID{"1.2.840.10008.1.2.5",///NOLINT
                                           "RLE Lossless", DicomUidType::TransferSyntax, false};

///<summary>Transfer Syntax: RFC 2557 MIME encapsulation (Retired)</summary>
DicomUID  DicomUID::RFC2557MIMEEncapsulationRETIRED = DicomUID{"1.2.840.10008.1.2.6.1",///NOLINT
                                                               "RFC 2557 MIME encapsulation (Retired)",
                                                               DicomUidType::TransferSyntax, true};

///<summary>Transfer Syntax: XML Encoding (Retired)</summary>
DicomUID  DicomUID::XMLEncodingRETIRED = DicomUID{"1.2.840.10008.1.2.6.2",///NOLINT
                                                  "XML Encoding (Retired)", DicomUidType::TransferSyntax, true};

///<summary>Transfer Syntax: SMPTE ST 2110-20 Uncompressed Progressive Active Video</summary>
DicomUID  DicomUID::SMPTEST211020UncompressedProgressiveActiveVideo = DicomUID{"1.2.840.10008.1.2.7.1",///NOLINT
                                                                               "SMPTE ST 2110-20 Uncompressed Progressive Active Video",
                                                                               DicomUidType::TransferSyntax, false};

///<summary>Transfer Syntax: SMPTE ST 2110-20 Uncompressed Interlaced Active Video</summary>
DicomUID  DicomUID::SMPTEST211020UncompressedInterlacedActiveVideo = DicomUID{"1.2.840.10008.1.2.7.2",///NOLINT
                                                                              "SMPTE ST 2110-20 Uncompressed Interlaced Active Video",
                                                                              DicomUidType::TransferSyntax, false};

///<summary>Transfer Syntax: SMPTE ST 2110-30 PCM Digital Audio</summary>
DicomUID  DicomUID::SMPTEST211030PCMDigitalAudio = DicomUID{"1.2.840.10008.1.2.7.3",///NOLINT
                                                            "SMPTE ST 2110-30 PCM Digital Audio",
                                                            DicomUidType::TransferSyntax, false};

///<summary>SOP Class: Media Storage Directory Storage</summary>
DicomUID  DicomUID::MediaStorageDirectoryStorage = DicomUID{"1.2.840.10008.1.3.10",///NOLINT
                                                            "Media Storage Directory Storage", DicomUidType::SOPClass,
                                                            false};

///<summary>Well-known frame of reference: Talairach Brain Atlas Frame of Reference</summary>
DicomUID  DicomUID::TalairachBrainAtlas = DicomUID{"1.2.840.10008.1.4.1.1",///NOLINT
                                                   "Talairach Brain Atlas Frame of Reference",
                                                   DicomUidType::FrameOfReference, false};

///<summary>Well-known frame of reference: SPM2 T1 Frame of Reference</summary>
DicomUID  DicomUID::SPM2T1 = DicomUID{"1.2.840.10008.1.4.1.2",///NOLINT
                                      "SPM2 T1 Frame of Reference", DicomUidType::FrameOfReference, false};

///<summary>Well-known frame of reference: SPM2 T2 Frame of Reference</summary>
DicomUID  DicomUID::SPM2T2 = DicomUID{"1.2.840.10008.1.4.1.3",///NOLINT
                                      "SPM2 T2 Frame of Reference", DicomUidType::FrameOfReference, false};

///<summary>Well-known frame of reference: SPM2 PD Frame of Reference</summary>
DicomUID  DicomUID::SPM2PD = DicomUID{"1.2.840.10008.1.4.1.4",///NOLINT
                                      "SPM2 PD Frame of Reference", DicomUidType::FrameOfReference, false};

///<summary>Well-known frame of reference: SPM2 EPI Frame of Reference</summary>
DicomUID  DicomUID::SPM2EPI = DicomUID{"1.2.840.10008.1.4.1.5",///NOLINT
                                       "SPM2 EPI Frame of Reference", DicomUidType::FrameOfReference, false};

///<summary>Well-known frame of reference: SPM2 FIL T1 Frame of Reference</summary>
DicomUID  DicomUID::SPM2FILT1 = DicomUID{"1.2.840.10008.1.4.1.6",///NOLINT
                                         "SPM2 FIL T1 Frame of Reference", DicomUidType::FrameOfReference, false};

///<summary>Well-known frame of reference: SPM2 PET Frame of Reference</summary>
DicomUID  DicomUID::SPM2PET = DicomUID{"1.2.840.10008.1.4.1.7",///NOLINT
                                       "SPM2 PET Frame of Reference", DicomUidType::FrameOfReference, false};

///<summary>Well-known frame of reference: SPM2 TRANSM Frame of Reference</summary>
DicomUID  DicomUID::SPM2TRANSM = DicomUID{"1.2.840.10008.1.4.1.8",///NOLINT
                                          "SPM2 TRANSM Frame of Reference", DicomUidType::FrameOfReference, false};

///<summary>Well-known frame of reference: SPM2 SPECT Frame of Reference</summary>
DicomUID  DicomUID::SPM2SPECT = DicomUID{"1.2.840.10008.1.4.1.9",///NOLINT
                                         "SPM2 SPECT Frame of Reference", DicomUidType::FrameOfReference, false};

///<summary>Well-known frame of reference: SPM2 GRAY Frame of Reference</summary>
DicomUID  DicomUID::SPM2GRAY = DicomUID{"1.2.840.10008.1.4.1.10",///NOLINT
                                        "SPM2 GRAY Frame of Reference", DicomUidType::FrameOfReference, false};

///<summary>Well-known frame of reference: SPM2 WHITE Frame of Reference</summary>
DicomUID  DicomUID::SPM2WHITE = DicomUID{"1.2.840.10008.1.4.1.11",///NOLINT
                                         "SPM2 WHITE Frame of Reference", DicomUidType::FrameOfReference, false};

///<summary>Well-known frame of reference: SPM2 CSF Frame of Reference</summary>
DicomUID  DicomUID::SPM2CSF = DicomUID{"1.2.840.10008.1.4.1.12",///NOLINT
                                       "SPM2 CSF Frame of Reference", DicomUidType::FrameOfReference, false};

///<summary>Well-known frame of reference: SPM2 BRAINMASK Frame of Reference</summary>
DicomUID  DicomUID::SPM2BRAINMASK = DicomUID{"1.2.840.10008.1.4.1.13",///NOLINT
                                             "SPM2 BRAINMASK Frame of Reference", DicomUidType::FrameOfReference,
                                             false};

///<summary>Well-known frame of reference: SPM2 AVG305T1 Frame of Reference</summary>
DicomUID  DicomUID::SPM2AVG305T1 = DicomUID{"1.2.840.10008.1.4.1.14",///NOLINT
                                            "SPM2 AVG305T1 Frame of Reference", DicomUidType::FrameOfReference, false};

///<summary>Well-known frame of reference: SPM2 AVG152T1 Frame of Reference</summary>
DicomUID  DicomUID::SPM2AVG152T1 = DicomUID{"1.2.840.10008.1.4.1.15",///NOLINT
                                            "SPM2 AVG152T1 Frame of Reference", DicomUidType::FrameOfReference, false};

///<summary>Well-known frame of reference: SPM2 AVG152T2 Frame of Reference</summary>
DicomUID  DicomUID::SPM2AVG152T2 = DicomUID{"1.2.840.10008.1.4.1.16",///NOLINT
                                            "SPM2 AVG152T2 Frame of Reference", DicomUidType::FrameOfReference, false};

///<summary>Well-known frame of reference: SPM2 AVG152PD Frame of Reference</summary>
DicomUID  DicomUID::SPM2AVG152PD = DicomUID{"1.2.840.10008.1.4.1.17",///NOLINT
                                            "SPM2 AVG152PD Frame of Reference", DicomUidType::FrameOfReference, false};

///<summary>Well-known frame of reference: SPM2 SINGLESUBJT1 Frame of Reference</summary>
DicomUID  DicomUID::SPM2SINGLESUBJT1 = DicomUID{"1.2.840.10008.1.4.1.18",///NOLINT
                                                "SPM2 SINGLESUBJT1 Frame of Reference", DicomUidType::FrameOfReference,
                                                false};

///<summary>Well-known frame of reference: ICBM 452 T1 Frame of Reference</summary>
DicomUID  DicomUID::ICBM452T1 = DicomUID{"1.2.840.10008.1.4.2.1",///NOLINT
                                         "ICBM 452 T1 Frame of Reference", DicomUidType::FrameOfReference, false};

///<summary>Well-known frame of reference: ICBM Single Subject MRI Frame of Reference</summary>
DicomUID  DicomUID::ICBMSingleSubjectMRI = DicomUID{"1.2.840.10008.1.4.2.2",///NOLINT
                                                    "ICBM Single Subject MRI Frame of Reference",
                                                    DicomUidType::FrameOfReference, false};

///<summary>Well-known frame of reference: IEC 61217 Fixed Coordinate System Frame of Reference</summary>
DicomUID  DicomUID::IEC61217FixedCoordinateSystem = DicomUID{"1.2.840.10008.1.4.3.1",///NOLINT
                                                             "IEC 61217 Fixed Coordinate System Frame of Reference",
                                                             DicomUidType::FrameOfReference, false};

///<summary>Well-known frame of reference: Standard Robotic-Arm Coordinate System Frame of Reference</summary>
DicomUID  DicomUID::StandardRoboticArmCoordinateSystem = DicomUID{"1.2.840.10008.1.4.3.2",///NOLINT
                                                                  "Standard Robotic-Arm Coordinate System Frame of Reference",
                                                                  DicomUidType::FrameOfReference, false};

///<summary>Well-known frame of reference: SRI24 Frame of Reference</summary>
DicomUID  DicomUID::SRI24 = DicomUID{"1.2.840.10008.1.4.4.1",///NOLINT
                                     "SRI24 Frame of Reference", DicomUidType::FrameOfReference, false};

///<summary>Well-known frame of reference: Colin27 Frame of Reference</summary>
DicomUID  DicomUID::Colin27 = DicomUID{"1.2.840.10008.1.4.5.1",///NOLINT
                                       "Colin27 Frame of Reference", DicomUidType::FrameOfReference, false};

///<summary>Well-known frame of reference: LPBA40/AIR Frame of Reference</summary>
DicomUID  DicomUID::LPBA40AIR = DicomUID{"1.2.840.10008.1.4.6.1",///NOLINT
                                         "LPBA40/AIR Frame of Reference", DicomUidType::FrameOfReference, false};

///<summary>Well-known frame of reference: LPBA40/FLIRT Frame of Reference</summary>
DicomUID  DicomUID::LPBA40FLIRT = DicomUID{"1.2.840.10008.1.4.6.2",///NOLINT
                                           "LPBA40/FLIRT Frame of Reference", DicomUidType::FrameOfReference, false};

///<summary>Well-known frame of reference: LPBA40/SPM5 Frame of Reference</summary>
DicomUID  DicomUID::LPBA40SPM5 = DicomUID{"1.2.840.10008.1.4.6.3",///NOLINT
                                          "LPBA40/SPM5 Frame of Reference", DicomUidType::FrameOfReference, false};

///<summary>Well-known SOP Instance: Hot Iron Color Palette SOP Instance</summary>
DicomUID  DicomUID::HotIronPalette = DicomUID{"1.2.840.10008.1.5.1",///NOLINT
                                              "Hot Iron Color Palette SOP Instance", DicomUidType::SOPInstance, false};

///<summary>Well-known SOP Instance: PET Color Palette SOP Instance</summary>
DicomUID  DicomUID::PETPalette = DicomUID{"1.2.840.10008.1.5.2",///NOLINT
                                          "PET Color Palette SOP Instance", DicomUidType::SOPInstance, false};

///<summary>Well-known SOP Instance: Hot Metal Blue Color Palette SOP Instance</summary>
DicomUID  DicomUID::HotMetalBluePalette = DicomUID{"1.2.840.10008.1.5.3",///NOLINT
                                                   "Hot Metal Blue Color Palette SOP Instance",
                                                   DicomUidType::SOPInstance, false};

///<summary>Well-known SOP Instance: PET 20 Step Color Palette SOP Instance</summary>
DicomUID  DicomUID::PET20StepPalette = DicomUID{"1.2.840.10008.1.5.4",///NOLINT
                                                "PET 20 Step Color Palette SOP Instance", DicomUidType::SOPInstance,
                                                false};

///<summary>Well-known SOP Instance: Spring Color Palette SOP Instance</summary>
DicomUID  DicomUID::SpringPalette = DicomUID{"1.2.840.10008.1.5.5",///NOLINT
                                             "Spring Color Palette SOP Instance", DicomUidType::SOPInstance, false};

///<summary>Well-known SOP Instance: Summer Color Palette SOP Instance</summary>
DicomUID  DicomUID::SummerPalette = DicomUID{"1.2.840.10008.1.5.6",///NOLINT
                                             "Summer Color Palette SOP Instance", DicomUidType::SOPInstance, false};

///<summary>Well-known SOP Instance: Fall Color Palette SOP Instance</summary>
DicomUID  DicomUID::FallPalette = DicomUID{"1.2.840.10008.1.5.7",///NOLINT
                                           "Fall Color Palette SOP Instance", DicomUidType::SOPInstance, false};

///<summary>Well-known SOP Instance: Winter Color Palette SOP Instance</summary>
DicomUID  DicomUID::WinterPalette = DicomUID{"1.2.840.10008.1.5.8",///NOLINT
                                             "Winter Color Palette SOP Instance", DicomUidType::SOPInstance, false};

///<summary>SOP Class: Basic Study Content Notification SOP Class (Retired)</summary>
DicomUID  DicomUID::BasicStudyContentNotificationRETIRED = DicomUID{"1.2.840.10008.1.9",///NOLINT
                                                                    "Basic Study Content Notification SOP Class (Retired)",
                                                                    DicomUidType::SOPClass, true};

///<summary>Transfer Syntax: Papyrus 3 Implicit VR Little Endian (Retired)</summary>
DicomUID  DicomUID::Papyrus3ImplicitVRLittleEndianRETIRED = DicomUID{"1.2.840.10008.1.20",///NOLINT
                                                                     "Papyrus 3 Implicit VR Little Endian (Retired)",
                                                                     DicomUidType::TransferSyntax, true};

///<summary>SOP Class: Storage Commitment Push Model SOP Class</summary>
DicomUID  DicomUID::StorageCommitmentPushModel = DicomUID{"1.2.840.10008.1.20.1",///NOLINT
                                                          "Storage Commitment Push Model SOP Class",
                                                          DicomUidType::SOPClass, false};

///<summary>Well-known SOP Instance: Storage Commitment Push Model SOP Instance</summary>
DicomUID  DicomUID::StorageCommitmentPushModelInstance = DicomUID{"1.2.840.10008.1.20.1.1",///NOLINT
                                                                  "Storage Commitment Push Model SOP Instance",
                                                                  DicomUidType::SOPInstance, false};

///<summary>SOP Class: Storage Commitment Pull Model SOP Class (Retired)</summary>
DicomUID  DicomUID::StorageCommitmentPullModelRETIRED = DicomUID{"1.2.840.10008.1.20.2",///NOLINT
                                                                 "Storage Commitment Pull Model SOP Class (Retired)",
                                                                 DicomUidType::SOPClass, true};

///<summary>Well-known SOP Instance: Storage Commitment Pull Model SOP Instance (Retired)</summary>
DicomUID  DicomUID::StorageCommitmentPullModelInstanceRETIRED = DicomUID{"1.2.840.10008.1.20.2.1",///NOLINT
                                                                         "Storage Commitment Pull Model SOP Instance (Retired)",
                                                                         DicomUidType::SOPInstance, true};

///<summary>SOP Class: Procedural Event Logging SOP Class</summary>
DicomUID  DicomUID::ProceduralEventLogging = DicomUID{"1.2.840.10008.1.40",///NOLINT
                                                      "Procedural Event Logging SOP Class", DicomUidType::SOPClass,
                                                      false};

///<summary>Well-known SOP Instance: Procedural Event Logging SOP Instance</summary>
DicomUID  DicomUID::ProceduralEventLoggingInstance = DicomUID{"1.2.840.10008.1.40.1",///NOLINT
                                                              "Procedural Event Logging SOP Instance",
                                                              DicomUidType::SOPInstance, false};

///<summary>SOP Class: Substance Administration Logging SOP Class</summary>
DicomUID  DicomUID::SubstanceAdministrationLogging = DicomUID{"1.2.840.10008.1.42",///NOLINT
                                                              "Substance Administration Logging SOP Class",
                                                              DicomUidType::SOPClass, false};

///<summary>Well-known SOP Instance: Substance Administration Logging SOP Instance</summary>
DicomUID  DicomUID::SubstanceAdministrationLoggingInstance = DicomUID{"1.2.840.10008.1.42.1",///NOLINT
                                                                      "Substance Administration Logging SOP Instance",
                                                                      DicomUidType::SOPInstance, false};

///<summary>DICOM UIDs as a Coding Scheme: DICOM UID Registry</summary>
DicomUID  DicomUID::DCMUID = DicomUID{"1.2.840.10008.2.6.1",///NOLINT
                                      "DICOM UID Registry", DicomUidType::CodingScheme, false};

///<summary>Coding Scheme: DICOM Controlled Terminology</summary>
DicomUID  DicomUID::DCM = DicomUID{"1.2.840.10008.2.16.4",///NOLINT
                                   "DICOM Controlled Terminology", DicomUidType::CodingScheme, false};

///<summary>Coding Scheme: Adult Mouse Anatomy Ontology</summary>
DicomUID  DicomUID::MA = DicomUID{"1.2.840.10008.2.16.5",///NOLINT
                                  "Adult Mouse Anatomy Ontology", DicomUidType::CodingScheme, false};

///<summary>Coding Scheme: Uberon Ontology</summary>
DicomUID  DicomUID::UBERON = DicomUID{"1.2.840.10008.2.16.6",///NOLINT
                                      "Uberon Ontology", DicomUidType::CodingScheme, false};

///<summary>Coding Scheme: Integrated Taxonomic Information System (ITIS) Taxonomic Serial Number (TSN)</summary>
DicomUID  DicomUID::ITIS_TSN = DicomUID{"1.2.840.10008.2.16.7",///NOLINT
                                        "Integrated Taxonomic Information System (ITIS) Taxonomic Serial Number (TSN)",
                                        DicomUidType::CodingScheme, false};

///<summary>Coding Scheme: Mouse Genome Initiative (MGI)</summary>
DicomUID  DicomUID::MGI = DicomUID{"1.2.840.10008.2.16.8",///NOLINT
                                   "Mouse Genome Initiative (MGI)", DicomUidType::CodingScheme, false};

///<summary>Coding Scheme: PubChem Compound CID</summary>
DicomUID  DicomUID::PUBCHEM_CID = DicomUID{"1.2.840.10008.2.16.9",///NOLINT
                                           "PubChem Compound CID", DicomUidType::CodingScheme, false};

///<summary>Coding Scheme: Dublin Core</summary>
DicomUID  DicomUID::DC = DicomUID{"1.2.840.10008.2.16.10",///NOLINT
                                  "Dublin Core", DicomUidType::CodingScheme, false};

///<summary>Coding Scheme: New York University Melanoma Clinical Cooperative Group</summary>
DicomUID  DicomUID::NYUMCCG = DicomUID{"1.2.840.10008.2.16.11",///NOLINT
                                       "New York University Melanoma Clinical Cooperative Group",
                                       DicomUidType::CodingScheme, false};

///<summary>Coding Scheme: Mayo Clinic Non-radiological Images Specific Body Structure Anatomical Surface Region Guide</summary>
DicomUID  DicomUID::MAYONRISBSASRG = DicomUID{"1.2.840.10008.2.16.12",///NOLINT
                                              "Mayo Clinic Non-radiological Images Specific Body Structure Anatomical Surface Region Guide",
                                              DicomUidType::CodingScheme, false};

///<summary>Coding Scheme: Image Biomarker Standardisation Initiative</summary>
DicomUID  DicomUID::IBSI = DicomUID{"1.2.840.10008.2.16.13",///NOLINT
                                    "Image Biomarker Standardisation Initiative", DicomUidType::CodingScheme, false};

///<summary>Coding Scheme: Radiomics Ontology</summary>
DicomUID  DicomUID::RO = DicomUID{"1.2.840.10008.2.16.14",///NOLINT
                                  "Radiomics Ontology", DicomUidType::CodingScheme, false};

///<summary>Coding Scheme: RadElement</summary>
DicomUID  DicomUID::RADELEMENT = DicomUID{"1.2.840.10008.2.16.15",///NOLINT
                                          "RadElement", DicomUidType::CodingScheme, false};

///<summary>Coding Scheme: ICD-11</summary>
DicomUID  DicomUID::I11 = DicomUID{"1.2.840.10008.2.16.16",///NOLINT
                                   "ICD-11",///NOLINT
                                   DicomUidType::CodingScheme, false};

///<summary>Application Context Name: DICOM Application Context Name</summary>
DicomUID  DicomUID::DICOMApplicationContext = DicomUID{"1.2.840.10008.3.1.1.1",///NOLINT
                                                       "DICOM Application Context Name",
                                                       DicomUidType::ApplicationContextName, false};

///<summary>SOP Class: Detached Patient Management SOP Class (Retired)</summary>
DicomUID  DicomUID::DetachedPatientManagementRETIRED = DicomUID{"1.2.840.10008.3.1.2.1.1",///NOLINT
                                                                "Detached Patient Management SOP Class (Retired)",
                                                                DicomUidType::SOPClass, true};

///<summary>Meta SOP Class: Detached Patient Management Meta SOP Class (Retired)</summary>
DicomUID  DicomUID::DetachedPatientManagementMetaRETIRED = DicomUID{"1.2.840.10008.3.1.2.1.4",///NOLINT
                                                                    "Detached Patient Management Meta SOP Class (Retired)",
                                                                    DicomUidType::MetaSOPClass, true};

///<summary>SOP Class: Detached Visit Management SOP Class (Retired)</summary>
DicomUID  DicomUID::DetachedVisitManagementRETIRED = DicomUID{"1.2.840.10008.3.1.2.2.1",///NOLINT
                                                              "Detached Visit Management SOP Class (Retired)",
                                                              DicomUidType::SOPClass, true};

///<summary>SOP Class: Detached Study Management SOP Class (Retired)</summary>
DicomUID  DicomUID::DetachedStudyManagementRETIRED = DicomUID{"1.2.840.10008.3.1.2.3.1",///NOLINT
                                                              "Detached Study Management SOP Class (Retired)",
                                                              DicomUidType::SOPClass, true};

///<summary>SOP Class: Study Component Management SOP Class (Retired)</summary>
DicomUID  DicomUID::StudyComponentManagementRETIRED = DicomUID{"1.2.840.10008.3.1.2.3.2",///NOLINT
                                                               "Study Component Management SOP Class (Retired)",
                                                               DicomUidType::SOPClass, true};

///<summary>SOP Class: Modality Performed Procedure Step SOP Class</summary>
DicomUID  DicomUID::ModalityPerformedProcedureStep = DicomUID{"1.2.840.10008.3.1.2.3.3",///NOLINT
                                                              "Modality Performed Procedure Step SOP Class",
                                                              DicomUidType::SOPClass, false};

///<summary>SOP Class: Modality Performed Procedure Step Retrieve SOP Class</summary>
DicomUID  DicomUID::ModalityPerformedProcedureStepRetrieve = DicomUID{"1.2.840.10008.3.1.2.3.4",///NOLINT
                                                                      "Modality Performed Procedure Step Retrieve SOP Class",
                                                                      DicomUidType::SOPClass, false};

///<summary>SOP Class: Modality Performed Procedure Step Notification SOP Class</summary>
DicomUID  DicomUID::ModalityPerformedProcedureStepNotification = DicomUID{"1.2.840.10008.3.1.2.3.5",///NOLINT
                                                                          "Modality Performed Procedure Step Notification SOP Class",
                                                                          DicomUidType::SOPClass, false};

///<summary>SOP Class: Detached Results Management SOP Class (Retired)</summary>
DicomUID  DicomUID::DetachedResultsManagementRETIRED = DicomUID{"1.2.840.10008.3.1.2.5.1",///NOLINT
                                                                "Detached Results Management SOP Class (Retired)",
                                                                DicomUidType::SOPClass, true};

///<summary>Meta SOP Class: Detached Results Management Meta SOP Class (Retired)</summary>
DicomUID  DicomUID::DetachedResultsManagementMetaRETIRED = DicomUID{"1.2.840.10008.3.1.2.5.4",///NOLINT
                                                                    "Detached Results Management Meta SOP Class (Retired)",
                                                                    DicomUidType::MetaSOPClass, true};

///<summary>Meta SOP Class: Detached Study Management Meta SOP Class (Retired)</summary>
DicomUID  DicomUID::DetachedStudyManagementMetaRETIRED = DicomUID{"1.2.840.10008.3.1.2.5.5",///NOLINT
                                                                  "Detached Study Management Meta SOP Class (Retired)",
                                                                  DicomUidType::MetaSOPClass, true};

///<summary>SOP Class: Detached Interpretation Management SOP Class (Retired)</summary>
DicomUID  DicomUID::DetachedInterpretationManagementRETIRED = DicomUID{"1.2.840.10008.3.1.2.6.1",///NOLINT
                                                                       "Detached Interpretation Management SOP Class (Retired)",
                                                                       DicomUidType::SOPClass, true};

///<summary>Service Class: Storage Service Class</summary>
DicomUID  DicomUID::Storage = DicomUID{"1.2.840.10008.4.2",///NOLINT
                                       "Storage Service Class", DicomUidType::ServiceClass, false};

///<summary>SOP Class: Basic Film Session SOP Class</summary>
DicomUID  DicomUID::BasicFilmSession = DicomUID{"1.2.840.10008.5.1.1.1",///NOLINT
                                                "Basic Film Session SOP Class", DicomUidType::SOPClass, false};

///<summary>SOP Class: Basic Film Box SOP Class</summary>
DicomUID  DicomUID::BasicFilmBox = DicomUID{"1.2.840.10008.5.1.1.2",///NOLINT
                                            "Basic Film Box SOP Class", DicomUidType::SOPClass, false};

///<summary>SOP Class: Basic Grayscale Image Box SOP Class</summary>
DicomUID  DicomUID::BasicGrayscaleImageBox = DicomUID{"1.2.840.10008.5.1.1.4",///NOLINT
                                                      "Basic Grayscale Image Box SOP Class", DicomUidType::SOPClass,
                                                      false};

///<summary>SOP Class: Basic Color Image Box SOP Class</summary>
DicomUID  DicomUID::BasicColorImageBox = DicomUID{"1.2.840.10008.5.1.1.4.1",///NOLINT
                                                  "Basic Color Image Box SOP Class", DicomUidType::SOPClass, false};

///<summary>SOP Class: Referenced Image Box SOP Class (Retired)</summary>
DicomUID  DicomUID::ReferencedImageBoxRETIRED = DicomUID{"1.2.840.10008.5.1.1.4.2",///NOLINT
                                                         "Referenced Image Box SOP Class (Retired)",
                                                         DicomUidType::SOPClass, true};

///<summary>Meta SOP Class: Basic Grayscale Print Management Meta SOP Class</summary>
DicomUID  DicomUID::BasicGrayscalePrintManagementMeta = DicomUID{"1.2.840.10008.5.1.1.9",///NOLINT
                                                                 "Basic Grayscale Print Management Meta SOP Class",
                                                                 DicomUidType::MetaSOPClass, false};

///<summary>Meta SOP Class: Referenced Grayscale Print Management Meta SOP Class (Retired)</summary>
DicomUID  DicomUID::ReferencedGrayscalePrintManagementMetaRETIRED = DicomUID{"1.2.840.10008.5.1.1.9.1",///NOLINT
                                                                             "Referenced Grayscale Print Management Meta SOP Class (Retired)",
                                                                             DicomUidType::MetaSOPClass, true};

///<summary>SOP Class: Print Job SOP Class</summary>
DicomUID  DicomUID::PrintJob = DicomUID{"1.2.840.10008.5.1.1.14",///NOLINT
                                        "Print Job SOP Class", DicomUidType::SOPClass, false};

///<summary>SOP Class: Basic Annotation Box SOP Class</summary>
DicomUID  DicomUID::BasicAnnotationBox = DicomUID{"1.2.840.10008.5.1.1.15",///NOLINT
                                                  "Basic Annotation Box SOP Class", DicomUidType::SOPClass, false};

///<summary>SOP Class: Printer SOP Class</summary>
DicomUID  DicomUID::Printer = DicomUID{"1.2.840.10008.5.1.1.16",///NOLINT
                                       "Printer SOP Class", DicomUidType::SOPClass, false};

///<summary>SOP Class: Printer Configuration Retrieval SOP Class</summary>
DicomUID  DicomUID::PrinterConfigurationRetrieval = DicomUID{"1.2.840.10008.5.1.1.16.376",///NOLINT
                                                             "Printer Configuration Retrieval SOP Class",
                                                             DicomUidType::SOPClass, false};

///<summary>Well-known Printer SOP Instance: Printer SOP Instance</summary>
DicomUID  DicomUID::PrinterInstance = DicomUID{"1.2.840.10008.5.1.1.17",///NOLINT
                                               "Printer SOP Instance", DicomUidType::SOPInstance, false};

///<summary>Well-known Printer SOP Instance: Printer Configuration Retrieval SOP Instance</summary>
DicomUID  DicomUID::PrinterConfigurationRetrievalInstance = DicomUID{"1.2.840.10008.5.1.1.17.376",///NOLINT
                                                                     "Printer Configuration Retrieval SOP Instance",
                                                                     DicomUidType::SOPInstance, false};

///<summary>Meta SOP Class: Basic Color Print Management Meta SOP Class</summary>
DicomUID  DicomUID::BasicColorPrintManagementMeta = DicomUID{"1.2.840.10008.5.1.1.18",///NOLINT
                                                             "Basic Color Print Management Meta SOP Class",
                                                             DicomUidType::MetaSOPClass, false};

///<summary>Meta SOP Class: Referenced Color Print Management Meta SOP Class (Retired)</summary>
DicomUID  DicomUID::ReferencedColorPrintManagementMetaRETIRED = DicomUID{"1.2.840.10008.5.1.1.18.1",///NOLINT
                                                                         "Referenced Color Print Management Meta SOP Class (Retired)",
                                                                         DicomUidType::MetaSOPClass, true};

///<summary>SOP Class: VOI LUT Box SOP Class</summary>
DicomUID  DicomUID::VOILUTBox = DicomUID{"1.2.840.10008.5.1.1.22",///NOLINT
                                         "VOI LUT Box SOP Class", DicomUidType::SOPClass, false};

///<summary>SOP Class: Presentation LUT SOP Class</summary>
DicomUID  DicomUID::PresentationLUT = DicomUID{"1.2.840.10008.5.1.1.23",///NOLINT
                                               "Presentation LUT SOP Class", DicomUidType::SOPClass, false};

///<summary>SOP Class: Image Overlay Box SOP Class (Retired)</summary>
DicomUID  DicomUID::ImageOverlayBoxRETIRED = DicomUID{"1.2.840.10008.5.1.1.24",///NOLINT
                                                      "Image Overlay Box SOP Class (Retired)", DicomUidType::SOPClass,
                                                      true};

///<summary>SOP Class: Basic Print Image Overlay Box SOP Class (Retired)</summary>
DicomUID  DicomUID::BasicPrintImageOverlayBoxRETIRED = DicomUID{"1.2.840.10008.5.1.1.24.1",///NOLINT
                                                                "Basic Print Image Overlay Box SOP Class (Retired)",
                                                                DicomUidType::SOPClass, true};

///<summary>Well-known Print Queue SOP Instance: Print Queue SOP Instance (Retired)</summary>
DicomUID  DicomUID::PrintQueueRETIRED = DicomUID{"1.2.840.10008.5.1.1.25",///NOLINT
                                                 "Print Queue SOP Instance (Retired)", DicomUidType::SOPInstance, true};

///<summary>SOP Class: Print Queue Management SOP Class (Retired)</summary>
DicomUID  DicomUID::PrintQueueManagementRETIRED = DicomUID{"1.2.840.10008.5.1.1.26",///NOLINT
                                                           "Print Queue Management SOP Class (Retired)",
                                                           DicomUidType::SOPClass, true};

///<summary>SOP Class: Stored Print Storage SOP Class (Retired)</summary>
DicomUID  DicomUID::StoredPrintStorageRETIRED = DicomUID{"1.2.840.10008.5.1.1.27",///NOLINT
                                                         "Stored Print Storage SOP Class (Retired)",
                                                         DicomUidType::SOPClass, true};

///<summary>SOP Class: Hardcopy Grayscale Image Storage SOP Class (Retired)</summary>
DicomUID  DicomUID::HardcopyGrayscaleImageStorageRETIRED = DicomUID{"1.2.840.10008.5.1.1.29",///NOLINT
                                                                    "Hardcopy Grayscale Image Storage SOP Class (Retired)",
                                                                    DicomUidType::SOPClass, true};

///<summary>SOP Class: Hardcopy Color Image Storage SOP Class (Retired)</summary>
DicomUID  DicomUID::HardcopyColorImageStorageRETIRED = DicomUID{"1.2.840.10008.5.1.1.30",///NOLINT
                                                                "Hardcopy Color Image Storage SOP Class (Retired)",
                                                                DicomUidType::SOPClass, true};

///<summary>SOP Class: Pull Print Request SOP Class (Retired)</summary>
DicomUID  DicomUID::PullPrintRequestRETIRED = DicomUID{"1.2.840.10008.5.1.1.31",///NOLINT
                                                       "Pull Print Request SOP Class (Retired)", DicomUidType::SOPClass,
                                                       true};

///<summary>Meta SOP Class: Pull Stored Print Management Meta SOP Class (Retired)</summary>
DicomUID  DicomUID::PullStoredPrintManagementMetaRETIRED = DicomUID{"1.2.840.10008.5.1.1.32",///NOLINT
                                                                    "Pull Stored Print Management Meta SOP Class (Retired)",
                                                                    DicomUidType::MetaSOPClass, true};

///<summary>SOP Class: Media Creation Management SOP Class UID</summary>
DicomUID  DicomUID::MediaCreationManagement = DicomUID{"1.2.840.10008.5.1.1.33",///NOLINT
                                                       "Media Creation Management SOP Class UID",
                                                       DicomUidType::SOPClass, false};

///<summary>SOP Class: Display System SOP Class</summary>
DicomUID  DicomUID::DisplaySystem = DicomUID{"1.2.840.10008.5.1.1.40",///NOLINT
                                             "Display System SOP Class", DicomUidType::SOPClass, false};

///<summary>Well-known SOP Instance: Display System SOP Instance</summary>
DicomUID  DicomUID::DisplaySystemInstance = DicomUID{"1.2.840.10008.5.1.1.40.1",///NOLINT
                                                     "Display System SOP Instance", DicomUidType::SOPInstance, false};

///<summary>SOP Class: Computed Radiography Image Storage</summary>
DicomUID  DicomUID::ComputedRadiographyImageStorage = DicomUID{"1.2.840.10008.5.1.4.1.1.1",///NOLINT
                                                               "Computed Radiography Image Storage",
                                                               DicomUidType::SOPClass, false};

///<summary>SOP Class: Digital X-Ray Image Storage - For Presentation</summary>
DicomUID  DicomUID::DigitalXRayImageStorageForPresentation = DicomUID{"1.2.840.10008.5.1.4.1.1.1.1",///NOLINT
                                                                      "Digital X-Ray Image Storage - For Presentation",
                                                                      DicomUidType::SOPClass, false};

///<summary>SOP Class: Digital X-Ray Image Storage - For Processing</summary>
DicomUID  DicomUID::DigitalXRayImageStorageForProcessing = DicomUID{"1.2.840.10008.5.1.4.1.1.1.1.1",///NOLINT
                                                                    "Digital X-Ray Image Storage - For Processing",
                                                                    DicomUidType::SOPClass, false};

///<summary>SOP Class: Digital Mammography X-Ray Image Storage - For Presentation</summary>
DicomUID  DicomUID::DigitalMammographyXRayImageStorageForPresentation = DicomUID{"1.2.840.10008.5.1.4.1.1.1.2",///NOLINT
                                                                                 "Digital Mammography X-Ray Image Storage - For Presentation",
                                                                                 DicomUidType::SOPClass, false};

///<summary>SOP Class: Digital Mammography X-Ray Image Storage - For Processing</summary>
DicomUID  DicomUID::DigitalMammographyXRayImageStorageForProcessing = DicomUID{"1.2.840.10008.5.1.4.1.1.1.2.1",///NOLINT
                                                                               "Digital Mammography X-Ray Image Storage - For Processing",
                                                                               DicomUidType::SOPClass, false};

///<summary>SOP Class: Digital Intra-Oral X-Ray Image Storage - For Presentation</summary>
DicomUID  DicomUID::DigitalIntraOralXRayImageStorageForPresentation = DicomUID{"1.2.840.10008.5.1.4.1.1.1.3",///NOLINT
                                                                               "Digital Intra-Oral X-Ray Image Storage - For Presentation",
                                                                               DicomUidType::SOPClass, false};

///<summary>SOP Class: Digital Intra-Oral X-Ray Image Storage - For Processing</summary>
DicomUID  DicomUID::DigitalIntraOralXRayImageStorageForProcessing = DicomUID{"1.2.840.10008.5.1.4.1.1.1.3.1",///NOLINT
                                                                             "Digital Intra-Oral X-Ray Image Storage - For Processing",
                                                                             DicomUidType::SOPClass, false};

///<summary>SOP Class: CT Image Storage</summary>
DicomUID  DicomUID::CTImageStorage = DicomUID{"1.2.840.10008.5.1.4.1.1.2",///NOLINT
                                              "CT Image Storage", DicomUidType::SOPClass, false};

///<summary>SOP Class: Enhanced CT Image Storage</summary>
DicomUID  DicomUID::EnhancedCTImageStorage = DicomUID{"1.2.840.10008.5.1.4.1.1.2.1",///NOLINT
                                                      "Enhanced CT Image Storage", DicomUidType::SOPClass, false};

///<summary>SOP Class: Legacy Converted Enhanced CT Image Storage</summary>
DicomUID  DicomUID::LegacyConvertedEnhancedCTImageStorage = DicomUID{"1.2.840.10008.5.1.4.1.1.2.2",///NOLINT
                                                                     "Legacy Converted Enhanced CT Image Storage",
                                                                     DicomUidType::SOPClass, false};

///<summary>SOP Class: Ultrasound Multi-frame Image Storage (Retired)</summary>
DicomUID  DicomUID::UltrasoundMultiFrameImageStorageRetiredRETIRED = DicomUID{"1.2.840.10008.5.1.4.1.1.3",///NOLINT
                                                                              "Ultrasound Multi-frame Image Storage (Retired)",
                                                                              DicomUidType::SOPClass, true};

///<summary>SOP Class: Ultrasound Multi-frame Image Storage</summary>
DicomUID  DicomUID::UltrasoundMultiFrameImageStorage = DicomUID{"1.2.840.10008.5.1.4.1.1.3.1",///NOLINT
                                                                "Ultrasound Multi-frame Image Storage",
                                                                DicomUidType::SOPClass, false};

///<summary>SOP Class: MR Image Storage</summary>
DicomUID  DicomUID::MRImageStorage = DicomUID{"1.2.840.10008.5.1.4.1.1.4",///NOLINT
                                              "MR Image Storage", DicomUidType::SOPClass, false};

///<summary>SOP Class: Enhanced MR Image Storage</summary>
DicomUID  DicomUID::EnhancedMRImageStorage = DicomUID{"1.2.840.10008.5.1.4.1.1.4.1",///NOLINT
                                                      "Enhanced MR Image Storage", DicomUidType::SOPClass, false};

///<summary>SOP Class: MR Spectroscopy Storage</summary>
DicomUID  DicomUID::MRSpectroscopyStorage = DicomUID{"1.2.840.10008.5.1.4.1.1.4.2",///NOLINT
                                                     "MR Spectroscopy Storage", DicomUidType::SOPClass, false};

///<summary>SOP Class: Enhanced MR Color Image Storage</summary>
DicomUID  DicomUID::EnhancedMRColorImageStorage = DicomUID{"1.2.840.10008.5.1.4.1.1.4.3",///NOLINT
                                                           "Enhanced MR Color Image Storage", DicomUidType::SOPClass,
                                                           false};

///<summary>SOP Class: Legacy Converted Enhanced MR Image Storage</summary>
DicomUID  DicomUID::LegacyConvertedEnhancedMRImageStorage = DicomUID{"1.2.840.10008.5.1.4.1.1.4.4",///NOLINT
                                                                     "Legacy Converted Enhanced MR Image Storage",
                                                                     DicomUidType::SOPClass, false};

///<summary>SOP Class: Nuclear Medicine Image Storage (Retired)</summary>
DicomUID  DicomUID::NuclearMedicineImageStorageRetiredRETIRED = DicomUID{"1.2.840.10008.5.1.4.1.1.5",///NOLINT
                                                                         "Nuclear Medicine Image Storage (Retired)",
                                                                         DicomUidType::SOPClass, true};

///<summary>SOP Class: Ultrasound Image Storage (Retired)</summary>
DicomUID  DicomUID::UltrasoundImageStorageRetiredRETIRED = DicomUID{"1.2.840.10008.5.1.4.1.1.6",///NOLINT
                                                                    "Ultrasound Image Storage (Retired)",
                                                                    DicomUidType::SOPClass, true};

///<summary>SOP Class: Ultrasound Image Storage</summary>
DicomUID  DicomUID::UltrasoundImageStorage = DicomUID{"1.2.840.10008.5.1.4.1.1.6.1",///NOLINT
                                                      "Ultrasound Image Storage", DicomUidType::SOPClass, false};

///<summary>SOP Class: Enhanced US Volume Storage</summary>
DicomUID  DicomUID::EnhancedUSVolumeStorage = DicomUID{"1.2.840.10008.5.1.4.1.1.6.2",///NOLINT
                                                       "Enhanced US Volume Storage", DicomUidType::SOPClass, false};

///<summary>SOP Class: Secondary Capture Image Storage</summary>
DicomUID  DicomUID::SecondaryCaptureImageStorage = DicomUID{"1.2.840.10008.5.1.4.1.1.7",///NOLINT
                                                            "Secondary Capture Image Storage", DicomUidType::SOPClass,
                                                            false};

///<summary>SOP Class: Multi-frame Single Bit Secondary Capture Image Storage</summary>
DicomUID  DicomUID::MultiFrameSingleBitSecondaryCaptureImageStorage = DicomUID{"1.2.840.10008.5.1.4.1.1.7.1",///NOLINT
                                                                               "Multi-frame Single Bit Secondary Capture Image Storage",
                                                                               DicomUidType::SOPClass, false};

///<summary>SOP Class: Multi-frame Grayscale Byte Secondary Capture Image Storage</summary>
DicomUID
        DicomUID::MultiFrameGrayscaleByteSecondaryCaptureImageStorage = DicomUID{"1.2.840.10008.5.1.4.1.1.7.2",///NOLINT
                                                                                 "Multi-frame Grayscale Byte Secondary Capture Image Storage",
                                                                                 DicomUidType::SOPClass, false};

///<summary>SOP Class: Multi-frame Grayscale Word Secondary Capture Image Storage</summary>
DicomUID
        DicomUID::MultiFrameGrayscaleWordSecondaryCaptureImageStorage = DicomUID{///NOLINT
        "1.2.840.10008.5.1.4.1.1.7.3",///NOLINT
        "Multi-frame Grayscale Word Secondary Capture Image Storage", DicomUidType::SOPClass, false};

///<summary>SOP Class: Multi-frame True Color Secondary Capture Image Storage</summary>
DicomUID
        DicomUID::MultiFrameTrueColorSecondaryCaptureImageStorage = DicomUID{"1.2.840.10008.5.1.4.1.1.7.4",///NOLINT
                                                                             "Multi-frame True Color Secondary Capture Image Storage",
                                                                             DicomUidType::SOPClass, false};

///<summary>SOP Class: Standalone Overlay Storage (Retired)</summary>
DicomUID  DicomUID::StandaloneOverlayStorageRETIRED = DicomUID{"1.2.840.10008.5.1.4.1.1.8",///NOLINT
                                                               "Standalone Overlay Storage (Retired)",
                                                               DicomUidType::SOPClass, true};

///<summary>SOP Class: Standalone Curve Storage (Retired)</summary>
DicomUID  DicomUID::StandaloneCurveStorageRETIRED = DicomUID{"1.2.840.10008.5.1.4.1.1.9",///NOLINT
                                                             "Standalone Curve Storage (Retired)",
                                                             DicomUidType::SOPClass, true};

///<summary>SOP Class: Waveform Storage - Trial (Retired)</summary>
DicomUID  DicomUID::WaveformStorageTrialRETIRED = DicomUID{"1.2.840.10008.5.1.4.1.1.9.1",///NOLINT
                                                           "Waveform Storage - Trial (Retired)", DicomUidType::SOPClass,
                                                           true};

///<summary>SOP Class: 12-lead ECG Waveform Storage</summary>
DicomUID  DicomUID::TwelveLeadECGWaveformStorage = DicomUID{"1.2.840.10008.5.1.4.1.1.9.1.1",///NOLINT
                                                            "12-lead ECG Waveform Storage", DicomUidType::SOPClass,
                                                            false};

///<summary>SOP Class: General ECG Waveform Storage</summary>
DicomUID  DicomUID::GeneralECGWaveformStorage = DicomUID{"1.2.840.10008.5.1.4.1.1.9.1.2",///NOLINT
                                                         "General ECG Waveform Storage", DicomUidType::SOPClass, false};

///<summary>SOP Class: Ambulatory ECG Waveform Storage</summary>
DicomUID  DicomUID::AmbulatoryECGWaveformStorage = DicomUID{"1.2.840.10008.5.1.4.1.1.9.1.3",///NOLINT
                                                            "Ambulatory ECG Waveform Storage", DicomUidType::SOPClass,
                                                            false};

///<summary>SOP Class: Hemodynamic Waveform Storage</summary>
DicomUID  DicomUID::HemodynamicWaveformStorage = DicomUID{"1.2.840.10008.5.1.4.1.1.9.2.1",///NOLINT
                                                          "Hemodynamic Waveform Storage", DicomUidType::SOPClass,
                                                          false};

///<summary>SOP Class: Cardiac Electrophysiology Waveform Storage</summary>
DicomUID  DicomUID::CardiacElectrophysiologyWaveformStorage = DicomUID{"1.2.840.10008.5.1.4.1.1.9.3.1",///NOLINT
                                                                       "Cardiac Electrophysiology Waveform Storage",
                                                                       DicomUidType::SOPClass, false};

///<summary>SOP Class: Basic Voice Audio Waveform Storage</summary>
DicomUID  DicomUID::BasicVoiceAudioWaveformStorage = DicomUID{"1.2.840.10008.5.1.4.1.1.9.4.1",///NOLINT
                                                              "Basic Voice Audio Waveform Storage",
                                                              DicomUidType::SOPClass, false};

///<summary>SOP Class: General Audio Waveform Storage</summary>
DicomUID  DicomUID::GeneralAudioWaveformStorage = DicomUID{"1.2.840.10008.5.1.4.1.1.9.4.2",///NOLINT
                                                           "General Audio Waveform Storage", DicomUidType::SOPClass,
                                                           false};

///<summary>SOP Class: Arterial Pulse Waveform Storage</summary>
DicomUID  DicomUID::ArterialPulseWaveformStorage = DicomUID{"1.2.840.10008.5.1.4.1.1.9.5.1",///NOLINT
                                                            "Arterial Pulse Waveform Storage", DicomUidType::SOPClass,
                                                            false};

///<summary>SOP Class: Respiratory Waveform Storage</summary>
DicomUID  DicomUID::RespiratoryWaveformStorage = DicomUID{"1.2.840.10008.5.1.4.1.1.9.6.1",///NOLINT
                                                          "Respiratory Waveform Storage", DicomUidType::SOPClass,
                                                          false};

///<summary>SOP Class: Multi-channel Respiratory Waveform Storage</summary>
DicomUID  DicomUID::MultichannelRespiratoryWaveformStorage = DicomUID{"1.2.840.10008.5.1.4.1.1.9.6.2",///NOLINT
                                                                      "Multi-channel Respiratory Waveform Storage",
                                                                      DicomUidType::SOPClass, false};

///<summary>SOP Class: Routine Scalp Electroencephalogram Waveform Storage</summary>
DicomUID  DicomUID::RoutineScalpElectroencephalogramWaveformStorage = DicomUID{"1.2.840.10008.5.1.4.1.1.9.7.1",///NOLINT
                                                                               "Routine Scalp Electroencephalogram Waveform Storage",
                                                                               DicomUidType::SOPClass, false};

///<summary>SOP Class: Electromyogram Waveform Storage</summary>
DicomUID  DicomUID::ElectromyogramWaveformStorage = DicomUID{"1.2.840.10008.5.1.4.1.1.9.7.2",///NOLINT
                                                             "Electromyogram Waveform Storage", DicomUidType::SOPClass,
                                                             false};

///<summary>SOP Class: Electrooculogram Waveform Storage</summary>
DicomUID  DicomUID::ElectrooculogramWaveformStorage = DicomUID{"1.2.840.10008.5.1.4.1.1.9.7.3",///NOLINT
                                                               "Electrooculogram Waveform Storage",
                                                               DicomUidType::SOPClass, false};

///<summary>SOP Class: Sleep Electroencephalogram Waveform Storage</summary>
DicomUID  DicomUID::SleepElectroencephalogramWaveformStorage = DicomUID{"1.2.840.10008.5.1.4.1.1.9.7.4",///NOLINT
                                                                        "Sleep Electroencephalogram Waveform Storage",
                                                                        DicomUidType::SOPClass, false};

///<summary>SOP Class: Body Position Waveform Storage</summary>
DicomUID  DicomUID::BodyPositionWaveformStorage = DicomUID{"1.2.840.10008.5.1.4.1.1.9.8.1",///NOLINT
                                                           "Body Position Waveform Storage", DicomUidType::SOPClass,
                                                           false};

///<summary>SOP Class: Standalone Modality LUT Storage (Retired)</summary>
DicomUID  DicomUID::StandaloneModalityLUTStorageRETIRED = DicomUID{"1.2.840.10008.5.1.4.1.1.10",///NOLINT
                                                                   "Standalone Modality LUT Storage (Retired)",
                                                                   DicomUidType::SOPClass, true};

///<summary>SOP Class: Standalone VOI LUT Storage (Retired)</summary>
DicomUID  DicomUID::StandaloneVOILUTStorageRETIRED = DicomUID{"1.2.840.10008.5.1.4.1.1.11",///NOLINT
                                                              "Standalone VOI LUT Storage (Retired)",
                                                              DicomUidType::SOPClass, true};

///<summary>SOP Class: Grayscale Softcopy Presentation State Storage</summary>
DicomUID  DicomUID::GrayscaleSoftcopyPresentationStateStorage = DicomUID{"1.2.840.10008.5.1.4.1.1.11.1",///NOLINT
                                                                         "Grayscale Softcopy Presentation State Storage",
                                                                         DicomUidType::SOPClass, false};

///<summary>SOP Class: Color Softcopy Presentation State Storage</summary>
DicomUID  DicomUID::ColorSoftcopyPresentationStateStorage = DicomUID{"1.2.840.10008.5.1.4.1.1.11.2",///NOLINT
                                                                     "Color Softcopy Presentation State Storage",
                                                                     DicomUidType::SOPClass, false};

///<summary>SOP Class: Pseudo-Color Softcopy Presentation State Storage</summary>
DicomUID  DicomUID::PseudoColorSoftcopyPresentationStateStorage = DicomUID{"1.2.840.10008.5.1.4.1.1.11.3",///NOLINT
                                                                           "Pseudo-Color Softcopy Presentation State Storage",
                                                                           DicomUidType::SOPClass, false};

///<summary>SOP Class: Blending Softcopy Presentation State Storage</summary>
DicomUID  DicomUID::BlendingSoftcopyPresentationStateStorage = DicomUID{"1.2.840.10008.5.1.4.1.1.11.4",///NOLINT
                                                                        "Blending Softcopy Presentation State Storage",
                                                                        DicomUidType::SOPClass, false};

///<summary>SOP Class: XA/XRF Grayscale Softcopy Presentation State Storage</summary>
DicomUID  DicomUID::XAXRFGrayscaleSoftcopyPresentationStateStorage = DicomUID{"1.2.840.10008.5.1.4.1.1.11.5",///NOLINT
                                                                              "XA/XRF Grayscale Softcopy Presentation State Storage",
                                                                              DicomUidType::SOPClass, false};

///<summary>SOP Class: Grayscale Planar MPR Volumetric Presentation State Storage</summary>
DicomUID  DicomUID::GrayscalePlanarMPRVolumetricPresentationStateStorage = DicomUID{///NOLINT
        "1.2.840.10008.5.1.4.1.1.11.6",///NOLINT
        "Grayscale Planar MPR Volumetric Presentation State Storage", DicomUidType::SOPClass, false};

///<summary>SOP Class: Compositing Planar MPR Volumetric Presentation State Storage</summary>
DicomUID  DicomUID::CompositingPlanarMPRVolumetricPresentationStateStorage = DicomUID{///NOLINT
        "1.2.840.10008.5.1.4.1.1.11.7",///NOLINT
        "Compositing Planar MPR Volumetric Presentation State Storage", DicomUidType::SOPClass, false};

///<summary>SOP Class: Advanced Blending Presentation State Storage</summary>
DicomUID  DicomUID::AdvancedBlendingPresentationStateStorage = DicomUID{"1.2.840.10008.5.1.4.1.1.11.8",///NOLINT
                                                                        "Advanced Blending Presentation State Storage",
                                                                        DicomUidType::SOPClass, false};

///<summary>SOP Class: Volume Rendering Volumetric Presentation State Storage</summary>
DicomUID
        DicomUID::VolumeRenderingVolumetricPresentationStateStorage = DicomUID{///NOLINT
        "1.2.840.10008.5.1.4.1.1.11.9",///NOLINT
        "Volume Rendering Volumetric Presentation State Storage", DicomUidType::SOPClass, false};

///<summary>SOP Class: Segmented Volume Rendering Volumetric Presentation State Storage</summary>
DicomUID  DicomUID::SegmentedVolumeRenderingVolumetricPresentationStateStorage = DicomUID{///NOLINT
        "1.2.840.10008.5.1.4.1.1.11.10",///NOLINT
        "Segmented Volume Rendering Volumetric Presentation State Storage", DicomUidType::SOPClass, false};

///<summary>SOP Class: Multiple Volume Rendering Volumetric Presentation State Storage</summary>
DicomUID  DicomUID::MultipleVolumeRenderingVolumetricPresentationStateStorage = DicomUID{///NOLINT
        "1.2.840.10008.5.1.4.1.1.11.11",///NOLINT
        "Multiple Volume Rendering Volumetric Presentation State Storage", DicomUidType::SOPClass, false};

///<summary>SOP Class: X-Ray Angiographic Image Storage</summary>
DicomUID  DicomUID::XRayAngiographicImageStorage = DicomUID{"1.2.840.10008.5.1.4.1.1.12.1",///NOLINT
                                                            "X-Ray Angiographic Image Storage", DicomUidType::SOPClass,
                                                            false};

///<summary>SOP Class: Enhanced XA Image Storage</summary>
DicomUID  DicomUID::EnhancedXAImageStorage = DicomUID{"1.2.840.10008.5.1.4.1.1.12.1.1",///NOLINT
                                                      "Enhanced XA Image Storage", DicomUidType::SOPClass, false};

///<summary>SOP Class: X-Ray Radiofluoroscopic Image Storage</summary>
DicomUID  DicomUID::XRayRadiofluoroscopicImageStorage = DicomUID{"1.2.840.10008.5.1.4.1.1.12.2",///NOLINT
                                                                 "X-Ray Radiofluoroscopic Image Storage",
                                                                 DicomUidType::SOPClass, false};

///<summary>SOP Class: Enhanced XRF Image Storage</summary>
DicomUID  DicomUID::EnhancedXRFImageStorage = DicomUID{"1.2.840.10008.5.1.4.1.1.12.2.1",///NOLINT
                                                       "Enhanced XRF Image Storage", DicomUidType::SOPClass, false};

///<summary>SOP Class: X-Ray Angiographic Bi-Plane Image Storage (Retired)</summary>
DicomUID  DicomUID::XRayAngiographicBiPlaneImageStorageRETIRED = DicomUID{"1.2.840.10008.5.1.4.1.1.12.3",///NOLINT
                                                                          "X-Ray Angiographic Bi-Plane Image Storage (Retired)",
                                                                          DicomUidType::SOPClass, true};

///<summary>SOP Class: X-Ray 3D Angiographic Image Storage</summary>
DicomUID  DicomUID::XRay3DAngiographicImageStorage = DicomUID{"1.2.840.10008.5.1.4.1.1.13.1.1",///NOLINT
                                                              "X-Ray 3D Angiographic Image Storage",
                                                              DicomUidType::SOPClass, false};

///<summary>SOP Class: X-Ray 3D Craniofacial Image Storage</summary>
DicomUID  DicomUID::XRay3DCraniofacialImageStorage = DicomUID{"1.2.840.10008.5.1.4.1.1.13.1.2",///NOLINT
                                                              "X-Ray 3D Craniofacial Image Storage",
                                                              DicomUidType::SOPClass, false};

///<summary>SOP Class: Breast Tomosynthesis Image Storage</summary>
DicomUID  DicomUID::BreastTomosynthesisImageStorage = DicomUID{"1.2.840.10008.5.1.4.1.1.13.1.3",///NOLINT
                                                               "Breast Tomosynthesis Image Storage",
                                                               DicomUidType::SOPClass, false};

///<summary>SOP Class: Breast Projection X-Ray Image Storage - For Presentation</summary>
DicomUID

        DicomUID::BreastProjectionXRayImageStorageForPresentation = DicomUID{///NOLINT
        "1.2.840.10008.5.1.4.1.1.13.1.4",///NOLINT
        "Breast Projection X-Ray Image Storage - For Presentation", DicomUidType::SOPClass, false};

///<summary>SOP Class: Breast Projection X-Ray Image Storage - For Processing</summary>
DicomUID

        DicomUID::BreastProjectionXRayImageStorageForProcessing = DicomUID{"1.2.840.10008.5.1.4.1.1.13.1.5",///NOLINT
                                                                           "Breast Projection X-Ray Image Storage - For Processing",
                                                                           DicomUidType::SOPClass, false};

///<summary>SOP Class: Intravascular Optical Coherence Tomography Image Storage - For Presentation</summary>
DicomUID

        DicomUID::IntravascularOpticalCoherenceTomographyImageStorageForPresentation = DicomUID{///NOLINT
        "1.2.840.10008.5.1.4.1.1.14.1",///NOLINT
        "Intravascular Optical Coherence Tomography Image Storage - For Presentation", DicomUidType::SOPClass, false};

///<summary>SOP Class: Intravascular Optical Coherence Tomography Image Storage - For Processing</summary>
DicomUID  DicomUID::IntravascularOpticalCoherenceTomographyImageStorageForProcessing = DicomUID{///NOLINT
        "1.2.840.10008.5.1.4.1.1.14.2",///NOLINT
        "Intravascular Optical Coherence Tomography Image Storage - For Processing", DicomUidType::SOPClass, false};

///<summary>SOP Class: Nuclear Medicine Image Storage</summary>
DicomUID  DicomUID::NuclearMedicineImageStorage = DicomUID{"1.2.840.10008.5.1.4.1.1.20",///NOLINT
                                                           "Nuclear Medicine Image Storage", DicomUidType::SOPClass,
                                                           false};

///<summary>SOP Class: Parametric Map Storage</summary>
DicomUID  DicomUID::ParametricMapStorage = DicomUID{"1.2.840.10008.5.1.4.1.1.30",///NOLINT
                                                    "Parametric Map Storage", DicomUidType::SOPClass, false};

///<summary>SOP Class: Raw Data Storage</summary>
DicomUID  DicomUID::RawDataStorage = DicomUID{"1.2.840.10008.5.1.4.1.1.66",///NOLINT
                                              "Raw Data Storage", DicomUidType::SOPClass, false};

///<summary>SOP Class: Spatial Registration Storage</summary>
DicomUID  DicomUID::SpatialRegistrationStorage = DicomUID{"1.2.840.10008.5.1.4.1.1.66.1",///NOLINT
                                                          "Spatial Registration Storage", DicomUidType::SOPClass,
                                                          false};

///<summary>SOP Class: Spatial Fiducials Storage</summary>
DicomUID  DicomUID::SpatialFiducialsStorage = DicomUID{"1.2.840.10008.5.1.4.1.1.66.2",///NOLINT
                                                       "Spatial Fiducials Storage", DicomUidType::SOPClass, false};

///<summary>SOP Class: Deformable Spatial Registration Storage</summary>
DicomUID  DicomUID::DeformableSpatialRegistrationStorage = DicomUID{"1.2.840.10008.5.1.4.1.1.66.3",///NOLINT
                                                                    "Deformable Spatial Registration Storage",
                                                                    DicomUidType::SOPClass, false};

///<summary>SOP Class: Segmentation Storage</summary>
DicomUID  DicomUID::SegmentationStorage = DicomUID{"1.2.840.10008.5.1.4.1.1.66.4",///NOLINT
                                                   "Segmentation Storage", DicomUidType::SOPClass, false};

///<summary>SOP Class: Surface Segmentation Storage</summary>
DicomUID  DicomUID::SurfaceSegmentationStorage = DicomUID{"1.2.840.10008.5.1.4.1.1.66.5",///NOLINT
                                                          "Surface Segmentation Storage", DicomUidType::SOPClass,
                                                          false};

///<summary>SOP Class: Tractography Results Storage</summary>
DicomUID  DicomUID::TractographyResultsStorage = DicomUID{"1.2.840.10008.5.1.4.1.1.66.6",///NOLINT
                                                          "Tractography Results Storage", DicomUidType::SOPClass,
                                                          false};

///<summary>SOP Class: Real World Value Mapping Storage</summary>
DicomUID  DicomUID::RealWorldValueMappingStorage = DicomUID{"1.2.840.10008.5.1.4.1.1.67",///NOLINT
                                                            "Real World Value Mapping Storage", DicomUidType::SOPClass,
                                                            false};

///<summary>SOP Class: Surface Scan Mesh Storage</summary>
DicomUID  DicomUID::SurfaceScanMeshStorage = DicomUID{"1.2.840.10008.5.1.4.1.1.68.1",///NOLINT
                                                      "Surface Scan Mesh Storage", DicomUidType::SOPClass, false};

///<summary>SOP Class: Surface Scan Point Cloud Storage</summary>
DicomUID  DicomUID::SurfaceScanPointCloudStorage = DicomUID{"1.2.840.10008.5.1.4.1.1.68.2",///NOLINT
                                                            "Surface Scan Point Cloud Storage", DicomUidType::SOPClass,
                                                            false};

///<summary>SOP Class: VL Image Storage - Trial (Retired)</summary>
DicomUID  DicomUID::VLImageStorageTrialRETIRED = DicomUID{"1.2.840.10008.5.1.4.1.1.77.1",///NOLINT
                                                          "VL Image Storage - Trial (Retired)", DicomUidType::SOPClass,
                                                          true};

///<summary>SOP Class: VL Multi-frame Image Storage - Trial (Retired)</summary>
DicomUID  DicomUID::VLMultiFrameImageStorageTrialRETIRED = DicomUID{"1.2.840.10008.5.1.4.1.1.77.2",///NOLINT
                                                                    "VL Multi-frame Image Storage - Trial (Retired)",
                                                                    DicomUidType::SOPClass, true};

///<summary>SOP Class: VL Endoscopic Image Storage</summary>
DicomUID  DicomUID::VLEndoscopicImageStorage = DicomUID{"1.2.840.10008.5.1.4.1.1.77.1.1",///NOLINT
                                                        "VL Endoscopic Image Storage", DicomUidType::SOPClass, false};

///<summary>SOP Class: Video Endoscopic Image Storage</summary>
DicomUID  DicomUID::VideoEndoscopicImageStorage = DicomUID{"1.2.840.10008.5.1.4.1.1.77.1.1.1",///NOLINT
                                                           "Video Endoscopic Image Storage", DicomUidType::SOPClass,
                                                           false};

///<summary>SOP Class: VL Microscopic Image Storage</summary>
DicomUID  DicomUID::VLMicroscopicImageStorage = DicomUID{"1.2.840.10008.5.1.4.1.1.77.1.2",///NOLINT
                                                         "VL Microscopic Image Storage", DicomUidType::SOPClass, false};

///<summary>SOP Class: Video Microscopic Image Storage</summary>
DicomUID  DicomUID::VideoMicroscopicImageStorage = DicomUID{"1.2.840.10008.5.1.4.1.1.77.1.2.1",///NOLINT
                                                            "Video Microscopic Image Storage", DicomUidType::SOPClass,
                                                            false};

///<summary>SOP Class: VL Slide-Coordinates Microscopic Image Storage</summary>
DicomUID  DicomUID::VLSlideCoordinatesMicroscopicImageStorage = DicomUID{"1.2.840.10008.5.1.4.1.1.77.1.3",///NOLINT
                                                                         "VL Slide-Coordinates Microscopic Image Storage",
                                                                         DicomUidType::SOPClass, false};

///<summary>SOP Class: VL Photographic Image Storage</summary>
DicomUID  DicomUID::VLPhotographicImageStorage = DicomUID{"1.2.840.10008.5.1.4.1.1.77.1.4",///NOLINT
                                                          "VL Photographic Image Storage", DicomUidType::SOPClass,
                                                          false};

///<summary>SOP Class: Video Photographic Image Storage</summary>
DicomUID  DicomUID::VideoPhotographicImageStorage = DicomUID{"1.2.840.10008.5.1.4.1.1.77.1.4.1",///NOLINT
                                                             "Video Photographic Image Storage", DicomUidType::SOPClass,
                                                             false};

///<summary>SOP Class: Ophthalmic Photography 8 Bit Image Storage</summary>
DicomUID  DicomUID::OphthalmicPhotography8BitImageStorage = DicomUID{"1.2.840.10008.5.1.4.1.1.77.1.5.1",///NOLINT
                                                                     "Ophthalmic Photography 8 Bit Image Storage",
                                                                     DicomUidType::SOPClass, false};

///<summary>SOP Class: Ophthalmic Photography 16 Bit Image Storage</summary>
DicomUID  DicomUID::OphthalmicPhotography16BitImageStorage = DicomUID{"1.2.840.10008.5.1.4.1.1.77.1.5.2",///NOLINT
                                                                      "Ophthalmic Photography 16 Bit Image Storage",
                                                                      DicomUidType::SOPClass, false};

///<summary>SOP Class: Stereometric Relationship Storage</summary>
DicomUID  DicomUID::StereometricRelationshipStorage = DicomUID{"1.2.840.10008.5.1.4.1.1.77.1.5.3",///NOLINT
                                                               "Stereometric Relationship Storage",
                                                               DicomUidType::SOPClass, false};

///<summary>SOP Class: Ophthalmic Tomography Image Storage</summary>
DicomUID  DicomUID::OphthalmicTomographyImageStorage = DicomUID{"1.2.840.10008.5.1.4.1.1.77.1.5.4",///NOLINT
                                                                "Ophthalmic Tomography Image Storage",
                                                                DicomUidType::SOPClass, false};

///<summary>SOP Class: Wide Field Ophthalmic Photography Stereographic Projection Image Storage</summary>
DicomUID  DicomUID::WideFieldOphthalmicPhotographyStereographicProjectionImageStorage = DicomUID{///NOLINT
        "1.2.840.10008.5.1.4.1.1.77.1.5.5",///NOLINT
        "Wide Field Ophthalmic Photography Stereographic Projection Image Storage", DicomUidType::SOPClass, false};

///<summary>SOP Class: Wide Field Ophthalmic Photography 3D Coordinates Image Storage</summary>
DicomUID  DicomUID::WideFieldOphthalmicPhotography3DCoordinatesImageStorage = DicomUID{///NOLINT
        "1.2.840.10008.5.1.4.1.1.77.1.5.6",///NOLINT
        "Wide Field Ophthalmic Photography 3D Coordinates Image Storage", DicomUidType::SOPClass, false};

///<summary>SOP Class: Ophthalmic Optical Coherence Tomography En Face Image Storage</summary>
DicomUID  DicomUID::OphthalmicOpticalCoherenceTomographyEnFaceImageStorage = DicomUID{///NOLINT
        "1.2.840.10008.5.1.4.1.1.77.1.5.7",///NOLINT
        "Ophthalmic Optical Coherence Tomography En Face Image Storage", DicomUidType::SOPClass, false};

///<summary>SOP Class: Ophthalmic Optical Coherence Tomography B-scan Volume Analysis Storage</summary>
DicomUID  DicomUID::OphthalmicOpticalCoherenceTomographyBscanVolumeAnalysisStorage = DicomUID{///NOLINT
        "1.2.840.10008.5.1.4.1.1.77.1.5.8",///NOLINT
        "Ophthalmic Optical Coherence Tomography B-scan Volume Analysis Storage", DicomUidType::SOPClass, false};

///<summary>SOP Class: VL Whole Slide Microscopy Image Storage</summary>
DicomUID  DicomUID::VLWholeSlideMicroscopyImageStorage = DicomUID{"1.2.840.10008.5.1.4.1.1.77.1.6",///NOLINT
                                                                  "VL Whole Slide Microscopy Image Storage",
                                                                  DicomUidType::SOPClass, false};

///<summary>SOP Class: Dermoscopic Photography Image Storage</summary>
DicomUID  DicomUID::DermoscopicPhotographyImageStorage = DicomUID{"1.2.840.10008.5.1.4.1.1.77.1.7",///NOLINT
                                                                  "Dermoscopic Photography Image Storage",
                                                                  DicomUidType::SOPClass, false};

///<summary>SOP Class: Lensometry Measurements Storage</summary>
DicomUID  DicomUID::LensometryMeasurementsStorage = DicomUID{"1.2.840.10008.5.1.4.1.1.78.1",///NOLINT
                                                             "Lensometry Measurements Storage", DicomUidType::SOPClass,
                                                             false};

///<summary>SOP Class: Autorefraction Measurements Storage</summary>
DicomUID  DicomUID::AutorefractionMeasurementsStorage = DicomUID{"1.2.840.10008.5.1.4.1.1.78.2",///NOLINT
                                                                 "Autorefraction Measurements Storage",
                                                                 DicomUidType::SOPClass, false};

///<summary>SOP Class: Keratometry Measurements Storage</summary>
DicomUID  DicomUID::KeratometryMeasurementsStorage = DicomUID{"1.2.840.10008.5.1.4.1.1.78.3",///NOLINT
                                                              "Keratometry Measurements Storage",
                                                              DicomUidType::SOPClass, false};

///<summary>SOP Class: Subjective Refraction Measurements Storage</summary>
DicomUID  DicomUID::SubjectiveRefractionMeasurementsStorage = DicomUID{"1.2.840.10008.5.1.4.1.1.78.4",///NOLINT
                                                                       "Subjective Refraction Measurements Storage",
                                                                       DicomUidType::SOPClass, false};

///<summary>SOP Class: Visual Acuity Measurements Storage</summary>
DicomUID  DicomUID::VisualAcuityMeasurementsStorage = DicomUID{"1.2.840.10008.5.1.4.1.1.78.5",///NOLINT
                                                               "Visual Acuity Measurements Storage",
                                                               DicomUidType::SOPClass, false};

///<summary>SOP Class: Spectacle Prescription Report Storage</summary>
DicomUID  DicomUID::SpectaclePrescriptionReportStorage = DicomUID{"1.2.840.10008.5.1.4.1.1.78.6",///NOLINT
                                                                  "Spectacle Prescription Report Storage",
                                                                  DicomUidType::SOPClass, false};

///<summary>SOP Class: Ophthalmic Axial Measurements Storage</summary>
DicomUID  DicomUID::OphthalmicAxialMeasurementsStorage = DicomUID{"1.2.840.10008.5.1.4.1.1.78.7",///NOLINT
                                                                  "Ophthalmic Axial Measurements Storage",
                                                                  DicomUidType::SOPClass, false};

///<summary>SOP Class: Intraocular Lens Calculations Storage</summary>
DicomUID  DicomUID::IntraocularLensCalculationsStorage = DicomUID{"1.2.840.10008.5.1.4.1.1.78.8",///NOLINT
                                                                  "Intraocular Lens Calculations Storage",
                                                                  DicomUidType::SOPClass, false};

///<summary>SOP Class: Macular Grid Thickness and Volume Report Storage</summary>
DicomUID  DicomUID::MacularGridThicknessAndVolumeReportStorage = DicomUID{"1.2.840.10008.5.1.4.1.1.79.1",///NOLINT
                                                                          "Macular Grid Thickness and Volume Report Storage",
                                                                          DicomUidType::SOPClass, false};

///<summary>SOP Class: Ophthalmic Visual Field Static Perimetry Measurements Storage</summary>
DicomUID  DicomUID::OphthalmicVisualFieldStaticPerimetryMeasurementsStorage = DicomUID{///NOLINT
        "1.2.840.10008.5.1.4.1.1.80.1",///NOLINT
        "Ophthalmic Visual Field Static Perimetry Measurements Storage", DicomUidType::SOPClass, false};

///<summary>SOP Class: Ophthalmic Thickness Map Storage</summary>
DicomUID  DicomUID::OphthalmicThicknessMapStorage = DicomUID{"1.2.840.10008.5.1.4.1.1.81.1",///NOLINT
                                                             "Ophthalmic Thickness Map Storage", DicomUidType::SOPClass,
                                                             false};

///<summary>SOP Class: Corneal Topography Map Storage</summary>
DicomUID  DicomUID::CornealTopographyMapStorage = DicomUID{"1.2.840.10008.5.1.4.1.1.82.1",///NOLINT
                                                           "Corneal Topography Map Storage", DicomUidType::SOPClass,
                                                           false};

///<summary>SOP Class: Text SR Storage - Trial (Retired)</summary>
DicomUID  DicomUID::TextSRStorageTrialRETIRED = DicomUID{"1.2.840.10008.5.1.4.1.1.88.1",///NOLINT
                                                         "Text SR Storage - Trial (Retired)", DicomUidType::SOPClass,
                                                         true};

///<summary>SOP Class: Audio SR Storage - Trial (Retired)</summary>
DicomUID  DicomUID::AudioSRStorageTrialRETIRED = DicomUID{"1.2.840.10008.5.1.4.1.1.88.2",///NOLINT
                                                          "Audio SR Storage - Trial (Retired)", DicomUidType::SOPClass,
                                                          true};

///<summary>SOP Class: Detail SR Storage - Trial (Retired)</summary>
DicomUID  DicomUID::DetailSRStorageTrialRETIRED = DicomUID{"1.2.840.10008.5.1.4.1.1.88.3",///NOLINT
                                                           "Detail SR Storage - Trial (Retired)",
                                                           DicomUidType::SOPClass, true};

///<summary>SOP Class: Comprehensive SR Storage - Trial (Retired)</summary>
DicomUID  DicomUID::ComprehensiveSRStorageTrialRETIRED = DicomUID{"1.2.840.10008.5.1.4.1.1.88.4",///NOLINT
                                                                  "Comprehensive SR Storage - Trial (Retired)",
                                                                  DicomUidType::SOPClass, true};

///<summary>SOP Class: Basic Text SR Storage</summary>
DicomUID  DicomUID::BasicTextSRStorage = DicomUID{"1.2.840.10008.5.1.4.1.1.88.11",///NOLINT
                                                  "Basic Text SR Storage", DicomUidType::SOPClass, false};

///<summary>SOP Class: Enhanced SR Storage</summary>
DicomUID  DicomUID::EnhancedSRStorage = DicomUID{"1.2.840.10008.5.1.4.1.1.88.22",///NOLINT
                                                 "Enhanced SR Storage", DicomUidType::SOPClass, false};

///<summary>SOP Class: Comprehensive SR Storage</summary>
DicomUID  DicomUID::ComprehensiveSRStorage = DicomUID{"1.2.840.10008.5.1.4.1.1.88.33",///NOLINT
                                                      "Comprehensive SR Storage", DicomUidType::SOPClass, false};

///<summary>SOP Class: Comprehensive 3D SR Storage</summary>
DicomUID  DicomUID::Comprehensive3DSRStorage = DicomUID{"1.2.840.10008.5.1.4.1.1.88.34",///NOLINT
                                                        "Comprehensive 3D SR Storage", DicomUidType::SOPClass, false};

///<summary>SOP Class: Extensible SR Storage</summary>
DicomUID  DicomUID::ExtensibleSRStorage = DicomUID{"1.2.840.10008.5.1.4.1.1.88.35",///NOLINT
                                                   "Extensible SR Storage", DicomUidType::SOPClass, false};

///<summary>SOP Class: Procedure Log Storage</summary>
DicomUID  DicomUID::ProcedureLogStorage = DicomUID{"1.2.840.10008.5.1.4.1.1.88.40",///NOLINT
                                                   "Procedure Log Storage", DicomUidType::SOPClass, false};

///<summary>SOP Class: Mammography CAD SR Storage</summary>
DicomUID  DicomUID::MammographyCADSRStorage = DicomUID{"1.2.840.10008.5.1.4.1.1.88.50",///NOLINT
                                                       "Mammography CAD SR Storage", DicomUidType::SOPClass, false};

///<summary>SOP Class: Key Object Selection Document Storage</summary>
DicomUID  DicomUID::KeyObjectSelectionDocumentStorage = DicomUID{"1.2.840.10008.5.1.4.1.1.88.59",///NOLINT
                                                                 "Key Object Selection Document Storage",
                                                                 DicomUidType::SOPClass, false};

///<summary>SOP Class: Chest CAD SR Storage</summary>
DicomUID  DicomUID::ChestCADSRStorage = DicomUID{"1.2.840.10008.5.1.4.1.1.88.65",///NOLINT
                                                 "Chest CAD SR Storage", DicomUidType::SOPClass, false};

///<summary>SOP Class: X-Ray Radiation Dose SR Storage</summary>
DicomUID  DicomUID::XRayRadiationDoseSRStorage = DicomUID{"1.2.840.10008.5.1.4.1.1.88.67",///NOLINT
                                                          "X-Ray Radiation Dose SR Storage", DicomUidType::SOPClass,
                                                          false};

///<summary>SOP Class: Radiopharmaceutical Radiation Dose SR Storage</summary>
DicomUID  DicomUID::RadiopharmaceuticalRadiationDoseSRStorage = DicomUID{"1.2.840.10008.5.1.4.1.1.88.68",///NOLINT
                                                                         "Radiopharmaceutical Radiation Dose SR Storage",
                                                                         DicomUidType::SOPClass, false};

///<summary>SOP Class: Colon CAD SR Storage</summary>
DicomUID  DicomUID::ColonCADSRStorage = DicomUID{"1.2.840.10008.5.1.4.1.1.88.69",///NOLINT
                                                 "Colon CAD SR Storage", DicomUidType::SOPClass, false};

///<summary>SOP Class: Implantation Plan SR Storage</summary>
DicomUID  DicomUID::ImplantationPlanSRStorage = DicomUID{"1.2.840.10008.5.1.4.1.1.88.70",///NOLINT
                                                         "Implantation Plan SR Storage", DicomUidType::SOPClass, false};

///<summary>SOP Class: Acquisition Context SR Storage</summary>
DicomUID  DicomUID::AcquisitionContextSRStorage = DicomUID{"1.2.840.10008.5.1.4.1.1.88.71",///NOLINT
                                                           "Acquisition Context SR Storage", DicomUidType::SOPClass,
                                                           false};

///<summary>SOP Class: Simplified Adult Echo SR Storage</summary>
DicomUID  DicomUID::SimplifiedAdultEchoSRStorage = DicomUID{"1.2.840.10008.5.1.4.1.1.88.72",///NOLINT
                                                            "Simplified Adult Echo SR Storage", DicomUidType::SOPClass,
                                                            false};

///<summary>SOP Class: Patient Radiation Dose SR Storage</summary>
DicomUID  DicomUID::PatientRadiationDoseSRStorage = DicomUID{"1.2.840.10008.5.1.4.1.1.88.73",///NOLINT
                                                             "Patient Radiation Dose SR Storage",
                                                             DicomUidType::SOPClass, false};

///<summary>SOP Class: Planned Imaging Agent Administration SR Storage</summary>
DicomUID  DicomUID::PlannedImagingAgentAdministrationSRStorage = DicomUID{"1.2.840.10008.5.1.4.1.1.88.74",///NOLINT
                                                                          "Planned Imaging Agent Administration SR Storage",
                                                                          DicomUidType::SOPClass, false};

///<summary>SOP Class: Performed Imaging Agent Administration SR Storage</summary>
DicomUID  DicomUID::PerformedImagingAgentAdministrationSRStorage = DicomUID{"1.2.840.10008.5.1.4.1.1.88.75",///NOLINT
                                                                            "Performed Imaging Agent Administration SR Storage",
                                                                            DicomUidType::SOPClass, false};

///<summary>SOP Class: Enhanced X-Ray Radiation Dose SR Storage</summary>
DicomUID  DicomUID::EnhancedXRayRadiationDoseSRStorage = DicomUID{"1.2.840.10008.5.1.4.1.1.88.76",///NOLINT
                                                                  "Enhanced X-Ray Radiation Dose SR Storage",
                                                                  DicomUidType::SOPClass, false};

///<summary>SOP Class: Content Assessment Results Storage</summary>
DicomUID  DicomUID::ContentAssessmentResultsStorage = DicomUID{"1.2.840.10008.5.1.4.1.1.90.1",///NOLINT
                                                               "Content Assessment Results Storage",
                                                               DicomUidType::SOPClass, false};

///<summary>SOP Class: Encapsulated PDF Storage</summary>
DicomUID  DicomUID::EncapsulatedPDFStorage = DicomUID{"1.2.840.10008.5.1.4.1.1.104.1",///NOLINT
                                                      "Encapsulated PDF Storage", DicomUidType::SOPClass, false};

///<summary>SOP Class: Encapsulated CDA Storage</summary>
DicomUID  DicomUID::EncapsulatedCDAStorage = DicomUID{"1.2.840.10008.5.1.4.1.1.104.2",///NOLINT
                                                      "Encapsulated CDA Storage", DicomUidType::SOPClass, false};

///<summary>SOP Class: Encapsulated STL Storage</summary>
DicomUID  DicomUID::EncapsulatedSTLStorage = DicomUID{"1.2.840.10008.5.1.4.1.1.104.3",///NOLINT
                                                      "Encapsulated STL Storage", DicomUidType::SOPClass, false};

///<summary>SOP Class: Encapsulated OBJ Storage</summary>
DicomUID  DicomUID::EncapsulatedOBJStorage = DicomUID{"1.2.840.10008.5.1.4.1.1.104.4",///NOLINT
                                                      "Encapsulated OBJ Storage", DicomUidType::SOPClass, false};

///<summary>SOP Class: Encapsulated MTL Storage</summary>
DicomUID  DicomUID::EncapsulatedMTLStorage = DicomUID{"1.2.840.10008.5.1.4.1.1.104.5",///NOLINT
                                                      "Encapsulated MTL Storage", DicomUidType::SOPClass, false};

///<summary>SOP Class: Positron Emission Tomography Image Storage</summary>
DicomUID  DicomUID::PositronEmissionTomographyImageStorage = DicomUID{"1.2.840.10008.5.1.4.1.1.128",///NOLINT
                                                                      "Positron Emission Tomography Image Storage",
                                                                      DicomUidType::SOPClass, false};

///<summary>SOP Class: Legacy Converted Enhanced PET Image Storage</summary>
DicomUID  DicomUID::LegacyConvertedEnhancedPETImageStorage = DicomUID{"1.2.840.10008.5.1.4.1.1.128.1",///NOLINT
                                                                      "Legacy Converted Enhanced PET Image Storage",
                                                                      DicomUidType::SOPClass, false};

///<summary>SOP Class: Standalone PET Curve Storage (Retired)</summary>
DicomUID  DicomUID::StandalonePETCurveStorageRETIRED = DicomUID{"1.2.840.10008.5.1.4.1.1.129",///NOLINT
                                                                "Standalone PET Curve Storage (Retired)",
                                                                DicomUidType::SOPClass, true};

///<summary>SOP Class: Enhanced PET Image Storage</summary>
DicomUID  DicomUID::EnhancedPETImageStorage = DicomUID{"1.2.840.10008.5.1.4.1.1.130",///NOLINT
                                                       "Enhanced PET Image Storage", DicomUidType::SOPClass, false};

///<summary>SOP Class: Basic Structured Display Storage</summary>
DicomUID  DicomUID::BasicStructuredDisplayStorage = DicomUID{"1.2.840.10008.5.1.4.1.1.131",///NOLINT
                                                             "Basic Structured Display Storage", DicomUidType::SOPClass,
                                                             false};

///<summary>SOP Class: CT Defined Procedure Protocol Storage</summary>
DicomUID  DicomUID::CTDefinedProcedureProtocolStorage = DicomUID{"1.2.840.10008.5.1.4.1.1.200.1",///NOLINT
                                                                 "CT Defined Procedure Protocol Storage",
                                                                 DicomUidType::SOPClass, false};

///<summary>SOP Class: CT Performed Procedure Protocol Storage</summary>
DicomUID  DicomUID::CTPerformedProcedureProtocolStorage = DicomUID{"1.2.840.10008.5.1.4.1.1.200.2",///NOLINT
                                                                   "CT Performed Procedure Protocol Storage",
                                                                   DicomUidType::SOPClass, false};

///<summary>SOP Class: Protocol Approval Storage</summary>
DicomUID  DicomUID::ProtocolApprovalStorage = DicomUID{"1.2.840.10008.5.1.4.1.1.200.3",///NOLINT
                                                       "Protocol Approval Storage", DicomUidType::SOPClass, false};

///<summary>SOP Class: Protocol Approval Information Model - FIND</summary>
DicomUID  DicomUID::ProtocolApprovalInformationModelFind = DicomUID{"1.2.840.10008.5.1.4.1.1.200.4",///NOLINT
                                                                    "Protocol Approval Information Model - FIND",
                                                                    DicomUidType::SOPClass, false};

///<summary>SOP Class: Protocol Approval Information Model - MOVE</summary>
DicomUID  DicomUID::ProtocolApprovalInformationModelMove = DicomUID{"1.2.840.10008.5.1.4.1.1.200.5",///NOLINT
                                                                    "Protocol Approval Information Model - MOVE",
                                                                    DicomUidType::SOPClass, false};

///<summary>SOP Class: Protocol Approval Information Model - GET</summary>
DicomUID  DicomUID::ProtocolApprovalInformationModelGet = DicomUID{"1.2.840.10008.5.1.4.1.1.200.6",///NOLINT
                                                                   "Protocol Approval Information Model - GET",
                                                                   DicomUidType::SOPClass, false};

///<summary>SOP Class: XA Defined Procedure Protocol Storage</summary>
DicomUID  DicomUID::XADefinedProcedureProtocolStorage = DicomUID{"1.2.840.10008.5.1.4.1.1.200.7",///NOLINT
                                                                 "XA Defined Procedure Protocol Storage",
                                                                 DicomUidType::SOPClass, false};

///<summary>SOP Class: XA Performed Procedure Protocol Storage</summary>
DicomUID  DicomUID::XAPerformedProcedureProtocolStorage = DicomUID{"1.2.840.10008.5.1.4.1.1.200.8",///NOLINT
                                                                   "XA Performed Procedure Protocol Storage",
                                                                   DicomUidType::SOPClass, false};

///<summary>SOP Class: RT Image Storage</summary>
DicomUID  DicomUID::RTImageStorage = DicomUID{"1.2.840.10008.5.1.4.1.1.481.1",///NOLINT
                                              "RT Image Storage", DicomUidType::SOPClass, false};

///<summary>SOP Class: RT Dose Storage</summary>
DicomUID  DicomUID::RTDoseStorage = DicomUID{"1.2.840.10008.5.1.4.1.1.481.2",///NOLINT
                                             "RT Dose Storage", DicomUidType::SOPClass, false};

///<summary>SOP Class: RT Structure Set Storage</summary>
DicomUID  DicomUID::RTStructureSetStorage = DicomUID{"1.2.840.10008.5.1.4.1.1.481.3",///NOLINT
                                                     "RT Structure Set Storage", DicomUidType::SOPClass, false};

///<summary>SOP Class: RT Beams Treatment Record Storage</summary>
DicomUID  DicomUID::RTBeamsTreatmentRecordStorage = DicomUID{"1.2.840.10008.5.1.4.1.1.481.4",///NOLINT
                                                             "RT Beams Treatment Record Storage",
                                                             DicomUidType::SOPClass, false};

///<summary>SOP Class: RT Plan Storage</summary>
DicomUID  DicomUID::RTPlanStorage = DicomUID{"1.2.840.10008.5.1.4.1.1.481.5",///NOLINT
                                             "RT Plan Storage", DicomUidType::SOPClass, false};

///<summary>SOP Class: RT Brachy Treatment Record Storage</summary>
DicomUID  DicomUID::RTBrachyTreatmentRecordStorage = DicomUID{"1.2.840.10008.5.1.4.1.1.481.6",///NOLINT
                                                              "RT Brachy Treatment Record Storage",
                                                              DicomUidType::SOPClass, false};

///<summary>SOP Class: RT Treatment Summary Record Storage</summary>
DicomUID  DicomUID::RTTreatmentSummaryRecordStorage = DicomUID{"1.2.840.10008.5.1.4.1.1.481.7",///NOLINT
                                                               "RT Treatment Summary Record Storage",
                                                               DicomUidType::SOPClass, false};

///<summary>SOP Class: RT Ion Plan Storage</summary>
DicomUID  DicomUID::RTIonPlanStorage = DicomUID{"1.2.840.10008.5.1.4.1.1.481.8",///NOLINT
                                                "RT Ion Plan Storage", DicomUidType::SOPClass, false};

///<summary>SOP Class: RT Ion Beams Treatment Record Storage</summary>
DicomUID  DicomUID::RTIonBeamsTreatmentRecordStorage = DicomUID{"1.2.840.10008.5.1.4.1.1.481.9",///NOLINT
                                                                "RT Ion Beams Treatment Record Storage",
                                                                DicomUidType::SOPClass, false};

///<summary>SOP Class: RT Physician Intent Storage</summary>
DicomUID  DicomUID::RTPhysicianIntentStorage = DicomUID{"1.2.840.10008.5.1.4.1.1.481.10",///NOLINT
                                                        "RT Physician Intent Storage", DicomUidType::SOPClass, false};

///<summary>SOP Class: RT Segment Annotation Storage</summary>
DicomUID  DicomUID::RTSegmentAnnotationStorage = DicomUID{"1.2.840.10008.5.1.4.1.1.481.11",///NOLINT
                                                          "RT Segment Annotation Storage", DicomUidType::SOPClass,
                                                          false};

///<summary>SOP Class: RT Radiation Set Storage</summary>
DicomUID  DicomUID::RTRadiationSetStorage = DicomUID{"1.2.840.10008.5.1.4.1.1.481.12",///NOLINT
                                                     "RT Radiation Set Storage", DicomUidType::SOPClass, false};

///<summary>SOP Class: C-Arm Photon-Electron Radiation Storage</summary>
DicomUID  DicomUID::CArmPhotonElectronRadiationStorage = DicomUID{"1.2.840.10008.5.1.4.1.1.481.13",///NOLINT
                                                                  "C-Arm Photon-Electron Radiation Storage",
                                                                  DicomUidType::SOPClass, false};

///<summary>SOP Class: Tomotherapeutic Radiation Storage</summary>
DicomUID  DicomUID::TomotherapeuticRadiationStorage = DicomUID{"1.2.840.10008.5.1.4.1.1.481.14",///NOLINT
                                                               "Tomotherapeutic Radiation Storage",
                                                               DicomUidType::SOPClass, false};

///<summary>SOP Class: Robotic-Arm Radiation Storage</summary>
DicomUID  DicomUID::RoboticArmRadiationStorage = DicomUID{"1.2.840.10008.5.1.4.1.1.481.15",///NOLINT
                                                          "Robotic-Arm Radiation Storage", DicomUidType::SOPClass,
                                                          false};

///<summary>SOP Class: RT Radiation Record Set Storage</summary>
DicomUID  DicomUID::RTRadiationRecordSetStorage = DicomUID{"1.2.840.10008.5.1.4.1.1.481.16",///NOLINT
                                                           "RT Radiation Record Set Storage", DicomUidType::SOPClass,
                                                           false};

///<summary>SOP Class: RT Radiation Salvage Record Storage</summary>
DicomUID  DicomUID::RTRadiationSalvageRecordStorage = DicomUID{"1.2.840.10008.5.1.4.1.1.481.17",///NOLINT
                                                               "RT Radiation Salvage Record Storage",
                                                               DicomUidType::SOPClass, false};

///<summary>SOP Class: Tomotherapeutic Radiation Record Storage</summary>
DicomUID  DicomUID::TomotherapeuticRadiationRecordStorage = DicomUID{"1.2.840.10008.5.1.4.1.1.481.18",///NOLINT
                                                                     "Tomotherapeutic Radiation Record Storage",
                                                                     DicomUidType::SOPClass, false};

///<summary>SOP Class: C-Arm Photon-Electron Radiation Record Storage</summary>
DicomUID  DicomUID::CArmPhotonElectronRadiationRecordStorage = DicomUID{"1.2.840.10008.5.1.4.1.1.481.19",///NOLINT
                                                                        "C-Arm Photon-Electron Radiation Record Storage",
                                                                        DicomUidType::SOPClass, false};

///<summary>SOP Class: Robotic Radiation Record Storage</summary>
DicomUID  DicomUID::RoboticRadiationRecordStorage = DicomUID{"1.2.840.10008.5.1.4.1.1.481.20",///NOLINT
                                                             "Robotic Radiation Record Storage", DicomUidType::SOPClass,
                                                             false};

///<summary>SOP Class: DICOS CT Image Storage</summary>
DicomUID  DicomUID::DICOSCTImageStorage = DicomUID{"1.2.840.10008.5.1.4.1.1.501.1",///NOLINT
                                                   "DICOS CT Image Storage", DicomUidType::SOPClass, false};

///<summary>SOP Class: DICOS Digital X-Ray Image Storage - For Presentation</summary>
DicomUID  DicomUID::DICOSDigitalXRayImageStorageForPresentation = DicomUID{"1.2.840.10008.5.1.4.1.1.501.2.1",///NOLINT
                                                                           "DICOS Digital X-Ray Image Storage - For Presentation",
                                                                           DicomUidType::SOPClass, false};

///<summary>SOP Class: DICOS Digital X-Ray Image Storage - For Processing</summary>
DicomUID  DicomUID::DICOSDigitalXRayImageStorageForProcessing = DicomUID{"1.2.840.10008.5.1.4.1.1.501.2.2",///NOLINT
                                                                         "DICOS Digital X-Ray Image Storage - For Processing",
                                                                         DicomUidType::SOPClass, false};

///<summary>SOP Class: DICOS Threat Detection Report Storage</summary>
DicomUID  DicomUID::DICOSThreatDetectionReportStorage = DicomUID{"1.2.840.10008.5.1.4.1.1.501.3",///NOLINT
                                                                 "DICOS Threat Detection Report Storage",
                                                                 DicomUidType::SOPClass, false};

///<summary>SOP Class: DICOS 2D AIT Storage</summary>
DicomUID  DicomUID::DICOS2DAITStorage = DicomUID{"1.2.840.10008.5.1.4.1.1.501.4",///NOLINT
                                                 "DICOS 2D AIT Storage", DicomUidType::SOPClass, false};

///<summary>SOP Class: DICOS 3D AIT Storage</summary>
DicomUID  DicomUID::DICOS3DAITStorage = DicomUID{"1.2.840.10008.5.1.4.1.1.501.5",///NOLINT
                                                 "DICOS 3D AIT Storage", DicomUidType::SOPClass, false};

///<summary>SOP Class: DICOS Quadrupole Resonance (QR) Storage</summary>
DicomUID  DicomUID::DICOSQuadrupoleResonanceStorage = DicomUID{"1.2.840.10008.5.1.4.1.1.501.6",///NOLINT
                                                               "DICOS Quadrupole Resonance (QR) Storage",
                                                               DicomUidType::SOPClass, false};

///<summary>SOP Class: Eddy Current Image Storage</summary>
DicomUID  DicomUID::EddyCurrentImageStorage = DicomUID{"1.2.840.10008.5.1.4.1.1.601.1",///NOLINT
                                                       "Eddy Current Image Storage", DicomUidType::SOPClass, false};

///<summary>SOP Class: Eddy Current Multi-frame Image Storage</summary>
DicomUID  DicomUID::EddyCurrentMultiFrameImageStorage = DicomUID{"1.2.840.10008.5.1.4.1.1.601.2",///NOLINT
                                                                 "Eddy Current Multi-frame Image Storage",
                                                                 DicomUidType::SOPClass, false};

///<summary>SOP Class: Patient Root Query/Retrieve Information Model - FIND</summary>
DicomUID  DicomUID::PatientRootQueryRetrieveInformationModelFind = DicomUID{"1.2.840.10008.5.1.4.1.2.1.1",///NOLINT
                                                                            "Patient Root Query/Retrieve Information Model - FIND",
                                                                            DicomUidType::SOPClass, false};

///<summary>SOP Class: Patient Root Query/Retrieve Information Model - MOVE</summary>
DicomUID  DicomUID::PatientRootQueryRetrieveInformationModelMove = DicomUID{"1.2.840.10008.5.1.4.1.2.1.2",///NOLINT
                                                                            "Patient Root Query/Retrieve Information Model - MOVE",
                                                                            DicomUidType::SOPClass, false};

///<summary>SOP Class: Patient Root Query/Retrieve Information Model - GET</summary>
DicomUID  DicomUID::PatientRootQueryRetrieveInformationModelGet = DicomUID{"1.2.840.10008.5.1.4.1.2.1.3",///NOLINT
                                                                           "Patient Root Query/Retrieve Information Model - GET",
                                                                           DicomUidType::SOPClass, false};

///<summary>SOP Class: Study Root Query/Retrieve Information Model - FIND</summary>
DicomUID  DicomUID::StudyRootQueryRetrieveInformationModelFind = DicomUID{"1.2.840.10008.5.1.4.1.2.2.1",///NOLINT
                                                                          "Study Root Query/Retrieve Information Model - FIND",
                                                                          DicomUidType::SOPClass, false};

///<summary>SOP Class: Study Root Query/Retrieve Information Model - MOVE</summary>
DicomUID  DicomUID::StudyRootQueryRetrieveInformationModelMove = DicomUID{"1.2.840.10008.5.1.4.1.2.2.2",///NOLINT
                                                                          "Study Root Query/Retrieve Information Model - MOVE",
                                                                          DicomUidType::SOPClass, false};

///<summary>SOP Class: Study Root Query/Retrieve Information Model - GET</summary>
DicomUID  DicomUID::StudyRootQueryRetrieveInformationModelGet = DicomUID{"1.2.840.10008.5.1.4.1.2.2.3",///NOLINT
                                                                         "Study Root Query/Retrieve Information Model - GET",
                                                                         DicomUidType::SOPClass, false};

///<summary>SOP Class: Patient/Study Only Query/Retrieve Information Model - FIND (Retired)</summary>
DicomUID  DicomUID::PatientStudyOnlyQueryRetrieveInformationModelFindRETIRED = DicomUID{///NOLINT
        "1.2.840.10008.5.1.4.1.2.3.1",///NOLINT
        "Patient/Study Only Query/Retrieve Information Model - FIND (Retired)", DicomUidType::SOPClass, true};

///<summary>SOP Class: Patient/Study Only Query/Retrieve Information Model - MOVE (Retired)</summary>
DicomUID  DicomUID::PatientStudyOnlyQueryRetrieveInformationModelMoveRETIRED = DicomUID{///NOLINT
        "1.2.840.10008.5.1.4.1.2.3.2",///NOLINT
        "Patient/Study Only Query/Retrieve Information Model - MOVE (Retired)", DicomUidType::SOPClass, true};

///<summary>SOP Class: Patient/Study Only Query/Retrieve Information Model - GET (Retired)</summary>
DicomUID  DicomUID::PatientStudyOnlyQueryRetrieveInformationModelGetRETIRED = DicomUID{///NOLINT
        "1.2.840.10008.5.1.4.1.2.3.3",///NOLINT
        "Patient/Study Only Query/Retrieve Information Model - GET (Retired)", DicomUidType::SOPClass, true};

///<summary>SOP Class: Composite Instance Root Retrieve - MOVE</summary>
DicomUID  DicomUID::CompositeInstanceRootRetrieveMove = DicomUID{"1.2.840.10008.5.1.4.1.2.4.2",///NOLINT
                                                                 "Composite Instance Root Retrieve - MOVE",
                                                                 DicomUidType::SOPClass, false};

///<summary>SOP Class: Composite Instance Root Retrieve - GET</summary>
DicomUID  DicomUID::CompositeInstanceRootRetrieveGet = DicomUID{"1.2.840.10008.5.1.4.1.2.4.3",///NOLINT
                                                                "Composite Instance Root Retrieve - GET",
                                                                DicomUidType::SOPClass, false};

///<summary>SOP Class: Composite Instance Retrieve Without Bulk Data - GET</summary>
DicomUID  DicomUID::CompositeInstanceRetrieveWithoutBulkDataGet = DicomUID{"1.2.840.10008.5.1.4.1.2.5.3",///NOLINT
                                                                           "Composite Instance Retrieve Without Bulk Data - GET",
                                                                           DicomUidType::SOPClass, false};

///<summary>SOP Class: Defined Procedure Protocol Information Model - FIND</summary>
DicomUID  DicomUID::DefinedProcedureProtocolInformationModelFind = DicomUID{"1.2.840.10008.5.1.4.20.1",///NOLINT
                                                                            "Defined Procedure Protocol Information Model - FIND",
                                                                            DicomUidType::SOPClass, false};

///<summary>SOP Class: Defined Procedure Protocol Information Model - MOVE</summary>
DicomUID  DicomUID::DefinedProcedureProtocolInformationModelMove = DicomUID{"1.2.840.10008.5.1.4.20.2",///NOLINT
                                                                            "Defined Procedure Protocol Information Model - MOVE",
                                                                            DicomUidType::SOPClass, false};

///<summary>SOP Class: Defined Procedure Protocol Information Model - GET</summary>
DicomUID  DicomUID::DefinedProcedureProtocolInformationModelGet = DicomUID{"1.2.840.10008.5.1.4.20.3",///NOLINT
                                                                           "Defined Procedure Protocol Information Model - GET",
                                                                           DicomUidType::SOPClass, false};

///<summary>SOP Class: Modality Worklist Information Model - FIND</summary>
DicomUID  DicomUID::ModalityWorklistInformationModelFind = DicomUID{"1.2.840.10008.5.1.4.31",///NOLINT
                                                                    "Modality Worklist Information Model - FIND",
                                                                    DicomUidType::SOPClass, false};

///<summary>Meta SOP Class: General Purpose Worklist Management Meta SOP Class (Retired)</summary>
DicomUID  DicomUID::GeneralPurposeWorklistManagementMetaRETIRED = DicomUID{"1.2.840.10008.5.1.4.32",///NOLINT
                                                                           "General Purpose Worklist Management Meta SOP Class (Retired)",
                                                                           DicomUidType::MetaSOPClass, true};

///<summary>SOP Class: General Purpose Worklist Information Model - FIND (Retired)</summary>
DicomUID  DicomUID::GeneralPurposeWorklistInformationModelFindRETIRED = DicomUID{"1.2.840.10008.5.1.4.32.1",///NOLINT
                                                                                 "General Purpose Worklist Information Model - FIND (Retired)",
                                                                                 DicomUidType::SOPClass, true};

///<summary>SOP Class: General Purpose Scheduled Procedure Step SOP Class (Retired)</summary>
DicomUID  DicomUID::GeneralPurposeScheduledProcedureStepRETIRED = DicomUID{"1.2.840.10008.5.1.4.32.2",///NOLINT
                                                                           "General Purpose Scheduled Procedure Step SOP Class (Retired)",
                                                                           DicomUidType::SOPClass, true};

///<summary>SOP Class: General Purpose Performed Procedure Step SOP Class (Retired)</summary>
DicomUID  DicomUID::GeneralPurposePerformedProcedureStepRETIRED = DicomUID{"1.2.840.10008.5.1.4.32.3",///NOLINT
                                                                           "General Purpose Performed Procedure Step SOP Class (Retired)",
                                                                           DicomUidType::SOPClass, true};

///<summary>SOP Class: Instance Availability Notification SOP Class</summary>
DicomUID  DicomUID::InstanceAvailabilityNotification = DicomUID{"1.2.840.10008.5.1.4.33",///NOLINT
                                                                "Instance Availability Notification SOP Class",
                                                                DicomUidType::SOPClass, false};

///<summary>SOP Class: RT Beams Delivery Instruction Storage - Trial (Retired)</summary>
DicomUID  DicomUID::RTBeamsDeliveryInstructionStorageTrialRETIRED = DicomUID{"1.2.840.10008.5.1.4.34.1",///NOLINT
                                                                             "RT Beams Delivery Instruction Storage - Trial (Retired)",
                                                                             DicomUidType::SOPClass, true};

///<summary>SOP Class: RT Conventional Machine Verification - Trial (Retired)</summary>
DicomUID  DicomUID::RTConventionalMachineVerificationTrialRETIRED = DicomUID{"1.2.840.10008.5.1.4.34.2",///NOLINT
                                                                             "RT Conventional Machine Verification - Trial (Retired)",
                                                                             DicomUidType::SOPClass, true};

///<summary>SOP Class: RT Ion Machine Verification - Trial (Retired)</summary>
DicomUID  DicomUID::RTIonMachineVerificationTrialRETIRED = DicomUID{"1.2.840.10008.5.1.4.34.3",///NOLINT
                                                                    "RT Ion Machine Verification - Trial (Retired)",
                                                                    DicomUidType::SOPClass, true};

///<summary>Service Class: Unified Worklist and Procedure Step Service Class - Trial (Retired)</summary>
DicomUID  DicomUID::UnifiedWorklistAndProcedureStepTrialRETIRED = DicomUID{"1.2.840.10008.5.1.4.34.4",///NOLINT
                                                                           "Unified Worklist and Procedure Step Service Class - Trial (Retired)",
                                                                           DicomUidType::ServiceClass, true};

///<summary>SOP Class: Unified Procedure Step - Push SOP Class - Trial (Retired)</summary>
DicomUID  DicomUID::UnifiedProcedureStepPushTrialRETIRED = DicomUID{"1.2.840.10008.5.1.4.34.4.1",///NOLINT
                                                                    "Unified Procedure Step - Push SOP Class - Trial (Retired)",
                                                                    DicomUidType::SOPClass, true};

///<summary>SOP Class: Unified Procedure Step - Watch SOP Class - Trial (Retired)</summary>
DicomUID  DicomUID::UnifiedProcedureStepWatchTrialRETIRED = DicomUID{"1.2.840.10008.5.1.4.34.4.2",///NOLINT
                                                                     "Unified Procedure Step - Watch SOP Class - Trial (Retired)",
                                                                     DicomUidType::SOPClass, true};

///<summary>SOP Class: Unified Procedure Step - Pull SOP Class - Trial (Retired)</summary>
DicomUID  DicomUID::UnifiedProcedureStepPullTrialRETIRED = DicomUID{"1.2.840.10008.5.1.4.34.4.3",///NOLINT
                                                                    "Unified Procedure Step - Pull SOP Class - Trial (Retired)",
                                                                    DicomUidType::SOPClass, true};

///<summary>SOP Class: Unified Procedure Step - Event SOP Class - Trial (Retired)</summary>
DicomUID  DicomUID::UnifiedProcedureStepEventTrialRETIRED = DicomUID{"1.2.840.10008.5.1.4.34.4.4",///NOLINT
                                                                     "Unified Procedure Step - Event SOP Class - Trial (Retired)",
                                                                     DicomUidType::SOPClass, true};

///<summary>Well-known SOP Instance: UPS Global Subscription SOP Instance</summary>
DicomUID  DicomUID::UPSGlobalSubscriptionInstance = DicomUID{"1.2.840.10008.5.1.4.34.5",///NOLINT
                                                             "UPS Global Subscription SOP Instance",
                                                             DicomUidType::SOPInstance, false};

///<summary>Well-known SOP Instance: UPS Filtered Global Subscription SOP Instance</summary>
DicomUID  DicomUID::UPSFilteredGlobalSubscriptionInstance = DicomUID{"1.2.840.10008.5.1.4.34.5.1",///NOLINT
                                                                     "UPS Filtered Global Subscription SOP Instance",
                                                                     DicomUidType::SOPInstance, false};

///<summary>Service Class: Unified Worklist and Procedure Step Service Class</summary>
DicomUID  DicomUID::UnifiedWorklistAndProcedureStep = DicomUID{"1.2.840.10008.5.1.4.34.6",///NOLINT
                                                               "Unified Worklist and Procedure Step Service Class",
                                                               DicomUidType::ServiceClass, false};

///<summary>SOP Class: Unified Procedure Step - Push SOP Class</summary>
DicomUID  DicomUID::UnifiedProcedureStepPush = DicomUID{"1.2.840.10008.5.1.4.34.6.1",///NOLINT
                                                        "Unified Procedure Step - Push SOP Class",
                                                        DicomUidType::SOPClass, false};

///<summary>SOP Class: Unified Procedure Step - Watch SOP Class</summary>
DicomUID  DicomUID::UnifiedProcedureStepWatch = DicomUID{"1.2.840.10008.5.1.4.34.6.2",///NOLINT
                                                         "Unified Procedure Step - Watch SOP Class",
                                                         DicomUidType::SOPClass, false};

///<summary>SOP Class: Unified Procedure Step - Pull SOP Class</summary>
DicomUID  DicomUID::UnifiedProcedureStepPull = DicomUID{"1.2.840.10008.5.1.4.34.6.3",///NOLINT
                                                        "Unified Procedure Step - Pull SOP Class",
                                                        DicomUidType::SOPClass, false};

///<summary>SOP Class: Unified Procedure Step - Event SOP Class</summary>
DicomUID  DicomUID::UnifiedProcedureStepEvent = DicomUID{"1.2.840.10008.5.1.4.34.6.4",///NOLINT
                                                         "Unified Procedure Step - Event SOP Class",
                                                         DicomUidType::SOPClass, false};

///<summary>SOP Class: Unified Procedure Step - Query SOP Class</summary>
DicomUID  DicomUID::UnifiedProcedureStepQuery = DicomUID{"1.2.840.10008.5.1.4.34.6.5",///NOLINT
                                                         "Unified Procedure Step - Query SOP Class",
                                                         DicomUidType::SOPClass, false};

///<summary>SOP Class: RT Beams Delivery Instruction Storage</summary>
DicomUID  DicomUID::RTBeamsDeliveryInstructionStorage = DicomUID{"1.2.840.10008.5.1.4.34.7",///NOLINT
                                                                 "RT Beams Delivery Instruction Storage",
                                                                 DicomUidType::SOPClass, false};

///<summary>SOP Class: RT Conventional Machine Verification</summary>
DicomUID  DicomUID::RTConventionalMachineVerification = DicomUID{"1.2.840.10008.5.1.4.34.8",///NOLINT
                                                                 "RT Conventional Machine Verification",
                                                                 DicomUidType::SOPClass, false};

///<summary>SOP Class: RT Ion Machine Verification</summary>
DicomUID  DicomUID::RTIonMachineVerification = DicomUID{"1.2.840.10008.5.1.4.34.9",///NOLINT
                                                        "RT Ion Machine Verification", DicomUidType::SOPClass, false};

///<summary>SOP Class: RT Brachy Application Setup Delivery Instruction Storage</summary>
DicomUID  DicomUID::RTBrachyApplicationSetupDeliveryInstructionStorage = DicomUID{"1.2.840.10008.5.1.4.34.10",///NOLINT
                                                                                  "RT Brachy Application Setup Delivery Instruction Storage",
                                                                                  DicomUidType::SOPClass, false};

///<summary>SOP Class: General Relevant Patient Information Query</summary>
DicomUID  DicomUID::GeneralRelevantPatientInformationQuery = DicomUID{"1.2.840.10008.5.1.4.37.1",///NOLINT
                                                                      "General Relevant Patient Information Query",
                                                                      DicomUidType::SOPClass, false};

///<summary>SOP Class: Breast Imaging Relevant Patient Information Query</summary>
DicomUID  DicomUID::BreastImagingRelevantPatientInformationQuery = DicomUID{"1.2.840.10008.5.1.4.37.2",///NOLINT
                                                                            "Breast Imaging Relevant Patient Information Query",
                                                                            DicomUidType::SOPClass, false};

///<summary>SOP Class: Cardiac Relevant Patient Information Query</summary>
DicomUID  DicomUID::CardiacRelevantPatientInformationQuery = DicomUID{"1.2.840.10008.5.1.4.37.3",///NOLINT
                                                                      "Cardiac Relevant Patient Information Query",
                                                                      DicomUidType::SOPClass, false};

///<summary>SOP Class: Hanging Protocol Storage</summary>
DicomUID  DicomUID::HangingProtocolStorage = DicomUID{"1.2.840.10008.5.1.4.38.1",///NOLINT
                                                      "Hanging Protocol Storage", DicomUidType::SOPClass, false};

///<summary>SOP Class: Hanging Protocol Information Model - FIND</summary>
DicomUID  DicomUID::HangingProtocolInformationModelFind = DicomUID{"1.2.840.10008.5.1.4.38.2",///NOLINT
                                                                   "Hanging Protocol Information Model - FIND",
                                                                   DicomUidType::SOPClass, false};

///<summary>SOP Class: Hanging Protocol Information Model - MOVE</summary>
DicomUID  DicomUID::HangingProtocolInformationModelMove = DicomUID{"1.2.840.10008.5.1.4.38.3",///NOLINT
                                                                   "Hanging Protocol Information Model - MOVE",
                                                                   DicomUidType::SOPClass, false};

///<summary>SOP Class: Hanging Protocol Information Model - GET</summary>
DicomUID  DicomUID::HangingProtocolInformationModelGet = DicomUID{"1.2.840.10008.5.1.4.38.4",///NOLINT
                                                                  "Hanging Protocol Information Model - GET",
                                                                  DicomUidType::SOPClass, false};

///<summary>SOP Class: Color Palette Storage</summary>
DicomUID  DicomUID::ColorPaletteStorage = DicomUID{"1.2.840.10008.5.1.4.39.1",///NOLINT
                                                   "Color Palette Storage", DicomUidType::SOPClass, false};

///<summary>SOP Class: Color Palette Query/Retrieve Information Model - FIND</summary>
DicomUID  DicomUID::ColorPaletteQueryRetrieveInformationModelFind = DicomUID{"1.2.840.10008.5.1.4.39.2",///NOLINT
                                                                             "Color Palette Query/Retrieve Information Model - FIND",
                                                                             DicomUidType::SOPClass, false};

///<summary>SOP Class: Color Palette Query/Retrieve Information Model - MOVE</summary>
DicomUID  DicomUID::ColorPaletteQueryRetrieveInformationModelMove = DicomUID{"1.2.840.10008.5.1.4.39.3",///NOLINT
                                                                             "Color Palette Query/Retrieve Information Model - MOVE",
                                                                             DicomUidType::SOPClass, false};

///<summary>SOP Class: Color Palette Query/Retrieve Information Model - GET</summary>
DicomUID  DicomUID::ColorPaletteQueryRetrieveInformationModelGet = DicomUID{"1.2.840.10008.5.1.4.39.4",///NOLINT
                                                                            "Color Palette Query/Retrieve Information Model - GET",
                                                                            DicomUidType::SOPClass, false};

///<summary>SOP Class: Product Characteristics Query SOP Class</summary>
DicomUID  DicomUID::ProductCharacteristicsQuery = DicomUID{"1.2.840.10008.5.1.4.41",///NOLINT
                                                           "Product Characteristics Query SOP Class",
                                                           DicomUidType::SOPClass, false};

///<summary>SOP Class: Substance Approval Query SOP Class</summary>
DicomUID  DicomUID::SubstanceApprovalQuery = DicomUID{"1.2.840.10008.5.1.4.42",///NOLINT
                                                      "Substance Approval Query SOP Class", DicomUidType::SOPClass,
                                                      false};

///<summary>SOP Class: Generic Implant Template Storage</summary>
DicomUID  DicomUID::GenericImplantTemplateStorage = DicomUID{"1.2.840.10008.5.1.4.43.1",///NOLINT
                                                             "Generic Implant Template Storage", DicomUidType::SOPClass,
                                                             false};

///<summary>SOP Class: Generic Implant Template Information Model - FIND</summary>
DicomUID  DicomUID::GenericImplantTemplateInformationModelFind = DicomUID{"1.2.840.10008.5.1.4.43.2",///NOLINT
                                                                          "Generic Implant Template Information Model - FIND",
                                                                          DicomUidType::SOPClass, false};

///<summary>SOP Class: Generic Implant Template Information Model - MOVE</summary>
DicomUID  DicomUID::GenericImplantTemplateInformationModelMove = DicomUID{"1.2.840.10008.5.1.4.43.3",///NOLINT
                                                                          "Generic Implant Template Information Model - MOVE",
                                                                          DicomUidType::SOPClass, false};

///<summary>SOP Class: Generic Implant Template Information Model - GET</summary>
DicomUID  DicomUID::GenericImplantTemplateInformationModelGet = DicomUID{"1.2.840.10008.5.1.4.43.4",///NOLINT
                                                                         "Generic Implant Template Information Model - GET",
                                                                         DicomUidType::SOPClass, false};

///<summary>SOP Class: Implant Assembly Template Storage</summary>
DicomUID  DicomUID::ImplantAssemblyTemplateStorage = DicomUID{"1.2.840.10008.5.1.4.44.1",///NOLINT
                                                              "Implant Assembly Template Storage",
                                                              DicomUidType::SOPClass, false};

///<summary>SOP Class: Implant Assembly Template Information Model - FIND</summary>
DicomUID  DicomUID::ImplantAssemblyTemplateInformationModelFind = DicomUID{"1.2.840.10008.5.1.4.44.2",///NOLINT
                                                                           "Implant Assembly Template Information Model - FIND",
                                                                           DicomUidType::SOPClass, false};

///<summary>SOP Class: Implant Assembly Template Information Model - MOVE</summary>
DicomUID  DicomUID::ImplantAssemblyTemplateInformationModelMove = DicomUID{"1.2.840.10008.5.1.4.44.3",///NOLINT
                                                                           "Implant Assembly Template Information Model - MOVE",
                                                                           DicomUidType::SOPClass, false};

///<summary>SOP Class: Implant Assembly Template Information Model - GET</summary>
DicomUID  DicomUID::ImplantAssemblyTemplateInformationModelGet = DicomUID{"1.2.840.10008.5.1.4.44.4",///NOLINT
                                                                          "Implant Assembly Template Information Model - GET",
                                                                          DicomUidType::SOPClass, false};

///<summary>SOP Class: Implant Template Group Storage</summary>
DicomUID  DicomUID::ImplantTemplateGroupStorage = DicomUID{"1.2.840.10008.5.1.4.45.1",///NOLINT
                                                           "Implant Template Group Storage", DicomUidType::SOPClass,
                                                           false};

///<summary>SOP Class: Implant Template Group Information Model - FIND</summary>
DicomUID  DicomUID::ImplantTemplateGroupInformationModelFind = DicomUID{"1.2.840.10008.5.1.4.45.2",///NOLINT
                                                                        "Implant Template Group Information Model - FIND",
                                                                        DicomUidType::SOPClass, false};

///<summary>SOP Class: Implant Template Group Information Model - MOVE</summary>
DicomUID  DicomUID::ImplantTemplateGroupInformationModelMove = DicomUID{"1.2.840.10008.5.1.4.45.3",///NOLINT
                                                                        "Implant Template Group Information Model - MOVE",
                                                                        DicomUidType::SOPClass, false};

///<summary>SOP Class: Implant Template Group Information Model - GET</summary>
DicomUID  DicomUID::ImplantTemplateGroupInformationModelGet = DicomUID{"1.2.840.10008.5.1.4.45.4",///NOLINT
                                                                       "Implant Template Group Information Model - GET",
                                                                       DicomUidType::SOPClass, false};

///<summary>Application Hosting Model: Native DICOM Model</summary>
DicomUID  DicomUID::NativeDICOMModel = DicomUID{"1.2.840.10008.7.1.1",///NOLINT
                                                "Native DICOM Model", DicomUidType::ApplicationHostingModel, false};

///<summary>Application Hosting Model: Abstract Multi-Dimensional Image Model</summary>
DicomUID  DicomUID::AbstractMultiDimensionalImageModel = DicomUID{"1.2.840.10008.7.1.2",///NOLINT
                                                                  "Abstract Multi-Dimensional Image Model",
                                                                  DicomUidType::ApplicationHostingModel, false};

///<summary>Mapping Resource: DICOM Content Mapping Resource</summary>
DicomUID  DicomUID::DICOMContentMappingResource = DicomUID{"1.2.840.10008.8.1.1",///NOLINT
                                                           "DICOM Content Mapping Resource",
                                                           DicomUidType::MappingResource, false};

///<summary>SOP Class: Video Endoscopic Image Real-Time Communication</summary>
DicomUID  DicomUID::VideoEndoscopicImageRealTimeCommunication = DicomUID{"1.2.840.10008.10.1",///NOLINT
                                                                         "Video Endoscopic Image Real-Time Communication",
                                                                         DicomUidType::SOPClass, false};

///<summary>SOP Class: Video Photographic Image Real-Time Communication</summary>
DicomUID  DicomUID::VideoPhotographicImageRealTimeCommunication = DicomUID{"1.2.840.10008.10.2",///NOLINT
                                                                           "Video Photographic Image Real-Time Communication",
                                                                           DicomUidType::SOPClass, false};

///<summary>SOP Class: Audio Waveform Real-Time Communication</summary>
DicomUID  DicomUID::AudioWaveformRealTimeCommunication = DicomUID{"1.2.840.10008.10.3",///NOLINT
                                                                  "Audio Waveform Real-Time Communication",
                                                                  DicomUidType::SOPClass, false};

///<summary>SOP Class: Rendition Selection Document Real-Time Communication</summary>
DicomUID  DicomUID::RenditionSelectionDocumentRealTimeCommunication = DicomUID{"1.2.840.10008.10.4",///NOLINT
                                                                               "Rendition Selection Document Real-Time Communication",
                                                                               DicomUidType::SOPClass, false};

///<summary>LDAP OID: dicomDeviceName</summary>
DicomUID  DicomUID::dicomDeviceName = DicomUID{"1.2.840.10008.15.0.3.1",///NOLINT
                                               "dicomDeviceName", DicomUidType::LDAP, false};

///<summary>LDAP OID: dicomDescription</summary>
DicomUID  DicomUID::dicomDescription = DicomUID{"1.2.840.10008.15.0.3.2",///NOLINT
                                                "dicomDescription", DicomUidType::LDAP, false};

///<summary>LDAP OID: dicomManufacturer</summary>
DicomUID  DicomUID::dicomManufacturer = DicomUID{"1.2.840.10008.15.0.3.3",///NOLINT
                                                 "dicomManufacturer", DicomUidType::LDAP, false};

///<summary>LDAP OID: dicomManufacturerModelName</summary>
DicomUID  DicomUID::dicomManufacturerModelName = DicomUID{"1.2.840.10008.15.0.3.4",///NOLINT
                                                          "dicomManufacturerModelName", DicomUidType::LDAP, false};

///<summary>LDAP OID: dicomSoftwareVersion</summary>
DicomUID  DicomUID::dicomSoftwareVersion = DicomUID{"1.2.840.10008.15.0.3.5",///NOLINT
                                                    "dicomSoftwareVersion", DicomUidType::LDAP, false};

///<summary>LDAP OID: dicomVendorData</summary>
DicomUID  DicomUID::dicomVendorData = DicomUID{"1.2.840.10008.15.0.3.6",///NOLINT
                                               "dicomVendorData", DicomUidType::LDAP, false};

///<summary>LDAP OID: dicomAETitle</summary>
DicomUID  DicomUID::dicomAETitle = DicomUID{"1.2.840.10008.15.0.3.7",///NOLINT
                                            "dicomAETitle", DicomUidType::LDAP, false};

///<summary>LDAP OID: dicomNetworkConnectionReference</summary>
DicomUID  DicomUID::dicomNetworkConnectionReference = DicomUID{"1.2.840.10008.15.0.3.8",///NOLINT
                                                               "dicomNetworkConnectionReference", DicomUidType::LDAP,
                                                               false};

///<summary>LDAP OID: dicomApplicationCluster</summary>
DicomUID  DicomUID::dicomApplicationCluster = DicomUID{"1.2.840.10008.15.0.3.9",///NOLINT
                                                       "dicomApplicationCluster", DicomUidType::LDAP, false};

///<summary>LDAP OID: dicomAssociationInitiator</summary>
DicomUID  DicomUID::dicomAssociationInitiator = DicomUID{"1.2.840.10008.15.0.3.10",///NOLINT
                                                         "dicomAssociationInitiator", DicomUidType::LDAP, false};

///<summary>LDAP OID: dicomAssociationAcceptor</summary>
DicomUID  DicomUID::dicomAssociationAcceptor = DicomUID{"1.2.840.10008.15.0.3.11",///NOLINT
                                                        "dicomAssociationAcceptor", DicomUidType::LDAP, false};

///<summary>LDAP OID: dicomHostname</summary>
DicomUID  DicomUID::dicomHostname = DicomUID{"1.2.840.10008.15.0.3.12",///NOLINT
                                             "dicomHostname", DicomUidType::LDAP, false};

///<summary>LDAP OID: dicomPort</summary>
DicomUID  DicomUID::dicomPort = DicomUID{"1.2.840.10008.15.0.3.13",///NOLINT
                                         "dicomPort", DicomUidType::LDAP, false};

///<summary>LDAP OID: dicomSOPClass</summary>
DicomUID  DicomUID::dicomSOPClass = DicomUID{"1.2.840.10008.15.0.3.14",///NOLINT
                                             "dicomSOPClass", DicomUidType::LDAP, false};

///<summary>LDAP OID: dicomTransferRole</summary>
DicomUID  DicomUID::dicomTransferRole = DicomUID{"1.2.840.10008.15.0.3.15",///NOLINT
                                                 "dicomTransferRole", DicomUidType::LDAP, false};

///<summary>LDAP OID: dicomTransferSyntax</summary>
DicomUID  DicomUID::dicomTransferSyntax = DicomUID{"1.2.840.10008.15.0.3.16",///NOLINT
                                                   "dicomTransferSyntax", DicomUidType::LDAP, false};

///<summary>LDAP OID: dicomPrimaryDeviceType</summary>
DicomUID  DicomUID::dicomPrimaryDeviceType = DicomUID{"1.2.840.10008.15.0.3.17",///NOLINT
                                                      "dicomPrimaryDeviceType", DicomUidType::LDAP, false};

///<summary>LDAP OID: dicomRelatedDeviceReference</summary>
DicomUID  DicomUID::dicomRelatedDeviceReference = DicomUID{"1.2.840.10008.15.0.3.18",///NOLINT
                                                           "dicomRelatedDeviceReference", DicomUidType::LDAP, false};

///<summary>LDAP OID: dicomPreferredCalledAETitle</summary>
DicomUID  DicomUID::dicomPreferredCalledAETitle = DicomUID{"1.2.840.10008.15.0.3.19",///NOLINT
                                                           "dicomPreferredCalledAETitle", DicomUidType::LDAP, false};

///<summary>LDAP OID: dicomTLSCyphersuite</summary>
DicomUID  DicomUID::dicomTLSCyphersuite = DicomUID{"1.2.840.10008.15.0.3.20",///NOLINT
                                                   "dicomTLSCyphersuite", DicomUidType::LDAP, false};

///<summary>LDAP OID: dicomAuthorizedNodeCertificateReference</summary>
DicomUID  DicomUID::dicomAuthorizedNodeCertificateReference = DicomUID{"1.2.840.10008.15.0.3.21",///NOLINT
                                                                       "dicomAuthorizedNodeCertificateReference",
                                                                       DicomUidType::LDAP, false};

///<summary>LDAP OID: dicomThisNodeCertificateReference</summary>
DicomUID  DicomUID::dicomThisNodeCertificateReference = DicomUID{"1.2.840.10008.15.0.3.22",///NOLINT
                                                                 "dicomThisNodeCertificateReference",
                                                                 DicomUidType::LDAP, false};

///<summary>LDAP OID: dicomInstalled</summary>
DicomUID  DicomUID::dicomInstalled = DicomUID{"1.2.840.10008.15.0.3.23",///NOLINT
                                              "dicomInstalled", DicomUidType::LDAP, false};

///<summary>LDAP OID: dicomStationName</summary>
DicomUID  DicomUID::dicomStationName = DicomUID{"1.2.840.10008.15.0.3.24",///NOLINT
                                                "dicomStationName", DicomUidType::LDAP, false};

///<summary>LDAP OID: dicomDeviceSerialNumber</summary>
DicomUID  DicomUID::dicomDeviceSerialNumber = DicomUID{"1.2.840.10008.15.0.3.25",///NOLINT
                                                       "dicomDeviceSerialNumber", DicomUidType::LDAP, false};

///<summary>LDAP OID: dicomInstitutionName</summary>
DicomUID  DicomUID::dicomInstitutionName = DicomUID{"1.2.840.10008.15.0.3.26",///NOLINT
                                                    "dicomInstitutionName", DicomUidType::LDAP, false};

///<summary>LDAP OID: dicomInstitutionAddress</summary>
DicomUID  DicomUID::dicomInstitutionAddress = DicomUID{"1.2.840.10008.15.0.3.27",///NOLINT
                                                       "dicomInstitutionAddress", DicomUidType::LDAP, false};

///<summary>LDAP OID: dicomInstitutionDepartmentName</summary>
DicomUID  DicomUID::dicomInstitutionDepartmentName = DicomUID{"1.2.840.10008.15.0.3.28",///NOLINT
                                                              "dicomInstitutionDepartmentName", DicomUidType::LDAP,
                                                              false};

///<summary>LDAP OID: dicomIssuerOfPatientID</summary>
DicomUID  DicomUID::dicomIssuerOfPatientID = DicomUID{"1.2.840.10008.15.0.3.29",///NOLINT
                                                      "dicomIssuerOfPatientID", DicomUidType::LDAP, false};

///<summary>LDAP OID: dicomPreferredCallingAETitle</summary>
DicomUID  DicomUID::dicomPreferredCallingAETitle = DicomUID{"1.2.840.10008.15.0.3.30",///NOLINT
                                                            "dicomPreferredCallingAETitle", DicomUidType::LDAP, false};

///<summary>LDAP OID: dicomSupportedCharacterSet</summary>
DicomUID  DicomUID::dicomSupportedCharacterSet = DicomUID{"1.2.840.10008.15.0.3.31",///NOLINT
                                                          "dicomSupportedCharacterSet", DicomUidType::LDAP, false};

///<summary>LDAP OID: dicomConfigurationRoot</summary>
DicomUID  DicomUID::dicomConfigurationRoot = DicomUID{"1.2.840.10008.15.0.4.1",///NOLINT
                                                      "dicomConfigurationRoot", DicomUidType::LDAP, false};

///<summary>LDAP OID: dicomDevicesRoot</summary>
DicomUID  DicomUID::dicomDevicesRoot = DicomUID{"1.2.840.10008.15.0.4.2",///NOLINT
                                                "dicomDevicesRoot", DicomUidType::LDAP, false};

///<summary>LDAP OID: dicomUniqueAETitlesRegistryRoot</summary>
DicomUID  DicomUID::dicomUniqueAETitlesRegistryRoot = DicomUID{"1.2.840.10008.15.0.4.3",///NOLINT
                                                               "dicomUniqueAETitlesRegistryRoot", DicomUidType::LDAP,
                                                               false};

///<summary>LDAP OID: dicomDevice</summary>
DicomUID  DicomUID::dicomDevice = DicomUID{"1.2.840.10008.15.0.4.4",///NOLINT
                                           "dicomDevice", DicomUidType::LDAP, false};

///<summary>LDAP OID: dicomNetworkAE</summary>
DicomUID  DicomUID::dicomNetworkAE = DicomUID{"1.2.840.10008.15.0.4.5",///NOLINT
                                              "dicomNetworkAE", DicomUidType::LDAP, false};

///<summary>LDAP OID: dicomNetworkConnection</summary>
DicomUID  DicomUID::dicomNetworkConnection = DicomUID{"1.2.840.10008.15.0.4.6",///NOLINT
                                                      "dicomNetworkConnection", DicomUidType::LDAP, false};

///<summary>LDAP OID: dicomUniqueAETitle</summary>
DicomUID  DicomUID::dicomUniqueAETitle = DicomUID{"1.2.840.10008.15.0.4.7",///NOLINT
                                                  "dicomUniqueAETitle", DicomUidType::LDAP, false};

///<summary>LDAP OID: dicomTransferCapability</summary>
DicomUID  DicomUID::dicomTransferCapability = DicomUID{"1.2.840.10008.15.0.4.8",///NOLINT
                                                       "dicomTransferCapability", DicomUidType::LDAP, false};

///<summary>Synchronization Frame of Reference: Universal Coordinated Time</summary>
DicomUID  DicomUID::UTC = DicomUID{"1.2.840.10008.15.1.1",///NOLINT
                                   "Universal Coordinated Time", DicomUidType::FrameOfReference, false};

///<summary>Context Group Name: Anatomic Modifier (2)</summary>
DicomUID  DicomUID::AnatomicModifier2 = DicomUID{"1.2.840.10008.6.1.1",///NOLINT
                                                 "Anatomic Modifier (2)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Anatomic Region (4)</summary>
DicomUID  DicomUID::AnatomicRegion4 = DicomUID{"1.2.840.10008.6.1.2",///NOLINT
                                               "Anatomic Region (4)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Transducer Approach (5)</summary>
DicomUID  DicomUID::TransducerApproach5 = DicomUID{"1.2.840.10008.6.1.3",///NOLINT
                                                   "Transducer Approach (5)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Transducer Orientation (6)</summary>
DicomUID  DicomUID::TransducerOrientation6 = DicomUID{"1.2.840.10008.6.1.4",///NOLINT
                                                      "Transducer Orientation (6)", DicomUidType::ContextGroupName,
                                                      false};

///<summary>Context Group Name: Ultrasound Beam Path (7)</summary>
DicomUID  DicomUID::UltrasoundBeamPath7 = DicomUID{"1.2.840.10008.6.1.5",///NOLINT
                                                   "Ultrasound Beam Path (7)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Angiographic Interventional Devices (8)</summary>
DicomUID  DicomUID::AngiographicInterventionalDevices8 = DicomUID{"1.2.840.10008.6.1.6",///NOLINT
                                                                  "Angiographic Interventional Devices (8)",
                                                                  DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Image Guided Therapeutic Procedures (9)</summary>
DicomUID  DicomUID::ImageGuidedTherapeuticProcedures9 = DicomUID{"1.2.840.10008.6.1.7",///NOLINT
                                                                 "Image Guided Therapeutic Procedures (9)",
                                                                 DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Interventional Drug (10)</summary>
DicomUID  DicomUID::InterventionalDrug10 = DicomUID{"1.2.840.10008.6.1.8",///NOLINT
                                                    "Interventional Drug (10)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Route of Administration (11)</summary>
DicomUID  DicomUID::RouteOfAdministration11 = DicomUID{"1.2.840.10008.6.1.9",///NOLINT
                                                       "Route of Administration (11)", DicomUidType::ContextGroupName,
                                                       false};

///<summary>Context Group Name: Radiographic Contrast Agent (12)</summary>
DicomUID  DicomUID::RadiographicContrastAgent12 = DicomUID{"1.2.840.10008.6.1.10",///NOLINT
                                                           "Radiographic Contrast Agent (12)",
                                                           DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Radiographic Contrast Agent Ingredient (13)</summary>
DicomUID  DicomUID::RadiographicContrastAgentIngredient13 = DicomUID{"1.2.840.10008.6.1.11",///NOLINT
                                                                     "Radiographic Contrast Agent Ingredient (13)",
                                                                     DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Isotopes in Radiopharmaceuticals (18)</summary>
DicomUID  DicomUID::IsotopesInRadiopharmaceuticals18 = DicomUID{"1.2.840.10008.6.1.12",///NOLINT
                                                                "Isotopes in Radiopharmaceuticals (18)",
                                                                DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Patient Orientation (19)</summary>
DicomUID  DicomUID::PatientOrientation19 = DicomUID{"1.2.840.10008.6.1.13",///NOLINT
                                                    "Patient Orientation (19)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Patient Orientation Modifier (20)</summary>
DicomUID  DicomUID::PatientOrientationModifier20 = DicomUID{"1.2.840.10008.6.1.14",///NOLINT
                                                            "Patient Orientation Modifier (20)",
                                                            DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Patient Equipment Relationship (21)</summary>
DicomUID  DicomUID::PatientEquipmentRelationship21 = DicomUID{"1.2.840.10008.6.1.15",///NOLINT
                                                              "Patient Equipment Relationship (21)",
                                                              DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Cranio-Caudad Angulation (23)</summary>
DicomUID  DicomUID::CranioCaudadAngulation23 = DicomUID{"1.2.840.10008.6.1.16",///NOLINT
                                                        "Cranio-Caudad Angulation (23)", DicomUidType::ContextGroupName,
                                                        false};

///<summary>Context Group Name: Radiopharmaceuticals (25)</summary>
DicomUID  DicomUID::Radiopharmaceuticals25 = DicomUID{"1.2.840.10008.6.1.17",///NOLINT
                                                      "Radiopharmaceuticals (25)", DicomUidType::ContextGroupName,
                                                      false};

///<summary>Context Group Name: Nuclear Medicine Projections (26)</summary>
DicomUID  DicomUID::NuclearMedicineProjections26 = DicomUID{"1.2.840.10008.6.1.18",///NOLINT
                                                            "Nuclear Medicine Projections (26)",
                                                            DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Acquisition Modality (29)</summary>
DicomUID  DicomUID::AcquisitionModality29 = DicomUID{"1.2.840.10008.6.1.19",///NOLINT
                                                     "Acquisition Modality (29)", DicomUidType::ContextGroupName,
                                                     false};

///<summary>Context Group Name: DICOM Devices (30)</summary>
DicomUID  DicomUID::DICOMDevices30 = DicomUID{"1.2.840.10008.6.1.20",///NOLINT
                                              "DICOM Devices (30)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Abstract Priors (31)</summary>
DicomUID  DicomUID::AbstractPriors31 = DicomUID{"1.2.840.10008.6.1.21",///NOLINT
                                                "Abstract Priors (31)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Numeric Value Qualifier (42)</summary>
DicomUID  DicomUID::NumericValueQualifier42 = DicomUID{"1.2.840.10008.6.1.22",///NOLINT
                                                       "Numeric Value Qualifier (42)", DicomUidType::ContextGroupName,
                                                       false};

///<summary>Context Group Name: Units of Measurement (82)</summary>
DicomUID  DicomUID::UnitsOfMeasurement82 = DicomUID{"1.2.840.10008.6.1.23",///NOLINT
                                                    "Units of Measurement (82)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Units for Real World Value Mapping (83)</summary>
DicomUID  DicomUID::UnitsForRealWorldValueMapping83 = DicomUID{"1.2.840.10008.6.1.24",///NOLINT
                                                               "Units for Real World Value Mapping (83)",
                                                               DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Level of Significance (220)</summary>
DicomUID  DicomUID::LevelOfSignificance220 = DicomUID{"1.2.840.10008.6.1.25",///NOLINT
                                                      "Level of Significance (220)", DicomUidType::ContextGroupName,
                                                      false};

///<summary>Context Group Name: Measurement Range Concepts (221)</summary>
DicomUID  DicomUID::MeasurementRangeConcepts221 = DicomUID{"1.2.840.10008.6.1.26",///NOLINT
                                                           "Measurement Range Concepts (221)",
                                                           DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Normality Codes (222)</summary>
DicomUID  DicomUID::NormalityCodes222 = DicomUID{"1.2.840.10008.6.1.27",///NOLINT
                                                 "Normality Codes (222)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Normal Range Values (223)</summary>
DicomUID  DicomUID::NormalRangeValues223 = DicomUID{"1.2.840.10008.6.1.28",///NOLINT
                                                    "Normal Range Values (223)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Selection Method (224)</summary>
DicomUID  DicomUID::SelectionMethod224 = DicomUID{"1.2.840.10008.6.1.29",///NOLINT
                                                  "Selection Method (224)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Measurement Uncertainty Concepts (225)</summary>
DicomUID  DicomUID::MeasurementUncertaintyConcepts225 = DicomUID{"1.2.840.10008.6.1.30",///NOLINT
                                                                 "Measurement Uncertainty Concepts (225)",
                                                                 DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Population Statistical Descriptors (226)</summary>
DicomUID  DicomUID::PopulationStatisticalDescriptors226 = DicomUID{"1.2.840.10008.6.1.31",///NOLINT
                                                                   "Population Statistical Descriptors (226)",
                                                                   DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Sample Statistical Descriptors (227)</summary>
DicomUID  DicomUID::SampleStatisticalDescriptors227 = DicomUID{"1.2.840.10008.6.1.32",///NOLINT
                                                               "Sample Statistical Descriptors (227)",
                                                               DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Equation or Table (228)</summary>
DicomUID  DicomUID::EquationOrTable228 = DicomUID{"1.2.840.10008.6.1.33",///NOLINT
                                                  "Equation or Table (228)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Yes-No (230)</summary>
DicomUID  DicomUID::YesNo230 = DicomUID{"1.2.840.10008.6.1.34",///NOLINT
                                        "Yes-No (230)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Present-Absent (240)</summary>
DicomUID  DicomUID::PresentAbsent240 = DicomUID{"1.2.840.10008.6.1.35",///NOLINT
                                                "Present-Absent (240)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Normal-Abnormal (242)</summary>
DicomUID  DicomUID::NormalAbnormal242 = DicomUID{"1.2.840.10008.6.1.36",///NOLINT
                                                 "Normal-Abnormal (242)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Laterality (244)</summary>
DicomUID  DicomUID::Laterality244 = DicomUID{"1.2.840.10008.6.1.37",///NOLINT
                                             "Laterality (244)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Positive-Negative (250)</summary>
DicomUID  DicomUID::PositiveNegative250 = DicomUID{"1.2.840.10008.6.1.38",///NOLINT
                                                   "Positive-Negative (250)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Severity of Complication (251)</summary>
DicomUID  DicomUID::SeverityOfComplication251 = DicomUID{"1.2.840.10008.6.1.39",///NOLINT
                                                         "Severity of Complication (251)",
                                                         DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Observer Type (270)</summary>
DicomUID  DicomUID::ObserverType270 = DicomUID{"1.2.840.10008.6.1.40",///NOLINT
                                               "Observer Type (270)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Observation Subject Class (271)</summary>
DicomUID  DicomUID::ObservationSubjectClass271 = DicomUID{"1.2.840.10008.6.1.41",///NOLINT
                                                          "Observation Subject Class (271)",
                                                          DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Audio Channel Source (3000)</summary>
DicomUID  DicomUID::AudioChannelSource3000 = DicomUID{"1.2.840.10008.6.1.42",///NOLINT
                                                      "Audio Channel Source (3000)", DicomUidType::ContextGroupName,
                                                      false};

///<summary>Context Group Name: ECG Leads (3001)</summary>
DicomUID  DicomUID::ECGLeads3001 = DicomUID{"1.2.840.10008.6.1.43",///NOLINT
                                            "ECG Leads (3001)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Hemodynamic Waveform Sources (3003)</summary>
DicomUID  DicomUID::HemodynamicWaveformSources3003 = DicomUID{"1.2.840.10008.6.1.44",///NOLINT
                                                              "Hemodynamic Waveform Sources (3003)",
                                                              DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Cardiovascular Anatomic Locations (3010)</summary>
DicomUID  DicomUID::CardiovascularAnatomicLocations3010 = DicomUID{"1.2.840.10008.6.1.45",///NOLINT
                                                                   "Cardiovascular Anatomic Locations (3010)",
                                                                   DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Electrophysiology Anatomic Locations (3011)</summary>
DicomUID  DicomUID::ElectrophysiologyAnatomicLocations3011 = DicomUID{"1.2.840.10008.6.1.46",///NOLINT
                                                                      "Electrophysiology Anatomic Locations (3011)",
                                                                      DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Coronary Artery Segments (3014)</summary>
DicomUID  DicomUID::CoronaryArterySegments3014 = DicomUID{"1.2.840.10008.6.1.47",///NOLINT
                                                          "Coronary Artery Segments (3014)",
                                                          DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Coronary Arteries (3015)</summary>
DicomUID  DicomUID::CoronaryArteries3015 = DicomUID{"1.2.840.10008.6.1.48",///NOLINT
                                                    "Coronary Arteries (3015)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Cardiovascular Anatomic Location Modifiers (3019)</summary>
DicomUID  DicomUID::CardiovascularAnatomicLocationModifiers3019 = DicomUID{"1.2.840.10008.6.1.49",///NOLINT
                                                                           "Cardiovascular Anatomic Location Modifiers (3019)",
                                                                           DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Cardiology Units of Measurement (Retired) (3082)</summary>
DicomUID  DicomUID::CardiologyUnitsOfMeasurement3082RETIRED = DicomUID{"1.2.840.10008.6.1.50",///NOLINT
                                                                       "Cardiology Units of Measurement (Retired) (3082)",
                                                                       DicomUidType::ContextGroupName, true};

///<summary>Context Group Name: Time Synchronization Channel Types (3090)</summary>
DicomUID  DicomUID::TimeSynchronizationChannelTypes3090 = DicomUID{"1.2.840.10008.6.1.51",///NOLINT
                                                                   "Time Synchronization Channel Types (3090)",
                                                                   DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Cardiac Procedural State Values (3101)</summary>
DicomUID  DicomUID::CardiacProceduralStateValues3101 = DicomUID{"1.2.840.10008.6.1.52",///NOLINT
                                                                "Cardiac Procedural State Values (3101)",
                                                                DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Electrophysiology Measurement Functions and Techniques (3240)</summary>
DicomUID  DicomUID::ElectrophysiologyMeasurementFunctionsAndTechniques3240 = DicomUID{"1.2.840.10008.6.1.53",///NOLINT
                                                                                      "Electrophysiology Measurement Functions and Techniques (3240)",
                                                                                      DicomUidType::ContextGroupName,
                                                                                      false};

///<summary>Context Group Name: Hemodynamic Measurement Techniques (3241)</summary>
DicomUID  DicomUID::HemodynamicMeasurementTechniques3241 = DicomUID{"1.2.840.10008.6.1.54",///NOLINT
                                                                    "Hemodynamic Measurement Techniques (3241)",
                                                                    DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Catheterization Procedure Phase (3250)</summary>
DicomUID  DicomUID::CatheterizationProcedurePhase3250 = DicomUID{"1.2.840.10008.6.1.55",///NOLINT
                                                                 "Catheterization Procedure Phase (3250)",
                                                                 DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Electrophysiology Procedure Phase (3254)</summary>
DicomUID  DicomUID::ElectrophysiologyProcedurePhase3254 = DicomUID{"1.2.840.10008.6.1.56",///NOLINT
                                                                   "Electrophysiology Procedure Phase (3254)",
                                                                   DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Stress Protocols (3261)</summary>
DicomUID  DicomUID::StressProtocols3261 = DicomUID{"1.2.840.10008.6.1.57",///NOLINT
                                                   "Stress Protocols (3261)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: ECG Patient State Values (3262)</summary>
DicomUID  DicomUID::ECGPatientStateValues3262 = DicomUID{"1.2.840.10008.6.1.58",///NOLINT
                                                         "ECG Patient State Values (3262)",
                                                         DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Electrode Placement Values (3263)</summary>
DicomUID  DicomUID::ElectrodePlacementValues3263 = DicomUID{"1.2.840.10008.6.1.59",///NOLINT
                                                            "Electrode Placement Values (3263)",
                                                            DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: XYZ Electrode Placement Values (Retired) (3264)</summary>
DicomUID  DicomUID::XYZElectrodePlacementValues3264RETIRED = DicomUID{"1.2.840.10008.6.1.60",///NOLINT
                                                                      "XYZ Electrode Placement Values (Retired) (3264)",
                                                                      DicomUidType::ContextGroupName, true};

///<summary>Context Group Name: Hemodynamic Physiological Challenges (3271)</summary>
DicomUID  DicomUID::HemodynamicPhysiologicalChallenges3271 = DicomUID{"1.2.840.10008.6.1.61",///NOLINT
                                                                      "Hemodynamic Physiological Challenges (3271)",
                                                                      DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: ECG Annotations (3335)</summary>
DicomUID  DicomUID::ECGAnnotations3335 = DicomUID{"1.2.840.10008.6.1.62",///NOLINT
                                                  "ECG Annotations (3335)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Hemodynamic Annotations (3337)</summary>
DicomUID  DicomUID::HemodynamicAnnotations3337 = DicomUID{"1.2.840.10008.6.1.63",///NOLINT
                                                          "Hemodynamic Annotations (3337)",
                                                          DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Electrophysiology Annotations (3339)</summary>
DicomUID  DicomUID::ElectrophysiologyAnnotations3339 = DicomUID{"1.2.840.10008.6.1.64",///NOLINT
                                                                "Electrophysiology Annotations (3339)",
                                                                DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Procedure Log Titles (3400)</summary>
DicomUID  DicomUID::ProcedureLogTitles3400 = DicomUID{"1.2.840.10008.6.1.65",///NOLINT
                                                      "Procedure Log Titles (3400)", DicomUidType::ContextGroupName,
                                                      false};

///<summary>Context Group Name: Types of Log Notes (3401)</summary>
DicomUID  DicomUID::TypesOfLogNotes3401 = DicomUID{"1.2.840.10008.6.1.66",///NOLINT
                                                   "Types of Log Notes (3401)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Patient Status and Events (3402)</summary>
DicomUID  DicomUID::PatientStatusAndEvents3402 = DicomUID{"1.2.840.10008.6.1.67",///NOLINT
                                                          "Patient Status and Events (3402)",
                                                          DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Percutaneous Entry (3403)</summary>
DicomUID  DicomUID::PercutaneousEntry3403 = DicomUID{"1.2.840.10008.6.1.68",///NOLINT
                                                     "Percutaneous Entry (3403)", DicomUidType::ContextGroupName,
                                                     false};

///<summary>Context Group Name: Staff Actions (3404)</summary>
DicomUID  DicomUID::StaffActions3404 = DicomUID{"1.2.840.10008.6.1.69",///NOLINT
                                                "Staff Actions (3404)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Procedure Action Values (3405)</summary>
DicomUID  DicomUID::ProcedureActionValues3405 = DicomUID{"1.2.840.10008.6.1.70",///NOLINT
                                                         "Procedure Action Values (3405)",
                                                         DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Non-coronary Transcatheter Interventions (3406)</summary>
DicomUID  DicomUID::NonCoronaryTranscatheterInterventions3406 = DicomUID{"1.2.840.10008.6.1.71",///NOLINT
                                                                         "Non-coronary Transcatheter Interventions (3406)",
                                                                         DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Purpose of Reference to Object (3407)</summary>
DicomUID  DicomUID::PurposeOfReferenceToObject3407 = DicomUID{"1.2.840.10008.6.1.72",///NOLINT
                                                              "Purpose of Reference to Object (3407)",
                                                              DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Actions With Consumables (3408)</summary>
DicomUID  DicomUID::ActionsWithConsumables3408 = DicomUID{"1.2.840.10008.6.1.73",///NOLINT
                                                          "Actions With Consumables (3408)",
                                                          DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Administration of Drugs/Contrast (3409)</summary>
DicomUID  DicomUID::AdministrationOfDrugsContrast3409 = DicomUID{"1.2.840.10008.6.1.74",///NOLINT
                                                                 "Administration of Drugs/Contrast (3409)",
                                                                 DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Numeric Parameters of Drugs/Contrast (3410)</summary>
DicomUID  DicomUID::NumericParametersOfDrugsContrast3410 = DicomUID{"1.2.840.10008.6.1.75",///NOLINT
                                                                    "Numeric Parameters of Drugs/Contrast (3410)",
                                                                    DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Intracoronary Devices (3411)</summary>
DicomUID  DicomUID::IntracoronaryDevices3411 = DicomUID{"1.2.840.10008.6.1.76",///NOLINT
                                                        "Intracoronary Devices (3411)", DicomUidType::ContextGroupName,
                                                        false};

///<summary>Context Group Name: Intervention Actions and Status (3412)</summary>
DicomUID  DicomUID::InterventionActionsAndStatus3412 = DicomUID{"1.2.840.10008.6.1.77",///NOLINT
                                                                "Intervention Actions and Status (3412)",
                                                                DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Adverse Outcomes (3413)</summary>
DicomUID  DicomUID::AdverseOutcomes3413 = DicomUID{"1.2.840.10008.6.1.78",///NOLINT
                                                   "Adverse Outcomes (3413)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Procedure Urgency (3414)</summary>
DicomUID  DicomUID::ProcedureUrgency3414 = DicomUID{"1.2.840.10008.6.1.79",///NOLINT
                                                    "Procedure Urgency (3414)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Cardiac Rhythms (3415)</summary>
DicomUID  DicomUID::CardiacRhythms3415 = DicomUID{"1.2.840.10008.6.1.80",///NOLINT
                                                  "Cardiac Rhythms (3415)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Respiration Rhythms (3416)</summary>
DicomUID  DicomUID::RespirationRhythms3416 = DicomUID{"1.2.840.10008.6.1.81",///NOLINT
                                                      "Respiration Rhythms (3416)", DicomUidType::ContextGroupName,
                                                      false};

///<summary>Context Group Name: Lesion Risk (3418)</summary>
DicomUID  DicomUID::LesionRisk3418 = DicomUID{"1.2.840.10008.6.1.82",///NOLINT
                                              "Lesion Risk (3418)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Findings Titles (3419)</summary>
DicomUID  DicomUID::FindingsTitles3419 = DicomUID{"1.2.840.10008.6.1.83",///NOLINT
                                                  "Findings Titles (3419)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Procedure Action (3421)</summary>
DicomUID  DicomUID::ProcedureAction3421 = DicomUID{"1.2.840.10008.6.1.84",///NOLINT
                                                   "Procedure Action (3421)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Device Use Actions (3422)</summary>
DicomUID  DicomUID::DeviceUseActions3422 = DicomUID{"1.2.840.10008.6.1.85",///NOLINT
                                                    "Device Use Actions (3422)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Numeric Device Characteristics (3423)</summary>
DicomUID  DicomUID::NumericDeviceCharacteristics3423 = DicomUID{"1.2.840.10008.6.1.86",///NOLINT
                                                                "Numeric Device Characteristics (3423)",
                                                                DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Intervention Parameters (3425)</summary>
DicomUID  DicomUID::InterventionParameters3425 = DicomUID{"1.2.840.10008.6.1.87",///NOLINT
                                                          "Intervention Parameters (3425)",
                                                          DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Consumables Parameters (3426)</summary>
DicomUID  DicomUID::ConsumablesParameters3426 = DicomUID{"1.2.840.10008.6.1.88",///NOLINT
                                                         "Consumables Parameters (3426)",
                                                         DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Equipment Events (3427)</summary>
DicomUID  DicomUID::EquipmentEvents3427 = DicomUID{"1.2.840.10008.6.1.89",///NOLINT
                                                   "Equipment Events (3427)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Imaging Procedures (3428)</summary>
DicomUID  DicomUID::ImagingProcedures3428 = DicomUID{"1.2.840.10008.6.1.90",///NOLINT
                                                     "Imaging Procedures (3428)", DicomUidType::ContextGroupName,
                                                     false};

///<summary>Context Group Name: Catheterization Devices (3429)</summary>
DicomUID  DicomUID::CatheterizationDevices3429 = DicomUID{"1.2.840.10008.6.1.91",///NOLINT
                                                          "Catheterization Devices (3429)",
                                                          DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: DateTime Qualifiers (3430)</summary>
DicomUID  DicomUID::DateTimeQualifiers3430 = DicomUID{"1.2.840.10008.6.1.92",///NOLINT
                                                      "DateTime Qualifiers (3430)", DicomUidType::ContextGroupName,
                                                      false};

///<summary>Context Group Name: Peripheral Pulse Locations (3440)</summary>
DicomUID  DicomUID::PeripheralPulseLocations3440 = DicomUID{"1.2.840.10008.6.1.93",///NOLINT
                                                            "Peripheral Pulse Locations (3440)",
                                                            DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Patient Assessments (3441)</summary>
DicomUID  DicomUID::PatientAssessments3441 = DicomUID{"1.2.840.10008.6.1.94",///NOLINT
                                                      "Patient Assessments (3441)", DicomUidType::ContextGroupName,
                                                      false};

///<summary>Context Group Name: Peripheral Pulse Methods (3442)</summary>
DicomUID  DicomUID::PeripheralPulseMethods3442 = DicomUID{"1.2.840.10008.6.1.95",///NOLINT
                                                          "Peripheral Pulse Methods (3442)",
                                                          DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Skin Condition (3446)</summary>
DicomUID  DicomUID::SkinCondition3446 = DicomUID{"1.2.840.10008.6.1.96",///NOLINT
                                                 "Skin Condition (3446)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Airway Assessment (3448)</summary>
DicomUID  DicomUID::AirwayAssessment3448 = DicomUID{"1.2.840.10008.6.1.97",///NOLINT
                                                    "Airway Assessment (3448)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Calibration Objects (3451)</summary>
DicomUID  DicomUID::CalibrationObjects3451 = DicomUID{"1.2.840.10008.6.1.98",///NOLINT
                                                      "Calibration Objects (3451)", DicomUidType::ContextGroupName,
                                                      false};

///<summary>Context Group Name: Calibration Methods (3452)</summary>
DicomUID  DicomUID::CalibrationMethods3452 = DicomUID{"1.2.840.10008.6.1.99",///NOLINT
                                                      "Calibration Methods (3452)", DicomUidType::ContextGroupName,
                                                      false};

///<summary>Context Group Name: Cardiac Volume Methods (3453)</summary>
DicomUID  DicomUID::CardiacVolumeMethods3453 = DicomUID{"1.2.840.10008.6.1.100",///NOLINT
                                                        "Cardiac Volume Methods (3453)", DicomUidType::ContextGroupName,
                                                        false};

///<summary>Context Group Name: Index Methods (3455)</summary>
DicomUID  DicomUID::IndexMethods3455 = DicomUID{"1.2.840.10008.6.1.101",///NOLINT
                                                "Index Methods (3455)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Sub-segment Methods (3456)</summary>
DicomUID  DicomUID::SubSegmentMethods3456 = DicomUID{"1.2.840.10008.6.1.102",///NOLINT
                                                     "Sub-segment Methods (3456)", DicomUidType::ContextGroupName,
                                                     false};

///<summary>Context Group Name: Contour Realignment (3458)</summary>
DicomUID  DicomUID::ContourRealignment3458 = DicomUID{"1.2.840.10008.6.1.103",///NOLINT
                                                      "Contour Realignment (3458)", DicomUidType::ContextGroupName,
                                                      false};

///<summary>Context Group Name: Circumferential Extent (3460)</summary>
DicomUID  DicomUID::CircumferentialExtent3460 = DicomUID{"1.2.840.10008.6.1.104",///NOLINT
                                                         "Circumferential Extent (3460)",
                                                         DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Regional Extent (3461)</summary>
DicomUID  DicomUID::RegionalExtent3461 = DicomUID{"1.2.840.10008.6.1.105",///NOLINT
                                                  "Regional Extent (3461)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Chamber Identification (3462)</summary>
DicomUID  DicomUID::ChamberIdentification3462 = DicomUID{"1.2.840.10008.6.1.106",///NOLINT
                                                         "Chamber Identification (3462)",
                                                         DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: QA Reference Methods (3465)</summary>
DicomUID  DicomUID::QAReferenceMethods3465 = DicomUID{"1.2.840.10008.6.1.107",///NOLINT
                                                      "QA Reference Methods (3465)", DicomUidType::ContextGroupName,
                                                      false};

///<summary>Context Group Name: Plane Identification (3466)</summary>
DicomUID  DicomUID::PlaneIdentification3466 = DicomUID{"1.2.840.10008.6.1.108",///NOLINT
                                                       "Plane Identification (3466)", DicomUidType::ContextGroupName,
                                                       false};

///<summary>Context Group Name: Ejection Fraction (3467)</summary>
DicomUID  DicomUID::EjectionFraction3467 = DicomUID{"1.2.840.10008.6.1.109",///NOLINT
                                                    "Ejection Fraction (3467)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: ED Volume (3468)</summary>
DicomUID  DicomUID::EDVolume3468 = DicomUID{"1.2.840.10008.6.1.110",///NOLINT
                                            "ED Volume (3468)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: ES Volume (3469)</summary>
DicomUID  DicomUID::ESVolume3469 = DicomUID{"1.2.840.10008.6.1.111",///NOLINT
                                            "ES Volume (3469)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Vessel Lumen Cross-sectional Area Calculation Methods (3470)</summary>
DicomUID  DicomUID::VesselLumenCrossSectionalAreaCalculationMethods3470 = DicomUID{"1.2.840.10008.6.1.112",///NOLINT
                                                                                   "Vessel Lumen Cross-sectional Area Calculation Methods (3470)",
                                                                                   DicomUidType::ContextGroupName,
                                                                                   false};

///<summary>Context Group Name: Estimated Volumes (3471)</summary>
DicomUID  DicomUID::EstimatedVolumes3471 = DicomUID{"1.2.840.10008.6.1.113",///NOLINT
                                                    "Estimated Volumes (3471)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Cardiac Contraction Phase (3472)</summary>
DicomUID  DicomUID::CardiacContractionPhase3472 = DicomUID{"1.2.840.10008.6.1.114",///NOLINT
                                                           "Cardiac Contraction Phase (3472)",
                                                           DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: IVUS Procedure Phases (3480)</summary>
DicomUID  DicomUID::IVUSProcedurePhases3480 = DicomUID{"1.2.840.10008.6.1.115",///NOLINT
                                                       "IVUS Procedure Phases (3480)", DicomUidType::ContextGroupName,
                                                       false};

///<summary>Context Group Name: IVUS Distance Measurements (3481)</summary>
DicomUID  DicomUID::IVUSDistanceMeasurements3481 = DicomUID{"1.2.840.10008.6.1.116",///NOLINT
                                                            "IVUS Distance Measurements (3481)",
                                                            DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: IVUS Area Measurements (3482)</summary>
DicomUID  DicomUID::IVUSAreaMeasurements3482 = DicomUID{"1.2.840.10008.6.1.117",///NOLINT
                                                        "IVUS Area Measurements (3482)", DicomUidType::ContextGroupName,
                                                        false};

///<summary>Context Group Name: IVUS Longitudinal Measurements (3483)</summary>
DicomUID  DicomUID::IVUSLongitudinalMeasurements3483 = DicomUID{"1.2.840.10008.6.1.118",///NOLINT
                                                                "IVUS Longitudinal Measurements (3483)",
                                                                DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: IVUS Indices and Ratios (3484)</summary>
DicomUID  DicomUID::IVUSIndicesAndRatios3484 = DicomUID{"1.2.840.10008.6.1.119",///NOLINT
                                                        "IVUS Indices and Ratios (3484)",
                                                        DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: IVUS Volume Measurements (3485)</summary>
DicomUID  DicomUID::IVUSVolumeMeasurements3485 = DicomUID{"1.2.840.10008.6.1.120",///NOLINT
                                                          "IVUS Volume Measurements (3485)",
                                                          DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Vascular Measurement Sites (3486)</summary>
DicomUID  DicomUID::VascularMeasurementSites3486 = DicomUID{"1.2.840.10008.6.1.121",///NOLINT
                                                            "Vascular Measurement Sites (3486)",
                                                            DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Intravascular Volumetric Regions (3487)</summary>
DicomUID  DicomUID::IntravascularVolumetricRegions3487 = DicomUID{"1.2.840.10008.6.1.122",///NOLINT
                                                                  "Intravascular Volumetric Regions (3487)",
                                                                  DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Min/Max/Mean (3488)</summary>
DicomUID  DicomUID::MinMaxMean3488 = DicomUID{"1.2.840.10008.6.1.123",///NOLINT
                                              "Min/Max/Mean (3488)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Calcium Distribution (3489)</summary>
DicomUID  DicomUID::CalciumDistribution3489 = DicomUID{"1.2.840.10008.6.1.124",///NOLINT
                                                       "Calcium Distribution (3489)", DicomUidType::ContextGroupName,
                                                       false};

///<summary>Context Group Name: IVUS Lesion Morphologies (3491)</summary>
DicomUID  DicomUID::IVUSLesionMorphologies3491 = DicomUID{"1.2.840.10008.6.1.125",///NOLINT
                                                          "IVUS Lesion Morphologies (3491)",
                                                          DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Vascular Dissection Classifications (3492)</summary>
DicomUID  DicomUID::VascularDissectionClassifications3492 = DicomUID{"1.2.840.10008.6.1.126",///NOLINT
                                                                     "Vascular Dissection Classifications (3492)",
                                                                     DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: IVUS Relative Stenosis Severities (3493)</summary>
DicomUID  DicomUID::IVUSRelativeStenosisSeverities3493 = DicomUID{"1.2.840.10008.6.1.127",///NOLINT
                                                                  "IVUS Relative Stenosis Severities (3493)",
                                                                  DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: IVUS Non Morphological Findings (3494)</summary>
DicomUID  DicomUID::IVUSNonMorphologicalFindings3494 = DicomUID{"1.2.840.10008.6.1.128",///NOLINT
                                                                "IVUS Non Morphological Findings (3494)",
                                                                DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: IVUS Plaque Composition (3495)</summary>
DicomUID  DicomUID::IVUSPlaqueComposition3495 = DicomUID{"1.2.840.10008.6.1.129",///NOLINT
                                                         "IVUS Plaque Composition (3495)",
                                                         DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: IVUS Fiducial Points (3496)</summary>
DicomUID  DicomUID::IVUSFiducialPoints3496 = DicomUID{"1.2.840.10008.6.1.130",///NOLINT
                                                      "IVUS Fiducial Points (3496)", DicomUidType::ContextGroupName,
                                                      false};

///<summary>Context Group Name: IVUS Arterial Morphology (3497)</summary>
DicomUID  DicomUID::IVUSArterialMorphology3497 = DicomUID{"1.2.840.10008.6.1.131",///NOLINT
                                                          "IVUS Arterial Morphology (3497)",
                                                          DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Pressure Units (3500)</summary>
DicomUID  DicomUID::PressureUnits3500 = DicomUID{"1.2.840.10008.6.1.132",///NOLINT
                                                 "Pressure Units (3500)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Hemodynamic Resistance Units (3502)</summary>
DicomUID  DicomUID::HemodynamicResistanceUnits3502 = DicomUID{"1.2.840.10008.6.1.133",///NOLINT
                                                              "Hemodynamic Resistance Units (3502)",
                                                              DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Indexed Hemodynamic Resistance Units (3503)</summary>
DicomUID  DicomUID::IndexedHemodynamicResistanceUnits3503 = DicomUID{"1.2.840.10008.6.1.134",///NOLINT
                                                                     "Indexed Hemodynamic Resistance Units (3503)",
                                                                     DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Catheter Size Units (3510)</summary>
DicomUID  DicomUID::CatheterSizeUnits3510 = DicomUID{"1.2.840.10008.6.1.135",///NOLINT
                                                     "Catheter Size Units (3510)", DicomUidType::ContextGroupName,
                                                     false};

///<summary>Context Group Name: Specimen Collection (3515)</summary>
DicomUID  DicomUID::SpecimenCollection3515 = DicomUID{"1.2.840.10008.6.1.136",///NOLINT
                                                      "Specimen Collection (3515)", DicomUidType::ContextGroupName,
                                                      false};

///<summary>Context Group Name: Blood Source Type (3520)</summary>
DicomUID  DicomUID::BloodSourceType3520 = DicomUID{"1.2.840.10008.6.1.137",///NOLINT
                                                   "Blood Source Type (3520)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Blood Gas Pressures (3524)</summary>
DicomUID  DicomUID::BloodGasPressures3524 = DicomUID{"1.2.840.10008.6.1.138",///NOLINT
                                                     "Blood Gas Pressures (3524)", DicomUidType::ContextGroupName,
                                                     false};

///<summary>Context Group Name: Blood Gas Content (3525)</summary>
DicomUID  DicomUID::BloodGasContent3525 = DicomUID{"1.2.840.10008.6.1.139",///NOLINT
                                                   "Blood Gas Content (3525)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Blood Gas Saturation (3526)</summary>
DicomUID  DicomUID::BloodGasSaturation3526 = DicomUID{"1.2.840.10008.6.1.140",///NOLINT
                                                      "Blood Gas Saturation (3526)", DicomUidType::ContextGroupName,
                                                      false};

///<summary>Context Group Name: Blood Base Excess (3527)</summary>
DicomUID  DicomUID::BloodBaseExcess3527 = DicomUID{"1.2.840.10008.6.1.141",///NOLINT
                                                   "Blood Base Excess (3527)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Blood pH (3528)</summary>
DicomUID  DicomUID::BloodPH3528 = DicomUID{"1.2.840.10008.6.1.142",///NOLINT
                                           "Blood pH (3528)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Arterial / Venous Content (3529)</summary>
DicomUID  DicomUID::ArterialVenousContent3529 = DicomUID{"1.2.840.10008.6.1.143",///NOLINT
                                                         "Arterial / Venous Content (3529)",
                                                         DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Oxygen Administration Actions (3530)</summary>
DicomUID  DicomUID::OxygenAdministrationActions3530 = DicomUID{"1.2.840.10008.6.1.144",///NOLINT
                                                               "Oxygen Administration Actions (3530)",
                                                               DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Oxygen Administration (3531)</summary>
DicomUID  DicomUID::OxygenAdministration3531 = DicomUID{"1.2.840.10008.6.1.145",///NOLINT
                                                        "Oxygen Administration (3531)", DicomUidType::ContextGroupName,
                                                        false};

///<summary>Context Group Name: Circulatory Support Actions (3550)</summary>
DicomUID  DicomUID::CirculatorySupportActions3550 = DicomUID{"1.2.840.10008.6.1.146",///NOLINT
                                                             "Circulatory Support Actions (3550)",
                                                             DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Ventilation Actions (3551)</summary>
DicomUID  DicomUID::VentilationActions3551 = DicomUID{"1.2.840.10008.6.1.147",///NOLINT
                                                      "Ventilation Actions (3551)", DicomUidType::ContextGroupName,
                                                      false};

///<summary>Context Group Name: Pacing Actions (3552)</summary>
DicomUID  DicomUID::PacingActions3552 = DicomUID{"1.2.840.10008.6.1.148",///NOLINT
                                                 "Pacing Actions (3552)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Circulatory Support (3553)</summary>
DicomUID  DicomUID::CirculatorySupport3553 = DicomUID{"1.2.840.10008.6.1.149",///NOLINT
                                                      "Circulatory Support (3553)", DicomUidType::ContextGroupName,
                                                      false};

///<summary>Context Group Name: Ventilation (3554)</summary>
DicomUID  DicomUID::Ventilation3554 = DicomUID{"1.2.840.10008.6.1.150",///NOLINT
                                               "Ventilation (3554)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Pacing (3555)</summary>
DicomUID  DicomUID::Pacing3555 = DicomUID{"1.2.840.10008.6.1.151",///NOLINT
                                          "Pacing (3555)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Blood Pressure Methods (3560)</summary>
DicomUID  DicomUID::BloodPressureMethods3560 = DicomUID{"1.2.840.10008.6.1.152",///NOLINT
                                                        "Blood Pressure Methods (3560)", DicomUidType::ContextGroupName,
                                                        false};

///<summary>Context Group Name: Relative Times (3600)</summary>
DicomUID  DicomUID::RelativeTimes3600 = DicomUID{"1.2.840.10008.6.1.153",///NOLINT
                                                 "Relative Times (3600)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Hemodynamic Patient State (3602)</summary>
DicomUID  DicomUID::HemodynamicPatientState3602 = DicomUID{"1.2.840.10008.6.1.154",///NOLINT
                                                           "Hemodynamic Patient State (3602)",
                                                           DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Arterial Lesion Locations (3604)</summary>
DicomUID  DicomUID::ArterialLesionLocations3604 = DicomUID{"1.2.840.10008.6.1.155",///NOLINT
                                                           "Arterial Lesion Locations (3604)",
                                                           DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Arterial Source Locations (3606)</summary>
DicomUID  DicomUID::ArterialSourceLocations3606 = DicomUID{"1.2.840.10008.6.1.156",///NOLINT
                                                           "Arterial Source Locations (3606)",
                                                           DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Venous Source Locations (3607)</summary>
DicomUID  DicomUID::VenousSourceLocations3607 = DicomUID{"1.2.840.10008.6.1.157",///NOLINT
                                                         "Venous Source Locations (3607)",
                                                         DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Atrial Source Locations (3608)</summary>
DicomUID  DicomUID::AtrialSourceLocations3608 = DicomUID{"1.2.840.10008.6.1.158",///NOLINT
                                                         "Atrial Source Locations (3608)",
                                                         DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Ventricular Source Locations (3609)</summary>
DicomUID  DicomUID::VentricularSourceLocations3609 = DicomUID{"1.2.840.10008.6.1.159",///NOLINT
                                                              "Ventricular Source Locations (3609)",
                                                              DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Gradient Source Locations (3610)</summary>
DicomUID  DicomUID::GradientSourceLocations3610 = DicomUID{"1.2.840.10008.6.1.160",///NOLINT
                                                           "Gradient Source Locations (3610)",
                                                           DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Pressure Measurements (3611)</summary>
DicomUID  DicomUID::PressureMeasurements3611 = DicomUID{"1.2.840.10008.6.1.161",///NOLINT
                                                        "Pressure Measurements (3611)", DicomUidType::ContextGroupName,
                                                        false};

///<summary>Context Group Name: Blood Velocity Measurements (3612)</summary>
DicomUID  DicomUID::BloodVelocityMeasurements3612 = DicomUID{"1.2.840.10008.6.1.162",///NOLINT
                                                             "Blood Velocity Measurements (3612)",
                                                             DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Hemodynamic Time Measurements (3613)</summary>
DicomUID  DicomUID::HemodynamicTimeMeasurements3613 = DicomUID{"1.2.840.10008.6.1.163",///NOLINT
                                                               "Hemodynamic Time Measurements (3613)",
                                                               DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Valve Areas, Non-mitral (3614)</summary>
DicomUID  DicomUID::ValveAreasNonMitral3614 = DicomUID{"1.2.840.10008.6.1.164",///NOLINT
                                                       "Valve Areas, Non-mitral (3614)", DicomUidType::ContextGroupName,
                                                       false};

///<summary>Context Group Name: Valve Areas (3615)</summary>
DicomUID  DicomUID::ValveAreas3615 = DicomUID{"1.2.840.10008.6.1.165",///NOLINT
                                              "Valve Areas (3615)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Hemodynamic Period Measurements (3616)</summary>
DicomUID  DicomUID::HemodynamicPeriodMeasurements3616 = DicomUID{"1.2.840.10008.6.1.166",///NOLINT
                                                                 "Hemodynamic Period Measurements (3616)",
                                                                 DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Valve Flows (3617)</summary>
DicomUID  DicomUID::ValveFlows3617 = DicomUID{"1.2.840.10008.6.1.167",///NOLINT
                                              "Valve Flows (3617)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Hemodynamic Flows (3618)</summary>
DicomUID  DicomUID::HemodynamicFlows3618 = DicomUID{"1.2.840.10008.6.1.168",///NOLINT
                                                    "Hemodynamic Flows (3618)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Hemodynamic Resistance Measurements (3619)</summary>
DicomUID  DicomUID::HemodynamicResistanceMeasurements3619 = DicomUID{"1.2.840.10008.6.1.169",///NOLINT
                                                                     "Hemodynamic Resistance Measurements (3619)",
                                                                     DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Hemodynamic Ratios (3620)</summary>
DicomUID  DicomUID::HemodynamicRatios3620 = DicomUID{"1.2.840.10008.6.1.170",///NOLINT
                                                     "Hemodynamic Ratios (3620)", DicomUidType::ContextGroupName,
                                                     false};

///<summary>Context Group Name: Fractional Flow Reserve (3621)</summary>
DicomUID  DicomUID::FractionalFlowReserve3621 = DicomUID{"1.2.840.10008.6.1.171",///NOLINT
                                                         "Fractional Flow Reserve (3621)",
                                                         DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Measurement Type (3627)</summary>
DicomUID  DicomUID::MeasurementType3627 = DicomUID{"1.2.840.10008.6.1.172",///NOLINT
                                                   "Measurement Type (3627)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Cardiac Output Methods (3628)</summary>
DicomUID  DicomUID::CardiacOutputMethods3628 = DicomUID{"1.2.840.10008.6.1.173",///NOLINT
                                                        "Cardiac Output Methods (3628)", DicomUidType::ContextGroupName,
                                                        false};

///<summary>Context Group Name: Procedure Intent (3629)</summary>
DicomUID  DicomUID::ProcedureIntent3629 = DicomUID{"1.2.840.10008.6.1.174",///NOLINT
                                                   "Procedure Intent (3629)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Cardiovascular Anatomic Locations (3630)</summary>
DicomUID  DicomUID::CardiovascularAnatomicLocations3630 = DicomUID{"1.2.840.10008.6.1.175",///NOLINT
                                                                   "Cardiovascular Anatomic Locations (3630)",
                                                                   DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Hypertension (3640)</summary>
DicomUID  DicomUID::Hypertension3640 = DicomUID{"1.2.840.10008.6.1.176",///NOLINT
                                                "Hypertension (3640)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Hemodynamic Assessments (3641)</summary>
DicomUID  DicomUID::HemodynamicAssessments3641 = DicomUID{"1.2.840.10008.6.1.177",///NOLINT
                                                          "Hemodynamic Assessments (3641)",
                                                          DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Degree Findings (3642)</summary>
DicomUID  DicomUID::DegreeFindings3642 = DicomUID{"1.2.840.10008.6.1.178",///NOLINT
                                                  "Degree Findings (3642)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Hemodynamic Measurement Phase (3651)</summary>
DicomUID  DicomUID::HemodynamicMeasurementPhase3651 = DicomUID{"1.2.840.10008.6.1.179",///NOLINT
                                                               "Hemodynamic Measurement Phase (3651)",
                                                               DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Body Surface Area Equations (3663)</summary>
DicomUID  DicomUID::BodySurfaceAreaEquations3663 = DicomUID{"1.2.840.10008.6.1.180",///NOLINT
                                                            "Body Surface Area Equations (3663)",
                                                            DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Oxygen Consumption Equations and Tables (3664)</summary>
DicomUID  DicomUID::OxygenConsumptionEquationsAndTables3664 = DicomUID{"1.2.840.10008.6.1.181",///NOLINT
                                                                       "Oxygen Consumption Equations and Tables (3664)",
                                                                       DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: P50 Equations (3666)</summary>
DicomUID  DicomUID::P50Equations3666 = DicomUID{"1.2.840.10008.6.1.182",///NOLINT
                                                "P50 Equations (3666)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Framingham Scores (3667)</summary>
DicomUID  DicomUID::FraminghamScores3667 = DicomUID{"1.2.840.10008.6.1.183",///NOLINT
                                                    "Framingham Scores (3667)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Framingham Tables (3668)</summary>
DicomUID  DicomUID::FraminghamTables3668 = DicomUID{"1.2.840.10008.6.1.184",///NOLINT
                                                    "Framingham Tables (3668)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: ECG Procedure Types (3670)</summary>
DicomUID  DicomUID::ECGProcedureTypes3670 = DicomUID{"1.2.840.10008.6.1.185",///NOLINT
                                                     "ECG Procedure Types (3670)", DicomUidType::ContextGroupName,
                                                     false};

///<summary>Context Group Name: Reason for ECG Exam (3671)</summary>
DicomUID  DicomUID::ReasonForECGExam3671 = DicomUID{"1.2.840.10008.6.1.186",///NOLINT
                                                    "Reason for ECG Exam (3671)", DicomUidType::ContextGroupName,
                                                    false};

///<summary>Context Group Name: Pacemakers (3672)</summary>
DicomUID  DicomUID::Pacemakers3672 = DicomUID{"1.2.840.10008.6.1.187",///NOLINT
                                              "Pacemakers (3672)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Diagnosis (Retired) (3673)</summary>
DicomUID  DicomUID::Diagnosis3673RETIRED = DicomUID{"1.2.840.10008.6.1.188",///NOLINT
                                                    "Diagnosis (Retired) (3673)", DicomUidType::ContextGroupName, true};

///<summary>Context Group Name: Other Filters (Retired) (3675)</summary>
DicomUID  DicomUID::OtherFilters3675RETIRED = DicomUID{"1.2.840.10008.6.1.189",///NOLINT
                                                       "Other Filters (Retired) (3675)", DicomUidType::ContextGroupName,
                                                       true};

///<summary>Context Group Name: Lead Measurement Technique (3676)</summary>
DicomUID  DicomUID::LeadMeasurementTechnique3676 = DicomUID{"1.2.840.10008.6.1.190",///NOLINT
                                                            "Lead Measurement Technique (3676)",
                                                            DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Summary Codes ECG (3677)</summary>
DicomUID  DicomUID::SummaryCodesECG3677 = DicomUID{"1.2.840.10008.6.1.191",///NOLINT
                                                   "Summary Codes ECG (3677)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: QT Correction Algorithms (3678)</summary>
DicomUID  DicomUID::QTCorrectionAlgorithms3678 = DicomUID{"1.2.840.10008.6.1.192",///NOLINT
                                                          "QT Correction Algorithms (3678)",
                                                          DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: ECG Morphology Descriptions (Retired) (3679)</summary>
DicomUID  DicomUID::ECGMorphologyDescriptions3679RETIRED = DicomUID{"1.2.840.10008.6.1.193",///NOLINT
                                                                    "ECG Morphology Descriptions (Retired) (3679)",
                                                                    DicomUidType::ContextGroupName, true};

///<summary>Context Group Name: ECG Lead Noise Descriptions (3680)</summary>
DicomUID  DicomUID::ECGLeadNoiseDescriptions3680 = DicomUID{"1.2.840.10008.6.1.194",///NOLINT
                                                            "ECG Lead Noise Descriptions (3680)",
                                                            DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: ECG Lead Noise Modifiers (Retired) (3681)</summary>
DicomUID  DicomUID::ECGLeadNoiseModifiers3681RETIRED = DicomUID{"1.2.840.10008.6.1.195",///NOLINT
                                                                "ECG Lead Noise Modifiers (Retired) (3681)",
                                                                DicomUidType::ContextGroupName, true};

///<summary>Context Group Name: Probability (Retired) (3682)</summary>
DicomUID  DicomUID::Probability3682RETIRED = DicomUID{"1.2.840.10008.6.1.196",///NOLINT
                                                      "Probability (Retired) (3682)", DicomUidType::ContextGroupName,
                                                      true};

///<summary>Context Group Name: Modifiers (Retired) (3683)</summary>
DicomUID  DicomUID::Modifiers3683RETIRED = DicomUID{"1.2.840.10008.6.1.197",///NOLINT
                                                    "Modifiers (Retired) (3683)", DicomUidType::ContextGroupName, true};

///<summary>Context Group Name: Trend (Retired) (3684)</summary>
DicomUID  DicomUID::Trend3684RETIRED = DicomUID{"1.2.840.10008.6.1.198",///NOLINT
                                                "Trend (Retired) (3684)", DicomUidType::ContextGroupName, true};

///<summary>Context Group Name: Conjunctive Terms (Retired) (3685)</summary>
DicomUID  DicomUID::ConjunctiveTerms3685RETIRED = DicomUID{"1.2.840.10008.6.1.199",///NOLINT
                                                           "Conjunctive Terms (Retired) (3685)",
                                                           DicomUidType::ContextGroupName, true};

///<summary>Context Group Name: ECG Interpretive Statements (Retired) (3686)</summary>
DicomUID  DicomUID::ECGInterpretiveStatements3686RETIRED = DicomUID{"1.2.840.10008.6.1.200",///NOLINT
                                                                    "ECG Interpretive Statements (Retired) (3686)",
                                                                    DicomUidType::ContextGroupName, true};

///<summary>Context Group Name: Electrophysiology Waveform Durations (3687)</summary>
DicomUID  DicomUID::ElectrophysiologyWaveformDurations3687 = DicomUID{"1.2.840.10008.6.1.201",///NOLINT
                                                                      "Electrophysiology Waveform Durations (3687)",
                                                                      DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Electrophysiology Waveform Voltages (3688)</summary>
DicomUID  DicomUID::ElectrophysiologyWaveformVoltages3688 = DicomUID{"1.2.840.10008.6.1.202",///NOLINT
                                                                     "Electrophysiology Waveform Voltages (3688)",
                                                                     DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Cath Diagnosis (3700)</summary>
DicomUID  DicomUID::CathDiagnosis3700 = DicomUID{"1.2.840.10008.6.1.203",///NOLINT
                                                 "Cath Diagnosis (3700)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Cardiac Valves and Tracts (3701)</summary>
DicomUID  DicomUID::CardiacValvesAndTracts3701 = DicomUID{"1.2.840.10008.6.1.204",///NOLINT
                                                          "Cardiac Valves and Tracts (3701)",
                                                          DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Wall Motion (3703)</summary>
DicomUID  DicomUID::WallMotion3703 = DicomUID{"1.2.840.10008.6.1.205",///NOLINT
                                              "Wall Motion (3703)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Myocardium Wall Morphology Findings (3704)</summary>
DicomUID  DicomUID::MyocardiumWallMorphologyFindings3704 = DicomUID{"1.2.840.10008.6.1.206",///NOLINT
                                                                    "Myocardium Wall Morphology Findings (3704)",
                                                                    DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Chamber Size (3705)</summary>
DicomUID  DicomUID::ChamberSize3705 = DicomUID{"1.2.840.10008.6.1.207",///NOLINT
                                               "Chamber Size (3705)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Overall Contractility (3706)</summary>
DicomUID  DicomUID::OverallContractility3706 = DicomUID{"1.2.840.10008.6.1.208",///NOLINT
                                                        "Overall Contractility (3706)", DicomUidType::ContextGroupName,
                                                        false};

///<summary>Context Group Name: VSD Description (3707)</summary>
DicomUID  DicomUID::VSDDescription3707 = DicomUID{"1.2.840.10008.6.1.209",///NOLINT
                                                  "VSD Description (3707)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Aortic Root Description (3709)</summary>
DicomUID  DicomUID::AorticRootDescription3709 = DicomUID{"1.2.840.10008.6.1.210",///NOLINT
                                                         "Aortic Root Description (3709)",
                                                         DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Coronary Dominance (3710)</summary>
DicomUID  DicomUID::CoronaryDominance3710 = DicomUID{"1.2.840.10008.6.1.211",///NOLINT
                                                     "Coronary Dominance (3710)", DicomUidType::ContextGroupName,
                                                     false};

///<summary>Context Group Name: Valvular Abnormalities (3711)</summary>
DicomUID  DicomUID::ValvularAbnormalities3711 = DicomUID{"1.2.840.10008.6.1.212",///NOLINT
                                                         "Valvular Abnormalities (3711)",
                                                         DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Vessel Descriptors (3712)</summary>
DicomUID  DicomUID::VesselDescriptors3712 = DicomUID{"1.2.840.10008.6.1.213",///NOLINT
                                                     "Vessel Descriptors (3712)", DicomUidType::ContextGroupName,
                                                     false};

///<summary>Context Group Name: TIMI Flow Characteristics (3713)</summary>
DicomUID  DicomUID::TIMIFlowCharacteristics3713 = DicomUID{"1.2.840.10008.6.1.214",///NOLINT
                                                           "TIMI Flow Characteristics (3713)",
                                                           DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Thrombus (3714)</summary>
DicomUID  DicomUID::Thrombus3714 = DicomUID{"1.2.840.10008.6.1.215",///NOLINT
                                            "Thrombus (3714)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Lesion Margin (3715)</summary>
DicomUID  DicomUID::LesionMargin3715 = DicomUID{"1.2.840.10008.6.1.216",///NOLINT
                                                "Lesion Margin (3715)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Severity (3716)</summary>
DicomUID  DicomUID::Severity3716 = DicomUID{"1.2.840.10008.6.1.217",///NOLINT
                                            "Severity (3716)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Myocardial Wall Segments (3717)</summary>
DicomUID  DicomUID::MyocardialWallSegments3717 = DicomUID{"1.2.840.10008.6.1.218",///NOLINT
                                                          "Myocardial Wall Segments (3717)",
                                                          DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Myocardial Wall Segments in Projection (3718)</summary>
DicomUID  DicomUID::MyocardialWallSegmentsInProjection3718 = DicomUID{"1.2.840.10008.6.1.219",///NOLINT
                                                                      "Myocardial Wall Segments in Projection (3718)",
                                                                      DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Canadian Clinical Classification (3719)</summary>
DicomUID  DicomUID::CanadianClinicalClassification3719 = DicomUID{"1.2.840.10008.6.1.220",///NOLINT
                                                                  "Canadian Clinical Classification (3719)",
                                                                  DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Cardiac History Dates (Retired) (3720)</summary>
DicomUID  DicomUID::CardiacHistoryDates3720RETIRED = DicomUID{"1.2.840.10008.6.1.221",///NOLINT
                                                              "Cardiac History Dates (Retired) (3720)",
                                                              DicomUidType::ContextGroupName, true};

///<summary>Context Group Name: Cardiovascular Surgeries (3721)</summary>
DicomUID  DicomUID::CardiovascularSurgeries3721 = DicomUID{"1.2.840.10008.6.1.222",///NOLINT
                                                           "Cardiovascular Surgeries (3721)",
                                                           DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Diabetic Therapy (3722)</summary>
DicomUID  DicomUID::DiabeticTherapy3722 = DicomUID{"1.2.840.10008.6.1.223",///NOLINT
                                                   "Diabetic Therapy (3722)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: MI Types (3723)</summary>
DicomUID  DicomUID::MITypes3723 = DicomUID{"1.2.840.10008.6.1.224",///NOLINT
                                           "MI Types (3723)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Smoking History (3724)</summary>
DicomUID  DicomUID::SmokingHistory3724 = DicomUID{"1.2.840.10008.6.1.225",///NOLINT
                                                  "Smoking History (3724)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Indications for Coronary Intervention (3726)</summary>
DicomUID  DicomUID::IndicationsForCoronaryIntervention3726 = DicomUID{"1.2.840.10008.6.1.226",///NOLINT
                                                                      "Indications for Coronary Intervention (3726)",
                                                                      DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Indications for Catheterization (3727)</summary>
DicomUID  DicomUID::IndicationsForCatheterization3727 = DicomUID{"1.2.840.10008.6.1.227",///NOLINT
                                                                 "Indications for Catheterization (3727)",
                                                                 DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Cath Findings (3728)</summary>
DicomUID  DicomUID::CathFindings3728 = DicomUID{"1.2.840.10008.6.1.228",///NOLINT
                                                "Cath Findings (3728)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Admission Status (3729)</summary>
DicomUID  DicomUID::AdmissionStatus3729 = DicomUID{"1.2.840.10008.6.1.229",///NOLINT
                                                   "Admission Status (3729)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Insurance Payor (3730)</summary>
DicomUID  DicomUID::InsurancePayor3730 = DicomUID{"1.2.840.10008.6.1.230",///NOLINT
                                                  "Insurance Payor (3730)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Primary Cause of Death (3733)</summary>
DicomUID  DicomUID::PrimaryCauseOfDeath3733 = DicomUID{"1.2.840.10008.6.1.231",///NOLINT
                                                       "Primary Cause of Death (3733)", DicomUidType::ContextGroupName,
                                                       false};

///<summary>Context Group Name: Acute Coronary Syndrome Time Period (3735)</summary>
DicomUID  DicomUID::AcuteCoronarySyndromeTimePeriod3735 = DicomUID{"1.2.840.10008.6.1.232",///NOLINT
                                                                   "Acute Coronary Syndrome Time Period (3735)",
                                                                   DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: NYHA Classification (3736)</summary>
DicomUID  DicomUID::NYHAClassification3736 = DicomUID{"1.2.840.10008.6.1.233",///NOLINT
                                                      "NYHA Classification (3736)", DicomUidType::ContextGroupName,
                                                      false};

///<summary>Context Group Name: Non-invasive Test - Ischemia (3737)</summary>
DicomUID  DicomUID::NonInvasiveTestIschemia3737 = DicomUID{"1.2.840.10008.6.1.234",///NOLINT
                                                           "Non-invasive Test - Ischemia (3737)",
                                                           DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Pre-Cath Angina Type (3738)</summary>
DicomUID  DicomUID::PreCathAnginaType3738 = DicomUID{"1.2.840.10008.6.1.235",///NOLINT
                                                     "Pre-Cath Angina Type (3738)", DicomUidType::ContextGroupName,
                                                     false};

///<summary>Context Group Name: Cath Procedure Type (3739)</summary>
DicomUID  DicomUID::CathProcedureType3739 = DicomUID{"1.2.840.10008.6.1.236",///NOLINT
                                                     "Cath Procedure Type (3739)", DicomUidType::ContextGroupName,
                                                     false};

///<summary>Context Group Name: Thrombolytic Administration (3740)</summary>
DicomUID  DicomUID::ThrombolyticAdministration3740 = DicomUID{"1.2.840.10008.6.1.237",///NOLINT
                                                              "Thrombolytic Administration (3740)",
                                                              DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Medication Administration, Lab Visit (3741)</summary>
DicomUID  DicomUID::MedicationAdministrationLabVisit3741 = DicomUID{"1.2.840.10008.6.1.238",///NOLINT
                                                                    "Medication Administration, Lab Visit (3741)",
                                                                    DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Medication Administration, PCI (3742)</summary>
DicomUID  DicomUID::MedicationAdministrationPCI3742 = DicomUID{"1.2.840.10008.6.1.239",///NOLINT
                                                               "Medication Administration, PCI (3742)",
                                                               DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Clopidogrel/Ticlopidine Administration (3743)</summary>
DicomUID  DicomUID::ClopidogrelTiclopidineAdministration3743 = DicomUID{"1.2.840.10008.6.1.240",///NOLINT
                                                                        "Clopidogrel/Ticlopidine Administration (3743)",
                                                                        DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: EF Testing Method (3744)</summary>
DicomUID  DicomUID::EFTestingMethod3744 = DicomUID{"1.2.840.10008.6.1.241",///NOLINT
                                                   "EF Testing Method (3744)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Calculation Method (3745)</summary>
DicomUID  DicomUID::CalculationMethod3745 = DicomUID{"1.2.840.10008.6.1.242",///NOLINT
                                                     "Calculation Method (3745)", DicomUidType::ContextGroupName,
                                                     false};

///<summary>Context Group Name: Percutaneous Entry Site (3746)</summary>
DicomUID  DicomUID::PercutaneousEntrySite3746 = DicomUID{"1.2.840.10008.6.1.243",///NOLINT
                                                         "Percutaneous Entry Site (3746)",
                                                         DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Percutaneous Closure (3747)</summary>
DicomUID  DicomUID::PercutaneousClosure3747 = DicomUID{"1.2.840.10008.6.1.244",///NOLINT
                                                       "Percutaneous Closure (3747)", DicomUidType::ContextGroupName,
                                                       false};

///<summary>Context Group Name: Angiographic EF Testing Method (3748)</summary>
DicomUID  DicomUID::AngiographicEFTestingMethod3748 = DicomUID{"1.2.840.10008.6.1.245",///NOLINT
                                                               "Angiographic EF Testing Method (3748)",
                                                               DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: PCI Procedure Result (3749)</summary>
DicomUID  DicomUID::PCIProcedureResult3749 = DicomUID{"1.2.840.10008.6.1.246",///NOLINT
                                                      "PCI Procedure Result (3749)", DicomUidType::ContextGroupName,
                                                      false};

///<summary>Context Group Name: Previously Dilated Lesion (3750)</summary>
DicomUID  DicomUID::PreviouslyDilatedLesion3750 = DicomUID{"1.2.840.10008.6.1.247",///NOLINT
                                                           "Previously Dilated Lesion (3750)",
                                                           DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Guidewire Crossing (3752)</summary>
DicomUID  DicomUID::GuidewireCrossing3752 = DicomUID{"1.2.840.10008.6.1.248",///NOLINT
                                                     "Guidewire Crossing (3752)", DicomUidType::ContextGroupName,
                                                     false};

///<summary>Context Group Name: Vascular Complications (3754)</summary>
DicomUID  DicomUID::VascularComplications3754 = DicomUID{"1.2.840.10008.6.1.249",///NOLINT
                                                         "Vascular Complications (3754)",
                                                         DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Cath Complications (3755)</summary>
DicomUID  DicomUID::CathComplications3755 = DicomUID{"1.2.840.10008.6.1.250",///NOLINT
                                                     "Cath Complications (3755)", DicomUidType::ContextGroupName,
                                                     false};

///<summary>Context Group Name: Cardiac Patient Risk Factors (3756)</summary>
DicomUID  DicomUID::CardiacPatientRiskFactors3756 = DicomUID{"1.2.840.10008.6.1.251",///NOLINT
                                                             "Cardiac Patient Risk Factors (3756)",
                                                             DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Cardiac Diagnostic Procedures (3757)</summary>
DicomUID  DicomUID::CardiacDiagnosticProcedures3757 = DicomUID{"1.2.840.10008.6.1.252",///NOLINT
                                                               "Cardiac Diagnostic Procedures (3757)",
                                                               DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Cardiovascular Family History (3758)</summary>
DicomUID  DicomUID::CardiovascularFamilyHistory3758 = DicomUID{"1.2.840.10008.6.1.253",///NOLINT
                                                               "Cardiovascular Family History (3758)",
                                                               DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Hypertension Therapy (3760)</summary>
DicomUID  DicomUID::HypertensionTherapy3760 = DicomUID{"1.2.840.10008.6.1.254",///NOLINT
                                                       "Hypertension Therapy (3760)", DicomUidType::ContextGroupName,
                                                       false};

///<summary>Context Group Name: Antilipemic Agents (3761)</summary>
DicomUID  DicomUID::AntilipemicAgents3761 = DicomUID{"1.2.840.10008.6.1.255",///NOLINT
                                                     "Antilipemic Agents (3761)", DicomUidType::ContextGroupName,
                                                     false};

///<summary>Context Group Name: Antiarrhythmic Agents (3762)</summary>
DicomUID  DicomUID::AntiarrhythmicAgents3762 = DicomUID{"1.2.840.10008.6.1.256",///NOLINT
                                                        "Antiarrhythmic Agents (3762)", DicomUidType::ContextGroupName,
                                                        false};

///<summary>Context Group Name: Myocardial Infarction Therapies (3764)</summary>
DicomUID  DicomUID::MyocardialInfarctionTherapies3764 = DicomUID{"1.2.840.10008.6.1.257",///NOLINT
                                                                 "Myocardial Infarction Therapies (3764)",
                                                                 DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Concern Types (3769)</summary>
DicomUID  DicomUID::ConcernTypes3769 = DicomUID{"1.2.840.10008.6.1.258",///NOLINT
                                                "Concern Types (3769)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Problem Status (3770)</summary>
DicomUID  DicomUID::ProblemStatus3770 = DicomUID{"1.2.840.10008.6.1.259",///NOLINT
                                                 "Problem Status (3770)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Health Status (3772)</summary>
DicomUID  DicomUID::HealthStatus3772 = DicomUID{"1.2.840.10008.6.1.260",///NOLINT
                                                "Health Status (3772)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Use Status (3773)</summary>
DicomUID  DicomUID::UseStatus3773 = DicomUID{"1.2.840.10008.6.1.261",///NOLINT
                                             "Use Status (3773)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Social History (3774)</summary>
DicomUID  DicomUID::SocialHistory3774 = DicomUID{"1.2.840.10008.6.1.262",///NOLINT
                                                 "Social History (3774)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Implanted Devices (3777)</summary>
DicomUID  DicomUID::ImplantedDevices3777 = DicomUID{"1.2.840.10008.6.1.263",///NOLINT
                                                    "Implanted Devices (3777)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Plaque Structures (3802)</summary>
DicomUID  DicomUID::PlaqueStructures3802 = DicomUID{"1.2.840.10008.6.1.264",///NOLINT
                                                    "Plaque Structures (3802)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Stenosis Measurement Methods (3804)</summary>
DicomUID  DicomUID::StenosisMeasurementMethods3804 = DicomUID{"1.2.840.10008.6.1.265",///NOLINT
                                                              "Stenosis Measurement Methods (3804)",
                                                              DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Stenosis Types (3805)</summary>
DicomUID  DicomUID::StenosisTypes3805 = DicomUID{"1.2.840.10008.6.1.266",///NOLINT
                                                 "Stenosis Types (3805)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Stenosis Shape (3806)</summary>
DicomUID  DicomUID::StenosisShape3806 = DicomUID{"1.2.840.10008.6.1.267",///NOLINT
                                                 "Stenosis Shape (3806)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Volume Measurement Methods (3807)</summary>
DicomUID  DicomUID::VolumeMeasurementMethods3807 = DicomUID{"1.2.840.10008.6.1.268",///NOLINT
                                                            "Volume Measurement Methods (3807)",
                                                            DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Aneurysm Types (3808)</summary>
DicomUID  DicomUID::AneurysmTypes3808 = DicomUID{"1.2.840.10008.6.1.269",///NOLINT
                                                 "Aneurysm Types (3808)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Associated Conditions (3809)</summary>
DicomUID  DicomUID::AssociatedConditions3809 = DicomUID{"1.2.840.10008.6.1.270",///NOLINT
                                                        "Associated Conditions (3809)", DicomUidType::ContextGroupName,
                                                        false};

///<summary>Context Group Name: Vascular Morphology (3810)</summary>
DicomUID  DicomUID::VascularMorphology3810 = DicomUID{"1.2.840.10008.6.1.271",///NOLINT
                                                      "Vascular Morphology (3810)", DicomUidType::ContextGroupName,
                                                      false};

///<summary>Context Group Name: Stent Findings (3813)</summary>
DicomUID  DicomUID::StentFindings3813 = DicomUID{"1.2.840.10008.6.1.272",///NOLINT
                                                 "Stent Findings (3813)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Stent Composition (3814)</summary>
DicomUID  DicomUID::StentComposition3814 = DicomUID{"1.2.840.10008.6.1.273",///NOLINT
                                                    "Stent Composition (3814)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Source of Vascular Finding (3815)</summary>
DicomUID  DicomUID::SourceOfVascularFinding3815 = DicomUID{"1.2.840.10008.6.1.274",///NOLINT
                                                           "Source of Vascular Finding (3815)",
                                                           DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Vascular Sclerosis Types (3817)</summary>
DicomUID  DicomUID::VascularSclerosisTypes3817 = DicomUID{"1.2.840.10008.6.1.275",///NOLINT
                                                          "Vascular Sclerosis Types (3817)",
                                                          DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Non-invasive Vascular Procedures (3820)</summary>
DicomUID  DicomUID::NonInvasiveVascularProcedures3820 = DicomUID{"1.2.840.10008.6.1.276",///NOLINT
                                                                 "Non-invasive Vascular Procedures (3820)",
                                                                 DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Papillary Muscle Included/Excluded (3821)</summary>
DicomUID  DicomUID::PapillaryMuscleIncludedExcluded3821 = DicomUID{"1.2.840.10008.6.1.277",///NOLINT
                                                                   "Papillary Muscle Included/Excluded (3821)",
                                                                   DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Respiratory Status (3823)</summary>
DicomUID  DicomUID::RespiratoryStatus3823 = DicomUID{"1.2.840.10008.6.1.278",///NOLINT
                                                     "Respiratory Status (3823)", DicomUidType::ContextGroupName,
                                                     false};

///<summary>Context Group Name: Heart Rhythm (3826)</summary>
DicomUID  DicomUID::HeartRhythm3826 = DicomUID{"1.2.840.10008.6.1.279",///NOLINT
                                               "Heart Rhythm (3826)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Vessel Segments (3827)</summary>
DicomUID  DicomUID::VesselSegments3827 = DicomUID{"1.2.840.10008.6.1.280",///NOLINT
                                                  "Vessel Segments (3827)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Pulmonary Arteries (3829)</summary>
DicomUID  DicomUID::PulmonaryArteries3829 = DicomUID{"1.2.840.10008.6.1.281",///NOLINT
                                                     "Pulmonary Arteries (3829)", DicomUidType::ContextGroupName,
                                                     false};

///<summary>Context Group Name: Stenosis Length (3831)</summary>
DicomUID  DicomUID::StenosisLength3831 = DicomUID{"1.2.840.10008.6.1.282",///NOLINT
                                                  "Stenosis Length (3831)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Stenosis Grade (3832)</summary>
DicomUID  DicomUID::StenosisGrade3832 = DicomUID{"1.2.840.10008.6.1.283",///NOLINT
                                                 "Stenosis Grade (3832)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Cardiac Ejection Fraction (3833)</summary>
DicomUID  DicomUID::CardiacEjectionFraction3833 = DicomUID{"1.2.840.10008.6.1.284",///NOLINT
                                                           "Cardiac Ejection Fraction (3833)",
                                                           DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Cardiac Volume Measurements (3835)</summary>
DicomUID  DicomUID::CardiacVolumeMeasurements3835 = DicomUID{"1.2.840.10008.6.1.285",///NOLINT
                                                             "Cardiac Volume Measurements (3835)",
                                                             DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Time-based Perfusion Measurements (3836)</summary>
DicomUID  DicomUID::TimeBasedPerfusionMeasurements3836 = DicomUID{"1.2.840.10008.6.1.286",///NOLINT
                                                                  "Time-based Perfusion Measurements (3836)",
                                                                  DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Fiducial Feature (3837)</summary>
DicomUID  DicomUID::FiducialFeature3837 = DicomUID{"1.2.840.10008.6.1.287",///NOLINT
                                                   "Fiducial Feature (3837)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Diameter Derivation (3838)</summary>
DicomUID  DicomUID::DiameterDerivation3838 = DicomUID{"1.2.840.10008.6.1.288",///NOLINT
                                                      "Diameter Derivation (3838)", DicomUidType::ContextGroupName,
                                                      false};

///<summary>Context Group Name: Coronary Veins (3839)</summary>
DicomUID  DicomUID::CoronaryVeins3839 = DicomUID{"1.2.840.10008.6.1.289",///NOLINT
                                                 "Coronary Veins (3839)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Pulmonary Veins (3840)</summary>
DicomUID  DicomUID::PulmonaryVeins3840 = DicomUID{"1.2.840.10008.6.1.290",///NOLINT
                                                  "Pulmonary Veins (3840)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Myocardial Subsegment (3843)</summary>
DicomUID  DicomUID::MyocardialSubsegment3843 = DicomUID{"1.2.840.10008.6.1.291",///NOLINT
                                                        "Myocardial Subsegment (3843)", DicomUidType::ContextGroupName,
                                                        false};

///<summary>Context Group Name: Partial View Section for Mammography (4005)</summary>
DicomUID  DicomUID::PartialViewSectionForMammography4005 = DicomUID{"1.2.840.10008.6.1.292",///NOLINT
                                                                    "Partial View Section for Mammography (4005)",
                                                                    DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: DX Anatomy Imaged (4009)</summary>
DicomUID  DicomUID::DXAnatomyImaged4009 = DicomUID{"1.2.840.10008.6.1.293",///NOLINT
                                                   "DX Anatomy Imaged (4009)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: DX View (4010)</summary>
DicomUID  DicomUID::DXView4010 = DicomUID{"1.2.840.10008.6.1.294",///NOLINT
                                          "DX View (4010)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: DX View Modifier (4011)</summary>
DicomUID  DicomUID::DXViewModifier4011 = DicomUID{"1.2.840.10008.6.1.295",///NOLINT
                                                  "DX View Modifier (4011)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Projection Eponymous Name (4012)</summary>
DicomUID  DicomUID::ProjectionEponymousName4012 = DicomUID{"1.2.840.10008.6.1.296",///NOLINT
                                                           "Projection Eponymous Name (4012)",
                                                           DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Anatomic Region for Mammography (4013)</summary>
DicomUID  DicomUID::AnatomicRegionForMammography4013 = DicomUID{"1.2.840.10008.6.1.297",///NOLINT
                                                                "Anatomic Region for Mammography (4013)",
                                                                DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: View for Mammography (4014)</summary>
DicomUID  DicomUID::ViewForMammography4014 = DicomUID{"1.2.840.10008.6.1.298",///NOLINT
                                                      "View for Mammography (4014)", DicomUidType::ContextGroupName,
                                                      false};

///<summary>Context Group Name: View Modifier for Mammography (4015)</summary>
DicomUID  DicomUID::ViewModifierForMammography4015 = DicomUID{"1.2.840.10008.6.1.299",///NOLINT
                                                              "View Modifier for Mammography (4015)",
                                                              DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Anatomic Region for Intra-oral Radiography (4016)</summary>
DicomUID  DicomUID::AnatomicRegionForIntraOralRadiography4016 = DicomUID{"1.2.840.10008.6.1.300",///NOLINT
                                                                         "Anatomic Region for Intra-oral Radiography (4016)",
                                                                         DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Anatomic Region Modifier for Intra-oral Radiography (4017)</summary>
DicomUID  DicomUID::AnatomicRegionModifierForIntraOralRadiography4017 = DicomUID{"1.2.840.10008.6.1.301",///NOLINT
                                                                                 "Anatomic Region Modifier for Intra-oral Radiography (4017)",
                                                                                 DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Primary Anatomic Structure for Intra-oral Radiography (Permanent Dentition - Designation of Teeth) (4018)</summary>
DicomUID

        DicomUID::PrimaryAnatomicStructureForIntraOralRadiographyPermanentDentitionDesignationOfTeeth4018 = DicomUID{///NOLINT
        "1.2.840.10008.6.1.302",///NOLINT
        "Primary Anatomic Structure for Intra-oral Radiography (Permanent Dentition - Designation of Teeth) (4018)",
        DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Primary Anatomic Structure for Intra-oral Radiography (Deciduous Dentition - Designation of Teeth) (4019)</summary>
DicomUID

        DicomUID::PrimaryAnatomicStructureForIntraOralRadiographyDeciduousDentitionDesignationOfTeeth4019 = DicomUID{///NOLINT
        "1.2.840.10008.6.1.303",///NOLINT
        "Primary Anatomic Structure for Intra-oral Radiography (Deciduous Dentition - Designation of Teeth) (4019)",
        DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: PET Radionuclide (4020)</summary>
DicomUID  DicomUID::PETRadionuclide4020 = DicomUID{"1.2.840.10008.6.1.304",///NOLINT
                                                   "PET Radionuclide (4020)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: PET Radiopharmaceutical (4021)</summary>
DicomUID  DicomUID::PETRadiopharmaceutical4021 = DicomUID{"1.2.840.10008.6.1.305",///NOLINT
                                                          "PET Radiopharmaceutical (4021)",
                                                          DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Craniofacial Anatomic Regions (4028)</summary>
DicomUID  DicomUID::CraniofacialAnatomicRegions4028 = DicomUID{"1.2.840.10008.6.1.306",///NOLINT
                                                               "Craniofacial Anatomic Regions (4028)",
                                                               DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: CT, MR and PET Anatomy Imaged (4030)</summary>
DicomUID  DicomUID::CTMRAndPETAnatomyImaged4030 = DicomUID{"1.2.840.10008.6.1.307",///NOLINT
                                                           "CT, MR and PET Anatomy Imaged (4030)",
                                                           DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Common Anatomic Regions (4031)</summary>
DicomUID  DicomUID::CommonAnatomicRegions4031 = DicomUID{"1.2.840.10008.6.1.308",///NOLINT
                                                         "Common Anatomic Regions (4031)",
                                                         DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: MR Spectroscopy Metabolites (4032)</summary>
DicomUID  DicomUID::MRSpectroscopyMetabolites4032 = DicomUID{"1.2.840.10008.6.1.309",///NOLINT
                                                             "MR Spectroscopy Metabolites (4032)",
                                                             DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: MR Proton Spectroscopy Metabolites (4033)</summary>
DicomUID  DicomUID::MRProtonSpectroscopyMetabolites4033 = DicomUID{"1.2.840.10008.6.1.310",///NOLINT
                                                                   "MR Proton Spectroscopy Metabolites (4033)",
                                                                   DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Endoscopy Anatomic Regions (4040)</summary>
DicomUID  DicomUID::EndoscopyAnatomicRegions4040 = DicomUID{"1.2.840.10008.6.1.311",///NOLINT
                                                            "Endoscopy Anatomic Regions (4040)",
                                                            DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: XA/XRF Anatomy Imaged (4042)</summary>
DicomUID  DicomUID::XAXRFAnatomyImaged4042 = DicomUID{"1.2.840.10008.6.1.312",///NOLINT
                                                      "XA/XRF Anatomy Imaged (4042)", DicomUidType::ContextGroupName,
                                                      false};

///<summary>Context Group Name: Drug or Contrast Agent Characteristics (4050)</summary>
DicomUID  DicomUID::DrugOrContrastAgentCharacteristics4050 = DicomUID{"1.2.840.10008.6.1.313",///NOLINT
                                                                      "Drug or Contrast Agent Characteristics (4050)",
                                                                      DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: General Devices (4051)</summary>
DicomUID  DicomUID::GeneralDevices4051 = DicomUID{"1.2.840.10008.6.1.314",///NOLINT
                                                  "General Devices (4051)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Phantom Devices (4052)</summary>
DicomUID  DicomUID::PhantomDevices4052 = DicomUID{"1.2.840.10008.6.1.315",///NOLINT
                                                  "Phantom Devices (4052)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Ophthalmic Imaging Agent (4200)</summary>
DicomUID  DicomUID::OphthalmicImagingAgent4200 = DicomUID{"1.2.840.10008.6.1.316",///NOLINT
                                                          "Ophthalmic Imaging Agent (4200)",
                                                          DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Patient Eye Movement Command (4201)</summary>
DicomUID  DicomUID::PatientEyeMovementCommand4201 = DicomUID{"1.2.840.10008.6.1.317",///NOLINT
                                                             "Patient Eye Movement Command (4201)",
                                                             DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Ophthalmic Photography Acquisition Device (4202)</summary>
DicomUID  DicomUID::OphthalmicPhotographyAcquisitionDevice4202 = DicomUID{"1.2.840.10008.6.1.318",///NOLINT
                                                                          "Ophthalmic Photography Acquisition Device (4202)",
                                                                          DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Ophthalmic Photography Illumination (4203)</summary>
DicomUID  DicomUID::OphthalmicPhotographyIllumination4203 = DicomUID{"1.2.840.10008.6.1.319",///NOLINT
                                                                     "Ophthalmic Photography Illumination (4203)",
                                                                     DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Ophthalmic Filter (4204)</summary>
DicomUID  DicomUID::OphthalmicFilter4204 = DicomUID{"1.2.840.10008.6.1.320",///NOLINT
                                                    "Ophthalmic Filter (4204)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Ophthalmic Lens (4205)</summary>
DicomUID  DicomUID::OphthalmicLens4205 = DicomUID{"1.2.840.10008.6.1.321",///NOLINT
                                                  "Ophthalmic Lens (4205)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Ophthalmic Channel Description (4206)</summary>
DicomUID  DicomUID::OphthalmicChannelDescription4206 = DicomUID{"1.2.840.10008.6.1.322",///NOLINT
                                                                "Ophthalmic Channel Description (4206)",
                                                                DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Ophthalmic Image Position (4207)</summary>
DicomUID  DicomUID::OphthalmicImagePosition4207 = DicomUID{"1.2.840.10008.6.1.323",///NOLINT
                                                           "Ophthalmic Image Position (4207)",
                                                           DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Mydriatic Agent (4208)</summary>
DicomUID  DicomUID::MydriaticAgent4208 = DicomUID{"1.2.840.10008.6.1.324",///NOLINT
                                                  "Mydriatic Agent (4208)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Ophthalmic Anatomic Structure Imaged (4209)</summary>
DicomUID  DicomUID::OphthalmicAnatomicStructureImaged4209 = DicomUID{"1.2.840.10008.6.1.325",///NOLINT
                                                                     "Ophthalmic Anatomic Structure Imaged (4209)",
                                                                     DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Ophthalmic Tomography Acquisition Device (4210)</summary>
DicomUID  DicomUID::OphthalmicTomographyAcquisitionDevice4210 = DicomUID{"1.2.840.10008.6.1.326",///NOLINT
                                                                         "Ophthalmic Tomography Acquisition Device (4210)",
                                                                         DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Ophthalmic OCT Anatomic Structure Imaged (4211)</summary>
DicomUID  DicomUID::OphthalmicOCTAnatomicStructureImaged4211 = DicomUID{"1.2.840.10008.6.1.327",///NOLINT
                                                                        "Ophthalmic OCT Anatomic Structure Imaged (4211)",
                                                                        DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Languages (5000)</summary>
DicomUID  DicomUID::Languages5000 = DicomUID{"1.2.840.10008.6.1.328",///NOLINT
                                             "Languages (5000)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Countries (5001)</summary>
DicomUID  DicomUID::Countries5001 = DicomUID{"1.2.840.10008.6.1.329",///NOLINT
                                             "Countries (5001)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Overall Breast Composition (6000)</summary>
DicomUID  DicomUID::OverallBreastComposition6000 = DicomUID{"1.2.840.10008.6.1.330",///NOLINT
                                                            "Overall Breast Composition (6000)",
                                                            DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Overall Breast Composition from BI-RADS® (6001)</summary>
DicomUID  DicomUID::OverallBreastCompositionFromBIRADS6001 = DicomUID{"1.2.840.10008.6.1.331",///NOLINT
                                                                      "Overall Breast Composition from BI-RADS® (6001)",
                                                                      DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Change Since Last Mammogram or Prior Surgery (6002)</summary>
DicomUID  DicomUID::ChangeSinceLastMammogramOrPriorSurgery6002 = DicomUID{"1.2.840.10008.6.1.332",///NOLINT
                                                                          "Change Since Last Mammogram or Prior Surgery (6002)",
                                                                          DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Change Since Last Mammogram or Prior Surgery from BI-RADS® (6003)</summary>
DicomUID  DicomUID::ChangeSinceLastMammogramOrPriorSurgeryFromBIRADS6003 = DicomUID{"1.2.840.10008.6.1.333",///NOLINT
                                                                                    "Change Since Last Mammogram or Prior Surgery from BI-RADS® (6003)",
                                                                                    DicomUidType::ContextGroupName,
                                                                                    false};

///<summary>Context Group Name: Mammography Characteristics of Shape (6004)</summary>
DicomUID  DicomUID::MammographyCharacteristicsOfShape6004 = DicomUID{"1.2.840.10008.6.1.334",///NOLINT
                                                                     "Mammography Characteristics of Shape (6004)",
                                                                     DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Characteristics of Shape from BI-RADS® (6005)</summary>
DicomUID  DicomUID::CharacteristicsOfShapeFromBIRADS6005 = DicomUID{"1.2.840.10008.6.1.335",///NOLINT
                                                                    "Characteristics of Shape from BI-RADS® (6005)",
                                                                    DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Mammography Characteristics of Margin (6006)</summary>
DicomUID  DicomUID::MammographyCharacteristicsOfMargin6006 = DicomUID{"1.2.840.10008.6.1.336",///NOLINT
                                                                      "Mammography Characteristics of Margin (6006)",
                                                                      DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Characteristics of Margin from BI-RADS® (6007)</summary>
DicomUID  DicomUID::CharacteristicsOfMarginFromBIRADS6007 = DicomUID{"1.2.840.10008.6.1.337",///NOLINT
                                                                     "Characteristics of Margin from BI-RADS® (6007)",
                                                                     DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Density Modifier (6008)</summary>
DicomUID  DicomUID::DensityModifier6008 = DicomUID{"1.2.840.10008.6.1.338",///NOLINT
                                                   "Density Modifier (6008)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Density Modifier from BI-RADS® (6009)</summary>
DicomUID  DicomUID::DensityModifierFromBIRADS6009 = DicomUID{"1.2.840.10008.6.1.339",///NOLINT
                                                             "Density Modifier from BI-RADS® (6009)",
                                                             DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Mammography Calcification Types (6010)</summary>
DicomUID  DicomUID::MammographyCalcificationTypes6010 = DicomUID{"1.2.840.10008.6.1.340",///NOLINT
                                                                 "Mammography Calcification Types (6010)",
                                                                 DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Calcification Types from BI-RADS® (6011)</summary>
DicomUID  DicomUID::CalcificationTypesFromBIRADS6011 = DicomUID{"1.2.840.10008.6.1.341",///NOLINT
                                                                "Calcification Types from BI-RADS® (6011)",
                                                                DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Calcification Distribution Modifier (6012)</summary>
DicomUID  DicomUID::CalcificationDistributionModifier6012 = DicomUID{"1.2.840.10008.6.1.342",///NOLINT
                                                                     "Calcification Distribution Modifier (6012)",
                                                                     DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Calcification Distribution Modifier from BI-RADS® (6013)</summary>
DicomUID  DicomUID::CalcificationDistributionModifierFromBIRADS6013 = DicomUID{"1.2.840.10008.6.1.343",///NOLINT
                                                                               "Calcification Distribution Modifier from BI-RADS® (6013)",
                                                                               DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Mammography Single Image Finding (6014)</summary>
DicomUID  DicomUID::MammographySingleImageFinding6014 = DicomUID{"1.2.840.10008.6.1.344",///NOLINT
                                                                 "Mammography Single Image Finding (6014)",
                                                                 DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Single Image Finding from BI-RADS® (6015)</summary>
DicomUID  DicomUID::SingleImageFindingFromBIRADS6015 = DicomUID{"1.2.840.10008.6.1.345",///NOLINT
                                                                "Single Image Finding from BI-RADS® (6015)",
                                                                DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Mammography Composite Feature (6016)</summary>
DicomUID  DicomUID::MammographyCompositeFeature6016 = DicomUID{"1.2.840.10008.6.1.346",///NOLINT
                                                               "Mammography Composite Feature (6016)",
                                                               DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Composite Feature from BI-RADS® (6017)</summary>
DicomUID  DicomUID::CompositeFeatureFromBIRADS6017 = DicomUID{"1.2.840.10008.6.1.347",///NOLINT
                                                              "Composite Feature from BI-RADS® (6017)",
                                                              DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Clockface Location or Region (6018)</summary>
DicomUID  DicomUID::ClockfaceLocationOrRegion6018 = DicomUID{"1.2.840.10008.6.1.348",///NOLINT
                                                             "Clockface Location or Region (6018)",
                                                             DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Clockface Location or Region from BI-RADS® (6019)</summary>
DicomUID  DicomUID::ClockfaceLocationOrRegionFromBIRADS6019 = DicomUID{"1.2.840.10008.6.1.349",///NOLINT
                                                                       "Clockface Location or Region from BI-RADS® (6019)",
                                                                       DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Quadrant Location (6020)</summary>
DicomUID  DicomUID::QuadrantLocation6020 = DicomUID{"1.2.840.10008.6.1.350",///NOLINT
                                                    "Quadrant Location (6020)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Quadrant Location from BI-RADS® (6021)</summary>
DicomUID  DicomUID::QuadrantLocationFromBIRADS6021 = DicomUID{"1.2.840.10008.6.1.351",///NOLINT
                                                              "Quadrant Location from BI-RADS® (6021)",
                                                              DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Side (6022)</summary>
DicomUID  DicomUID::Side6022 = DicomUID{"1.2.840.10008.6.1.352",///NOLINT
                                        "Side (6022)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Side from BI-RADS® (6023)</summary>
DicomUID  DicomUID::SideFromBIRADS6023 = DicomUID{"1.2.840.10008.6.1.353",///NOLINT
                                                  "Side from BI-RADS® (6023)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Depth (6024)</summary>
DicomUID  DicomUID::Depth6024 = DicomUID{"1.2.840.10008.6.1.354",///NOLINT
                                         "Depth (6024)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Depth from BI-RADS® (6025)</summary>
DicomUID  DicomUID::DepthFromBIRADS6025 = DicomUID{"1.2.840.10008.6.1.355",///NOLINT
                                                   "Depth from BI-RADS® (6025)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Mammography Assessment (6026)</summary>
DicomUID  DicomUID::MammographyAssessment6026 = DicomUID{"1.2.840.10008.6.1.356",///NOLINT
                                                         "Mammography Assessment (6026)",
                                                         DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Assessment from BI-RADS® (6027)</summary>
DicomUID  DicomUID::AssessmentFromBIRADS6027 = DicomUID{"1.2.840.10008.6.1.357",///NOLINT
                                                        "Assessment from BI-RADS® (6027)",
                                                        DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Mammography Recommended Follow-up (6028)</summary>
DicomUID  DicomUID::MammographyRecommendedFollowUp6028 = DicomUID{"1.2.840.10008.6.1.358",///NOLINT
                                                                  "Mammography Recommended Follow-up (6028)",
                                                                  DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Recommended Follow-up from BI-RADS® (6029)</summary>
DicomUID  DicomUID::RecommendedFollowUpFromBIRADS6029 = DicomUID{"1.2.840.10008.6.1.359",///NOLINT
                                                                 "Recommended Follow-up from BI-RADS® (6029)",
                                                                 DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Mammography Pathology Codes (6030)</summary>
DicomUID  DicomUID::MammographyPathologyCodes6030 = DicomUID{"1.2.840.10008.6.1.360",///NOLINT
                                                             "Mammography Pathology Codes (6030)",
                                                             DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Benign Pathology Codes from BI-RADS® (6031)</summary>
DicomUID  DicomUID::BenignPathologyCodesFromBIRADS6031 = DicomUID{"1.2.840.10008.6.1.361",///NOLINT
                                                                  "Benign Pathology Codes from BI-RADS® (6031)",
                                                                  DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: High Risk Lesions Pathology Codes from BI-RADS® (6032)</summary>
DicomUID  DicomUID::HighRiskLesionsPathologyCodesFromBIRADS6032 = DicomUID{"1.2.840.10008.6.1.362",///NOLINT
                                                                           "High Risk Lesions Pathology Codes from BI-RADS® (6032)",
                                                                           DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Malignant Pathology Codes from BI-RADS® (6033)</summary>
DicomUID  DicomUID::MalignantPathologyCodesFromBIRADS6033 = DicomUID{"1.2.840.10008.6.1.363",///NOLINT
                                                                     "Malignant Pathology Codes from BI-RADS® (6033)",
                                                                     DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Intended Use of CAD Output (6034)</summary>
DicomUID  DicomUID::IntendedUseOfCADOutput6034 = DicomUID{"1.2.840.10008.6.1.364",///NOLINT
                                                          "Intended Use of CAD Output (6034)",
                                                          DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Composite Feature Relations (6035)</summary>
DicomUID  DicomUID::CompositeFeatureRelations6035 = DicomUID{"1.2.840.10008.6.1.365",///NOLINT
                                                             "Composite Feature Relations (6035)",
                                                             DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Scope of Feature (6036)</summary>
DicomUID  DicomUID::ScopeOfFeature6036 = DicomUID{"1.2.840.10008.6.1.366",///NOLINT
                                                  "Scope of Feature (6036)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Mammography Quantitative Temporal Difference Type (6037)</summary>
DicomUID  DicomUID::MammographyQuantitativeTemporalDifferenceType6037 = DicomUID{"1.2.840.10008.6.1.367",///NOLINT
                                                                                 "Mammography Quantitative Temporal Difference Type (6037)",
                                                                                 DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Mammography Qualitative Temporal Difference Type (6038)</summary>
DicomUID  DicomUID::MammographyQualitativeTemporalDifferenceType6038 = DicomUID{"1.2.840.10008.6.1.368",///NOLINT
                                                                                "Mammography Qualitative Temporal Difference Type (6038)",
                                                                                DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Nipple Characteristic (6039)</summary>
DicomUID  DicomUID::NippleCharacteristic6039 = DicomUID{"1.2.840.10008.6.1.369",///NOLINT
                                                        "Nipple Characteristic (6039)", DicomUidType::ContextGroupName,
                                                        false};

///<summary>Context Group Name: Non-lesion Object Type (6040)</summary>
DicomUID  DicomUID::NonLesionObjectType6040 = DicomUID{"1.2.840.10008.6.1.370",///NOLINT
                                                       "Non-lesion Object Type (6040)", DicomUidType::ContextGroupName,
                                                       false};

///<summary>Context Group Name: Mammography Image Quality Finding (6041)</summary>
DicomUID  DicomUID::MammographyImageQualityFinding6041 = DicomUID{"1.2.840.10008.6.1.371",///NOLINT
                                                                  "Mammography Image Quality Finding (6041)",
                                                                  DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Status of Results (6042)</summary>
DicomUID  DicomUID::StatusOfResults6042 = DicomUID{"1.2.840.10008.6.1.372",///NOLINT
                                                   "Status of Results (6042)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Types of Mammography CAD Analysis (6043)</summary>
DicomUID  DicomUID::TypesOfMammographyCADAnalysis6043 = DicomUID{"1.2.840.10008.6.1.373",///NOLINT
                                                                 "Types of Mammography CAD Analysis (6043)",
                                                                 DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Types of Image Quality Assessment (6044)</summary>
DicomUID  DicomUID::TypesOfImageQualityAssessment6044 = DicomUID{"1.2.840.10008.6.1.374",///NOLINT
                                                                 "Types of Image Quality Assessment (6044)",
                                                                 DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Mammography Types of Quality Control Standard (6045)</summary>
DicomUID  DicomUID::MammographyTypesOfQualityControlStandard6045 = DicomUID{"1.2.840.10008.6.1.375",///NOLINT
                                                                            "Mammography Types of Quality Control Standard (6045)",
                                                                            DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Units of Follow-up Interval (6046)</summary>
DicomUID  DicomUID::UnitsOfFollowUpInterval6046 = DicomUID{"1.2.840.10008.6.1.376",///NOLINT
                                                           "Units of Follow-up Interval (6046)",
                                                           DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: CAD Processing and Findings Summary (6047)</summary>
DicomUID  DicomUID::CADProcessingAndFindingsSummary6047 = DicomUID{"1.2.840.10008.6.1.377",///NOLINT
                                                                   "CAD Processing and Findings Summary (6047)",
                                                                   DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: CAD Operating Point Axis Label (6048)</summary>
DicomUID  DicomUID::CADOperatingPointAxisLabel6048 = DicomUID{"1.2.840.10008.6.1.378",///NOLINT
                                                              "CAD Operating Point Axis Label (6048)",
                                                              DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Breast Procedure Reported (6050)</summary>
DicomUID  DicomUID::BreastProcedureReported6050 = DicomUID{"1.2.840.10008.6.1.379",///NOLINT
                                                           "Breast Procedure Reported (6050)",
                                                           DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Breast Procedure Reason (6051)</summary>
DicomUID  DicomUID::BreastProcedureReason6051 = DicomUID{"1.2.840.10008.6.1.380",///NOLINT
                                                         "Breast Procedure Reason (6051)",
                                                         DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Breast Imaging Report Section Title (6052)</summary>
DicomUID  DicomUID::BreastImagingReportSectionTitle6052 = DicomUID{"1.2.840.10008.6.1.381",///NOLINT
                                                                   "Breast Imaging Report Section Title (6052)",
                                                                   DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Breast Imaging Report Elements (6053)</summary>
DicomUID  DicomUID::BreastImagingReportElements6053 = DicomUID{"1.2.840.10008.6.1.382",///NOLINT
                                                               "Breast Imaging Report Elements (6053)",
                                                               DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Breast Imaging Findings (6054)</summary>
DicomUID  DicomUID::BreastImagingFindings6054 = DicomUID{"1.2.840.10008.6.1.383",///NOLINT
                                                         "Breast Imaging Findings (6054)",
                                                         DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Breast Clinical Finding or Indicated Problem (6055)</summary>
DicomUID  DicomUID::BreastClinicalFindingOrIndicatedProblem6055 = DicomUID{"1.2.840.10008.6.1.384",///NOLINT
                                                                           "Breast Clinical Finding or Indicated Problem (6055)",
                                                                           DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Associated Findings for Breast (6056)</summary>
DicomUID  DicomUID::AssociatedFindingsForBreast6056 = DicomUID{"1.2.840.10008.6.1.385",///NOLINT
                                                               "Associated Findings for Breast (6056)",
                                                               DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Ductography Findings for Breast (6057)</summary>
DicomUID  DicomUID::DuctographyFindingsForBreast6057 = DicomUID{"1.2.840.10008.6.1.386",///NOLINT
                                                                "Ductography Findings for Breast (6057)",
                                                                DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Procedure Modifiers for Breast (6058)</summary>
DicomUID  DicomUID::ProcedureModifiersForBreast6058 = DicomUID{"1.2.840.10008.6.1.387",///NOLINT
                                                               "Procedure Modifiers for Breast (6058)",
                                                               DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Breast Implant Types (6059)</summary>
DicomUID  DicomUID::BreastImplantTypes6059 = DicomUID{"1.2.840.10008.6.1.388",///NOLINT
                                                      "Breast Implant Types (6059)", DicomUidType::ContextGroupName,
                                                      false};

///<summary>Context Group Name: Breast Biopsy Techniques (6060)</summary>
DicomUID  DicomUID::BreastBiopsyTechniques6060 = DicomUID{"1.2.840.10008.6.1.389",///NOLINT
                                                          "Breast Biopsy Techniques (6060)",
                                                          DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Breast Imaging Procedure Modifiers (6061)</summary>
DicomUID  DicomUID::BreastImagingProcedureModifiers6061 = DicomUID{"1.2.840.10008.6.1.390",///NOLINT
                                                                   "Breast Imaging Procedure Modifiers (6061)",
                                                                   DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Interventional Procedure Complications (6062)</summary>
DicomUID  DicomUID::InterventionalProcedureComplications6062 = DicomUID{"1.2.840.10008.6.1.391",///NOLINT
                                                                        "Interventional Procedure Complications (6062)",
                                                                        DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Interventional Procedure Results (6063)</summary>
DicomUID  DicomUID::InterventionalProcedureResults6063 = DicomUID{"1.2.840.10008.6.1.392",///NOLINT
                                                                  "Interventional Procedure Results (6063)",
                                                                  DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Ultrasound Findings for Breast (6064)</summary>
DicomUID  DicomUID::UltrasoundFindingsForBreast6064 = DicomUID{"1.2.840.10008.6.1.393",///NOLINT
                                                               "Ultrasound Findings for Breast (6064)",
                                                               DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Instrument Approach (6065)</summary>
DicomUID  DicomUID::InstrumentApproach6065 = DicomUID{"1.2.840.10008.6.1.394",///NOLINT
                                                      "Instrument Approach (6065)", DicomUidType::ContextGroupName,
                                                      false};

///<summary>Context Group Name: Target Confirmation (6066)</summary>
DicomUID  DicomUID::TargetConfirmation6066 = DicomUID{"1.2.840.10008.6.1.395",///NOLINT
                                                      "Target Confirmation (6066)", DicomUidType::ContextGroupName,
                                                      false};

///<summary>Context Group Name: Fluid Color (6067)</summary>
DicomUID  DicomUID::FluidColor6067 = DicomUID{"1.2.840.10008.6.1.396",///NOLINT
                                              "Fluid Color (6067)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Tumor Stages From AJCC (6068)</summary>
DicomUID  DicomUID::TumorStagesFromAJCC6068 = DicomUID{"1.2.840.10008.6.1.397",///NOLINT
                                                       "Tumor Stages From AJCC (6068)", DicomUidType::ContextGroupName,
                                                       false};

///<summary>Context Group Name: Nottingham Combined Histologic Grade (6069)</summary>
DicomUID  DicomUID::NottinghamCombinedHistologicGrade6069 = DicomUID{"1.2.840.10008.6.1.398",///NOLINT
                                                                     "Nottingham Combined Histologic Grade (6069)",
                                                                     DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Bloom-Richardson Histologic Grade (6070)</summary>
DicomUID  DicomUID::BloomRichardsonHistologicGrade6070 = DicomUID{"1.2.840.10008.6.1.399",///NOLINT
                                                                  "Bloom-Richardson Histologic Grade (6070)",
                                                                  DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Histologic Grading Method (6071)</summary>
DicomUID  DicomUID::HistologicGradingMethod6071 = DicomUID{"1.2.840.10008.6.1.400",///NOLINT
                                                           "Histologic Grading Method (6071)",
                                                           DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Breast Implant Findings (6072)</summary>
DicomUID  DicomUID::BreastImplantFindings6072 = DicomUID{"1.2.840.10008.6.1.401",///NOLINT
                                                         "Breast Implant Findings (6072)",
                                                         DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Gynecological Hormones (6080)</summary>
DicomUID  DicomUID::GynecologicalHormones6080 = DicomUID{"1.2.840.10008.6.1.402",///NOLINT
                                                         "Gynecological Hormones (6080)",
                                                         DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Breast Cancer Risk Factors (6081)</summary>
DicomUID  DicomUID::BreastCancerRiskFactors6081 = DicomUID{"1.2.840.10008.6.1.403",///NOLINT
                                                           "Breast Cancer Risk Factors (6081)",
                                                           DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Gynecological Procedures (6082)</summary>
DicomUID  DicomUID::GynecologicalProcedures6082 = DicomUID{"1.2.840.10008.6.1.404",///NOLINT
                                                           "Gynecological Procedures (6082)",
                                                           DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Procedures for Breast (6083)</summary>
DicomUID  DicomUID::ProceduresForBreast6083 = DicomUID{"1.2.840.10008.6.1.405",///NOLINT
                                                       "Procedures for Breast (6083)", DicomUidType::ContextGroupName,
                                                       false};

///<summary>Context Group Name: Mammoplasty Procedures (6084)</summary>
DicomUID  DicomUID::MammoplastyProcedures6084 = DicomUID{"1.2.840.10008.6.1.406",///NOLINT
                                                         "Mammoplasty Procedures (6084)",
                                                         DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Therapies for Breast (6085)</summary>
DicomUID  DicomUID::TherapiesForBreast6085 = DicomUID{"1.2.840.10008.6.1.407",///NOLINT
                                                      "Therapies for Breast (6085)", DicomUidType::ContextGroupName,
                                                      false};

///<summary>Context Group Name: Menopausal Phase (6086)</summary>
DicomUID  DicomUID::MenopausalPhase6086 = DicomUID{"1.2.840.10008.6.1.408",///NOLINT
                                                   "Menopausal Phase (6086)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: General Risk Factors (6087)</summary>
DicomUID  DicomUID::GeneralRiskFactors6087 = DicomUID{"1.2.840.10008.6.1.409",///NOLINT
                                                      "General Risk Factors (6087)", DicomUidType::ContextGroupName,
                                                      false};

///<summary>Context Group Name: OB-GYN Maternal Risk Factors (6088)</summary>
DicomUID  DicomUID::OBGYNMaternalRiskFactors6088 = DicomUID{"1.2.840.10008.6.1.410",///NOLINT
                                                            "OB-GYN Maternal Risk Factors (6088)",
                                                            DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Substances (6089)</summary>
DicomUID  DicomUID::Substances6089 = DicomUID{"1.2.840.10008.6.1.411",///NOLINT
                                              "Substances (6089)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Relative Usage, Exposure Amount (6090)</summary>
DicomUID  DicomUID::RelativeUsageExposureAmount6090 = DicomUID{"1.2.840.10008.6.1.412",///NOLINT
                                                               "Relative Usage, Exposure Amount (6090)",
                                                               DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Relative Frequency of Event Values (6091)</summary>
DicomUID  DicomUID::RelativeFrequencyOfEventValues6091 = DicomUID{"1.2.840.10008.6.1.413",///NOLINT
                                                                  "Relative Frequency of Event Values (6091)",
                                                                  DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Quantitative Concepts for Usage, Exposure (6092)</summary>
DicomUID  DicomUID::QuantitativeConceptsForUsageExposure6092 = DicomUID{"1.2.840.10008.6.1.414",///NOLINT
                                                                        "Quantitative Concepts for Usage, Exposure (6092)",
                                                                        DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Qualitative Concepts for Usage, Exposure Amount (6093)</summary>
DicomUID  DicomUID::QualitativeConceptsForUsageExposureAmount6093 = DicomUID{"1.2.840.10008.6.1.415",///NOLINT
                                                                             "Qualitative Concepts for Usage, Exposure Amount (6093)",
                                                                             DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Qualitative Concepts for Usage, Exposure Frequency (6094)</summary>
DicomUID  DicomUID::QualitativeConceptsForUsageExposureFrequency6094 = DicomUID{"1.2.840.10008.6.1.416",///NOLINT
                                                                                "Qualitative Concepts for Usage, Exposure Frequency (6094)",
                                                                                DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Numeric Properties of Procedures (6095)</summary>
DicomUID  DicomUID::NumericPropertiesOfProcedures6095 = DicomUID{"1.2.840.10008.6.1.417",///NOLINT
                                                                 "Numeric Properties of Procedures (6095)",
                                                                 DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Pregnancy Status (6096)</summary>
DicomUID  DicomUID::PregnancyStatus6096 = DicomUID{"1.2.840.10008.6.1.418",///NOLINT
                                                   "Pregnancy Status (6096)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Side of Family (6097)</summary>
DicomUID  DicomUID::SideOfFamily6097 = DicomUID{"1.2.840.10008.6.1.419",///NOLINT
                                                "Side of Family (6097)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Chest Component Categories (6100)</summary>
DicomUID  DicomUID::ChestComponentCategories6100 = DicomUID{"1.2.840.10008.6.1.420",///NOLINT
                                                            "Chest Component Categories (6100)",
                                                            DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Chest Finding or Feature (6101)</summary>
DicomUID  DicomUID::ChestFindingOrFeature6101 = DicomUID{"1.2.840.10008.6.1.421",///NOLINT
                                                         "Chest Finding or Feature (6101)",
                                                         DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Chest Finding or Feature Modifier (6102)</summary>
DicomUID  DicomUID::ChestFindingOrFeatureModifier6102 = DicomUID{"1.2.840.10008.6.1.422",///NOLINT
                                                                 "Chest Finding or Feature Modifier (6102)",
                                                                 DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Abnormal Lines Finding or Feature (6103)</summary>
DicomUID  DicomUID::AbnormalLinesFindingOrFeature6103 = DicomUID{"1.2.840.10008.6.1.423",///NOLINT
                                                                 "Abnormal Lines Finding or Feature (6103)",
                                                                 DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Abnormal Opacity Finding or Feature (6104)</summary>
DicomUID  DicomUID::AbnormalOpacityFindingOrFeature6104 = DicomUID{"1.2.840.10008.6.1.424",///NOLINT
                                                                   "Abnormal Opacity Finding or Feature (6104)",
                                                                   DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Abnormal Lucency Finding or Feature (6105)</summary>
DicomUID  DicomUID::AbnormalLucencyFindingOrFeature6105 = DicomUID{"1.2.840.10008.6.1.425",///NOLINT
                                                                   "Abnormal Lucency Finding or Feature (6105)",
                                                                   DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Abnormal Texture Finding or Feature (6106)</summary>
DicomUID  DicomUID::AbnormalTextureFindingOrFeature6106 = DicomUID{"1.2.840.10008.6.1.426",///NOLINT
                                                                   "Abnormal Texture Finding or Feature (6106)",
                                                                   DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Width Descriptor (6107)</summary>
DicomUID  DicomUID::WidthDescriptor6107 = DicomUID{"1.2.840.10008.6.1.427",///NOLINT
                                                   "Width Descriptor (6107)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Chest Anatomic Structure Abnormal Distribution (6108)</summary>
DicomUID  DicomUID::ChestAnatomicStructureAbnormalDistribution6108 = DicomUID{"1.2.840.10008.6.1.428",///NOLINT
                                                                              "Chest Anatomic Structure Abnormal Distribution (6108)",
                                                                              DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Radiographic Anatomy Finding or Feature (6109)</summary>
DicomUID  DicomUID::RadiographicAnatomyFindingOrFeature6109 = DicomUID{"1.2.840.10008.6.1.429",///NOLINT
                                                                       "Radiographic Anatomy Finding or Feature (6109)",
                                                                       DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Lung Anatomy Finding or Feature (6110)</summary>
DicomUID  DicomUID::LungAnatomyFindingOrFeature6110 = DicomUID{"1.2.840.10008.6.1.430",///NOLINT
                                                               "Lung Anatomy Finding or Feature (6110)",
                                                               DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Bronchovascular Anatomy Finding or Feature (6111)</summary>
DicomUID  DicomUID::BronchovascularAnatomyFindingOrFeature6111 = DicomUID{"1.2.840.10008.6.1.431",///NOLINT
                                                                          "Bronchovascular Anatomy Finding or Feature (6111)",
                                                                          DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Pleura Anatomy Finding or Feature (6112)</summary>
DicomUID  DicomUID::PleuraAnatomyFindingOrFeature6112 = DicomUID{"1.2.840.10008.6.1.432",///NOLINT
                                                                 "Pleura Anatomy Finding or Feature (6112)",
                                                                 DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Mediastinum Anatomy Finding or Feature (6113)</summary>
DicomUID  DicomUID::MediastinumAnatomyFindingOrFeature6113 = DicomUID{"1.2.840.10008.6.1.433",///NOLINT
                                                                      "Mediastinum Anatomy Finding or Feature (6113)",
                                                                      DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Osseous Anatomy Finding or Feature (6114)</summary>
DicomUID  DicomUID::OsseousAnatomyFindingOrFeature6114 = DicomUID{"1.2.840.10008.6.1.434",///NOLINT
                                                                  "Osseous Anatomy Finding or Feature (6114)",
                                                                  DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Osseous Anatomy Modifiers (6115)</summary>
DicomUID  DicomUID::OsseousAnatomyModifiers6115 = DicomUID{"1.2.840.10008.6.1.435",///NOLINT
                                                           "Osseous Anatomy Modifiers (6115)",
                                                           DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Muscular Anatomy (6116)</summary>
DicomUID  DicomUID::MuscularAnatomy6116 = DicomUID{"1.2.840.10008.6.1.436",///NOLINT
                                                   "Muscular Anatomy (6116)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Vascular Anatomy (6117)</summary>
DicomUID  DicomUID::VascularAnatomy6117 = DicomUID{"1.2.840.10008.6.1.437",///NOLINT
                                                   "Vascular Anatomy (6117)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Size Descriptor (6118)</summary>
DicomUID  DicomUID::SizeDescriptor6118 = DicomUID{"1.2.840.10008.6.1.438",///NOLINT
                                                  "Size Descriptor (6118)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Chest Border Shape (6119)</summary>
DicomUID  DicomUID::ChestBorderShape6119 = DicomUID{"1.2.840.10008.6.1.439",///NOLINT
                                                    "Chest Border Shape (6119)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Chest Border Definition (6120)</summary>
DicomUID  DicomUID::ChestBorderDefinition6120 = DicomUID{"1.2.840.10008.6.1.440",///NOLINT
                                                         "Chest Border Definition (6120)",
                                                         DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Chest Orientation Descriptor (6121)</summary>
DicomUID  DicomUID::ChestOrientationDescriptor6121 = DicomUID{"1.2.840.10008.6.1.441",///NOLINT
                                                              "Chest Orientation Descriptor (6121)",
                                                              DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Chest Content Descriptor (6122)</summary>
DicomUID  DicomUID::ChestContentDescriptor6122 = DicomUID{"1.2.840.10008.6.1.442",///NOLINT
                                                          "Chest Content Descriptor (6122)",
                                                          DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Chest Opacity Descriptor (6123)</summary>
DicomUID  DicomUID::ChestOpacityDescriptor6123 = DicomUID{"1.2.840.10008.6.1.443",///NOLINT
                                                          "Chest Opacity Descriptor (6123)",
                                                          DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Location in Chest (6124)</summary>
DicomUID  DicomUID::LocationInChest6124 = DicomUID{"1.2.840.10008.6.1.444",///NOLINT
                                                   "Location in Chest (6124)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: General Chest Location (6125)</summary>
DicomUID  DicomUID::GeneralChestLocation6125 = DicomUID{"1.2.840.10008.6.1.445",///NOLINT
                                                        "General Chest Location (6125)", DicomUidType::ContextGroupName,
                                                        false};

///<summary>Context Group Name: Location in Lung (6126)</summary>
DicomUID  DicomUID::LocationInLung6126 = DicomUID{"1.2.840.10008.6.1.446",///NOLINT
                                                  "Location in Lung (6126)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Segment Location in Lung (6127)</summary>
DicomUID  DicomUID::SegmentLocationInLung6127 = DicomUID{"1.2.840.10008.6.1.447",///NOLINT
                                                         "Segment Location in Lung (6127)",
                                                         DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Chest Distribution Descriptor (6128)</summary>
DicomUID  DicomUID::ChestDistributionDescriptor6128 = DicomUID{"1.2.840.10008.6.1.448",///NOLINT
                                                               "Chest Distribution Descriptor (6128)",
                                                               DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Chest Site Involvement (6129)</summary>
DicomUID  DicomUID::ChestSiteInvolvement6129 = DicomUID{"1.2.840.10008.6.1.449",///NOLINT
                                                        "Chest Site Involvement (6129)", DicomUidType::ContextGroupName,
                                                        false};

///<summary>Context Group Name: Severity Descriptor (6130)</summary>
DicomUID  DicomUID::SeverityDescriptor6130 = DicomUID{"1.2.840.10008.6.1.450",///NOLINT
                                                      "Severity Descriptor (6130)", DicomUidType::ContextGroupName,
                                                      false};

///<summary>Context Group Name: Chest Texture Descriptor (6131)</summary>
DicomUID  DicomUID::ChestTextureDescriptor6131 = DicomUID{"1.2.840.10008.6.1.451",///NOLINT
                                                          "Chest Texture Descriptor (6131)",
                                                          DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Chest Calcification Descriptor (6132)</summary>
DicomUID  DicomUID::ChestCalcificationDescriptor6132 = DicomUID{"1.2.840.10008.6.1.452",///NOLINT
                                                                "Chest Calcification Descriptor (6132)",
                                                                DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Chest Quantitative Temporal Difference Type (6133)</summary>
DicomUID  DicomUID::ChestQuantitativeTemporalDifferenceType6133 = DicomUID{"1.2.840.10008.6.1.453",///NOLINT
                                                                           "Chest Quantitative Temporal Difference Type (6133)",
                                                                           DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Chest Qualitative Temporal Difference Type (6134)</summary>
DicomUID  DicomUID::ChestQualitativeTemporalDifferenceType6134 = DicomUID{"1.2.840.10008.6.1.454",///NOLINT
                                                                          "Chest Qualitative Temporal Difference Type (6134)",
                                                                          DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Image Quality Finding (6135)</summary>
DicomUID  DicomUID::ImageQualityFinding6135 = DicomUID{"1.2.840.10008.6.1.455",///NOLINT
                                                       "Image Quality Finding (6135)", DicomUidType::ContextGroupName,
                                                       false};

///<summary>Context Group Name: Chest Types of Quality Control Standard (6136)</summary>
DicomUID  DicomUID::ChestTypesOfQualityControlStandard6136 = DicomUID{"1.2.840.10008.6.1.456",///NOLINT
                                                                      "Chest Types of Quality Control Standard (6136)",
                                                                      DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Types of CAD Analysis (6137)</summary>
DicomUID  DicomUID::TypesOfCADAnalysis6137 = DicomUID{"1.2.840.10008.6.1.457",///NOLINT
                                                      "Types of CAD Analysis (6137)", DicomUidType::ContextGroupName,
                                                      false};

///<summary>Context Group Name: Chest Non-lesion Object Type (6138)</summary>
DicomUID  DicomUID::ChestNonLesionObjectType6138 = DicomUID{"1.2.840.10008.6.1.458",///NOLINT
                                                            "Chest Non-lesion Object Type (6138)",
                                                            DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Non-lesion Modifiers (6139)</summary>
DicomUID  DicomUID::NonLesionModifiers6139 = DicomUID{"1.2.840.10008.6.1.459",///NOLINT
                                                      "Non-lesion Modifiers (6139)", DicomUidType::ContextGroupName,
                                                      false};

///<summary>Context Group Name: Calculation Methods (6140)</summary>
DicomUID  DicomUID::CalculationMethods6140 = DicomUID{"1.2.840.10008.6.1.460",///NOLINT
                                                      "Calculation Methods (6140)", DicomUidType::ContextGroupName,
                                                      false};

///<summary>Context Group Name: Attenuation Coefficient Measurements (6141)</summary>
DicomUID  DicomUID::AttenuationCoefficientMeasurements6141 = DicomUID{"1.2.840.10008.6.1.461",///NOLINT
                                                                      "Attenuation Coefficient Measurements (6141)",
                                                                      DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Calculated Value (6142)</summary>
DicomUID  DicomUID::CalculatedValue6142 = DicomUID{"1.2.840.10008.6.1.462",///NOLINT
                                                   "Calculated Value (6142)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Lesion Response (6143)</summary>
DicomUID  DicomUID::LesionResponse6143 = DicomUID{"1.2.840.10008.6.1.463",///NOLINT
                                                  "Lesion Response (6143)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: RECIST Defined Lesion Response (6144)</summary>
DicomUID  DicomUID::RECISTDefinedLesionResponse6144 = DicomUID{"1.2.840.10008.6.1.464",///NOLINT
                                                               "RECIST Defined Lesion Response (6144)",
                                                               DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Baseline Category (6145)</summary>
DicomUID  DicomUID::BaselineCategory6145 = DicomUID{"1.2.840.10008.6.1.465",///NOLINT
                                                    "Baseline Category (6145)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Background Echotexture (6151)</summary>
DicomUID  DicomUID::BackgroundEchotexture6151 = DicomUID{"1.2.840.10008.6.1.466",///NOLINT
                                                         "Background Echotexture (6151)",
                                                         DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Orientation (6152)</summary>
DicomUID  DicomUID::Orientation6152 = DicomUID{"1.2.840.10008.6.1.467",///NOLINT
                                               "Orientation (6152)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Lesion Boundary (6153)</summary>
DicomUID  DicomUID::LesionBoundary6153 = DicomUID{"1.2.840.10008.6.1.468",///NOLINT
                                                  "Lesion Boundary (6153)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Echo Pattern (6154)</summary>
DicomUID  DicomUID::EchoPattern6154 = DicomUID{"1.2.840.10008.6.1.469",///NOLINT
                                               "Echo Pattern (6154)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Posterior Acoustic Features (6155)</summary>
DicomUID  DicomUID::PosteriorAcousticFeatures6155 = DicomUID{"1.2.840.10008.6.1.470",///NOLINT
                                                             "Posterior Acoustic Features (6155)",
                                                             DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Vascularity (6157)</summary>
DicomUID  DicomUID::Vascularity6157 = DicomUID{"1.2.840.10008.6.1.471",///NOLINT
                                               "Vascularity (6157)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Correlation to Other Findings (6158)</summary>
DicomUID  DicomUID::CorrelationToOtherFindings6158 = DicomUID{"1.2.840.10008.6.1.472",///NOLINT
                                                              "Correlation to Other Findings (6158)",
                                                              DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Malignancy Type (6159)</summary>
DicomUID  DicomUID::MalignancyType6159 = DicomUID{"1.2.840.10008.6.1.473",///NOLINT
                                                  "Malignancy Type (6159)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Breast Primary Tumor Assessment From AJCC (6160)</summary>
DicomUID  DicomUID::BreastPrimaryTumorAssessmentFromAJCC6160 = DicomUID{"1.2.840.10008.6.1.474",///NOLINT
                                                                        "Breast Primary Tumor Assessment From AJCC (6160)",
                                                                        DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Clinical Regional Lymph Node Assessment for Breast (6161)</summary>
DicomUID  DicomUID::ClinicalRegionalLymphNodeAssessmentForBreast6161 = DicomUID{"1.2.840.10008.6.1.475",///NOLINT
                                                                                "Clinical Regional Lymph Node Assessment for Breast (6161)",
                                                                                DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Assessment of Metastasis for Breast (6162)</summary>
DicomUID  DicomUID::AssessmentOfMetastasisForBreast6162 = DicomUID{"1.2.840.10008.6.1.476",///NOLINT
                                                                   "Assessment of Metastasis for Breast (6162)",
                                                                   DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Menstrual Cycle Phase (6163)</summary>
DicomUID  DicomUID::MenstrualCyclePhase6163 = DicomUID{"1.2.840.10008.6.1.477",///NOLINT
                                                       "Menstrual Cycle Phase (6163)", DicomUidType::ContextGroupName,
                                                       false};

///<summary>Context Group Name: Time Intervals (6164)</summary>
DicomUID  DicomUID::TimeIntervals6164 = DicomUID{"1.2.840.10008.6.1.478",///NOLINT
                                                 "Time Intervals (6164)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Breast Linear Measurements (6165)</summary>
DicomUID  DicomUID::BreastLinearMeasurements6165 = DicomUID{"1.2.840.10008.6.1.479",///NOLINT
                                                            "Breast Linear Measurements (6165)",
                                                            DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: CAD Geometry Secondary Graphical Representation (6166)</summary>
DicomUID  DicomUID::CADGeometrySecondaryGraphicalRepresentation6166 = DicomUID{"1.2.840.10008.6.1.480",///NOLINT
                                                                               "CAD Geometry Secondary Graphical Representation (6166)",
                                                                               DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Diagnostic Imaging Report Document Titles (7000)</summary>
DicomUID  DicomUID::DiagnosticImagingReportDocumentTitles7000 = DicomUID{"1.2.840.10008.6.1.481",///NOLINT
                                                                         "Diagnostic Imaging Report Document Titles (7000)",
                                                                         DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Diagnostic Imaging Report Headings (7001)</summary>
DicomUID  DicomUID::DiagnosticImagingReportHeadings7001 = DicomUID{"1.2.840.10008.6.1.482",///NOLINT
                                                                   "Diagnostic Imaging Report Headings (7001)",
                                                                   DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Diagnostic Imaging Report Elements (7002)</summary>
DicomUID  DicomUID::DiagnosticImagingReportElements7002 = DicomUID{"1.2.840.10008.6.1.483",///NOLINT
                                                                   "Diagnostic Imaging Report Elements (7002)",
                                                                   DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Diagnostic Imaging Report Purposes of Reference (7003)</summary>
DicomUID  DicomUID::DiagnosticImagingReportPurposesOfReference7003 = DicomUID{"1.2.840.10008.6.1.484",///NOLINT
                                                                              "Diagnostic Imaging Report Purposes of Reference (7003)",
                                                                              DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Waveform Purposes of Reference (7004)</summary>
DicomUID  DicomUID::WaveformPurposesOfReference7004 = DicomUID{"1.2.840.10008.6.1.485",///NOLINT
                                                               "Waveform Purposes of Reference (7004)",
                                                               DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Contributing Equipment Purposes of Reference (7005)</summary>
DicomUID  DicomUID::ContributingEquipmentPurposesOfReference7005 = DicomUID{"1.2.840.10008.6.1.486",///NOLINT
                                                                            "Contributing Equipment Purposes of Reference (7005)",
                                                                            DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: SR Document Purposes of Reference (7006)</summary>
DicomUID  DicomUID::SRDocumentPurposesOfReference7006 = DicomUID{"1.2.840.10008.6.1.487",///NOLINT
                                                                 "SR Document Purposes of Reference (7006)",
                                                                 DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Signature Purpose (7007)</summary>
DicomUID  DicomUID::SignaturePurpose7007 = DicomUID{"1.2.840.10008.6.1.488",///NOLINT
                                                    "Signature Purpose (7007)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Media Import (7008)</summary>
DicomUID  DicomUID::MediaImport7008 = DicomUID{"1.2.840.10008.6.1.489",///NOLINT
                                               "Media Import (7008)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Key Object Selection Document Title (7010)</summary>
DicomUID  DicomUID::KeyObjectSelectionDocumentTitle7010 = DicomUID{"1.2.840.10008.6.1.490",///NOLINT
                                                                   "Key Object Selection Document Title (7010)",
                                                                   DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Rejected for Quality Reasons (7011)</summary>
DicomUID  DicomUID::RejectedForQualityReasons7011 = DicomUID{"1.2.840.10008.6.1.491",///NOLINT
                                                             "Rejected for Quality Reasons (7011)",
                                                             DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Best in Set (7012)</summary>
DicomUID  DicomUID::BestInSet7012 = DicomUID{"1.2.840.10008.6.1.492",///NOLINT
                                             "Best in Set (7012)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Document Titles (7020)</summary>
DicomUID  DicomUID::DocumentTitles7020 = DicomUID{"1.2.840.10008.6.1.493",///NOLINT
                                                  "Document Titles (7020)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: RCS Registration Method Type (7100)</summary>
DicomUID  DicomUID::RCSRegistrationMethodType7100 = DicomUID{"1.2.840.10008.6.1.494",///NOLINT
                                                             "RCS Registration Method Type (7100)",
                                                             DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Brain Atlas Fiducials (7101)</summary>
DicomUID  DicomUID::BrainAtlasFiducials7101 = DicomUID{"1.2.840.10008.6.1.495",///NOLINT
                                                       "Brain Atlas Fiducials (7101)", DicomUidType::ContextGroupName,
                                                       false};

///<summary>Context Group Name: Segmentation Property Categories (7150)</summary>
DicomUID  DicomUID::SegmentationPropertyCategories7150 = DicomUID{"1.2.840.10008.6.1.496",///NOLINT
                                                                  "Segmentation Property Categories (7150)",
                                                                  DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Segmentation Property Types (7151)</summary>
DicomUID  DicomUID::SegmentationPropertyTypes7151 = DicomUID{"1.2.840.10008.6.1.497",///NOLINT
                                                             "Segmentation Property Types (7151)",
                                                             DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Cardiac Structure Segmentation Types (7152)</summary>
DicomUID  DicomUID::CardiacStructureSegmentationTypes7152 = DicomUID{"1.2.840.10008.6.1.498",///NOLINT
                                                                     "Cardiac Structure Segmentation Types (7152)",
                                                                     DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: CNS Segmentation Types (7153)</summary>
DicomUID  DicomUID::CNSSegmentationTypes7153 = DicomUID{"1.2.840.10008.6.1.499",///NOLINT
                                                        "CNS Segmentation Types (7153)", DicomUidType::ContextGroupName,
                                                        false};

///<summary>Context Group Name: Abdominal Segmentation Types (7154)</summary>
DicomUID  DicomUID::AbdominalSegmentationTypes7154 = DicomUID{"1.2.840.10008.6.1.500",///NOLINT
                                                              "Abdominal Segmentation Types (7154)",
                                                              DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Thoracic Segmentation Types (7155)</summary>
DicomUID  DicomUID::ThoracicSegmentationTypes7155 = DicomUID{"1.2.840.10008.6.1.501",///NOLINT
                                                             "Thoracic Segmentation Types (7155)",
                                                             DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Vascular Segmentation Types (7156)</summary>
DicomUID  DicomUID::VascularSegmentationTypes7156 = DicomUID{"1.2.840.10008.6.1.502",///NOLINT
                                                             "Vascular Segmentation Types (7156)",
                                                             DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Device Segmentation Types (7157)</summary>
DicomUID  DicomUID::DeviceSegmentationTypes7157 = DicomUID{"1.2.840.10008.6.1.503",///NOLINT
                                                           "Device Segmentation Types (7157)",
                                                           DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Artifact Segmentation Types (7158)</summary>
DicomUID  DicomUID::ArtifactSegmentationTypes7158 = DicomUID{"1.2.840.10008.6.1.504",///NOLINT
                                                             "Artifact Segmentation Types (7158)",
                                                             DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Lesion Segmentation Types (7159)</summary>
DicomUID  DicomUID::LesionSegmentationTypes7159 = DicomUID{"1.2.840.10008.6.1.505",///NOLINT
                                                           "Lesion Segmentation Types (7159)",
                                                           DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Pelvic Organ Segmentation Types (7160)</summary>
DicomUID  DicomUID::PelvicOrganSegmentationTypes7160 = DicomUID{"1.2.840.10008.6.1.506",///NOLINT
                                                                "Pelvic Organ Segmentation Types (7160)",
                                                                DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Physiology Segmentation Types (7161)</summary>
DicomUID  DicomUID::PhysiologySegmentationTypes7161 = DicomUID{"1.2.840.10008.6.1.507",///NOLINT
                                                               "Physiology Segmentation Types (7161)",
                                                               DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Referenced Image Purposes of Reference (7201)</summary>
DicomUID  DicomUID::ReferencedImagePurposesOfReference7201 = DicomUID{"1.2.840.10008.6.1.508",///NOLINT
                                                                      "Referenced Image Purposes of Reference (7201)",
                                                                      DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Source Image Purposes of Reference (7202)</summary>
DicomUID  DicomUID::SourceImagePurposesOfReference7202 = DicomUID{"1.2.840.10008.6.1.509",///NOLINT
                                                                  "Source Image Purposes of Reference (7202)",
                                                                  DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Image Derivation (7203)</summary>
DicomUID  DicomUID::ImageDerivation7203 = DicomUID{"1.2.840.10008.6.1.510",///NOLINT
                                                   "Image Derivation (7203)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Purpose of Reference to Alternate Representation (7205)</summary>
DicomUID  DicomUID::PurposeOfReferenceToAlternateRepresentation7205 = DicomUID{"1.2.840.10008.6.1.511",///NOLINT
                                                                               "Purpose of Reference to Alternate Representation (7205)",
                                                                               DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Related Series Purposes of Reference (7210)</summary>
DicomUID  DicomUID::RelatedSeriesPurposesOfReference7210 = DicomUID{"1.2.840.10008.6.1.512",///NOLINT
                                                                    "Related Series Purposes of Reference (7210)",
                                                                    DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Multi-Frame Subset Type (7250)</summary>
DicomUID  DicomUID::MultiFrameSubsetType7250 = DicomUID{"1.2.840.10008.6.1.513",///NOLINT
                                                        "Multi-Frame Subset Type (7250)",
                                                        DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Person Roles (7450)</summary>
DicomUID  DicomUID::PersonRoles7450 = DicomUID{"1.2.840.10008.6.1.514",///NOLINT
                                               "Person Roles (7450)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Family Member (7451)</summary>
DicomUID  DicomUID::FamilyMember7451 = DicomUID{"1.2.840.10008.6.1.515",///NOLINT
                                                "Family Member (7451)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Organizational Roles (7452)</summary>
DicomUID  DicomUID::OrganizationalRoles7452 = DicomUID{"1.2.840.10008.6.1.516",///NOLINT
                                                       "Organizational Roles (7452)", DicomUidType::ContextGroupName,
                                                       false};

///<summary>Context Group Name: Performing Roles (7453)</summary>
DicomUID  DicomUID::PerformingRoles7453 = DicomUID{"1.2.840.10008.6.1.517",///NOLINT
                                                   "Performing Roles (7453)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Animal Taxonomic Rank Values (7454)</summary>
DicomUID  DicomUID::AnimalTaxonomicRankValues7454 = DicomUID{"1.2.840.10008.6.1.518",///NOLINT
                                                             "Animal Taxonomic Rank Values (7454)",
                                                             DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Sex (7455)</summary>
DicomUID  DicomUID::Sex7455 = DicomUID{"1.2.840.10008.6.1.519",///NOLINT
                                       "Sex (7455)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Units of Measure for Age (7456)</summary>
DicomUID  DicomUID::UnitsOfMeasureForAge7456 = DicomUID{"1.2.840.10008.6.1.520",///NOLINT
                                                        "Units of Measure for Age (7456)",
                                                        DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Units of Linear Measurement (7460)</summary>
DicomUID  DicomUID::UnitsOfLinearMeasurement7460 = DicomUID{"1.2.840.10008.6.1.521",///NOLINT
                                                            "Units of Linear Measurement (7460)",
                                                            DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Units of Area Measurement (7461)</summary>
DicomUID  DicomUID::UnitsOfAreaMeasurement7461 = DicomUID{"1.2.840.10008.6.1.522",///NOLINT
                                                          "Units of Area Measurement (7461)",
                                                          DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Units of Volume Measurement (7462)</summary>
DicomUID  DicomUID::UnitsOfVolumeMeasurement7462 = DicomUID{"1.2.840.10008.6.1.523",///NOLINT
                                                            "Units of Volume Measurement (7462)",
                                                            DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Linear Measurements (7470)</summary>
DicomUID  DicomUID::LinearMeasurements7470 = DicomUID{"1.2.840.10008.6.1.524",///NOLINT
                                                      "Linear Measurements (7470)", DicomUidType::ContextGroupName,
                                                      false};

///<summary>Context Group Name: Area Measurements (7471)</summary>
DicomUID  DicomUID::AreaMeasurements7471 = DicomUID{"1.2.840.10008.6.1.525",///NOLINT
                                                    "Area Measurements (7471)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Volume Measurements (7472)</summary>
DicomUID  DicomUID::VolumeMeasurements7472 = DicomUID{"1.2.840.10008.6.1.526",///NOLINT
                                                      "Volume Measurements (7472)", DicomUidType::ContextGroupName,
                                                      false};

///<summary>Context Group Name: General Area Calculation Methods (7473)</summary>
DicomUID  DicomUID::GeneralAreaCalculationMethods7473 = DicomUID{"1.2.840.10008.6.1.527",///NOLINT
                                                                 "General Area Calculation Methods (7473)",
                                                                 DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: General Volume Calculation Methods (7474)</summary>
DicomUID  DicomUID::GeneralVolumeCalculationMethods7474 = DicomUID{"1.2.840.10008.6.1.528",///NOLINT
                                                                   "General Volume Calculation Methods (7474)",
                                                                   DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Breed (7480)</summary>
DicomUID  DicomUID::Breed7480 = DicomUID{"1.2.840.10008.6.1.529",///NOLINT
                                         "Breed (7480)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Breed Registry (7481)</summary>
DicomUID  DicomUID::BreedRegistry7481 = DicomUID{"1.2.840.10008.6.1.530",///NOLINT
                                                 "Breed Registry (7481)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Workitem Definition (9231)</summary>
DicomUID  DicomUID::WorkitemDefinition9231 = DicomUID{"1.2.840.10008.6.1.531",///NOLINT
                                                      "Workitem Definition (9231)", DicomUidType::ContextGroupName,
                                                      false};

///<summary>Context Group Name: Non-DICOM Output Types (Retired) (9232)</summary>
DicomUID  DicomUID::NonDICOMOutputTypes9232RETIRED = DicomUID{"1.2.840.10008.6.1.532",///NOLINT
                                                              "Non-DICOM Output Types (Retired) (9232)",
                                                              DicomUidType::ContextGroupName, true};

///<summary>Context Group Name: Procedure Discontinuation Reasons (9300)</summary>
DicomUID  DicomUID::ProcedureDiscontinuationReasons9300 = DicomUID{"1.2.840.10008.6.1.533",///NOLINT
                                                                   "Procedure Discontinuation Reasons (9300)",
                                                                   DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Scope of Accumulation (10000)</summary>
DicomUID  DicomUID::ScopeOfAccumulation10000 = DicomUID{"1.2.840.10008.6.1.534",///NOLINT
                                                        "Scope of Accumulation (10000)", DicomUidType::ContextGroupName,
                                                        false};

///<summary>Context Group Name: UID Types (10001)</summary>
DicomUID  DicomUID::UIDTypes10001 = DicomUID{"1.2.840.10008.6.1.535",///NOLINT
                                             "UID Types (10001)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Irradiation Event Types (10002)</summary>
DicomUID  DicomUID::IrradiationEventTypes10002 = DicomUID{"1.2.840.10008.6.1.536",///NOLINT
                                                          "Irradiation Event Types (10002)",
                                                          DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Equipment Plane Identification (10003)</summary>
DicomUID  DicomUID::EquipmentPlaneIdentification10003 = DicomUID{"1.2.840.10008.6.1.537",///NOLINT
                                                                 "Equipment Plane Identification (10003)",
                                                                 DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Fluoro Modes (10004)</summary>
DicomUID  DicomUID::FluoroModes10004 = DicomUID{"1.2.840.10008.6.1.538",///NOLINT
                                                "Fluoro Modes (10004)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: X-Ray Filter Materials (10006)</summary>
DicomUID  DicomUID::XRayFilterMaterials10006 = DicomUID{"1.2.840.10008.6.1.539",///NOLINT
                                                        "X-Ray Filter Materials (10006)",
                                                        DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: X-Ray Filter Types (10007)</summary>
DicomUID  DicomUID::XRayFilterTypes10007 = DicomUID{"1.2.840.10008.6.1.540",///NOLINT
                                                    "X-Ray Filter Types (10007)", DicomUidType::ContextGroupName,
                                                    false};

///<summary>Context Group Name: Dose Related Distance Measurements (10008)</summary>
DicomUID  DicomUID::DoseRelatedDistanceMeasurements10008 = DicomUID{"1.2.840.10008.6.1.541",///NOLINT
                                                                    "Dose Related Distance Measurements (10008)",
                                                                    DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Measured/Calculated (10009)</summary>
DicomUID  DicomUID::MeasuredCalculated10009 = DicomUID{"1.2.840.10008.6.1.542",///NOLINT
                                                       "Measured/Calculated (10009)", DicomUidType::ContextGroupName,
                                                       false};

///<summary>Context Group Name: Dose Measurement Devices (10010)</summary>
DicomUID  DicomUID::DoseMeasurementDevices10010 = DicomUID{"1.2.840.10008.6.1.543",///NOLINT
                                                           "Dose Measurement Devices (10010)",
                                                           DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Effective Dose Evaluation Method (10011)</summary>
DicomUID  DicomUID::EffectiveDoseEvaluationMethod10011 = DicomUID{"1.2.840.10008.6.1.544",///NOLINT
                                                                  "Effective Dose Evaluation Method (10011)",
                                                                  DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: CT Acquisition Type (10013)</summary>
DicomUID  DicomUID::CTAcquisitionType10013 = DicomUID{"1.2.840.10008.6.1.545",///NOLINT
                                                      "CT Acquisition Type (10013)", DicomUidType::ContextGroupName,
                                                      false};

///<summary>Context Group Name: Contrast Imaging Technique (10014)</summary>
DicomUID  DicomUID::ContrastImagingTechnique10014 = DicomUID{"1.2.840.10008.6.1.546",///NOLINT
                                                             "Contrast Imaging Technique (10014)",
                                                             DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: CT Dose Reference Authorities (10015)</summary>
DicomUID  DicomUID::CTDoseReferenceAuthorities10015 = DicomUID{"1.2.840.10008.6.1.547",///NOLINT
                                                               "CT Dose Reference Authorities (10015)",
                                                               DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Anode Target Material (10016)</summary>
DicomUID  DicomUID::AnodeTargetMaterial10016 = DicomUID{"1.2.840.10008.6.1.548",///NOLINT
                                                        "Anode Target Material (10016)", DicomUidType::ContextGroupName,
                                                        false};

///<summary>Context Group Name: X-Ray Grid (10017)</summary>
DicomUID  DicomUID::XRayGrid10017 = DicomUID{"1.2.840.10008.6.1.549",///NOLINT
                                             "X-Ray Grid (10017)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Ultrasound Protocol Types (12001)</summary>
DicomUID  DicomUID::UltrasoundProtocolTypes12001 = DicomUID{"1.2.840.10008.6.1.550",///NOLINT
                                                            "Ultrasound Protocol Types (12001)",
                                                            DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Ultrasound Protocol Stage Types (12002)</summary>
DicomUID  DicomUID::UltrasoundProtocolStageTypes12002 = DicomUID{"1.2.840.10008.6.1.551",///NOLINT
                                                                 "Ultrasound Protocol Stage Types (12002)",
                                                                 DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: OB-GYN Dates (12003)</summary>
DicomUID  DicomUID::OBGYNDates12003 = DicomUID{"1.2.840.10008.6.1.552",///NOLINT
                                               "OB-GYN Dates (12003)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Fetal Biometry Ratios (12004)</summary>
DicomUID  DicomUID::FetalBiometryRatios12004 = DicomUID{"1.2.840.10008.6.1.553",///NOLINT
                                                        "Fetal Biometry Ratios (12004)", DicomUidType::ContextGroupName,
                                                        false};

///<summary>Context Group Name: Fetal Biometry Measurements (12005)</summary>
DicomUID  DicomUID::FetalBiometryMeasurements12005 = DicomUID{"1.2.840.10008.6.1.554",///NOLINT
                                                              "Fetal Biometry Measurements (12005)",
                                                              DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Fetal Long Bones Biometry Measurements (12006)</summary>
DicomUID  DicomUID::FetalLongBonesBiometryMeasurements12006 = DicomUID{"1.2.840.10008.6.1.555",///NOLINT
                                                                       "Fetal Long Bones Biometry Measurements (12006)",
                                                                       DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Fetal Cranium (12007)</summary>
DicomUID  DicomUID::FetalCranium12007 = DicomUID{"1.2.840.10008.6.1.556",///NOLINT
                                                 "Fetal Cranium (12007)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: OB-GYN Amniotic Sac (12008)</summary>
DicomUID  DicomUID::OBGYNAmnioticSac12008 = DicomUID{"1.2.840.10008.6.1.557",///NOLINT
                                                     "OB-GYN Amniotic Sac (12008)", DicomUidType::ContextGroupName,
                                                     false};

///<summary>Context Group Name: Early Gestation Biometry Measurements (12009)</summary>
DicomUID  DicomUID::EarlyGestationBiometryMeasurements12009 = DicomUID{"1.2.840.10008.6.1.558",///NOLINT
                                                                       "Early Gestation Biometry Measurements (12009)",
                                                                       DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Ultrasound Pelvis and Uterus (12011)</summary>
DicomUID  DicomUID::UltrasoundPelvisAndUterus12011 = DicomUID{"1.2.840.10008.6.1.559",///NOLINT
                                                              "Ultrasound Pelvis and Uterus (12011)",
                                                              DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: OB Equations and Tables (12012)</summary>
DicomUID  DicomUID::OBEquationsAndTables12012 = DicomUID{"1.2.840.10008.6.1.560",///NOLINT
                                                         "OB Equations and Tables (12012)",
                                                         DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Gestational Age Equations and Tables (12013)</summary>
DicomUID  DicomUID::GestationalAgeEquationsAndTables12013 = DicomUID{"1.2.840.10008.6.1.561",///NOLINT
                                                                     "Gestational Age Equations and Tables (12013)",
                                                                     DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: OB Fetal Body Weight Equations and Tables (12014)</summary>
DicomUID  DicomUID::OBFetalBodyWeightEquationsAndTables12014 = DicomUID{"1.2.840.10008.6.1.562",///NOLINT
                                                                        "OB Fetal Body Weight Equations and Tables (12014)",
                                                                        DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Fetal Growth Equations and Tables (12015)</summary>
DicomUID  DicomUID::FetalGrowthEquationsAndTables12015 = DicomUID{"1.2.840.10008.6.1.563",///NOLINT
                                                                  "Fetal Growth Equations and Tables (12015)",
                                                                  DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Estimated Fetal Weight Percentile Equations and Tables (12016)</summary>
DicomUID  DicomUID::EstimatedFetalWeightPercentileEquationsAndTables12016 = DicomUID{"1.2.840.10008.6.1.564",///NOLINT
                                                                                     "Estimated Fetal Weight Percentile Equations and Tables (12016)",
                                                                                     DicomUidType::ContextGroupName,
                                                                                     false};

///<summary>Context Group Name: Growth Distribution Rank (12017)</summary>
DicomUID  DicomUID::GrowthDistributionRank12017 = DicomUID{"1.2.840.10008.6.1.565",///NOLINT
                                                           "Growth Distribution Rank (12017)",
                                                           DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: OB-GYN Summary (12018)</summary>
DicomUID  DicomUID::OBGYNSummary12018 = DicomUID{"1.2.840.10008.6.1.566",///NOLINT
                                                 "OB-GYN Summary (12018)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: OB-GYN Fetus Summary (12019)</summary>
DicomUID  DicomUID::OBGYNFetusSummary12019 = DicomUID{"1.2.840.10008.6.1.567",///NOLINT
                                                      "OB-GYN Fetus Summary (12019)", DicomUidType::ContextGroupName,
                                                      false};

///<summary>Context Group Name: Vascular Summary (12101)</summary>
DicomUID  DicomUID::VascularSummary12101 = DicomUID{"1.2.840.10008.6.1.568",///NOLINT
                                                    "Vascular Summary (12101)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Temporal Periods Relating to Procedure or Therapy (12102)</summary>
DicomUID  DicomUID::TemporalPeriodsRelatingToProcedureOrTherapy12102 = DicomUID{"1.2.840.10008.6.1.569",///NOLINT
                                                                                "Temporal Periods Relating to Procedure or Therapy (12102)",
                                                                                DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Vascular Ultrasound Anatomic Location (12103)</summary>
DicomUID  DicomUID::VascularUltrasoundAnatomicLocation12103 = DicomUID{"1.2.840.10008.6.1.570",///NOLINT
                                                                       "Vascular Ultrasound Anatomic Location (12103)",
                                                                       DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Extracranial Arteries (12104)</summary>
DicomUID  DicomUID::ExtracranialArteries12104 = DicomUID{"1.2.840.10008.6.1.571",///NOLINT
                                                         "Extracranial Arteries (12104)",
                                                         DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Intracranial Cerebral Vessels (12105)</summary>
DicomUID  DicomUID::IntracranialCerebralVessels12105 = DicomUID{"1.2.840.10008.6.1.572",///NOLINT
                                                                "Intracranial Cerebral Vessels (12105)",
                                                                DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Intracranial Cerebral Vessels (Unilateral) (12106)</summary>
DicomUID  DicomUID::IntracranialCerebralVesselsUnilateral12106 = DicomUID{"1.2.840.10008.6.1.573",///NOLINT
                                                                          "Intracranial Cerebral Vessels (Unilateral) (12106)",
                                                                          DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Upper Extremity Arteries (12107)</summary>
DicomUID  DicomUID::UpperExtremityArteries12107 = DicomUID{"1.2.840.10008.6.1.574",///NOLINT
                                                           "Upper Extremity Arteries (12107)",
                                                           DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Upper Extremity Veins (12108)</summary>
DicomUID  DicomUID::UpperExtremityVeins12108 = DicomUID{"1.2.840.10008.6.1.575",///NOLINT
                                                        "Upper Extremity Veins (12108)", DicomUidType::ContextGroupName,
                                                        false};

///<summary>Context Group Name: Lower Extremity Arteries (12109)</summary>
DicomUID  DicomUID::LowerExtremityArteries12109 = DicomUID{"1.2.840.10008.6.1.576",///NOLINT
                                                           "Lower Extremity Arteries (12109)",
                                                           DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Lower Extremity Veins (12110)</summary>
DicomUID  DicomUID::LowerExtremityVeins12110 = DicomUID{"1.2.840.10008.6.1.577",///NOLINT
                                                        "Lower Extremity Veins (12110)", DicomUidType::ContextGroupName,
                                                        false};

///<summary>Context Group Name: Abdominopelvic Arteries (Paired) (12111)</summary>
DicomUID  DicomUID::AbdominopelvicArteriesPaired12111 = DicomUID{"1.2.840.10008.6.1.578",///NOLINT
                                                                 "Abdominopelvic Arteries (Paired) (12111)",
                                                                 DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Abdominopelvic Arteries (Unpaired) (12112)</summary>
DicomUID  DicomUID::AbdominopelvicArteriesUnpaired12112 = DicomUID{"1.2.840.10008.6.1.579",///NOLINT
                                                                   "Abdominopelvic Arteries (Unpaired) (12112)",
                                                                   DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Abdominopelvic Veins (Paired) (12113)</summary>
DicomUID  DicomUID::AbdominopelvicVeinsPaired12113 = DicomUID{"1.2.840.10008.6.1.580",///NOLINT
                                                              "Abdominopelvic Veins (Paired) (12113)",
                                                              DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Abdominopelvic Veins (Unpaired) (12114)</summary>
DicomUID  DicomUID::AbdominopelvicVeinsUnpaired12114 = DicomUID{"1.2.840.10008.6.1.581",///NOLINT
                                                                "Abdominopelvic Veins (Unpaired) (12114)",
                                                                DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Renal Vessels (12115)</summary>
DicomUID  DicomUID::RenalVessels12115 = DicomUID{"1.2.840.10008.6.1.582",///NOLINT
                                                 "Renal Vessels (12115)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Vessel Segment Modifiers (12116)</summary>
DicomUID  DicomUID::VesselSegmentModifiers12116 = DicomUID{"1.2.840.10008.6.1.583",///NOLINT
                                                           "Vessel Segment Modifiers (12116)",
                                                           DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Vessel Branch Modifiers (12117)</summary>
DicomUID  DicomUID::VesselBranchModifiers12117 = DicomUID{"1.2.840.10008.6.1.584",///NOLINT
                                                          "Vessel Branch Modifiers (12117)",
                                                          DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Vascular Ultrasound Property (12119)</summary>
DicomUID  DicomUID::VascularUltrasoundProperty12119 = DicomUID{"1.2.840.10008.6.1.585",///NOLINT
                                                               "Vascular Ultrasound Property (12119)",
                                                               DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Blood Velocity Measurements by Ultrasound (12120)</summary>
DicomUID  DicomUID::BloodVelocityMeasurementsByUltrasound12120 = DicomUID{"1.2.840.10008.6.1.586",///NOLINT
                                                                          "Blood Velocity Measurements by Ultrasound (12120)",
                                                                          DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Vascular Indices and Ratios (12121)</summary>
DicomUID  DicomUID::VascularIndicesAndRatios12121 = DicomUID{"1.2.840.10008.6.1.587",///NOLINT
                                                             "Vascular Indices and Ratios (12121)",
                                                             DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Other Vascular Properties (12122)</summary>
DicomUID  DicomUID::OtherVascularProperties12122 = DicomUID{"1.2.840.10008.6.1.588",///NOLINT
                                                            "Other Vascular Properties (12122)",
                                                            DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Carotid Ratios (12123)</summary>
DicomUID  DicomUID::CarotidRatios12123 = DicomUID{"1.2.840.10008.6.1.589",///NOLINT
                                                  "Carotid Ratios (12123)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Renal Ratios (12124)</summary>
DicomUID  DicomUID::RenalRatios12124 = DicomUID{"1.2.840.10008.6.1.590",///NOLINT
                                                "Renal Ratios (12124)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Pelvic Vasculature Anatomical Location (12140)</summary>
DicomUID  DicomUID::PelvicVasculatureAnatomicalLocation12140 = DicomUID{"1.2.840.10008.6.1.591",///NOLINT
                                                                        "Pelvic Vasculature Anatomical Location (12140)",
                                                                        DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Fetal Vasculature Anatomical Location (12141)</summary>
DicomUID  DicomUID::FetalVasculatureAnatomicalLocation12141 = DicomUID{"1.2.840.10008.6.1.592",///NOLINT
                                                                       "Fetal Vasculature Anatomical Location (12141)",
                                                                       DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Echocardiography Left Ventricle (12200)</summary>
DicomUID  DicomUID::EchocardiographyLeftVentricle12200 = DicomUID{"1.2.840.10008.6.1.593",///NOLINT
                                                                  "Echocardiography Left Ventricle (12200)",
                                                                  DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Left Ventricle Linear (12201)</summary>
DicomUID  DicomUID::LeftVentricleLinear12201 = DicomUID{"1.2.840.10008.6.1.594",///NOLINT
                                                        "Left Ventricle Linear (12201)", DicomUidType::ContextGroupName,
                                                        false};

///<summary>Context Group Name: Left Ventricle Volume (12202)</summary>
DicomUID  DicomUID::LeftVentricleVolume12202 = DicomUID{"1.2.840.10008.6.1.595",///NOLINT
                                                        "Left Ventricle Volume (12202)", DicomUidType::ContextGroupName,
                                                        false};

///<summary>Context Group Name: Left Ventricle Other (12203)</summary>
DicomUID  DicomUID::LeftVentricleOther12203 = DicomUID{"1.2.840.10008.6.1.596",///NOLINT
                                                       "Left Ventricle Other (12203)", DicomUidType::ContextGroupName,
                                                       false};

///<summary>Context Group Name: Echocardiography Right Ventricle (12204)</summary>
DicomUID  DicomUID::EchocardiographyRightVentricle12204 = DicomUID{"1.2.840.10008.6.1.597",///NOLINT
                                                                   "Echocardiography Right Ventricle (12204)",
                                                                   DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Echocardiography Left Atrium (12205)</summary>
DicomUID  DicomUID::EchocardiographyLeftAtrium12205 = DicomUID{"1.2.840.10008.6.1.598",///NOLINT
                                                               "Echocardiography Left Atrium (12205)",
                                                               DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Echocardiography Right Atrium (12206)</summary>
DicomUID  DicomUID::EchocardiographyRightAtrium12206 = DicomUID{"1.2.840.10008.6.1.599",///NOLINT
                                                                "Echocardiography Right Atrium (12206)",
                                                                DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Echocardiography Mitral Valve (12207)</summary>
DicomUID  DicomUID::EchocardiographyMitralValve12207 = DicomUID{"1.2.840.10008.6.1.600",///NOLINT
                                                                "Echocardiography Mitral Valve (12207)",
                                                                DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Echocardiography Tricuspid Valve (12208)</summary>
DicomUID  DicomUID::EchocardiographyTricuspidValve12208 = DicomUID{"1.2.840.10008.6.1.601",///NOLINT
                                                                   "Echocardiography Tricuspid Valve (12208)",
                                                                   DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Echocardiography Pulmonic Valve (12209)</summary>
DicomUID  DicomUID::EchocardiographyPulmonicValve12209 = DicomUID{"1.2.840.10008.6.1.602",///NOLINT
                                                                  "Echocardiography Pulmonic Valve (12209)",
                                                                  DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Echocardiography Pulmonary Artery (12210)</summary>
DicomUID  DicomUID::EchocardiographyPulmonaryArtery12210 = DicomUID{"1.2.840.10008.6.1.603",///NOLINT
                                                                    "Echocardiography Pulmonary Artery (12210)",
                                                                    DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Echocardiography Aortic Valve (12211)</summary>
DicomUID  DicomUID::EchocardiographyAorticValve12211 = DicomUID{"1.2.840.10008.6.1.604",///NOLINT
                                                                "Echocardiography Aortic Valve (12211)",
                                                                DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Echocardiography Aorta (12212)</summary>
DicomUID  DicomUID::EchocardiographyAorta12212 = DicomUID{"1.2.840.10008.6.1.605",///NOLINT
                                                          "Echocardiography Aorta (12212)",
                                                          DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Echocardiography Pulmonary Veins (12214)</summary>
DicomUID  DicomUID::EchocardiographyPulmonaryVeins12214 = DicomUID{"1.2.840.10008.6.1.606",///NOLINT
                                                                   "Echocardiography Pulmonary Veins (12214)",
                                                                   DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Echocardiography Vena Cavae (12215)</summary>
DicomUID  DicomUID::EchocardiographyVenaCavae12215 = DicomUID{"1.2.840.10008.6.1.607",///NOLINT
                                                              "Echocardiography Vena Cavae (12215)",
                                                              DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Echocardiography Hepatic Veins (12216)</summary>
DicomUID  DicomUID::EchocardiographyHepaticVeins12216 = DicomUID{"1.2.840.10008.6.1.608",///NOLINT
                                                                 "Echocardiography Hepatic Veins (12216)",
                                                                 DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Echocardiography Cardiac Shunt (12217)</summary>
DicomUID  DicomUID::EchocardiographyCardiacShunt12217 = DicomUID{"1.2.840.10008.6.1.609",///NOLINT
                                                                 "Echocardiography Cardiac Shunt (12217)",
                                                                 DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Echocardiography Congenital (12218)</summary>
DicomUID  DicomUID::EchocardiographyCongenital12218 = DicomUID{"1.2.840.10008.6.1.610",///NOLINT
                                                               "Echocardiography Congenital (12218)",
                                                               DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Pulmonary Vein Modifiers (12219)</summary>
DicomUID  DicomUID::PulmonaryVeinModifiers12219 = DicomUID{"1.2.840.10008.6.1.611",///NOLINT
                                                           "Pulmonary Vein Modifiers (12219)",
                                                           DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Echocardiography Common Measurements (12220)</summary>
DicomUID  DicomUID::EchocardiographyCommonMeasurements12220 = DicomUID{"1.2.840.10008.6.1.612",///NOLINT
                                                                       "Echocardiography Common Measurements (12220)",
                                                                       DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Flow Direction (12221)</summary>
DicomUID  DicomUID::FlowDirection12221 = DicomUID{"1.2.840.10008.6.1.613",///NOLINT
                                                  "Flow Direction (12221)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Orifice Flow Properties (12222)</summary>
DicomUID  DicomUID::OrificeFlowProperties12222 = DicomUID{"1.2.840.10008.6.1.614",///NOLINT
                                                          "Orifice Flow Properties (12222)",
                                                          DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Echocardiography Stroke Volume Origin (12223)</summary>
DicomUID  DicomUID::EchocardiographyStrokeVolumeOrigin12223 = DicomUID{"1.2.840.10008.6.1.615",///NOLINT
                                                                       "Echocardiography Stroke Volume Origin (12223)",
                                                                       DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Ultrasound Image Modes (12224)</summary>
DicomUID  DicomUID::UltrasoundImageModes12224 = DicomUID{"1.2.840.10008.6.1.616",///NOLINT
                                                         "Ultrasound Image Modes (12224)",
                                                         DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Echocardiography Image View (12226)</summary>
DicomUID  DicomUID::EchocardiographyImageView12226 = DicomUID{"1.2.840.10008.6.1.617",///NOLINT
                                                              "Echocardiography Image View (12226)",
                                                              DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Echocardiography Measurement Method (12227)</summary>
DicomUID  DicomUID::EchocardiographyMeasurementMethod12227 = DicomUID{"1.2.840.10008.6.1.618",///NOLINT
                                                                      "Echocardiography Measurement Method (12227)",
                                                                      DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Echocardiography Volume Methods (12228)</summary>
DicomUID  DicomUID::EchocardiographyVolumeMethods12228 = DicomUID{"1.2.840.10008.6.1.619",///NOLINT
                                                                  "Echocardiography Volume Methods (12228)",
                                                                  DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Echocardiography Area Methods (12229)</summary>
DicomUID  DicomUID::EchocardiographyAreaMethods12229 = DicomUID{"1.2.840.10008.6.1.620",///NOLINT
                                                                "Echocardiography Area Methods (12229)",
                                                                DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Gradient Methods (12230)</summary>
DicomUID  DicomUID::GradientMethods12230 = DicomUID{"1.2.840.10008.6.1.621",///NOLINT
                                                    "Gradient Methods (12230)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Volume Flow Methods (12231)</summary>
DicomUID  DicomUID::VolumeFlowMethods12231 = DicomUID{"1.2.840.10008.6.1.622",///NOLINT
                                                      "Volume Flow Methods (12231)", DicomUidType::ContextGroupName,
                                                      false};

///<summary>Context Group Name: Myocardium Mass Methods (12232)</summary>
DicomUID  DicomUID::MyocardiumMassMethods12232 = DicomUID{"1.2.840.10008.6.1.623",///NOLINT
                                                          "Myocardium Mass Methods (12232)",
                                                          DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Cardiac Phase (12233)</summary>
DicomUID  DicomUID::CardiacPhase12233 = DicomUID{"1.2.840.10008.6.1.624",///NOLINT
                                                 "Cardiac Phase (12233)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Respiration State (12234)</summary>
DicomUID  DicomUID::RespirationState12234 = DicomUID{"1.2.840.10008.6.1.625",///NOLINT
                                                     "Respiration State (12234)", DicomUidType::ContextGroupName,
                                                     false};

///<summary>Context Group Name: Mitral Valve Anatomic Sites (12235)</summary>
DicomUID  DicomUID::MitralValveAnatomicSites12235 = DicomUID{"1.2.840.10008.6.1.626",///NOLINT
                                                             "Mitral Valve Anatomic Sites (12235)",
                                                             DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Echo Anatomic Sites (12236)</summary>
DicomUID  DicomUID::EchoAnatomicSites12236 = DicomUID{"1.2.840.10008.6.1.627",///NOLINT
                                                      "Echo Anatomic Sites (12236)", DicomUidType::ContextGroupName,
                                                      false};

///<summary>Context Group Name: Echocardiography Anatomic Site Modifiers (12237)</summary>
DicomUID  DicomUID::EchocardiographyAnatomicSiteModifiers12237 = DicomUID{"1.2.840.10008.6.1.628",///NOLINT
                                                                          "Echocardiography Anatomic Site Modifiers (12237)",
                                                                          DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Wall Motion Scoring Schemes (12238)</summary>
DicomUID  DicomUID::WallMotionScoringSchemes12238 = DicomUID{"1.2.840.10008.6.1.629",///NOLINT
                                                             "Wall Motion Scoring Schemes (12238)",
                                                             DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Cardiac Output Properties (12239)</summary>
DicomUID  DicomUID::CardiacOutputProperties12239 = DicomUID{"1.2.840.10008.6.1.630",///NOLINT
                                                            "Cardiac Output Properties (12239)",
                                                            DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Left Ventricle Area (12240)</summary>
DicomUID  DicomUID::LeftVentricleArea12240 = DicomUID{"1.2.840.10008.6.1.631",///NOLINT
                                                      "Left Ventricle Area (12240)", DicomUidType::ContextGroupName,
                                                      false};

///<summary>Context Group Name: Tricuspid Valve Finding Sites (12241)</summary>
DicomUID  DicomUID::TricuspidValveFindingSites12241 = DicomUID{"1.2.840.10008.6.1.632",///NOLINT
                                                               "Tricuspid Valve Finding Sites (12241)",
                                                               DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Aortic Valve Finding Sites (12242)</summary>
DicomUID  DicomUID::AorticValveFindingSites12242 = DicomUID{"1.2.840.10008.6.1.633",///NOLINT
                                                            "Aortic Valve Finding Sites (12242)",
                                                            DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Left Ventricle Finding Sites (12243)</summary>
DicomUID  DicomUID::LeftVentricleFindingSites12243 = DicomUID{"1.2.840.10008.6.1.634",///NOLINT
                                                              "Left Ventricle Finding Sites (12243)",
                                                              DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Congenital Finding Sites (12244)</summary>
DicomUID  DicomUID::CongenitalFindingSites12244 = DicomUID{"1.2.840.10008.6.1.635",///NOLINT
                                                           "Congenital Finding Sites (12244)",
                                                           DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Surface Processing Algorithm Families (7162)</summary>
DicomUID  DicomUID::SurfaceProcessingAlgorithmFamilies7162 = DicomUID{"1.2.840.10008.6.1.636",///NOLINT
                                                                      "Surface Processing Algorithm Families (7162)",
                                                                      DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Stress Test Procedure Phases (3207)</summary>
DicomUID  DicomUID::StressTestProcedurePhases3207 = DicomUID{"1.2.840.10008.6.1.637",///NOLINT
                                                             "Stress Test Procedure Phases (3207)",
                                                             DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Stages (3778)</summary>
DicomUID  DicomUID::Stages3778 = DicomUID{"1.2.840.10008.6.1.638",///NOLINT
                                          "Stages (3778)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: S-M-L Size Descriptor (252)</summary>
DicomUID  DicomUID::SMLSizeDescriptor252 = DicomUID{"1.2.840.10008.6.1.735",///NOLINT
                                                    "S-M-L Size Descriptor (252)", DicomUidType::ContextGroupName,
                                                    false};

///<summary>Context Group Name: Major Coronary Arteries (3016)</summary>
DicomUID  DicomUID::MajorCoronaryArteries3016 = DicomUID{"1.2.840.10008.6.1.736",///NOLINT
                                                         "Major Coronary Arteries (3016)",
                                                         DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Units of Radioactivity (3083)</summary>
DicomUID  DicomUID::UnitsOfRadioactivity3083 = DicomUID{"1.2.840.10008.6.1.737",///NOLINT
                                                        "Units of Radioactivity (3083)", DicomUidType::ContextGroupName,
                                                        false};

///<summary>Context Group Name: Rest-Stress (3102)</summary>
DicomUID  DicomUID::RestStress3102 = DicomUID{"1.2.840.10008.6.1.738",///NOLINT
                                              "Rest-Stress (3102)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: PET Cardiology Protocols (3106)</summary>
DicomUID  DicomUID::PETCardiologyProtocols3106 = DicomUID{"1.2.840.10008.6.1.739",///NOLINT
                                                          "PET Cardiology Protocols (3106)",
                                                          DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: PET Cardiology Radiopharmaceuticals (3107)</summary>
DicomUID  DicomUID::PETCardiologyRadiopharmaceuticals3107 = DicomUID{"1.2.840.10008.6.1.740",///NOLINT
                                                                     "PET Cardiology Radiopharmaceuticals (3107)",
                                                                     DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: NM/PET Procedures (3108)</summary>
DicomUID  DicomUID::NMPETProcedures3108 = DicomUID{"1.2.840.10008.6.1.741",///NOLINT
                                                   "NM/PET Procedures (3108)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Nuclear Cardiology Protocols (3110)</summary>
DicomUID  DicomUID::NuclearCardiologyProtocols3110 = DicomUID{"1.2.840.10008.6.1.742",///NOLINT
                                                              "Nuclear Cardiology Protocols (3110)",
                                                              DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Nuclear Cardiology Radiopharmaceuticals (3111)</summary>
DicomUID  DicomUID::NuclearCardiologyRadiopharmaceuticals3111 = DicomUID{"1.2.840.10008.6.1.743",///NOLINT
                                                                         "Nuclear Cardiology Radiopharmaceuticals (3111)",
                                                                         DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Attenuation Correction (3112)</summary>
DicomUID  DicomUID::AttenuationCorrection3112 = DicomUID{"1.2.840.10008.6.1.744",///NOLINT
                                                         "Attenuation Correction (3112)",
                                                         DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Types of Perfusion Defects (3113)</summary>
DicomUID  DicomUID::TypesOfPerfusionDefects3113 = DicomUID{"1.2.840.10008.6.1.745",///NOLINT
                                                           "Types of Perfusion Defects (3113)",
                                                           DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Study Quality (3114)</summary>
DicomUID  DicomUID::StudyQuality3114 = DicomUID{"1.2.840.10008.6.1.746",///NOLINT
                                                "Study Quality (3114)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Stress Imaging Quality Issues (3115)</summary>
DicomUID  DicomUID::StressImagingQualityIssues3115 = DicomUID{"1.2.840.10008.6.1.747",///NOLINT
                                                              "Stress Imaging Quality Issues (3115)",
                                                              DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: NM Extracardiac Findings (3116)</summary>
DicomUID  DicomUID::NMExtracardiacFindings3116 = DicomUID{"1.2.840.10008.6.1.748",///NOLINT
                                                          "NM Extracardiac Findings (3116)",
                                                          DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Attenuation Correction Methods (3117)</summary>
DicomUID  DicomUID::AttenuationCorrectionMethods3117 = DicomUID{"1.2.840.10008.6.1.749",///NOLINT
                                                                "Attenuation Correction Methods (3117)",
                                                                DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Level of Risk (3118)</summary>
DicomUID  DicomUID::LevelOfRisk3118 = DicomUID{"1.2.840.10008.6.1.750",///NOLINT
                                               "Level of Risk (3118)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: LV Function (3119)</summary>
DicomUID  DicomUID::LVFunction3119 = DicomUID{"1.2.840.10008.6.1.751",///NOLINT
                                              "LV Function (3119)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Perfusion Findings (3120)</summary>
DicomUID  DicomUID::PerfusionFindings3120 = DicomUID{"1.2.840.10008.6.1.752",///NOLINT
                                                     "Perfusion Findings (3120)", DicomUidType::ContextGroupName,
                                                     false};

///<summary>Context Group Name: Perfusion Morphology (3121)</summary>
DicomUID  DicomUID::PerfusionMorphology3121 = DicomUID{"1.2.840.10008.6.1.753",///NOLINT
                                                       "Perfusion Morphology (3121)", DicomUidType::ContextGroupName,
                                                       false};

///<summary>Context Group Name: Ventricular Enlargement (3122)</summary>
DicomUID  DicomUID::VentricularEnlargement3122 = DicomUID{"1.2.840.10008.6.1.754",///NOLINT
                                                          "Ventricular Enlargement (3122)",
                                                          DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Stress Test Procedure (3200)</summary>
DicomUID  DicomUID::StressTestProcedure3200 = DicomUID{"1.2.840.10008.6.1.755",///NOLINT
                                                       "Stress Test Procedure (3200)", DicomUidType::ContextGroupName,
                                                       false};

///<summary>Context Group Name: Indications for Stress Test (3201)</summary>
DicomUID  DicomUID::IndicationsForStressTest3201 = DicomUID{"1.2.840.10008.6.1.756",///NOLINT
                                                            "Indications for Stress Test (3201)",
                                                            DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Chest Pain (3202)</summary>
DicomUID  DicomUID::ChestPain3202 = DicomUID{"1.2.840.10008.6.1.757",///NOLINT
                                             "Chest Pain (3202)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Exerciser Device (3203)</summary>
DicomUID  DicomUID::ExerciserDevice3203 = DicomUID{"1.2.840.10008.6.1.758",///NOLINT
                                                   "Exerciser Device (3203)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Stress Agents (3204)</summary>
DicomUID  DicomUID::StressAgents3204 = DicomUID{"1.2.840.10008.6.1.759",///NOLINT
                                                "Stress Agents (3204)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Indications for Pharmacological Stress Test (3205)</summary>
DicomUID  DicomUID::IndicationsForPharmacologicalStressTest3205 = DicomUID{"1.2.840.10008.6.1.760",///NOLINT
                                                                           "Indications for Pharmacological Stress Test (3205)",
                                                                           DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Non-invasive Cardiac Imaging Procedures (3206)</summary>
DicomUID  DicomUID::NonInvasiveCardiacImagingProcedures3206 = DicomUID{"1.2.840.10008.6.1.761",///NOLINT
                                                                       "Non-invasive Cardiac Imaging Procedures (3206)",
                                                                       DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Summary Codes Exercise ECG (3208)</summary>
DicomUID  DicomUID::SummaryCodesExerciseECG3208 = DicomUID{"1.2.840.10008.6.1.763",///NOLINT
                                                           "Summary Codes Exercise ECG (3208)",
                                                           DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Summary Codes Stress Imaging (3209)</summary>
DicomUID  DicomUID::SummaryCodesStressImaging3209 = DicomUID{"1.2.840.10008.6.1.764",///NOLINT
                                                             "Summary Codes Stress Imaging (3209)",
                                                             DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Speed of Response (3210)</summary>
DicomUID  DicomUID::SpeedOfResponse3210 = DicomUID{"1.2.840.10008.6.1.765",///NOLINT
                                                   "Speed of Response (3210)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: BP Response (3211)</summary>
DicomUID  DicomUID::BPResponse3211 = DicomUID{"1.2.840.10008.6.1.766",///NOLINT
                                              "BP Response (3211)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Treadmill Speed (3212)</summary>
DicomUID  DicomUID::TreadmillSpeed3212 = DicomUID{"1.2.840.10008.6.1.767",///NOLINT
                                                  "Treadmill Speed (3212)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Stress Hemodynamic Findings (3213)</summary>
DicomUID  DicomUID::StressHemodynamicFindings3213 = DicomUID{"1.2.840.10008.6.1.768",///NOLINT
                                                             "Stress Hemodynamic Findings (3213)",
                                                             DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Perfusion Finding Method (3215)</summary>
DicomUID  DicomUID::PerfusionFindingMethod3215 = DicomUID{"1.2.840.10008.6.1.769",///NOLINT
                                                          "Perfusion Finding Method (3215)",
                                                          DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Comparison Finding (3217)</summary>
DicomUID  DicomUID::ComparisonFinding3217 = DicomUID{"1.2.840.10008.6.1.770",///NOLINT
                                                     "Comparison Finding (3217)", DicomUidType::ContextGroupName,
                                                     false};

///<summary>Context Group Name: Stress Symptoms (3220)</summary>
DicomUID  DicomUID::StressSymptoms3220 = DicomUID{"1.2.840.10008.6.1.771",///NOLINT
                                                  "Stress Symptoms (3220)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Stress Test Termination Reasons (3221)</summary>
DicomUID  DicomUID::StressTestTerminationReasons3221 = DicomUID{"1.2.840.10008.6.1.772",///NOLINT
                                                                "Stress Test Termination Reasons (3221)",
                                                                DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: QTc Measurements (3227)</summary>
DicomUID  DicomUID::QTcMeasurements3227 = DicomUID{"1.2.840.10008.6.1.773",///NOLINT
                                                   "QTc Measurements (3227)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: ECG Timing Measurements (3228)</summary>
DicomUID  DicomUID::ECGTimingMeasurements3228 = DicomUID{"1.2.840.10008.6.1.774",///NOLINT
                                                         "ECG Timing Measurements (3228)",
                                                         DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: ECG Axis Measurements (3229)</summary>
DicomUID  DicomUID::ECGAxisMeasurements3229 = DicomUID{"1.2.840.10008.6.1.775",///NOLINT
                                                       "ECG Axis Measurements (3229)", DicomUidType::ContextGroupName,
                                                       false};

///<summary>Context Group Name: ECG Findings (3230)</summary>
DicomUID  DicomUID::ECGFindings3230 = DicomUID{"1.2.840.10008.6.1.776",///NOLINT
                                               "ECG Findings (3230)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: ST Segment Findings (3231)</summary>
DicomUID  DicomUID::STSegmentFindings3231 = DicomUID{"1.2.840.10008.6.1.777",///NOLINT
                                                     "ST Segment Findings (3231)", DicomUidType::ContextGroupName,
                                                     false};

///<summary>Context Group Name: ST Segment Location (3232)</summary>
DicomUID  DicomUID::STSegmentLocation3232 = DicomUID{"1.2.840.10008.6.1.778",///NOLINT
                                                     "ST Segment Location (3232)", DicomUidType::ContextGroupName,
                                                     false};

///<summary>Context Group Name: ST Segment Morphology (3233)</summary>
DicomUID  DicomUID::STSegmentMorphology3233 = DicomUID{"1.2.840.10008.6.1.779",///NOLINT
                                                       "ST Segment Morphology (3233)", DicomUidType::ContextGroupName,
                                                       false};

///<summary>Context Group Name: Ectopic Beat Morphology (3234)</summary>
DicomUID  DicomUID::EctopicBeatMorphology3234 = DicomUID{"1.2.840.10008.6.1.780",///NOLINT
                                                         "Ectopic Beat Morphology (3234)",
                                                         DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Perfusion Comparison Findings (3235)</summary>
DicomUID  DicomUID::PerfusionComparisonFindings3235 = DicomUID{"1.2.840.10008.6.1.781",///NOLINT
                                                               "Perfusion Comparison Findings (3235)",
                                                               DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Tolerance Comparison Findings (3236)</summary>
DicomUID  DicomUID::ToleranceComparisonFindings3236 = DicomUID{"1.2.840.10008.6.1.782",///NOLINT
                                                               "Tolerance Comparison Findings (3236)",
                                                               DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Wall Motion Comparison Findings (3237)</summary>
DicomUID  DicomUID::WallMotionComparisonFindings3237 = DicomUID{"1.2.840.10008.6.1.783",///NOLINT
                                                                "Wall Motion Comparison Findings (3237)",
                                                                DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Stress Scoring Scales (3238)</summary>
DicomUID  DicomUID::StressScoringScales3238 = DicomUID{"1.2.840.10008.6.1.784",///NOLINT
                                                       "Stress Scoring Scales (3238)", DicomUidType::ContextGroupName,
                                                       false};

///<summary>Context Group Name: Perceived Exertion Scales (3239)</summary>
DicomUID  DicomUID::PerceivedExertionScales3239 = DicomUID{"1.2.840.10008.6.1.785",///NOLINT
                                                           "Perceived Exertion Scales (3239)",
                                                           DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Ventricle Identification (3463)</summary>
DicomUID  DicomUID::VentricleIdentification3463 = DicomUID{"1.2.840.10008.6.1.786",///NOLINT
                                                           "Ventricle Identification (3463)",
                                                           DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Colon Overall Assessment (6200)</summary>
DicomUID  DicomUID::ColonOverallAssessment6200 = DicomUID{"1.2.840.10008.6.1.787",///NOLINT
                                                          "Colon Overall Assessment (6200)",
                                                          DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Colon Finding or Feature (6201)</summary>
DicomUID  DicomUID::ColonFindingOrFeature6201 = DicomUID{"1.2.840.10008.6.1.788",///NOLINT
                                                         "Colon Finding or Feature (6201)",
                                                         DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Colon Finding or Feature Modifier (6202)</summary>
DicomUID  DicomUID::ColonFindingOrFeatureModifier6202 = DicomUID{"1.2.840.10008.6.1.789",///NOLINT
                                                                 "Colon Finding or Feature Modifier (6202)",
                                                                 DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Colon Non-lesion Object Type (6203)</summary>
DicomUID  DicomUID::ColonNonLesionObjectType6203 = DicomUID{"1.2.840.10008.6.1.790",///NOLINT
                                                            "Colon Non-lesion Object Type (6203)",
                                                            DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Anatomic Non-colon Findings (6204)</summary>
DicomUID  DicomUID::AnatomicNonColonFindings6204 = DicomUID{"1.2.840.10008.6.1.791",///NOLINT
                                                            "Anatomic Non-colon Findings (6204)",
                                                            DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Clockface Location for Colon (6205)</summary>
DicomUID  DicomUID::ClockfaceLocationForColon6205 = DicomUID{"1.2.840.10008.6.1.792",///NOLINT
                                                             "Clockface Location for Colon (6205)",
                                                             DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Recumbent Patient Orientation for Colon (6206)</summary>
DicomUID  DicomUID::RecumbentPatientOrientationForColon6206 = DicomUID{"1.2.840.10008.6.1.793",///NOLINT
                                                                       "Recumbent Patient Orientation for Colon (6206)",
                                                                       DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Colon Quantitative Temporal Difference Type (6207)</summary>
DicomUID  DicomUID::ColonQuantitativeTemporalDifferenceType6207 = DicomUID{"1.2.840.10008.6.1.794",///NOLINT
                                                                           "Colon Quantitative Temporal Difference Type (6207)",
                                                                           DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Colon Types of Quality Control Standard (6208)</summary>
DicomUID  DicomUID::ColonTypesOfQualityControlStandard6208 = DicomUID{"1.2.840.10008.6.1.795",///NOLINT
                                                                      "Colon Types of Quality Control Standard (6208)",
                                                                      DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Colon Morphology Descriptor (6209)</summary>
DicomUID  DicomUID::ColonMorphologyDescriptor6209 = DicomUID{"1.2.840.10008.6.1.796",///NOLINT
                                                             "Colon Morphology Descriptor (6209)",
                                                             DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Location in Intestinal Tract (6210)</summary>
DicomUID  DicomUID::LocationInIntestinalTract6210 = DicomUID{"1.2.840.10008.6.1.797",///NOLINT
                                                             "Location in Intestinal Tract (6210)",
                                                             DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Colon CAD Material Description (6211)</summary>
DicomUID  DicomUID::ColonCADMaterialDescription6211 = DicomUID{"1.2.840.10008.6.1.798",///NOLINT
                                                               "Colon CAD Material Description (6211)",
                                                               DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Calculated Value for Colon Findings (6212)</summary>
DicomUID  DicomUID::CalculatedValueForColonFindings6212 = DicomUID{"1.2.840.10008.6.1.799",///NOLINT
                                                                   "Calculated Value for Colon Findings (6212)",
                                                                   DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Ophthalmic Horizontal Directions (4214)</summary>
DicomUID  DicomUID::OphthalmicHorizontalDirections4214 = DicomUID{"1.2.840.10008.6.1.800",///NOLINT
                                                                  "Ophthalmic Horizontal Directions (4214)",
                                                                  DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Ophthalmic Vertical Directions (4215)</summary>
DicomUID  DicomUID::OphthalmicVerticalDirections4215 = DicomUID{"1.2.840.10008.6.1.801",///NOLINT
                                                                "Ophthalmic Vertical Directions (4215)",
                                                                DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Ophthalmic Visual Acuity Type (4216)</summary>
DicomUID  DicomUID::OphthalmicVisualAcuityType4216 = DicomUID{"1.2.840.10008.6.1.802",///NOLINT
                                                              "Ophthalmic Visual Acuity Type (4216)",
                                                              DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Arterial Pulse Waveform (3004)</summary>
DicomUID  DicomUID::ArterialPulseWaveform3004 = DicomUID{"1.2.840.10008.6.1.803",///NOLINT
                                                         "Arterial Pulse Waveform (3004)",
                                                         DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Respiration Waveform (3005)</summary>
DicomUID  DicomUID::RespirationWaveform3005 = DicomUID{"1.2.840.10008.6.1.804",///NOLINT
                                                       "Respiration Waveform (3005)", DicomUidType::ContextGroupName,
                                                       false};

///<summary>Context Group Name: Ultrasound Contrast/Bolus Agents (12030)</summary>
DicomUID  DicomUID::UltrasoundContrastBolusAgents12030 = DicomUID{"1.2.840.10008.6.1.805",///NOLINT
                                                                  "Ultrasound Contrast/Bolus Agents (12030)",
                                                                  DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Protocol Interval Events (12031)</summary>
DicomUID  DicomUID::ProtocolIntervalEvents12031 = DicomUID{"1.2.840.10008.6.1.806",///NOLINT
                                                           "Protocol Interval Events (12031)",
                                                           DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Transducer Scan Pattern (12032)</summary>
DicomUID  DicomUID::TransducerScanPattern12032 = DicomUID{"1.2.840.10008.6.1.807",///NOLINT
                                                          "Transducer Scan Pattern (12032)",
                                                          DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Ultrasound Transducer Geometry (12033)</summary>
DicomUID  DicomUID::UltrasoundTransducerGeometry12033 = DicomUID{"1.2.840.10008.6.1.808",///NOLINT
                                                                 "Ultrasound Transducer Geometry (12033)",
                                                                 DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Ultrasound Transducer Beam Steering (12034)</summary>
DicomUID  DicomUID::UltrasoundTransducerBeamSteering12034 = DicomUID{"1.2.840.10008.6.1.809",///NOLINT
                                                                     "Ultrasound Transducer Beam Steering (12034)",
                                                                     DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Ultrasound Transducer Application (12035)</summary>
DicomUID  DicomUID::UltrasoundTransducerApplication12035 = DicomUID{"1.2.840.10008.6.1.810",///NOLINT
                                                                    "Ultrasound Transducer Application (12035)",
                                                                    DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Instance Availability Status (50)</summary>
DicomUID  DicomUID::InstanceAvailabilityStatus50 = DicomUID{"1.2.840.10008.6.1.811",///NOLINT
                                                            "Instance Availability Status (50)",
                                                            DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Modality PPS Discontinuation Reasons (9301)</summary>
DicomUID  DicomUID::ModalityPPSDiscontinuationReasons9301 = DicomUID{"1.2.840.10008.6.1.812",///NOLINT
                                                                     "Modality PPS Discontinuation Reasons (9301)",
                                                                     DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Media Import PPS Discontinuation Reasons (9302)</summary>
DicomUID  DicomUID::MediaImportPPSDiscontinuationReasons9302 = DicomUID{"1.2.840.10008.6.1.813",///NOLINT
                                                                        "Media Import PPS Discontinuation Reasons (9302)",
                                                                        DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: DX Anatomy Imaged for Animals (7482)</summary>
DicomUID  DicomUID::DXAnatomyImagedForAnimals7482 = DicomUID{"1.2.840.10008.6.1.814",///NOLINT
                                                             "DX Anatomy Imaged for Animals (7482)",
                                                             DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Common Anatomic Regions for Animals (7483)</summary>
DicomUID  DicomUID::CommonAnatomicRegionsForAnimals7483 = DicomUID{"1.2.840.10008.6.1.815",///NOLINT
                                                                   "Common Anatomic Regions for Animals (7483)",
                                                                   DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: DX View for Animals (7484)</summary>
DicomUID  DicomUID::DXViewForAnimals7484 = DicomUID{"1.2.840.10008.6.1.816",///NOLINT
                                                    "DX View for Animals (7484)", DicomUidType::ContextGroupName,
                                                    false};

///<summary>Context Group Name: Institutional Departments, Units and Services (7030)</summary>
DicomUID  DicomUID::InstitutionalDepartmentsUnitsAndServices7030 = DicomUID{"1.2.840.10008.6.1.817",///NOLINT
                                                                            "Institutional Departments, Units and Services (7030)",
                                                                            DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Purpose of Reference to Predecessor Report (7009)</summary>
DicomUID  DicomUID::PurposeOfReferenceToPredecessorReport7009 = DicomUID{"1.2.840.10008.6.1.818",///NOLINT
                                                                         "Purpose of Reference to Predecessor Report (7009)",
                                                                         DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Visual Fixation Quality During Acquisition (4220)</summary>
DicomUID  DicomUID::VisualFixationQualityDuringAcquisition4220 = DicomUID{"1.2.840.10008.6.1.819",///NOLINT
                                                                          "Visual Fixation Quality During Acquisition (4220)",
                                                                          DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Visual Fixation Quality Problem (4221)</summary>
DicomUID  DicomUID::VisualFixationQualityProblem4221 = DicomUID{"1.2.840.10008.6.1.820",///NOLINT
                                                                "Visual Fixation Quality Problem (4221)",
                                                                DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Ophthalmic Macular Grid Problem (4222)</summary>
DicomUID  DicomUID::OphthalmicMacularGridProblem4222 = DicomUID{"1.2.840.10008.6.1.821",///NOLINT
                                                                "Ophthalmic Macular Grid Problem (4222)",
                                                                DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Organizations (5002)</summary>
DicomUID  DicomUID::Organizations5002 = DicomUID{"1.2.840.10008.6.1.822",///NOLINT
                                                 "Organizations (5002)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Mixed Breeds (7486)</summary>
DicomUID  DicomUID::MixedBreeds7486 = DicomUID{"1.2.840.10008.6.1.823",///NOLINT
                                               "Mixed Breeds (7486)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Broselow-Luten Pediatric Size Categories (7040)</summary>
DicomUID  DicomUID::BroselowLutenPediatricSizeCategories7040 = DicomUID{"1.2.840.10008.6.1.824",///NOLINT
                                                                        "Broselow-Luten Pediatric Size Categories (7040)",
                                                                        DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: CMDCTECC Calcium Scoring Patient Size Categories (7042)</summary>
DicomUID  DicomUID::CMDCTECCCalciumScoringPatientSizeCategories7042 = DicomUID{"1.2.840.10008.6.1.825",///NOLINT
                                                                               "CMDCTECC Calcium Scoring Patient Size Categories (7042)",
                                                                               DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Cardiac Ultrasound Report Titles (12245)</summary>
DicomUID  DicomUID::CardiacUltrasoundReportTitles12245 = DicomUID{"1.2.840.10008.6.1.826",///NOLINT
                                                                  "Cardiac Ultrasound Report Titles (12245)",
                                                                  DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Cardiac Ultrasound Indication for Study (12246)</summary>
DicomUID  DicomUID::CardiacUltrasoundIndicationForStudy12246 = DicomUID{"1.2.840.10008.6.1.827",///NOLINT
                                                                        "Cardiac Ultrasound Indication for Study (12246)",
                                                                        DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Pediatric, Fetal and Congenital Cardiac Surgical Interventions (12247)</summary>
DicomUID  DicomUID::PediatricFetalAndCongenitalCardiacSurgicalInterventions12247 = DicomUID{///NOLINT
        "1.2.840.10008.6.1.828",///NOLINT
        "Pediatric, Fetal and Congenital Cardiac Surgical Interventions (12247)", DicomUidType::ContextGroupName,
        false};

///<summary>Context Group Name: Cardiac Ultrasound Summary Codes (12248)</summary>
DicomUID  DicomUID::CardiacUltrasoundSummaryCodes12248 = DicomUID{"1.2.840.10008.6.1.829",///NOLINT
                                                                  "Cardiac Ultrasound Summary Codes (12248)",
                                                                  DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Cardiac Ultrasound Fetal Summary Codes (12249)</summary>
DicomUID  DicomUID::CardiacUltrasoundFetalSummaryCodes12249 = DicomUID{"1.2.840.10008.6.1.830",///NOLINT
                                                                       "Cardiac Ultrasound Fetal Summary Codes (12249)",
                                                                       DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Cardiac Ultrasound Common Linear Measurements (12250)</summary>
DicomUID  DicomUID::CardiacUltrasoundCommonLinearMeasurements12250 = DicomUID{"1.2.840.10008.6.1.831",///NOLINT
                                                                              "Cardiac Ultrasound Common Linear Measurements (12250)",
                                                                              DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Cardiac Ultrasound Linear Valve Measurements (12251)</summary>
DicomUID  DicomUID::CardiacUltrasoundLinearValveMeasurements12251 = DicomUID{"1.2.840.10008.6.1.832",///NOLINT
                                                                             "Cardiac Ultrasound Linear Valve Measurements (12251)",
                                                                             DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Cardiac Ultrasound Cardiac Function (12252)</summary>
DicomUID  DicomUID::CardiacUltrasoundCardiacFunction12252 = DicomUID{"1.2.840.10008.6.1.833",///NOLINT
                                                                     "Cardiac Ultrasound Cardiac Function (12252)",
                                                                     DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Cardiac Ultrasound Area Measurements (12253)</summary>
DicomUID  DicomUID::CardiacUltrasoundAreaMeasurements12253 = DicomUID{"1.2.840.10008.6.1.834",///NOLINT
                                                                      "Cardiac Ultrasound Area Measurements (12253)",
                                                                      DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Cardiac Ultrasound Hemodynamic Measurements (12254)</summary>
DicomUID  DicomUID::CardiacUltrasoundHemodynamicMeasurements12254 = DicomUID{"1.2.840.10008.6.1.835",///NOLINT
                                                                             "Cardiac Ultrasound Hemodynamic Measurements (12254)",
                                                                             DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Cardiac Ultrasound Myocardium Measurements (12255)</summary>
DicomUID  DicomUID::CardiacUltrasoundMyocardiumMeasurements12255 = DicomUID{"1.2.840.10008.6.1.836",///NOLINT
                                                                            "Cardiac Ultrasound Myocardium Measurements (12255)",
                                                                            DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Cardiac Ultrasound Left Ventricle (12257)</summary>
DicomUID  DicomUID::CardiacUltrasoundLeftVentricle12257 = DicomUID{"1.2.840.10008.6.1.838",///NOLINT
                                                                   "Cardiac Ultrasound Left Ventricle (12257)",
                                                                   DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Cardiac Ultrasound Right Ventricle (12258)</summary>
DicomUID  DicomUID::CardiacUltrasoundRightVentricle12258 = DicomUID{"1.2.840.10008.6.1.839",///NOLINT
                                                                    "Cardiac Ultrasound Right Ventricle (12258)",
                                                                    DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Cardiac Ultrasound Ventricles Measurements (12259)</summary>
DicomUID  DicomUID::CardiacUltrasoundVentriclesMeasurements12259 = DicomUID{"1.2.840.10008.6.1.840",///NOLINT
                                                                            "Cardiac Ultrasound Ventricles Measurements (12259)",
                                                                            DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Cardiac Ultrasound Pulmonary Artery (12260)</summary>
DicomUID  DicomUID::CardiacUltrasoundPulmonaryArtery12260 = DicomUID{"1.2.840.10008.6.1.841",///NOLINT
                                                                     "Cardiac Ultrasound Pulmonary Artery (12260)",
                                                                     DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Cardiac Ultrasound Pulmonary Vein (12261)</summary>
DicomUID  DicomUID::CardiacUltrasoundPulmonaryVein12261 = DicomUID{"1.2.840.10008.6.1.842",///NOLINT
                                                                   "Cardiac Ultrasound Pulmonary Vein (12261)",
                                                                   DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Cardiac Ultrasound Pulmonary Valve (12262)</summary>
DicomUID  DicomUID::CardiacUltrasoundPulmonaryValve12262 = DicomUID{"1.2.840.10008.6.1.843",///NOLINT
                                                                    "Cardiac Ultrasound Pulmonary Valve (12262)",
                                                                    DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Cardiac Ultrasound Venous Return Pulmonary Measurements (12263)</summary>
DicomUID  DicomUID::CardiacUltrasoundVenousReturnPulmonaryMeasurements12263 = DicomUID{"1.2.840.10008.6.1.844",///NOLINT
                                                                                       "Cardiac Ultrasound Venous Return Pulmonary Measurements (12263)",
                                                                                       DicomUidType::ContextGroupName,
                                                                                       false};

///<summary>Context Group Name: Cardiac Ultrasound Venous Return Systemic Measurements (12264)</summary>
DicomUID  DicomUID::CardiacUltrasoundVenousReturnSystemicMeasurements12264 = DicomUID{"1.2.840.10008.6.1.845",///NOLINT
                                                                                      "Cardiac Ultrasound Venous Return Systemic Measurements (12264)",
                                                                                      DicomUidType::ContextGroupName,
                                                                                      false};

///<summary>Context Group Name: Cardiac Ultrasound Atria and Atrial Septum Measurements (12265)</summary>
DicomUID  DicomUID::CardiacUltrasoundAtriaAndAtrialSeptumMeasurements12265 = DicomUID{"1.2.840.10008.6.1.846",///NOLINT
                                                                                      "Cardiac Ultrasound Atria and Atrial Septum Measurements (12265)",
                                                                                      DicomUidType::ContextGroupName,
                                                                                      false};

///<summary>Context Group Name: Cardiac Ultrasound Mitral Valve (12266)</summary>
DicomUID  DicomUID::CardiacUltrasoundMitralValve12266 = DicomUID{"1.2.840.10008.6.1.847",///NOLINT
                                                                 "Cardiac Ultrasound Mitral Valve (12266)",
                                                                 DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Cardiac Ultrasound Tricuspid Valve (12267)</summary>
DicomUID  DicomUID::CardiacUltrasoundTricuspidValve12267 = DicomUID{"1.2.840.10008.6.1.848",///NOLINT
                                                                    "Cardiac Ultrasound Tricuspid Valve (12267)",
                                                                    DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Cardiac Ultrasound Atrioventricular Valves Measurements (12268)</summary>
DicomUID  DicomUID::CardiacUltrasoundAtrioventricularValvesMeasurements12268 = DicomUID{///NOLINT
        "1.2.840.10008.6.1.849",///NOLINT
        "Cardiac Ultrasound Atrioventricular Valves Measurements (12268)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Cardiac Ultrasound Interventricular Septum Measurements (12269)</summary>
DicomUID  DicomUID::CardiacUltrasoundInterventricularSeptumMeasurements12269 = DicomUID{///NOLINT
        "1.2.840.10008.6.1.850",///NOLINT
        "Cardiac Ultrasound Interventricular Septum Measurements (12269)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Cardiac Ultrasound Aortic Valve (12270)</summary>
DicomUID  DicomUID::CardiacUltrasoundAorticValve12270 = DicomUID{"1.2.840.10008.6.1.851",///NOLINT
                                                                 "Cardiac Ultrasound Aortic Valve (12270)",
                                                                 DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Cardiac Ultrasound Outflow Tracts Measurements (12271)</summary>
DicomUID  DicomUID::CardiacUltrasoundOutflowTractsMeasurements12271 = DicomUID{"1.2.840.10008.6.1.852",///NOLINT
                                                                               "Cardiac Ultrasound Outflow Tracts Measurements (12271)",
                                                                               DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Cardiac Ultrasound Semilunar Valves, Annulate and Sinuses Measurements (12272)</summary>
DicomUID  DicomUID::CardiacUltrasoundSemilunarValvesAnnulateAndSinusesMeasurements12272 = DicomUID{///NOLINT
        "1.2.840.10008.6.1.853",///NOLINT
        "Cardiac Ultrasound Semilunar Valves, Annulate and Sinuses Measurements (12272)",
        DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Cardiac Ultrasound Aortic Sinotubular Junction (12273)</summary>
DicomUID  DicomUID::CardiacUltrasoundAorticSinotubularJunction12273 = DicomUID{"1.2.840.10008.6.1.854",///NOLINT
                                                                               "Cardiac Ultrasound Aortic Sinotubular Junction (12273)",
                                                                               DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Cardiac Ultrasound Aorta Measurements (12274)</summary>
DicomUID  DicomUID::CardiacUltrasoundAortaMeasurements12274 = DicomUID{"1.2.840.10008.6.1.855",///NOLINT
                                                                       "Cardiac Ultrasound Aorta Measurements (12274)",
                                                                       DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Cardiac Ultrasound Coronary Arteries Measurements (12275)</summary>
DicomUID  DicomUID::CardiacUltrasoundCoronaryArteriesMeasurements12275 = DicomUID{"1.2.840.10008.6.1.856",///NOLINT
                                                                                  "Cardiac Ultrasound Coronary Arteries Measurements (12275)",
                                                                                  DicomUidType::ContextGroupName,
                                                                                  false};

///<summary>Context Group Name: Cardiac Ultrasound Aorto Pulmonary Connections Measurements (12276)</summary>
DicomUID  DicomUID::CardiacUltrasoundAortoPulmonaryConnectionsMeasurements12276 = DicomUID{///NOLINT
        "1.2.840.10008.6.1.857",///NOLINT
        "Cardiac Ultrasound Aorto Pulmonary Connections Measurements (12276)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Cardiac Ultrasound Pericardium and Pleura Measurements (12277)</summary>
DicomUID  DicomUID::CardiacUltrasoundPericardiumAndPleuraMeasurements12277 = DicomUID{"1.2.840.10008.6.1.858",///NOLINT
                                                                                      "Cardiac Ultrasound Pericardium and Pleura Measurements (12277)",
                                                                                      DicomUidType::ContextGroupName,
                                                                                      false};

///<summary>Context Group Name: Cardiac Ultrasound Fetal General Measurements (12279)</summary>
DicomUID  DicomUID::CardiacUltrasoundFetalGeneralMeasurements12279 = DicomUID{"1.2.840.10008.6.1.859",///NOLINT
                                                                              "Cardiac Ultrasound Fetal General Measurements (12279)",
                                                                              DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Cardiac Ultrasound Target Sites (12280)</summary>
DicomUID  DicomUID::CardiacUltrasoundTargetSites12280 = DicomUID{"1.2.840.10008.6.1.860",///NOLINT
                                                                 "Cardiac Ultrasound Target Sites (12280)",
                                                                 DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Cardiac Ultrasound Target Site Modifiers (12281)</summary>
DicomUID  DicomUID::CardiacUltrasoundTargetSiteModifiers12281 = DicomUID{"1.2.840.10008.6.1.861",///NOLINT
                                                                         "Cardiac Ultrasound Target Site Modifiers (12281)",
                                                                         DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Cardiac Ultrasound Venous Return Systemic Finding Sites (12282)</summary>
DicomUID  DicomUID::CardiacUltrasoundVenousReturnSystemicFindingSites12282 = DicomUID{"1.2.840.10008.6.1.862",///NOLINT
                                                                                      "Cardiac Ultrasound Venous Return Systemic Finding Sites (12282)",
                                                                                      DicomUidType::ContextGroupName,
                                                                                      false};

///<summary>Context Group Name: Cardiac Ultrasound Venous Return Pulmonary Finding Sites (12283)</summary>
DicomUID  DicomUID::CardiacUltrasoundVenousReturnPulmonaryFindingSites12283 = DicomUID{"1.2.840.10008.6.1.863",///NOLINT
                                                                                       "Cardiac Ultrasound Venous Return Pulmonary Finding Sites (12283)",
                                                                                       DicomUidType::ContextGroupName,
                                                                                       false};

///<summary>Context Group Name: Cardiac Ultrasound Atria and Atrial Septum Finding Sites (12284)</summary>
DicomUID  DicomUID::CardiacUltrasoundAtriaAndAtrialSeptumFindingSites12284 = DicomUID{"1.2.840.10008.6.1.864",///NOLINT
                                                                                      "Cardiac Ultrasound Atria and Atrial Septum Finding Sites (12284)",
                                                                                      DicomUidType::ContextGroupName,
                                                                                      false};

///<summary>Context Group Name: Cardiac Ultrasound Atrioventricular Valves Finding Sites (12285)</summary>
DicomUID  DicomUID::CardiacUltrasoundAtrioventricularValvesFindingSites12285 = DicomUID{///NOLINT
        "1.2.840.10008.6.1.865",///NOLINT
        "Cardiac Ultrasound Atrioventricular Valves Finding Sites (12285)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Cardiac Ultrasound Interventricular Septum Finding Sites (12286)</summary>
DicomUID  DicomUID::CardiacUltrasoundInterventricularSeptumFindingSites12286 = DicomUID{///NOLINT
        "1.2.840.10008.6.1.866",///NOLINT
        "Cardiac Ultrasound Interventricular Septum Finding Sites (12286)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Cardiac Ultrasound Ventricles Finding Sites (12287)</summary>
DicomUID  DicomUID::CardiacUltrasoundVentriclesFindingSites12287 = DicomUID{"1.2.840.10008.6.1.867",///NOLINT
                                                                            "Cardiac Ultrasound Ventricles Finding Sites (12287)",
                                                                            DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Cardiac Ultrasound Outflow Tracts Finding Sites (12288)</summary>
DicomUID  DicomUID::CardiacUltrasoundOutflowTractsFindingSites12288 = DicomUID{"1.2.840.10008.6.1.868",///NOLINT
                                                                               "Cardiac Ultrasound Outflow Tracts Finding Sites (12288)",
                                                                               DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Cardiac Ultrasound Semilunar Valves, Annulus and Sinuses Finding Sites (12289)</summary>
DicomUID  DicomUID::CardiacUltrasoundSemilunarValvesAnnulusAndSinusesFindingSites12289 = DicomUID{///NOLINT
        "1.2.840.10008.6.1.869",///NOLINT
        "Cardiac Ultrasound Semilunar Valves, Annulus and Sinuses Finding Sites (12289)",
        DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Cardiac Ultrasound Pulmonary Arteries Finding Sites (12290)</summary>
DicomUID  DicomUID::CardiacUltrasoundPulmonaryArteriesFindingSites12290 = DicomUID{"1.2.840.10008.6.1.870",///NOLINT
                                                                                   "Cardiac Ultrasound Pulmonary Arteries Finding Sites (12290)",
                                                                                   DicomUidType::ContextGroupName,
                                                                                   false};

///<summary>Context Group Name: Cardiac Ultrasound Aorta Finding Sites (12291)</summary>
DicomUID  DicomUID::CardiacUltrasoundAortaFindingSites12291 = DicomUID{"1.2.840.10008.6.1.871",///NOLINT
                                                                       "Cardiac Ultrasound Aorta Finding Sites (12291)",
                                                                       DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Cardiac Ultrasound Coronary Arteries Finding Sites (12292)</summary>
DicomUID  DicomUID::CardiacUltrasoundCoronaryArteriesFindingSites12292 = DicomUID{"1.2.840.10008.6.1.872",///NOLINT
                                                                                  "Cardiac Ultrasound Coronary Arteries Finding Sites (12292)",
                                                                                  DicomUidType::ContextGroupName,
                                                                                  false};

///<summary>Context Group Name: Cardiac Ultrasound Aortopulmonary Connections Finding Sites (12293)</summary>
DicomUID  DicomUID::CardiacUltrasoundAortopulmonaryConnectionsFindingSites12293 = DicomUID{///NOLINT
        "1.2.840.10008.6.1.873",///NOLINT
        "Cardiac Ultrasound Aortopulmonary Connections Finding Sites (12293)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Cardiac Ultrasound Pericardium and Pleura Finding Sites (12294)</summary>
DicomUID  DicomUID::CardiacUltrasoundPericardiumAndPleuraFindingSites12294 = DicomUID{"1.2.840.10008.6.1.874",///NOLINT
                                                                                      "Cardiac Ultrasound Pericardium and Pleura Finding Sites (12294)",
                                                                                      DicomUidType::ContextGroupName,
                                                                                      false};

///<summary>Context Group Name: Ophthalmic Ultrasound Axial Measurements Type (4230)</summary>
DicomUID  DicomUID::OphthalmicUltrasoundAxialMeasurementsType4230 = DicomUID{"1.2.840.10008.6.1.876",///NOLINT
                                                                             "Ophthalmic Ultrasound Axial Measurements Type (4230)",
                                                                             DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Lens Status (4231)</summary>
DicomUID  DicomUID::LensStatus4231 = DicomUID{"1.2.840.10008.6.1.877",///NOLINT
                                              "Lens Status (4231)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Vitreous Status (4232)</summary>
DicomUID  DicomUID::VitreousStatus4232 = DicomUID{"1.2.840.10008.6.1.878",///NOLINT
                                                  "Vitreous Status (4232)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Ophthalmic Axial Length Measurements Segment Names (4233)</summary>
DicomUID  DicomUID::OphthalmicAxialLengthMeasurementsSegmentNames4233 = DicomUID{"1.2.840.10008.6.1.879",///NOLINT
                                                                                 "Ophthalmic Axial Length Measurements Segment Names (4233)",
                                                                                 DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Refractive Surgery Types (4234)</summary>
DicomUID  DicomUID::RefractiveSurgeryTypes4234 = DicomUID{"1.2.840.10008.6.1.880",///NOLINT
                                                          "Refractive Surgery Types (4234)",
                                                          DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Keratometry Descriptors (4235)</summary>
DicomUID  DicomUID::KeratometryDescriptors4235 = DicomUID{"1.2.840.10008.6.1.881",///NOLINT
                                                          "Keratometry Descriptors (4235)",
                                                          DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: IOL Calculation Formula (4236)</summary>
DicomUID  DicomUID::IOLCalculationFormula4236 = DicomUID{"1.2.840.10008.6.1.882",///NOLINT
                                                         "IOL Calculation Formula (4236)",
                                                         DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Lens Constant Type (4237)</summary>
DicomUID  DicomUID::LensConstantType4237 = DicomUID{"1.2.840.10008.6.1.883",///NOLINT
                                                    "Lens Constant Type (4237)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Refractive Error Types (4238)</summary>
DicomUID  DicomUID::RefractiveErrorTypes4238 = DicomUID{"1.2.840.10008.6.1.884",///NOLINT
                                                        "Refractive Error Types (4238)", DicomUidType::ContextGroupName,
                                                        false};

///<summary>Context Group Name: Anterior Chamber Depth Definition (4239)</summary>
DicomUID  DicomUID::AnteriorChamberDepthDefinition4239 = DicomUID{"1.2.840.10008.6.1.885",///NOLINT
                                                                  "Anterior Chamber Depth Definition (4239)",
                                                                  DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Ophthalmic Measurement or Calculation Data Source (4240)</summary>
DicomUID  DicomUID::OphthalmicMeasurementOrCalculationDataSource4240 = DicomUID{"1.2.840.10008.6.1.886",///NOLINT
                                                                                "Ophthalmic Measurement or Calculation Data Source (4240)",
                                                                                DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Ophthalmic Axial Length Selection Method (4241)</summary>
DicomUID  DicomUID::OphthalmicAxialLengthSelectionMethod4241 = DicomUID{"1.2.840.10008.6.1.887",///NOLINT
                                                                        "Ophthalmic Axial Length Selection Method (4241)",
                                                                        DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Ophthalmic Quality Metric Type (4243)</summary>
DicomUID  DicomUID::OphthalmicQualityMetricType4243 = DicomUID{"1.2.840.10008.6.1.889",///NOLINT
                                                               "Ophthalmic Quality Metric Type (4243)",
                                                               DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Ophthalmic Agent Concentration Units (4244)</summary>
DicomUID  DicomUID::OphthalmicAgentConcentrationUnits4244 = DicomUID{"1.2.840.10008.6.1.890",///NOLINT
                                                                     "Ophthalmic Agent Concentration Units (4244)",
                                                                     DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Functional Condition Present During Acquisition (91)</summary>
DicomUID  DicomUID::FunctionalConditionPresentDuringAcquisition91 = DicomUID{"1.2.840.10008.6.1.891",///NOLINT
                                                                             "Functional Condition Present During Acquisition (91)",
                                                                             DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Joint Position During Acquisition (92)</summary>
DicomUID  DicomUID::JointPositionDuringAcquisition92 = DicomUID{"1.2.840.10008.6.1.892",///NOLINT
                                                                "Joint Position During Acquisition (92)",
                                                                DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Joint Positioning Method (93)</summary>
DicomUID  DicomUID::JointPositioningMethod93 = DicomUID{"1.2.840.10008.6.1.893",///NOLINT
                                                        "Joint Positioning Method (93)", DicomUidType::ContextGroupName,
                                                        false};

///<summary>Context Group Name: Physical Force Applied During Acquisition (94)</summary>
DicomUID  DicomUID::PhysicalForceAppliedDuringAcquisition94 = DicomUID{"1.2.840.10008.6.1.894",///NOLINT
                                                                       "Physical Force Applied During Acquisition (94)",
                                                                       DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: ECG Control Variables Numeric (3690)</summary>
DicomUID  DicomUID::ECGControlVariablesNumeric3690 = DicomUID{"1.2.840.10008.6.1.895",///NOLINT
                                                              "ECG Control Variables Numeric (3690)",
                                                              DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: ECG Control Variables Text (3691)</summary>
DicomUID  DicomUID::ECGControlVariablesText3691 = DicomUID{"1.2.840.10008.6.1.896",///NOLINT
                                                           "ECG Control Variables Text (3691)",
                                                           DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: WSI Referenced Image Purposes of Reference (8120)</summary>
DicomUID  DicomUID::WSIReferencedImagePurposesOfReference8120 = DicomUID{"1.2.840.10008.6.1.897",///NOLINT
                                                                         "WSI Referenced Image Purposes of Reference (8120)",
                                                                         DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Microscopy Lens Type (8121)</summary>
DicomUID  DicomUID::MicroscopyLensType8121 = DicomUID{"1.2.840.10008.6.1.898",///NOLINT
                                                      "Microscopy Lens Type (8121)", DicomUidType::ContextGroupName,
                                                      false};

///<summary>Context Group Name: Microscopy Illuminator and Sensor Color (8122)</summary>
DicomUID  DicomUID::MicroscopyIlluminatorAndSensorColor8122 = DicomUID{"1.2.840.10008.6.1.899",///NOLINT
                                                                       "Microscopy Illuminator and Sensor Color (8122)",
                                                                       DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Microscopy Illumination Method (8123)</summary>
DicomUID  DicomUID::MicroscopyIlluminationMethod8123 = DicomUID{"1.2.840.10008.6.1.900",///NOLINT
                                                                "Microscopy Illumination Method (8123)",
                                                                DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Microscopy Filter (8124)</summary>
DicomUID  DicomUID::MicroscopyFilter8124 = DicomUID{"1.2.840.10008.6.1.901",///NOLINT
                                                    "Microscopy Filter (8124)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Microscopy Illuminator Type (8125)</summary>
DicomUID  DicomUID::MicroscopyIlluminatorType8125 = DicomUID{"1.2.840.10008.6.1.902",///NOLINT
                                                             "Microscopy Illuminator Type (8125)",
                                                             DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Audit Event ID (400)</summary>
DicomUID  DicomUID::AuditEventID400 = DicomUID{"1.2.840.10008.6.1.903",///NOLINT
                                               "Audit Event ID (400)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Audit Event Type Code (401)</summary>
DicomUID  DicomUID::AuditEventTypeCode401 = DicomUID{"1.2.840.10008.6.1.904",///NOLINT
                                                     "Audit Event Type Code (401)", DicomUidType::ContextGroupName,
                                                     false};

///<summary>Context Group Name: Audit Active Participant Role ID Code (402)</summary>
DicomUID  DicomUID::AuditActiveParticipantRoleIDCode402 = DicomUID{"1.2.840.10008.6.1.905",///NOLINT
                                                                   "Audit Active Participant Role ID Code (402)",
                                                                   DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Security Alert Type Code (403)</summary>
DicomUID  DicomUID::SecurityAlertTypeCode403 = DicomUID{"1.2.840.10008.6.1.906",///NOLINT
                                                        "Security Alert Type Code (403)",
                                                        DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Audit Participant Object ID Type Code (404)</summary>
DicomUID  DicomUID::AuditParticipantObjectIDTypeCode404 = DicomUID{"1.2.840.10008.6.1.907",///NOLINT
                                                                   "Audit Participant Object ID Type Code (404)",
                                                                   DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Media Type Code (405)</summary>
DicomUID  DicomUID::MediaTypeCode405 = DicomUID{"1.2.840.10008.6.1.908",///NOLINT
                                                "Media Type Code (405)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Visual Field Static Perimetry Test Patterns (4250)</summary>
DicomUID  DicomUID::VisualFieldStaticPerimetryTestPatterns4250 = DicomUID{"1.2.840.10008.6.1.909",///NOLINT
                                                                          "Visual Field Static Perimetry Test Patterns (4250)",
                                                                          DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Visual Field Static Perimetry Test Strategies (4251)</summary>
DicomUID  DicomUID::VisualFieldStaticPerimetryTestStrategies4251 = DicomUID{"1.2.840.10008.6.1.910",///NOLINT
                                                                            "Visual Field Static Perimetry Test Strategies (4251)",
                                                                            DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Visual Field Static Perimetry Screening Test Modes (4252)</summary>
DicomUID  DicomUID::VisualFieldStaticPerimetryScreeningTestModes4252 = DicomUID{"1.2.840.10008.6.1.911",///NOLINT
                                                                                "Visual Field Static Perimetry Screening Test Modes (4252)",
                                                                                DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Visual Field Static Perimetry Fixation Strategy (4253)</summary>
DicomUID  DicomUID::VisualFieldStaticPerimetryFixationStrategy4253 = DicomUID{"1.2.840.10008.6.1.912",///NOLINT
                                                                              "Visual Field Static Perimetry Fixation Strategy (4253)",
                                                                              DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Visual Field Static Perimetry Test Analysis Results (4254)</summary>
DicomUID  DicomUID::VisualFieldStaticPerimetryTestAnalysisResults4254 = DicomUID{"1.2.840.10008.6.1.913",///NOLINT
                                                                                 "Visual Field Static Perimetry Test Analysis Results (4254)",
                                                                                 DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Visual Field Illumination Color (4255)</summary>
DicomUID  DicomUID::VisualFieldIlluminationColor4255 = DicomUID{"1.2.840.10008.6.1.914",///NOLINT
                                                                "Visual Field Illumination Color (4255)",
                                                                DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Visual Field Procedure Modifier (4256)</summary>
DicomUID  DicomUID::VisualFieldProcedureModifier4256 = DicomUID{"1.2.840.10008.6.1.915",///NOLINT
                                                                "Visual Field Procedure Modifier (4256)",
                                                                DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Visual Field Global Index Name (4257)</summary>
DicomUID  DicomUID::VisualFieldGlobalIndexName4257 = DicomUID{"1.2.840.10008.6.1.916",///NOLINT
                                                              "Visual Field Global Index Name (4257)",
                                                              DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Abstract Multi-dimensional Image Model Component Semantics (7180)</summary>
DicomUID  DicomUID::AbstractMultiDimensionalImageModelComponentSemantics7180 = DicomUID{///NOLINT
        "1.2.840.10008.6.1.917",///NOLINT
        "Abstract Multi-dimensional Image Model Component Semantics (7180)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Abstract Multi-dimensional Image Model Component Units (7181)</summary>
DicomUID  DicomUID::AbstractMultiDimensionalImageModelComponentUnits7181 = DicomUID{"1.2.840.10008.6.1.918",///NOLINT
                                                                                    "Abstract Multi-dimensional Image Model Component Units (7181)",
                                                                                    DicomUidType::ContextGroupName,
                                                                                    false};

///<summary>Context Group Name: Abstract Multi-dimensional Image Model Dimension Semantics (7182)</summary>
DicomUID  DicomUID::AbstractMultiDimensionalImageModelDimensionSemantics7182 = DicomUID{///NOLINT
        "1.2.840.10008.6.1.919",///NOLINT
        "Abstract Multi-dimensional Image Model Dimension Semantics (7182)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Abstract Multi-dimensional Image Model Dimension Units (7183)</summary>
DicomUID  DicomUID::AbstractMultiDimensionalImageModelDimensionUnits7183 = DicomUID{"1.2.840.10008.6.1.920",///NOLINT
                                                                                    "Abstract Multi-dimensional Image Model Dimension Units (7183)",
                                                                                    DicomUidType::ContextGroupName,
                                                                                    false};

///<summary>Context Group Name: Abstract Multi-dimensional Image Model Axis Direction (7184)</summary>
DicomUID  DicomUID::AbstractMultiDimensionalImageModelAxisDirection7184 = DicomUID{"1.2.840.10008.6.1.921",///NOLINT
                                                                                   "Abstract Multi-dimensional Image Model Axis Direction (7184)",
                                                                                   DicomUidType::ContextGroupName,
                                                                                   false};

///<summary>Context Group Name: Abstract Multi-dimensional Image Model Axis Orientation (7185)</summary>
DicomUID  DicomUID::AbstractMultiDimensionalImageModelAxisOrientation7185 = DicomUID{"1.2.840.10008.6.1.922",///NOLINT
                                                                                     "Abstract Multi-dimensional Image Model Axis Orientation (7185)",
                                                                                     DicomUidType::ContextGroupName,
                                                                                     false};

///<summary>Context Group Name: Abstract Multi-dimensional Image Model Qualitative Dimension Sample Semantics (7186)</summary>
DicomUID  DicomUID::AbstractMultiDimensionalImageModelQualitativeDimensionSampleSemantics7186 = DicomUID{///NOLINT
        "1.2.840.10008.6.1.923",///NOLINT
        "Abstract Multi-dimensional Image Model Qualitative Dimension Sample Semantics (7186)",
        DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Planning Methods (7320)</summary>
DicomUID  DicomUID::PlanningMethods7320 = DicomUID{"1.2.840.10008.6.1.924",///NOLINT
                                                   "Planning Methods (7320)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: De-identification Method (7050)</summary>
DicomUID  DicomUID::DeIdentificationMethod7050 = DicomUID{"1.2.840.10008.6.1.925",///NOLINT
                                                          "De-identification Method (7050)",
                                                          DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Measurement Orientation (12118)</summary>
DicomUID  DicomUID::MeasurementOrientation12118 = DicomUID{"1.2.840.10008.6.1.926",///NOLINT
                                                           "Measurement Orientation (12118)",
                                                           DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: ECG Global Waveform Durations (3689)</summary>
DicomUID  DicomUID::ECGGlobalWaveformDurations3689 = DicomUID{"1.2.840.10008.6.1.927",///NOLINT
                                                              "ECG Global Waveform Durations (3689)",
                                                              DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: ICDs (3692)</summary>
DicomUID  DicomUID::ICDs3692 = DicomUID{"1.2.840.10008.6.1.930",///NOLINT
                                        "ICDs (3692)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Radiotherapy General Workitem Definition (9241)</summary>
DicomUID  DicomUID::RadiotherapyGeneralWorkitemDefinition9241 = DicomUID{"1.2.840.10008.6.1.931",///NOLINT
                                                                         "Radiotherapy General Workitem Definition (9241)",
                                                                         DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Radiotherapy Acquisition Workitem Definition (9242)</summary>
DicomUID  DicomUID::RadiotherapyAcquisitionWorkitemDefinition9242 = DicomUID{"1.2.840.10008.6.1.932",///NOLINT
                                                                             "Radiotherapy Acquisition Workitem Definition (9242)",
                                                                             DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Radiotherapy Registration Workitem Definition (9243)</summary>
DicomUID  DicomUID::RadiotherapyRegistrationWorkitemDefinition9243 = DicomUID{"1.2.840.10008.6.1.933",///NOLINT
                                                                              "Radiotherapy Registration Workitem Definition (9243)",
                                                                              DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Contrast Bolus Substance (3850)</summary>
DicomUID  DicomUID::ContrastBolusSubstance3850 = DicomUID{"1.2.840.10008.6.1.934",///NOLINT
                                                          "Contrast Bolus Substance (3850)",
                                                          DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Label Types (10022)</summary>
DicomUID  DicomUID::LabelTypes10022 = DicomUID{"1.2.840.10008.6.1.935",///NOLINT
                                               "Label Types (10022)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Ophthalmic Mapping Units for Real World Value Mapping (4260)</summary>
DicomUID  DicomUID::OphthalmicMappingUnitsForRealWorldValueMapping4260 = DicomUID{"1.2.840.10008.6.1.936",///NOLINT
                                                                                  "Ophthalmic Mapping Units for Real World Value Mapping (4260)",
                                                                                  DicomUidType::ContextGroupName,
                                                                                  false};

///<summary>Context Group Name: Ophthalmic Mapping Acquisition Method (4261)</summary>
DicomUID  DicomUID::OphthalmicMappingAcquisitionMethod4261 = DicomUID{"1.2.840.10008.6.1.937",///NOLINT
                                                                      "Ophthalmic Mapping Acquisition Method (4261)",
                                                                      DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Retinal Thickness Definition (4262)</summary>
DicomUID  DicomUID::RetinalThicknessDefinition4262 = DicomUID{"1.2.840.10008.6.1.938",///NOLINT
                                                              "Retinal Thickness Definition (4262)",
                                                              DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Ophthalmic Thickness Map Value Type (4263)</summary>
DicomUID  DicomUID::OphthalmicThicknessMapValueType4263 = DicomUID{"1.2.840.10008.6.1.939",///NOLINT
                                                                   "Ophthalmic Thickness Map Value Type (4263)",
                                                                   DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Ophthalmic Map Purposes of Reference (4264)</summary>
DicomUID  DicomUID::OphthalmicMapPurposesOfReference4264 = DicomUID{"1.2.840.10008.6.1.940",///NOLINT
                                                                    "Ophthalmic Map Purposes of Reference (4264)",
                                                                    DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Ophthalmic Thickness Deviation Categories (4265)</summary>
DicomUID  DicomUID::OphthalmicThicknessDeviationCategories4265 = DicomUID{"1.2.840.10008.6.1.941",///NOLINT
                                                                          "Ophthalmic Thickness Deviation Categories (4265)",
                                                                          DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Ophthalmic Anatomic Structure Reference Point (4266)</summary>
DicomUID  DicomUID::OphthalmicAnatomicStructureReferencePoint4266 = DicomUID{"1.2.840.10008.6.1.942",///NOLINT
                                                                             "Ophthalmic Anatomic Structure Reference Point (4266)",
                                                                             DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Cardiac Synchronization Technique (3104)</summary>
DicomUID  DicomUID::CardiacSynchronizationTechnique3104 = DicomUID{"1.2.840.10008.6.1.943",///NOLINT
                                                                   "Cardiac Synchronization Technique (3104)",
                                                                   DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Staining Protocols (8130)</summary>
DicomUID  DicomUID::StainingProtocols8130 = DicomUID{"1.2.840.10008.6.1.944",///NOLINT
                                                     "Staining Protocols (8130)", DicomUidType::ContextGroupName,
                                                     false};

///<summary>Context Group Name: Size Specific Dose Estimation Method for CT (10023)</summary>
DicomUID  DicomUID::SizeSpecificDoseEstimationMethodForCT10023 = DicomUID{"1.2.840.10008.6.1.947",///NOLINT
                                                                          "Size Specific Dose Estimation Method for CT (10023)",
                                                                          DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Pathology Imaging Protocols (8131)</summary>
DicomUID  DicomUID::PathologyImagingProtocols8131 = DicomUID{"1.2.840.10008.6.1.948",///NOLINT
                                                             "Pathology Imaging Protocols (8131)",
                                                             DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Magnification Selection (8132)</summary>
DicomUID  DicomUID::MagnificationSelection8132 = DicomUID{"1.2.840.10008.6.1.949",///NOLINT
                                                          "Magnification Selection (8132)",
                                                          DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Tissue Selection (8133)</summary>
DicomUID  DicomUID::TissueSelection8133 = DicomUID{"1.2.840.10008.6.1.950",///NOLINT
                                                   "Tissue Selection (8133)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: General Region of Interest Measurement Modifiers (7464)</summary>
DicomUID  DicomUID::GeneralRegionOfInterestMeasurementModifiers7464 = DicomUID{"1.2.840.10008.6.1.951",///NOLINT
                                                                               "General Region of Interest Measurement Modifiers (7464)",
                                                                               DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Measurements Derived From Multiple ROI Measurements (7465)</summary>
DicomUID  DicomUID::MeasurementsDerivedFromMultipleROIMeasurements7465 = DicomUID{"1.2.840.10008.6.1.952",///NOLINT
                                                                                  "Measurements Derived From Multiple ROI Measurements (7465)",
                                                                                  DicomUidType::ContextGroupName,
                                                                                  false};

///<summary>Context Group Name: Surface Scan Acquisition Types (8201)</summary>
DicomUID  DicomUID::SurfaceScanAcquisitionTypes8201 = DicomUID{"1.2.840.10008.6.1.953",///NOLINT
                                                               "Surface Scan Acquisition Types (8201)",
                                                               DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Surface Scan Mode Types (8202)</summary>
DicomUID  DicomUID::SurfaceScanModeTypes8202 = DicomUID{"1.2.840.10008.6.1.954",///NOLINT
                                                        "Surface Scan Mode Types (8202)",
                                                        DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Surface Scan Registration Method Types (8203)</summary>
DicomUID  DicomUID::SurfaceScanRegistrationMethodTypes8203 = DicomUID{"1.2.840.10008.6.1.956",///NOLINT
                                                                      "Surface Scan Registration Method Types (8203)",
                                                                      DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Basic Cardiac Views (27)</summary>
DicomUID  DicomUID::BasicCardiacViews27 = DicomUID{"1.2.840.10008.6.1.957",///NOLINT
                                                   "Basic Cardiac Views (27)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: CT Reconstruction Algorithm (10033)</summary>
DicomUID  DicomUID::CTReconstructionAlgorithm10033 = DicomUID{"1.2.840.10008.6.1.958",///NOLINT
                                                              "CT Reconstruction Algorithm (10033)",
                                                              DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Detector Types (10030)</summary>
DicomUID  DicomUID::DetectorTypes10030 = DicomUID{"1.2.840.10008.6.1.959",///NOLINT
                                                  "Detector Types (10030)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: CR/DR Mechanical Configuration (10031)</summary>
DicomUID  DicomUID::CRDRMechanicalConfiguration10031 = DicomUID{"1.2.840.10008.6.1.960",///NOLINT
                                                                "CR/DR Mechanical Configuration (10031)",
                                                                DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Projection X-Ray Acquisition Device Types (10032)</summary>
DicomUID  DicomUID::ProjectionXRayAcquisitionDeviceTypes10032 = DicomUID{"1.2.840.10008.6.1.961",///NOLINT
                                                                         "Projection X-Ray Acquisition Device Types (10032)",
                                                                         DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Abstract Segmentation Types (7165)</summary>
DicomUID  DicomUID::AbstractSegmentationTypes7165 = DicomUID{"1.2.840.10008.6.1.962",///NOLINT
                                                             "Abstract Segmentation Types (7165)",
                                                             DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Common Tissue Segmentation Types (7166)</summary>
DicomUID  DicomUID::CommonTissueSegmentationTypes7166 = DicomUID{"1.2.840.10008.6.1.963",///NOLINT
                                                                 "Common Tissue Segmentation Types (7166)",
                                                                 DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Peripheral Nervous System Segmentation Types (7167)</summary>
DicomUID  DicomUID::PeripheralNervousSystemSegmentationTypes7167 = DicomUID{"1.2.840.10008.6.1.964",///NOLINT
                                                                            "Peripheral Nervous System Segmentation Types (7167)",
                                                                            DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Corneal Topography Mapping Units for Real World Value Mapping (4267)</summary>
DicomUID  DicomUID::CornealTopographyMappingUnitsForRealWorldValueMapping4267 = DicomUID{///NOLINT
        "1.2.840.10008.6.1.965",///NOLINT
        "Corneal Topography Mapping Units for Real World Value Mapping (4267)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Corneal Topography Map Value Type (4268)</summary>
DicomUID  DicomUID::CornealTopographyMapValueType4268 = DicomUID{"1.2.840.10008.6.1.966",///NOLINT
                                                                 "Corneal Topography Map Value Type (4268)",
                                                                 DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Brain Structures for Volumetric Measurements (7140)</summary>
DicomUID  DicomUID::BrainStructuresForVolumetricMeasurements7140 = DicomUID{"1.2.840.10008.6.1.967",///NOLINT
                                                                            "Brain Structures for Volumetric Measurements (7140)",
                                                                            DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: RT Dose Derivation (7220)</summary>
DicomUID  DicomUID::RTDoseDerivation7220 = DicomUID{"1.2.840.10008.6.1.968",///NOLINT
                                                    "RT Dose Derivation (7220)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: RT Dose Purpose of Reference (7221)</summary>
DicomUID  DicomUID::RTDosePurposeOfReference7221 = DicomUID{"1.2.840.10008.6.1.969",///NOLINT
                                                            "RT Dose Purpose of Reference (7221)",
                                                            DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Spectroscopy Purpose of Reference (7215)</summary>
DicomUID  DicomUID::SpectroscopyPurposeOfReference7215 = DicomUID{"1.2.840.10008.6.1.970",///NOLINT
                                                                  "Spectroscopy Purpose of Reference (7215)",
                                                                  DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Scheduled Processing Parameter Concept Codes for RT Treatment (9250)</summary>
DicomUID  DicomUID::ScheduledProcessingParameterConceptCodesForRTTreatment9250 = DicomUID{///NOLINT
        "1.2.840.10008.6.1.971",///NOLINT
        "Scheduled Processing Parameter Concept Codes for RT Treatment (9250)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Radiopharmaceutical Organ Dose Reference Authority (10040)</summary>
DicomUID  DicomUID::RadiopharmaceuticalOrganDoseReferenceAuthority10040 = DicomUID{"1.2.840.10008.6.1.972",///NOLINT
                                                                                   "Radiopharmaceutical Organ Dose Reference Authority (10040)",
                                                                                   DicomUidType::ContextGroupName,
                                                                                   false};

///<summary>Context Group Name: Source of Radioisotope Activity Information (10041)</summary>
DicomUID  DicomUID::SourceOfRadioisotopeActivityInformation10041 = DicomUID{"1.2.840.10008.6.1.973",///NOLINT
                                                                            "Source of Radioisotope Activity Information (10041)",
                                                                            DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Intravenous Extravasation Symptoms (10043)</summary>
DicomUID  DicomUID::IntravenousExtravasationSymptoms10043 = DicomUID{"1.2.840.10008.6.1.975",///NOLINT
                                                                     "Intravenous Extravasation Symptoms (10043)",
                                                                     DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Radiosensitive Organs (10044)</summary>
DicomUID  DicomUID::RadiosensitiveOrgans10044 = DicomUID{"1.2.840.10008.6.1.976",///NOLINT
                                                         "Radiosensitive Organs (10044)",
                                                         DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Radiopharmaceutical Patient State (10045)</summary>
DicomUID  DicomUID::RadiopharmaceuticalPatientState10045 = DicomUID{"1.2.840.10008.6.1.977",///NOLINT
                                                                    "Radiopharmaceutical Patient State (10045)",
                                                                    DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: GFR Measurements (10046)</summary>
DicomUID  DicomUID::GFRMeasurements10046 = DicomUID{"1.2.840.10008.6.1.978",///NOLINT
                                                    "GFR Measurements (10046)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: GFR Measurement Methods (10047)</summary>
DicomUID  DicomUID::GFRMeasurementMethods10047 = DicomUID{"1.2.840.10008.6.1.979",///NOLINT
                                                          "GFR Measurement Methods (10047)",
                                                          DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Visual Evaluation Methods (8300)</summary>
DicomUID  DicomUID::VisualEvaluationMethods8300 = DicomUID{"1.2.840.10008.6.1.980",///NOLINT
                                                           "Visual Evaluation Methods (8300)",
                                                           DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Test Pattern Codes (8301)</summary>
DicomUID  DicomUID::TestPatternCodes8301 = DicomUID{"1.2.840.10008.6.1.981",///NOLINT
                                                    "Test Pattern Codes (8301)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Measurement Pattern Codes (8302)</summary>
DicomUID  DicomUID::MeasurementPatternCodes8302 = DicomUID{"1.2.840.10008.6.1.982",///NOLINT
                                                           "Measurement Pattern Codes (8302)",
                                                           DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Display Device Type (8303)</summary>
DicomUID  DicomUID::DisplayDeviceType8303 = DicomUID{"1.2.840.10008.6.1.983",///NOLINT
                                                     "Display Device Type (8303)", DicomUidType::ContextGroupName,
                                                     false};

///<summary>Context Group Name: SUV Units (85)</summary>
DicomUID  DicomUID::SUVUnits85 = DicomUID{"1.2.840.10008.6.1.984",///NOLINT
                                          "SUV Units (85)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: T1 Measurement Methods (4100)</summary>
DicomUID  DicomUID::T1MeasurementMethods4100 = DicomUID{"1.2.840.10008.6.1.985",///NOLINT
                                                        "T1 Measurement Methods (4100)", DicomUidType::ContextGroupName,
                                                        false};

///<summary>Context Group Name: Tracer Kinetic Models (4101)</summary>
DicomUID  DicomUID::TracerKineticModels4101 = DicomUID{"1.2.840.10008.6.1.986",///NOLINT
                                                       "Tracer Kinetic Models (4101)", DicomUidType::ContextGroupName,
                                                       false};

///<summary>Context Group Name: Perfusion Measurement Methods (4102)</summary>
DicomUID  DicomUID::PerfusionMeasurementMethods4102 = DicomUID{"1.2.840.10008.6.1.987",///NOLINT
                                                               "Perfusion Measurement Methods (4102)",
                                                               DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Arterial Input Function Measurement Methods (4103)</summary>
DicomUID  DicomUID::ArterialInputFunctionMeasurementMethods4103 = DicomUID{"1.2.840.10008.6.1.988",///NOLINT
                                                                           "Arterial Input Function Measurement Methods (4103)",
                                                                           DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Bolus Arrival Time Derivation Methods (4104)</summary>
DicomUID  DicomUID::BolusArrivalTimeDerivationMethods4104 = DicomUID{"1.2.840.10008.6.1.989",///NOLINT
                                                                     "Bolus Arrival Time Derivation Methods (4104)",
                                                                     DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Perfusion Analysis Methods (4105)</summary>
DicomUID  DicomUID::PerfusionAnalysisMethods4105 = DicomUID{"1.2.840.10008.6.1.990",///NOLINT
                                                            "Perfusion Analysis Methods (4105)",
                                                            DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Quantitative Methods used for Perfusion And Tracer Kinetic Models (4106)</summary>
DicomUID  DicomUID::QuantitativeMethodsUsedForPerfusionAndTracerKineticModels4106 = DicomUID{///NOLINT
        "1.2.840.10008.6.1.991",///NOLINT
        "Quantitative Methods used for Perfusion And Tracer Kinetic Models (4106)", DicomUidType::ContextGroupName,
        false};

///<summary>Context Group Name: Tracer Kinetic Model Parameters (4107)</summary>
DicomUID  DicomUID::TracerKineticModelParameters4107 = DicomUID{"1.2.840.10008.6.1.992",///NOLINT
                                                                "Tracer Kinetic Model Parameters (4107)",
                                                                DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Perfusion Model Parameters (4108)</summary>
DicomUID  DicomUID::PerfusionModelParameters4108 = DicomUID{"1.2.840.10008.6.1.993",///NOLINT
                                                            "Perfusion Model Parameters (4108)",
                                                            DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Model-Independent Dynamic Contrast Analysis Parameters (4109)</summary>
DicomUID  DicomUID::ModelIndependentDynamicContrastAnalysisParameters4109 = DicomUID{"1.2.840.10008.6.1.994",///NOLINT
                                                                                     "Model-Independent Dynamic Contrast Analysis Parameters (4109)",
                                                                                     DicomUidType::ContextGroupName,
                                                                                     false};

///<summary>Context Group Name: Tracer Kinetic Modeling Covariates (4110)</summary>
DicomUID  DicomUID::TracerKineticModelingCovariates4110 = DicomUID{"1.2.840.10008.6.1.995",///NOLINT
                                                                   "Tracer Kinetic Modeling Covariates (4110)",
                                                                   DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Contrast Characteristics (4111)</summary>
DicomUID  DicomUID::ContrastCharacteristics4111 = DicomUID{"1.2.840.10008.6.1.996",///NOLINT
                                                           "Contrast Characteristics (4111)",
                                                           DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Measurement Report Document Titles (7021)</summary>
DicomUID  DicomUID::MeasurementReportDocumentTitles7021 = DicomUID{"1.2.840.10008.6.1.997",///NOLINT
                                                                   "Measurement Report Document Titles (7021)",
                                                                   DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Quantitative Diagnostic Imaging Procedures (100)</summary>
DicomUID  DicomUID::QuantitativeDiagnosticImagingProcedures100 = DicomUID{"1.2.840.10008.6.1.998",///NOLINT
                                                                          "Quantitative Diagnostic Imaging Procedures (100)",
                                                                          DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: PET Region of Interest Measurements (7466)</summary>
DicomUID  DicomUID::PETRegionOfInterestMeasurements7466 = DicomUID{"1.2.840.10008.6.1.999",///NOLINT
                                                                   "PET Region of Interest Measurements (7466)",
                                                                   DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Gray Level Co-occurrence Matrix Measurements (7467)</summary>
DicomUID  DicomUID::GrayLevelCoOccurrenceMatrixMeasurements7467 = DicomUID{"1.2.840.10008.6.1.1000",///NOLINT
                                                                           "Gray Level Co-occurrence Matrix Measurements (7467)",
                                                                           DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Texture Measurements (7468)</summary>
DicomUID  DicomUID::TextureMeasurements7468 = DicomUID{"1.2.840.10008.6.1.1001",///NOLINT
                                                       "Texture Measurements (7468)", DicomUidType::ContextGroupName,
                                                       false};

///<summary>Context Group Name: Time Point Types (6146)</summary>
DicomUID  DicomUID::TimePointTypes6146 = DicomUID{"1.2.840.10008.6.1.1002",///NOLINT
                                                  "Time Point Types (6146)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Generic Intensity and Size Measurements (7469)</summary>
DicomUID  DicomUID::GenericIntensityAndSizeMeasurements7469 = DicomUID{"1.2.840.10008.6.1.1003",///NOLINT
                                                                       "Generic Intensity and Size Measurements (7469)",
                                                                       DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Response Criteria (6147)</summary>
DicomUID  DicomUID::ResponseCriteria6147 = DicomUID{"1.2.840.10008.6.1.1004",///NOLINT
                                                    "Response Criteria (6147)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Fetal Biometry Anatomic Sites (12020)</summary>
DicomUID  DicomUID::FetalBiometryAnatomicSites12020 = DicomUID{"1.2.840.10008.6.1.1005",///NOLINT
                                                               "Fetal Biometry Anatomic Sites (12020)",
                                                               DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Fetal Long Bone Anatomic Sites (12021)</summary>
DicomUID  DicomUID::FetalLongBoneAnatomicSites12021 = DicomUID{"1.2.840.10008.6.1.1006",///NOLINT
                                                               "Fetal Long Bone Anatomic Sites (12021)",
                                                               DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Fetal Cranium Anatomic Sites (12022)</summary>
DicomUID  DicomUID::FetalCraniumAnatomicSites12022 = DicomUID{"1.2.840.10008.6.1.1007",///NOLINT
                                                              "Fetal Cranium Anatomic Sites (12022)",
                                                              DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Pelvis and Uterus Anatomic Sites (12023)</summary>
DicomUID  DicomUID::PelvisAndUterusAnatomicSites12023 = DicomUID{"1.2.840.10008.6.1.1008",///NOLINT
                                                                 "Pelvis and Uterus Anatomic Sites (12023)",
                                                                 DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Parametric Map Derivation Image Purpose of Reference (7222)</summary>
DicomUID  DicomUID::ParametricMapDerivationImagePurposeOfReference7222 = DicomUID{"1.2.840.10008.6.1.1009",///NOLINT
                                                                                  "Parametric Map Derivation Image Purpose of Reference (7222)",
                                                                                  DicomUidType::ContextGroupName,
                                                                                  false};

///<summary>Context Group Name: Physical Quantity Descriptors (9000)</summary>
DicomUID  DicomUID::PhysicalQuantityDescriptors9000 = DicomUID{"1.2.840.10008.6.1.1010",///NOLINT
                                                               "Physical Quantity Descriptors (9000)",
                                                               DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Lymph Node Anatomic Sites (7600)</summary>
DicomUID  DicomUID::LymphNodeAnatomicSites7600 = DicomUID{"1.2.840.10008.6.1.1011",///NOLINT
                                                          "Lymph Node Anatomic Sites (7600)",
                                                          DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Head and Neck Cancer Anatomic Sites (7601)</summary>
DicomUID  DicomUID::HeadAndNeckCancerAnatomicSites7601 = DicomUID{"1.2.840.10008.6.1.1012",///NOLINT
                                                                  "Head and Neck Cancer Anatomic Sites (7601)",
                                                                  DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Fiber Tracts In Brainstem (7701)</summary>
DicomUID  DicomUID::FiberTractsInBrainstem7701 = DicomUID{"1.2.840.10008.6.1.1013",///NOLINT
                                                          "Fiber Tracts In Brainstem (7701)",
                                                          DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Projection and Thalamic Fibers (7702)</summary>
DicomUID  DicomUID::ProjectionAndThalamicFibers7702 = DicomUID{"1.2.840.10008.6.1.1014",///NOLINT
                                                               "Projection and Thalamic Fibers (7702)",
                                                               DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Association Fibers (7703)</summary>
DicomUID  DicomUID::AssociationFibers7703 = DicomUID{"1.2.840.10008.6.1.1015",///NOLINT
                                                     "Association Fibers (7703)", DicomUidType::ContextGroupName,
                                                     false};

///<summary>Context Group Name: Limbic System Tracts (7704)</summary>
DicomUID  DicomUID::LimbicSystemTracts7704 = DicomUID{"1.2.840.10008.6.1.1016",///NOLINT
                                                      "Limbic System Tracts (7704)", DicomUidType::ContextGroupName,
                                                      false};

///<summary>Context Group Name: Commissural Fibers (7705)</summary>
DicomUID  DicomUID::CommissuralFibers7705 = DicomUID{"1.2.840.10008.6.1.1017",///NOLINT
                                                     "Commissural Fibers (7705)", DicomUidType::ContextGroupName,
                                                     false};

///<summary>Context Group Name: Cranial Nerves (7706)</summary>
DicomUID  DicomUID::CranialNerves7706 = DicomUID{"1.2.840.10008.6.1.1018",///NOLINT
                                                 "Cranial Nerves (7706)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Spinal Cord Fibers (7707)</summary>
DicomUID  DicomUID::SpinalCordFibers7707 = DicomUID{"1.2.840.10008.6.1.1019",///NOLINT
                                                    "Spinal Cord Fibers (7707)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Tractography Anatomic Sites (7710)</summary>
DicomUID  DicomUID::TractographyAnatomicSites7710 = DicomUID{"1.2.840.10008.6.1.1020",///NOLINT
                                                             "Tractography Anatomic Sites (7710)",
                                                             DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Primary Anatomic Structure for Intra-oral Radiography (Supernumerary Dentition - Designation of Teeth) (4025)</summary>
DicomUID  DicomUID::PrimaryAnatomicStructureForIntraOralRadiographySupernumeraryDentitionDesignationOfTeeth4025 = DicomUID{///NOLINT
        "1.2.840.10008.6.1.1021",///NOLINT
        "Primary Anatomic Structure for Intra-oral Radiography (Supernumerary Dentition - Designation of Teeth) (4025)",
        DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Primary Anatomic Structure for Intra-oral and Craniofacial Radiography - Teeth (4026)</summary>
DicomUID  DicomUID::PrimaryAnatomicStructureForIntraOralAndCraniofacialRadiographyTeeth4026 = DicomUID{///NOLINT
        "1.2.840.10008.6.1.1022",///NOLINT
        "Primary Anatomic Structure for Intra-oral and Craniofacial Radiography - Teeth (4026)",
        DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: IEC61217 Device Position Parameters (9401)</summary>
DicomUID  DicomUID::IEC61217DevicePositionParameters9401 = DicomUID{"1.2.840.10008.6.1.1023",///NOLINT
                                                                    "IEC61217 Device Position Parameters (9401)",
                                                                    DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: IEC61217 Gantry Position Parameters (9402)</summary>
DicomUID  DicomUID::IEC61217GantryPositionParameters9402 = DicomUID{"1.2.840.10008.6.1.1024",///NOLINT
                                                                    "IEC61217 Gantry Position Parameters (9402)",
                                                                    DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: IEC61217 Patient Support Position Parameters (9403)</summary>
DicomUID  DicomUID::IEC61217PatientSupportPositionParameters9403 = DicomUID{"1.2.840.10008.6.1.1025",///NOLINT
                                                                            "IEC61217 Patient Support Position Parameters (9403)",
                                                                            DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Actionable Finding Classification (7035)</summary>
DicomUID  DicomUID::ActionableFindingClassification7035 = DicomUID{"1.2.840.10008.6.1.1026",///NOLINT
                                                                   "Actionable Finding Classification (7035)",
                                                                   DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Image Quality Assessment (7036)</summary>
DicomUID  DicomUID::ImageQualityAssessment7036 = DicomUID{"1.2.840.10008.6.1.1027",///NOLINT
                                                          "Image Quality Assessment (7036)",
                                                          DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Summary Radiation Exposure Quantities (10050)</summary>
DicomUID  DicomUID::SummaryRadiationExposureQuantities10050 = DicomUID{"1.2.840.10008.6.1.1028",///NOLINT
                                                                       "Summary Radiation Exposure Quantities (10050)",
                                                                       DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Wide Field Ophthalmic Photography Transformation Method (4245)</summary>
DicomUID  DicomUID::WideFieldOphthalmicPhotographyTransformationMethod4245 = DicomUID{"1.2.840.10008.6.1.1029",///NOLINT
                                                                                      "Wide Field Ophthalmic Photography Transformation Method (4245)",
                                                                                      DicomUidType::ContextGroupName,
                                                                                      false};

///<summary>Context Group Name: PET Units (84)</summary>
DicomUID  DicomUID::PETUnits84 = DicomUID{"1.2.840.10008.6.1.1030",///NOLINT
                                          "PET Units (84)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Implant Materials (7300)</summary>
DicomUID  DicomUID::ImplantMaterials7300 = DicomUID{"1.2.840.10008.6.1.1031",///NOLINT
                                                    "Implant Materials (7300)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Intervention Types (7301)</summary>
DicomUID  DicomUID::InterventionTypes7301 = DicomUID{"1.2.840.10008.6.1.1032",///NOLINT
                                                     "Intervention Types (7301)", DicomUidType::ContextGroupName,
                                                     false};

///<summary>Context Group Name: Implant Templates View Orientations (7302)</summary>
DicomUID  DicomUID::ImplantTemplatesViewOrientations7302 = DicomUID{"1.2.840.10008.6.1.1033",///NOLINT
                                                                    "Implant Templates View Orientations (7302)",
                                                                    DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Implant Templates Modified View Orientations (7303)</summary>
DicomUID  DicomUID::ImplantTemplatesModifiedViewOrientations7303 = DicomUID{"1.2.840.10008.6.1.1034",///NOLINT
                                                                            "Implant Templates Modified View Orientations (7303)",
                                                                            DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Implant Target Anatomy (7304)</summary>
DicomUID  DicomUID::ImplantTargetAnatomy7304 = DicomUID{"1.2.840.10008.6.1.1035",///NOLINT
                                                        "Implant Target Anatomy (7304)", DicomUidType::ContextGroupName,
                                                        false};

///<summary>Context Group Name: Implant Planning Landmarks (7305)</summary>
DicomUID  DicomUID::ImplantPlanningLandmarks7305 = DicomUID{"1.2.840.10008.6.1.1036",///NOLINT
                                                            "Implant Planning Landmarks (7305)",
                                                            DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Human Hip Implant Planning Landmarks (7306)</summary>
DicomUID  DicomUID::HumanHipImplantPlanningLandmarks7306 = DicomUID{"1.2.840.10008.6.1.1037",///NOLINT
                                                                    "Human Hip Implant Planning Landmarks (7306)",
                                                                    DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Implant Component Types (7307)</summary>
DicomUID  DicomUID::ImplantComponentTypes7307 = DicomUID{"1.2.840.10008.6.1.1038",///NOLINT
                                                         "Implant Component Types (7307)",
                                                         DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Human Hip Implant Component Types (7308)</summary>
DicomUID  DicomUID::HumanHipImplantComponentTypes7308 = DicomUID{"1.2.840.10008.6.1.1039",///NOLINT
                                                                 "Human Hip Implant Component Types (7308)",
                                                                 DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Human Trauma Implant Component Types (7309)</summary>
DicomUID  DicomUID::HumanTraumaImplantComponentTypes7309 = DicomUID{"1.2.840.10008.6.1.1040",///NOLINT
                                                                    "Human Trauma Implant Component Types (7309)",
                                                                    DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Implant Fixation Method (7310)</summary>
DicomUID  DicomUID::ImplantFixationMethod7310 = DicomUID{"1.2.840.10008.6.1.1041",///NOLINT
                                                         "Implant Fixation Method (7310)",
                                                         DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Device Participating Roles (7445)</summary>
DicomUID  DicomUID::DeviceParticipatingRoles7445 = DicomUID{"1.2.840.10008.6.1.1042",///NOLINT
                                                            "Device Participating Roles (7445)",
                                                            DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Container Types (8101)</summary>
DicomUID  DicomUID::ContainerTypes8101 = DicomUID{"1.2.840.10008.6.1.1043",///NOLINT
                                                  "Container Types (8101)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Container Component Types (8102)</summary>
DicomUID  DicomUID::ContainerComponentTypes8102 = DicomUID{"1.2.840.10008.6.1.1044",///NOLINT
                                                           "Container Component Types (8102)",
                                                           DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Anatomic Pathology Specimen Types (8103)</summary>
DicomUID  DicomUID::AnatomicPathologySpecimenTypes8103 = DicomUID{"1.2.840.10008.6.1.1045",///NOLINT
                                                                  "Anatomic Pathology Specimen Types (8103)",
                                                                  DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Breast Tissue Specimen Types (8104)</summary>
DicomUID  DicomUID::BreastTissueSpecimenTypes8104 = DicomUID{"1.2.840.10008.6.1.1046",///NOLINT
                                                             "Breast Tissue Specimen Types (8104)",
                                                             DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Specimen Collection Procedure (8109)</summary>
DicomUID  DicomUID::SpecimenCollectionProcedure8109 = DicomUID{"1.2.840.10008.6.1.1047",///NOLINT
                                                               "Specimen Collection Procedure (8109)",
                                                               DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Specimen Sampling Procedure (8110)</summary>
DicomUID  DicomUID::SpecimenSamplingProcedure8110 = DicomUID{"1.2.840.10008.6.1.1048",///NOLINT
                                                             "Specimen Sampling Procedure (8110)",
                                                             DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Specimen Preparation Procedure (8111)</summary>
DicomUID  DicomUID::SpecimenPreparationProcedure8111 = DicomUID{"1.2.840.10008.6.1.1049",///NOLINT
                                                                "Specimen Preparation Procedure (8111)",
                                                                DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Specimen Stains (8112)</summary>
DicomUID  DicomUID::SpecimenStains8112 = DicomUID{"1.2.840.10008.6.1.1050",///NOLINT
                                                  "Specimen Stains (8112)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Specimen Preparation Steps (8113)</summary>
DicomUID  DicomUID::SpecimenPreparationSteps8113 = DicomUID{"1.2.840.10008.6.1.1051",///NOLINT
                                                            "Specimen Preparation Steps (8113)",
                                                            DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Specimen Fixatives (8114)</summary>
DicomUID  DicomUID::SpecimenFixatives8114 = DicomUID{"1.2.840.10008.6.1.1052",///NOLINT
                                                     "Specimen Fixatives (8114)", DicomUidType::ContextGroupName,
                                                     false};

///<summary>Context Group Name: Specimen Embedding Media (8115)</summary>
DicomUID  DicomUID::SpecimenEmbeddingMedia8115 = DicomUID{"1.2.840.10008.6.1.1053",///NOLINT
                                                          "Specimen Embedding Media (8115)",
                                                          DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Source of Projection X-Ray Dose Information (10020)</summary>
DicomUID  DicomUID::SourceOfProjectionXRayDoseInformation10020 = DicomUID{"1.2.840.10008.6.1.1054",///NOLINT
                                                                          "Source of Projection X-Ray Dose Information (10020)",
                                                                          DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Source of CT Dose Information (10021)</summary>
DicomUID  DicomUID::SourceOfCTDoseInformation10021 = DicomUID{"1.2.840.10008.6.1.1055",///NOLINT
                                                              "Source of CT Dose Information (10021)",
                                                              DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Radiation Dose Reference Points (10025)</summary>
DicomUID  DicomUID::RadiationDoseReferencePoints10025 = DicomUID{"1.2.840.10008.6.1.1056",///NOLINT
                                                                 "Radiation Dose Reference Points (10025)",
                                                                 DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Volumetric View Description (501)</summary>
DicomUID  DicomUID::VolumetricViewDescription501 = DicomUID{"1.2.840.10008.6.1.1057",///NOLINT
                                                            "Volumetric View Description (501)",
                                                            DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Volumetric View Modifier (502)</summary>
DicomUID  DicomUID::VolumetricViewModifier502 = DicomUID{"1.2.840.10008.6.1.1058",///NOLINT
                                                         "Volumetric View Modifier (502)",
                                                         DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Diffusion Acquisition Value Types (7260)</summary>
DicomUID  DicomUID::DiffusionAcquisitionValueTypes7260 = DicomUID{"1.2.840.10008.6.1.1059",///NOLINT
                                                                  "Diffusion Acquisition Value Types (7260)",
                                                                  DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Diffusion Model Value Types (7261)</summary>
DicomUID  DicomUID::DiffusionModelValueTypes7261 = DicomUID{"1.2.840.10008.6.1.1060",///NOLINT
                                                            "Diffusion Model Value Types (7261)",
                                                            DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Diffusion Tractography Algorithm Families (7262)</summary>
DicomUID  DicomUID::DiffusionTractographyAlgorithmFamilies7262 = DicomUID{"1.2.840.10008.6.1.1061",///NOLINT
                                                                          "Diffusion Tractography Algorithm Families (7262)",
                                                                          DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Diffusion Tractography Measurement Types (7263)</summary>
DicomUID  DicomUID::DiffusionTractographyMeasurementTypes7263 = DicomUID{"1.2.840.10008.6.1.1062",///NOLINT
                                                                         "Diffusion Tractography Measurement Types (7263)",
                                                                         DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Research Animal Source Registries (7490)</summary>
DicomUID  DicomUID::ResearchAnimalSourceRegistries7490 = DicomUID{"1.2.840.10008.6.1.1063",///NOLINT
                                                                  "Research Animal Source Registries (7490)",
                                                                  DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Yes-No Only (231)</summary>
DicomUID  DicomUID::YesNoOnly231 = DicomUID{"1.2.840.10008.6.1.1064",///NOLINT
                                            "Yes-No Only (231)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Biosafety Levels (601)</summary>
DicomUID  DicomUID::BiosafetyLevels601 = DicomUID{"1.2.840.10008.6.1.1065",///NOLINT
                                                  "Biosafety Levels (601)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Biosafety Control Reasons (602)</summary>
DicomUID  DicomUID::BiosafetyControlReasons602 = DicomUID{"1.2.840.10008.6.1.1066",///NOLINT
                                                          "Biosafety Control Reasons (602)",
                                                          DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Sex - Male Female or Both (7457)</summary>
DicomUID  DicomUID::SexMaleFemaleOrBoth7457 = DicomUID{"1.2.840.10008.6.1.1067",///NOLINT
                                                       "Sex - Male Female or Both (7457)",
                                                       DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Animal Room Types (603)</summary>
DicomUID  DicomUID::AnimalRoomTypes603 = DicomUID{"1.2.840.10008.6.1.1068",///NOLINT
                                                  "Animal Room Types (603)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Device Reuse (604)</summary>
DicomUID  DicomUID::DeviceReuse604 = DicomUID{"1.2.840.10008.6.1.1069",///NOLINT
                                              "Device Reuse (604)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Animal Bedding Material (605)</summary>
DicomUID  DicomUID::AnimalBeddingMaterial605 = DicomUID{"1.2.840.10008.6.1.1070",///NOLINT
                                                        "Animal Bedding Material (605)", DicomUidType::ContextGroupName,
                                                        false};

///<summary>Context Group Name: Animal Shelter Types (606)</summary>
DicomUID  DicomUID::AnimalShelterTypes606 = DicomUID{"1.2.840.10008.6.1.1071",///NOLINT
                                                     "Animal Shelter Types (606)", DicomUidType::ContextGroupName,
                                                     false};

///<summary>Context Group Name: Animal Feed Types (607)</summary>
DicomUID  DicomUID::AnimalFeedTypes607 = DicomUID{"1.2.840.10008.6.1.1072",///NOLINT
                                                  "Animal Feed Types (607)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Animal Feed Sources (608)</summary>
DicomUID  DicomUID::AnimalFeedSources608 = DicomUID{"1.2.840.10008.6.1.1073",///NOLINT
                                                    "Animal Feed Sources (608)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Animal Feeding Methods (609)</summary>
DicomUID  DicomUID::AnimalFeedingMethods609 = DicomUID{"1.2.840.10008.6.1.1074",///NOLINT
                                                       "Animal Feeding Methods (609)", DicomUidType::ContextGroupName,
                                                       false};

///<summary>Context Group Name: Water Types (610)</summary>
DicomUID  DicomUID::WaterTypes610 = DicomUID{"1.2.840.10008.6.1.1075",///NOLINT
                                             "Water Types (610)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Anesthesia Category Code Type for Small Animal Anesthesia (611)</summary>
DicomUID  DicomUID::AnesthesiaCategoryCodeTypeForSmallAnimalAnesthesia611 = DicomUID{"1.2.840.10008.6.1.1076",///NOLINT
                                                                                     "Anesthesia Category Code Type for Small Animal Anesthesia (611)",
                                                                                     DicomUidType::ContextGroupName,
                                                                                     false};

///<summary>Context Group Name: Anesthesia Category Code Type from Anesthesia Quality Initiative (AQI) (612)</summary>
DicomUID  DicomUID::AnesthesiaCategoryCodeTypeFromAnesthesiaQualityInitiativeAQI612 = DicomUID{///NOLINT
        "1.2.840.10008.6.1.1077",///NOLINT
        "Anesthesia Category Code Type from Anesthesia Quality Initiative (AQI) (612)", DicomUidType::ContextGroupName,
        false};

///<summary>Context Group Name: Anesthesia Induction Code Type for Small Animal Anesthesia (613)</summary>
DicomUID  DicomUID::AnesthesiaInductionCodeTypeForSmallAnimalAnesthesia613 = DicomUID{"1.2.840.10008.6.1.1078",///NOLINT
                                                                                      "Anesthesia Induction Code Type for Small Animal Anesthesia (613)",
                                                                                      DicomUidType::ContextGroupName,
                                                                                      false};

///<summary>Context Group Name: Anesthesia Induction Code Type from Anesthesia Quality Initiative (AQI) (614)</summary>
DicomUID  DicomUID::AnesthesiaInductionCodeTypeFromAnesthesiaQualityInitiativeAQI614 = DicomUID{///NOLINT
        "1.2.840.10008.6.1.1079",///NOLINT
        "Anesthesia Induction Code Type from Anesthesia Quality Initiative (AQI) (614)", DicomUidType::ContextGroupName,
        false};

///<summary>Context Group Name: Anesthesia Maintenance Code Type for Small Animal Anesthesia (615)</summary>
DicomUID  DicomUID::AnesthesiaMaintenanceCodeTypeForSmallAnimalAnesthesia615 = DicomUID{///NOLINT
        "1.2.840.10008.6.1.1080",///NOLINT
        "Anesthesia Maintenance Code Type for Small Animal Anesthesia (615)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Anesthesia Maintenance Code Type from Anesthesia Quality Initiative (AQI) (616)</summary>
DicomUID  DicomUID::AnesthesiaMaintenanceCodeTypeFromAnesthesiaQualityInitiativeAQI616 = DicomUID{///NOLINT
        "1.2.840.10008.6.1.1081",///NOLINT
        "Anesthesia Maintenance Code Type from Anesthesia Quality Initiative (AQI) (616)",
        DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Airway Management Method Code Type for Small Animal Anesthesia (617)</summary>
DicomUID  DicomUID::AirwayManagementMethodCodeTypeForSmallAnimalAnesthesia617 = DicomUID{///NOLINT
        "1.2.840.10008.6.1.1082",///NOLINT
        "Airway Management Method Code Type for Small Animal Anesthesia (617)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Airway Management Method Code Type from Anesthesia Quality Initiative (AQI) (618)</summary>
DicomUID  DicomUID::AirwayManagementMethodCodeTypeFromAnesthesiaQualityInitiativeAQI618 = DicomUID{///NOLINT
        "1.2.840.10008.6.1.1083",///NOLINT
        "Airway Management Method Code Type from Anesthesia Quality Initiative (AQI) (618)",
        DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Airway Management Sub-Method Code Type for Small Animal Anesthesia (619)</summary>
DicomUID  DicomUID::AirwayManagementSubMethodCodeTypeForSmallAnimalAnesthesia619 = DicomUID{///NOLINT
        "1.2.840.10008.6.1.1084",///NOLINT
        "Airway Management Sub-Method Code Type for Small Animal Anesthesia (619)", DicomUidType::ContextGroupName,
        false};

///<summary>Context Group Name: Airway Management Sub-Method Code Type from Anesthesia Quality Initiative (AQI) (620)</summary>
DicomUID  DicomUID::AirwayManagementSubMethodCodeTypeFromAnesthesiaQualityInitiativeAQI620 = DicomUID{///NOLINT
        "1.2.840.10008.6.1.1085",///NOLINT
        "Airway Management Sub-Method Code Type from Anesthesia Quality Initiative (AQI) (620)",
        DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Type of Medication for Small Animal Anesthesia (621)</summary>
DicomUID  DicomUID::TypeOfMedicationForSmallAnimalAnesthesia621 = DicomUID{"1.2.840.10008.6.1.1086",///NOLINT
                                                                           "Type of Medication for Small Animal Anesthesia (621)",
                                                                           DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Medication Type Code Type from Anesthesia Quality Initiative (AQI) (622)</summary>
DicomUID  DicomUID::MedicationTypeCodeTypeFromAnesthesiaQualityInitiativeAQI622 = DicomUID{///NOLINT
        "1.2.840.10008.6.1.1087",///NOLINT
        "Medication Type Code Type from Anesthesia Quality Initiative (AQI) (622)", DicomUidType::ContextGroupName,
        false};

///<summary>Context Group Name: Medication for Small Animal Anesthesia (623)</summary>
DicomUID  DicomUID::MedicationForSmallAnimalAnesthesia623 = DicomUID{"1.2.840.10008.6.1.1088",///NOLINT
                                                                     "Medication for Small Animal Anesthesia (623)",
                                                                     DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Inhalational Anesthesia Agents for Small Animal Anesthesia (624)</summary>
DicomUID  DicomUID::InhalationalAnesthesiaAgentsForSmallAnimalAnesthesia624 = DicomUID{///NOLINT
        "1.2.840.10008.6.1.1089",///NOLINT
        "Inhalational Anesthesia Agents for Small Animal Anesthesia (624)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Injectable Anesthesia Agents for Small Animal Anesthesia (625)</summary>
DicomUID  DicomUID::InjectableAnesthesiaAgentsForSmallAnimalAnesthesia625 = DicomUID{"1.2.840.10008.6.1.1090",///NOLINT
                                                                                     "Injectable Anesthesia Agents for Small Animal Anesthesia (625)",
                                                                                     DicomUidType::ContextGroupName,
                                                                                     false};

///<summary>Context Group Name: Premedication Agents for Small Animal Anesthesia (626)</summary>
DicomUID  DicomUID::PremedicationAgentsForSmallAnimalAnesthesia626 = DicomUID{"1.2.840.10008.6.1.1091",///NOLINT
                                                                              "Premedication Agents for Small Animal Anesthesia (626)",
                                                                              DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Neuromuscular Blocking Agents for Small Animal Anesthesia (627)</summary>
DicomUID  DicomUID::NeuromuscularBlockingAgentsForSmallAnimalAnesthesia627 = DicomUID{"1.2.840.10008.6.1.1092",///NOLINT
                                                                                      "Neuromuscular Blocking Agents for Small Animal Anesthesia (627)",
                                                                                      DicomUidType::ContextGroupName,
                                                                                      false};

///<summary>Context Group Name: Ancillary Medications for Small Animal Anesthesia (628)</summary>
DicomUID  DicomUID::AncillaryMedicationsForSmallAnimalAnesthesia628 = DicomUID{"1.2.840.10008.6.1.1093",///NOLINT
                                                                               "Ancillary Medications for Small Animal Anesthesia (628)",
                                                                               DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Carrier Gases for Small Animal Anesthesia (629)</summary>
DicomUID  DicomUID::CarrierGasesForSmallAnimalAnesthesia629 = DicomUID{"1.2.840.10008.6.1.1094",///NOLINT
                                                                       "Carrier Gases for Small Animal Anesthesia (629)",
                                                                       DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Local Anesthetics for Small Animal Anesthesia (630)</summary>
DicomUID  DicomUID::LocalAnestheticsForSmallAnimalAnesthesia630 = DicomUID{"1.2.840.10008.6.1.1095",///NOLINT
                                                                           "Local Anesthetics for Small Animal Anesthesia (630)",
                                                                           DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Phase of Procedure Requiring Anesthesia (631)</summary>
DicomUID  DicomUID::PhaseOfProcedureRequiringAnesthesia631 = DicomUID{"1.2.840.10008.6.1.1096",///NOLINT
                                                                      "Phase of Procedure Requiring Anesthesia (631)",
                                                                      DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Phase of Surgical Procedure Requiring Anesthesia (632)</summary>
DicomUID  DicomUID::PhaseOfSurgicalProcedureRequiringAnesthesia632 = DicomUID{"1.2.840.10008.6.1.1097",///NOLINT
                                                                              "Phase of Surgical Procedure Requiring Anesthesia (632)",
                                                                              DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Phase of Imaging Procedure Requiring Anesthesia (633)</summary>
DicomUID  DicomUID::PhaseOfImagingProcedureRequiringAnesthesia633 = DicomUID{"1.2.840.10008.6.1.1098",///NOLINT
                                                                             "Phase of Imaging Procedure Requiring Anesthesia (633)",
                                                                             DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Phase of Animal Handling (634)</summary>
DicomUID  DicomUID::PhaseOfAnimalHandling634 = DicomUID{"1.2.840.10008.6.1.1099",///NOLINT
                                                        "Phase of Animal Handling (634)",
                                                        DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Heating Method (635)</summary>
DicomUID  DicomUID::HeatingMethod635 = DicomUID{"1.2.840.10008.6.1.1100",///NOLINT
                                                "Heating Method (635)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Temperature Sensor Device Component Type for Small Animal Procedures (636)</summary>
DicomUID  DicomUID::TemperatureSensorDeviceComponentTypeForSmallAnimalProcedures636 = DicomUID{///NOLINT
        "1.2.840.10008.6.1.1101",///NOLINT
        "Temperature Sensor Device Component Type for Small Animal Procedures (636)", DicomUidType::ContextGroupName,
        false};

///<summary>Context Group Name: Exogenous Substance Types (637)</summary>
DicomUID  DicomUID::ExogenousSubstanceTypes637 = DicomUID{"1.2.840.10008.6.1.1102",///NOLINT
                                                          "Exogenous Substance Types (637)",
                                                          DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Exogenous Substance (638)</summary>
DicomUID  DicomUID::ExogenousSubstance638 = DicomUID{"1.2.840.10008.6.1.1103",///NOLINT
                                                     "Exogenous Substance (638)", DicomUidType::ContextGroupName,
                                                     false};

///<summary>Context Group Name: Tumor Graft Histologic Type (639)</summary>
DicomUID  DicomUID::TumorGraftHistologicType639 = DicomUID{"1.2.840.10008.6.1.1104",///NOLINT
                                                           "Tumor Graft Histologic Type (639)",
                                                           DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Fibrils (640)</summary>
DicomUID  DicomUID::Fibrils640 = DicomUID{"1.2.840.10008.6.1.1105",///NOLINT
                                          "Fibrils (640)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Viruses (641)</summary>
DicomUID  DicomUID::Viruses641 = DicomUID{"1.2.840.10008.6.1.1106",///NOLINT
                                          "Viruses (641)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Cytokines (642)</summary>
DicomUID  DicomUID::Cytokines642 = DicomUID{"1.2.840.10008.6.1.1107",///NOLINT
                                            "Cytokines (642)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Toxins (643)</summary>
DicomUID  DicomUID::Toxins643 = DicomUID{"1.2.840.10008.6.1.1108",///NOLINT
                                         "Toxins (643)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Exogenous Substance Administration Sites (644)</summary>
DicomUID  DicomUID::ExogenousSubstanceAdministrationSites644 = DicomUID{"1.2.840.10008.6.1.1109",///NOLINT
                                                                        "Exogenous Substance Administration Sites (644)",
                                                                        DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Exogenous Substance Tissue of Origin (645)</summary>
DicomUID  DicomUID::ExogenousSubstanceTissueOfOrigin645 = DicomUID{"1.2.840.10008.6.1.1110",///NOLINT
                                                                   "Exogenous Substance Tissue of Origin (645)",
                                                                   DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Preclinical Small Animal Imaging Procedures (646)</summary>
DicomUID  DicomUID::PreclinicalSmallAnimalImagingProcedures646 = DicomUID{"1.2.840.10008.6.1.1111",///NOLINT
                                                                          "Preclinical Small Animal Imaging Procedures (646)",
                                                                          DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Position Reference Indicator for Frame of Reference (647)</summary>
DicomUID  DicomUID::PositionReferenceIndicatorForFrameOfReference647 = DicomUID{"1.2.840.10008.6.1.1112",///NOLINT
                                                                                "Position Reference Indicator for Frame of Reference (647)",
                                                                                DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Present-Absent Only (241)</summary>
DicomUID  DicomUID::PresentAbsentOnly241 = DicomUID{"1.2.840.10008.6.1.1113",///NOLINT
                                                    "Present-Absent Only (241)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Water Equivalent Diameter Method (10024)</summary>
DicomUID  DicomUID::WaterEquivalentDiameterMethod10024 = DicomUID{"1.2.840.10008.6.1.1114",///NOLINT
                                                                  "Water Equivalent Diameter Method (10024)",
                                                                  DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Radiotherapy Purposes of Reference (7022)</summary>
DicomUID  DicomUID::RadiotherapyPurposesOfReference7022 = DicomUID{"1.2.840.10008.6.1.1115",///NOLINT
                                                                   "Radiotherapy Purposes of Reference (7022)",
                                                                   DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Content Assessment Types (701)</summary>
DicomUID  DicomUID::ContentAssessmentTypes701 = DicomUID{"1.2.840.10008.6.1.1116",///NOLINT
                                                         "Content Assessment Types (701)",
                                                         DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: RT Content Assessment Types (702)</summary>
DicomUID  DicomUID::RTContentAssessmentTypes702 = DicomUID{"1.2.840.10008.6.1.1117",///NOLINT
                                                           "RT Content Assessment Types (702)",
                                                           DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Basis of Assessment (703)</summary>
DicomUID  DicomUID::BasisOfAssessment703 = DicomUID{"1.2.840.10008.6.1.1118",///NOLINT
                                                    "Basis of Assessment (703)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Reader Specialty (7449)</summary>
DicomUID  DicomUID::ReaderSpecialty7449 = DicomUID{"1.2.840.10008.6.1.1119",///NOLINT
                                                   "Reader Specialty (7449)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Requested Report Types (9233)</summary>
DicomUID  DicomUID::RequestedReportTypes9233 = DicomUID{"1.2.840.10008.6.1.1120",///NOLINT
                                                        "Requested Report Types (9233)", DicomUidType::ContextGroupName,
                                                        false};

///<summary>Context Group Name: CT Transverse Plane Reference Basis (1000)</summary>
DicomUID  DicomUID::CTTransversePlaneReferenceBasis1000 = DicomUID{"1.2.840.10008.6.1.1121",///NOLINT
                                                                   "CT Transverse Plane Reference Basis (1000)",
                                                                   DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Anatomical Reference Basis (1001)</summary>
DicomUID  DicomUID::AnatomicalReferenceBasis1001 = DicomUID{"1.2.840.10008.6.1.1122",///NOLINT
                                                            "Anatomical Reference Basis (1001)",
                                                            DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Anatomical Reference Basis - Head (1002)</summary>
DicomUID  DicomUID::AnatomicalReferenceBasisHead1002 = DicomUID{"1.2.840.10008.6.1.1123",///NOLINT
                                                                "Anatomical Reference Basis - Head (1002)",
                                                                DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Anatomical Reference Basis - Spine (1003)</summary>
DicomUID  DicomUID::AnatomicalReferenceBasisSpine1003 = DicomUID{"1.2.840.10008.6.1.1124",///NOLINT
                                                                 "Anatomical Reference Basis - Spine (1003)",
                                                                 DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Anatomical Reference Basis - Chest (1004)</summary>
DicomUID  DicomUID::AnatomicalReferenceBasisChest1004 = DicomUID{"1.2.840.10008.6.1.1125",///NOLINT
                                                                 "Anatomical Reference Basis - Chest (1004)",
                                                                 DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Anatomical Reference Basis - Abdomen/Pelvis (1005)</summary>
DicomUID  DicomUID::AnatomicalReferenceBasisAbdomenPelvis1005 = DicomUID{"1.2.840.10008.6.1.1126",///NOLINT
                                                                         "Anatomical Reference Basis - Abdomen/Pelvis (1005)",
                                                                         DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Anatomical Reference Basis - Extremities (1006)</summary>
DicomUID  DicomUID::AnatomicalReferenceBasisExtremities1006 = DicomUID{"1.2.840.10008.6.1.1127",///NOLINT
                                                                       "Anatomical Reference Basis - Extremities (1006)",
                                                                       DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Reference Geometry - Planes (1010)</summary>
DicomUID  DicomUID::ReferenceGeometryPlanes1010 = DicomUID{"1.2.840.10008.6.1.1128",///NOLINT
                                                           "Reference Geometry - Planes (1010)",
                                                           DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Reference Geometry - Points (1011)</summary>
DicomUID  DicomUID::ReferenceGeometryPoints1011 = DicomUID{"1.2.840.10008.6.1.1129",///NOLINT
                                                           "Reference Geometry - Points (1011)",
                                                           DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Patient Alignment Methods (1015)</summary>
DicomUID  DicomUID::PatientAlignmentMethods1015 = DicomUID{"1.2.840.10008.6.1.1130",///NOLINT
                                                           "Patient Alignment Methods (1015)",
                                                           DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Contraindications For CT Imaging (1200)</summary>
DicomUID  DicomUID::ContraindicationsForCTImaging1200 = DicomUID{"1.2.840.10008.6.1.1131",///NOLINT
                                                                 "Contraindications For CT Imaging (1200)",
                                                                 DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Fiducials Categories (7110)</summary>
DicomUID  DicomUID::FiducialsCategories7110 = DicomUID{"1.2.840.10008.6.1.1132",///NOLINT
                                                       "Fiducials Categories (7110)", DicomUidType::ContextGroupName,
                                                       false};

///<summary>Context Group Name: Fiducials (7111)</summary>
DicomUID  DicomUID::Fiducials7111 = DicomUID{"1.2.840.10008.6.1.1133",///NOLINT
                                             "Fiducials (7111)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Non-Image Source Instance Purposes of Reference (7013)</summary>
DicomUID  DicomUID::NonImageSourceInstancePurposesOfReference7013 = DicomUID{"1.2.840.10008.6.1.1134",///NOLINT
                                                                             "Non-Image Source Instance Purposes of Reference (7013)",
                                                                             DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: RT Process Output (7023)</summary>
DicomUID  DicomUID::RTProcessOutput7023 = DicomUID{"1.2.840.10008.6.1.1135",///NOLINT
                                                   "RT Process Output (7023)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: RT Process Input (7024)</summary>
DicomUID  DicomUID::RTProcessInput7024 = DicomUID{"1.2.840.10008.6.1.1136",///NOLINT
                                                  "RT Process Input (7024)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: RT Process Input Used (7025)</summary>
DicomUID  DicomUID::RTProcessInputUsed7025 = DicomUID{"1.2.840.10008.6.1.1137",///NOLINT
                                                      "RT Process Input Used (7025)", DicomUidType::ContextGroupName,
                                                      false};

///<summary>Context Group Name: Prostate Anatomy (6300)</summary>
DicomUID  DicomUID::ProstateAnatomy6300 = DicomUID{"1.2.840.10008.6.1.1138",///NOLINT
                                                   "Prostate Anatomy (6300)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Prostate Sector Anatomy from PI-RADS v2 (6301)</summary>
DicomUID  DicomUID::ProstateSectorAnatomyFromPIRADSV26301 = DicomUID{"1.2.840.10008.6.1.1139",///NOLINT
                                                                     "Prostate Sector Anatomy from PI-RADS v2 (6301)",
                                                                     DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Prostate Sector Anatomy from European Concensus 16 Sector (Minimal) Model (6302)</summary>
DicomUID  DicomUID::ProstateSectorAnatomyFromEuropeanConcensus16SectorMinimalModel6302 = DicomUID{///NOLINT
        "1.2.840.10008.6.1.1140",///NOLINT
        "Prostate Sector Anatomy from European Concensus 16 Sector (Minimal) Model (6302)",
        DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Prostate Sector Anatomy from European Concensus 27 Sector (Optimal) Model (6303)</summary>
DicomUID  DicomUID::ProstateSectorAnatomyFromEuropeanConcensus27SectorOptimalModel6303 = DicomUID{///NOLINT
        "1.2.840.10008.6.1.1141",///NOLINT
        "Prostate Sector Anatomy from European Concensus 27 Sector (Optimal) Model (6303)",
        DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Measurement Selection Reasons (12301)</summary>
DicomUID  DicomUID::MeasurementSelectionReasons12301 = DicomUID{"1.2.840.10008.6.1.1142",///NOLINT
                                                                "Measurement Selection Reasons (12301)",
                                                                DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Echo Finding Observation Types (12302)</summary>
DicomUID  DicomUID::EchoFindingObservationTypes12302 = DicomUID{"1.2.840.10008.6.1.1143",///NOLINT
                                                                "Echo Finding Observation Types (12302)",
                                                                DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Echo Measurement Types (12303)</summary>
DicomUID  DicomUID::EchoMeasurementTypes12303 = DicomUID{"1.2.840.10008.6.1.1144",///NOLINT
                                                         "Echo Measurement Types (12303)",
                                                         DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Echo Measured Properties (12304)</summary>
DicomUID  DicomUID::EchoMeasuredProperties12304 = DicomUID{"1.2.840.10008.6.1.1145",///NOLINT
                                                           "Echo Measured Properties (12304)",
                                                           DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Basic Echo Anatomic Sites (12305)</summary>
DicomUID  DicomUID::BasicEchoAnatomicSites12305 = DicomUID{"1.2.840.10008.6.1.1146",///NOLINT
                                                           "Basic Echo Anatomic Sites (12305)",
                                                           DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Echo Flow Directions (12306)</summary>
DicomUID  DicomUID::EchoFlowDirections12306 = DicomUID{"1.2.840.10008.6.1.1147",///NOLINT
                                                       "Echo Flow Directions (12306)", DicomUidType::ContextGroupName,
                                                       false};

///<summary>Context Group Name: Cardiac Phases and Time Points (12307)</summary>
DicomUID  DicomUID::CardiacPhasesAndTimePoints12307 = DicomUID{"1.2.840.10008.6.1.1148",///NOLINT
                                                               "Cardiac Phases and Time Points (12307)",
                                                               DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Core Echo Measurements (12300)</summary>
DicomUID  DicomUID::CoreEchoMeasurements12300 = DicomUID{"1.2.840.10008.6.1.1149",///NOLINT
                                                         "Core Echo Measurements (12300)",
                                                         DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: OCT-A Processing Algorithm Families (4270)</summary>
DicomUID  DicomUID::OCTAProcessingAlgorithmFamilies4270 = DicomUID{"1.2.840.10008.6.1.1150",///NOLINT
                                                                   "OCT-A Processing Algorithm Families (4270)",
                                                                   DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: En Face Image Types (4271)</summary>
DicomUID  DicomUID::EnFaceImageTypes4271 = DicomUID{"1.2.840.10008.6.1.1151",///NOLINT
                                                    "En Face Image Types (4271)", DicomUidType::ContextGroupName,
                                                    false};

///<summary>Context Group Name: Opt Scan Pattern Types (4272)</summary>
DicomUID  DicomUID::OptScanPatternTypes4272 = DicomUID{"1.2.840.10008.6.1.1152",///NOLINT
                                                       "Opt Scan Pattern Types (4272)", DicomUidType::ContextGroupName,
                                                       false};

///<summary>Context Group Name: Retinal Segmentation Surfaces (4273)</summary>
DicomUID  DicomUID::RetinalSegmentationSurfaces4273 = DicomUID{"1.2.840.10008.6.1.1153",///NOLINT
                                                               "Retinal Segmentation Surfaces (4273)",
                                                               DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Organs for Radiation Dose Estimates (10060)</summary>
DicomUID  DicomUID::OrgansForRadiationDoseEstimates10060 = DicomUID{"1.2.840.10008.6.1.1154",///NOLINT
                                                                    "Organs for Radiation Dose Estimates (10060)",
                                                                    DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Absorbed Radiation Dose Types (10061)</summary>
DicomUID  DicomUID::AbsorbedRadiationDoseTypes10061 = DicomUID{"1.2.840.10008.6.1.1155",///NOLINT
                                                               "Absorbed Radiation Dose Types (10061)",
                                                               DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Equivalent Radiation Dose Types (10062)</summary>
DicomUID  DicomUID::EquivalentRadiationDoseTypes10062 = DicomUID{"1.2.840.10008.6.1.1156",///NOLINT
                                                                 "Equivalent Radiation Dose Types (10062)",
                                                                 DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Radiation Dose Estimate Distribution Representation (10063)</summary>
DicomUID  DicomUID::RadiationDoseEstimateDistributionRepresentation10063 = DicomUID{"1.2.840.10008.6.1.1157",///NOLINT
                                                                                    "Radiation Dose Estimate Distribution Representation (10063)",
                                                                                    DicomUidType::ContextGroupName,
                                                                                    false};

///<summary>Context Group Name: Patient Model Type (10064)</summary>
DicomUID  DicomUID::PatientModelType10064 = DicomUID{"1.2.840.10008.6.1.1158",///NOLINT
                                                     "Patient Model Type (10064)", DicomUidType::ContextGroupName,
                                                     false};

///<summary>Context Group Name: Radiation Transport Model Type (10065)</summary>
DicomUID  DicomUID::RadiationTransportModelType10065 = DicomUID{"1.2.840.10008.6.1.1159",///NOLINT
                                                                "Radiation Transport Model Type (10065)",
                                                                DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Attenuator Category (10066)</summary>
DicomUID  DicomUID::AttenuatorCategory10066 = DicomUID{"1.2.840.10008.6.1.1160",///NOLINT
                                                       "Attenuator Category (10066)", DicomUidType::ContextGroupName,
                                                       false};

///<summary>Context Group Name: Radiation Attenuator Materials (10067)</summary>
DicomUID  DicomUID::RadiationAttenuatorMaterials10067 = DicomUID{"1.2.840.10008.6.1.1161",///NOLINT
                                                                 "Radiation Attenuator Materials (10067)",
                                                                 DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Estimate Method Types (10068)</summary>
DicomUID  DicomUID::EstimateMethodTypes10068 = DicomUID{"1.2.840.10008.6.1.1162",///NOLINT
                                                        "Estimate Method Types (10068)", DicomUidType::ContextGroupName,
                                                        false};

///<summary>Context Group Name: Radiation Dose Estimation Parameter  (10069)</summary>
DicomUID  DicomUID::RadiationDoseEstimationParameter10069 = DicomUID{"1.2.840.10008.6.1.1163",///NOLINT
                                                                     "Radiation Dose Estimation Parameter  (10069)",
                                                                     DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Radiation Dose Types (10070)</summary>
DicomUID  DicomUID::RadiationDoseTypes10070 = DicomUID{"1.2.840.10008.6.1.1164",///NOLINT
                                                       "Radiation Dose Types (10070)", DicomUidType::ContextGroupName,
                                                       false};

///<summary>Context Group Name: MR Diffusion Component Semantics (7270)</summary>
DicomUID  DicomUID::MRDiffusionComponentSemantics7270 = DicomUID{"1.2.840.10008.6.1.1165",///NOLINT
                                                                 "MR Diffusion Component Semantics (7270)",
                                                                 DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: MR Diffusion Anisotropy Indices (7271)</summary>
DicomUID  DicomUID::MRDiffusionAnisotropyIndices7271 = DicomUID{"1.2.840.10008.6.1.1166",///NOLINT
                                                                "MR Diffusion Anisotropy Indices (7271)",
                                                                DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: MR Diffusion Model Parameters (7272)</summary>
DicomUID  DicomUID::MRDiffusionModelParameters7272 = DicomUID{"1.2.840.10008.6.1.1167",///NOLINT
                                                              "MR Diffusion Model Parameters (7272)",
                                                              DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: MR Diffusion Models (7273)</summary>
DicomUID  DicomUID::MRDiffusionModels7273 = DicomUID{"1.2.840.10008.6.1.1168",///NOLINT
                                                     "MR Diffusion Models (7273)", DicomUidType::ContextGroupName,
                                                     false};

///<summary>Context Group Name: MR Diffusion Model Fitting Methods (7274)</summary>
DicomUID  DicomUID::MRDiffusionModelFittingMethods7274 = DicomUID{"1.2.840.10008.6.1.1169",///NOLINT
                                                                  "MR Diffusion Model Fitting Methods (7274)",
                                                                  DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: MR Diffusion Model Specific Methods (7275)</summary>
DicomUID  DicomUID::MRDiffusionModelSpecificMethods7275 = DicomUID{"1.2.840.10008.6.1.1170",///NOLINT
                                                                   "MR Diffusion Model Specific Methods (7275)",
                                                                   DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: MR Diffusion Model Inputs (7276)</summary>
DicomUID  DicomUID::MRDiffusionModelInputs7276 = DicomUID{"1.2.840.10008.6.1.1171",///NOLINT
                                                          "MR Diffusion Model Inputs (7276)",
                                                          DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Units of Diffusion Rate Area Over Time (7277)</summary>
DicomUID  DicomUID::UnitsOfDiffusionRateAreaOverTime7277 = DicomUID{"1.2.840.10008.6.1.1172",///NOLINT
                                                                    "Units of Diffusion Rate Area Over Time (7277)",
                                                                    DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Pediatric Size Categories (7039)</summary>
DicomUID  DicomUID::PediatricSizeCategories7039 = DicomUID{"1.2.840.10008.6.1.1173",///NOLINT
                                                           "Pediatric Size Categories (7039)",
                                                           DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Calcium Scoring Patient Size Categories (7041)</summary>
DicomUID  DicomUID::CalciumScoringPatientSizeCategories7041 = DicomUID{"1.2.840.10008.6.1.1174",///NOLINT
                                                                       "Calcium Scoring Patient Size Categories (7041)",
                                                                       DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Reason for Repeating Acquisition (10034)</summary>
DicomUID  DicomUID::ReasonForRepeatingAcquisition10034 = DicomUID{"1.2.840.10008.6.1.1175",///NOLINT
                                                                  "Reason for Repeating Acquisition (10034)",
                                                                  DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Protocol Assertion Codes (800)</summary>
DicomUID  DicomUID::ProtocolAssertionCodes800 = DicomUID{"1.2.840.10008.6.1.1176",///NOLINT
                                                         "Protocol Assertion Codes (800)",
                                                         DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Radiotherapeutic Dose Measurement Devices (7026)</summary>
DicomUID  DicomUID::RadiotherapeuticDoseMeasurementDevices7026 = DicomUID{"1.2.840.10008.6.1.1177",///NOLINT
                                                                          "Radiotherapeutic Dose Measurement Devices (7026)",
                                                                          DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Export Additional Information Document Titles (7014)</summary>
DicomUID  DicomUID::ExportAdditionalInformationDocumentTitles7014 = DicomUID{"1.2.840.10008.6.1.1178",///NOLINT
                                                                             "Export Additional Information Document Titles (7014)",
                                                                             DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Export Delay Reasons (7015)</summary>
DicomUID  DicomUID::ExportDelayReasons7015 = DicomUID{"1.2.840.10008.6.1.1179",///NOLINT
                                                      "Export Delay Reasons (7015)", DicomUidType::ContextGroupName,
                                                      false};

///<summary>Context Group Name: Level of Difficulty (7016)</summary>
DicomUID  DicomUID::LevelOfDifficulty7016 = DicomUID{"1.2.840.10008.6.1.1180",///NOLINT
                                                     "Level of Difficulty (7016)", DicomUidType::ContextGroupName,
                                                     false};

///<summary>Context Group Name: Category of Teaching Material - Imaging (7017)</summary>
DicomUID  DicomUID::CategoryOfTeachingMaterialImaging7017 = DicomUID{"1.2.840.10008.6.1.1181",///NOLINT
                                                                     "Category of Teaching Material - Imaging (7017)",
                                                                     DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Miscellaneous Document Titles (7018)</summary>
DicomUID  DicomUID::MiscellaneousDocumentTitles7018 = DicomUID{"1.2.840.10008.6.1.1182",///NOLINT
                                                               "Miscellaneous Document Titles (7018)",
                                                               DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Segmentation Non-Image Source Purposes of Reference (7019)</summary>
DicomUID  DicomUID::SegmentationNonImageSourcePurposesOfReference7019 = DicomUID{"1.2.840.10008.6.1.1183",///NOLINT
                                                                                 "Segmentation Non-Image Source Purposes of Reference (7019)",
                                                                                 DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Longitudinal Temporal Event Types (280)</summary>
DicomUID  DicomUID::LongitudinalTemporalEventTypes280 = DicomUID{"1.2.840.10008.6.1.1184",///NOLINT
                                                                 "Longitudinal Temporal Event Types (280)",
                                                                 DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Non-lesion Object Type - Physical Objects (6401)</summary>
DicomUID  DicomUID::NonLesionObjectTypePhysicalObjects6401 = DicomUID{"1.2.840.10008.6.1.1185",///NOLINT
                                                                      "Non-lesion Object Type - Physical Objects (6401)",
                                                                      DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Non-lesion Object Type - Substances (6402)</summary>
DicomUID  DicomUID::NonLesionObjectTypeSubstances6402 = DicomUID{"1.2.840.10008.6.1.1186",///NOLINT
                                                                 "Non-lesion Object Type - Substances (6402)",
                                                                 DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Non-lesion Object Type - Tissues (6403)</summary>
DicomUID  DicomUID::NonLesionObjectTypeTissues6403 = DicomUID{"1.2.840.10008.6.1.1187",///NOLINT
                                                              "Non-lesion Object Type - Tissues (6403)",
                                                              DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Chest Non-lesion Object Type - Physical Objects (6404)</summary>
DicomUID  DicomUID::ChestNonLesionObjectTypePhysicalObjects6404 = DicomUID{"1.2.840.10008.6.1.1188",///NOLINT
                                                                           "Chest Non-lesion Object Type - Physical Objects (6404)",
                                                                           DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Chest Non-lesion Object Type - Tissues (6405)</summary>
DicomUID  DicomUID::ChestNonLesionObjectTypeTissues6405 = DicomUID{"1.2.840.10008.6.1.1189",///NOLINT
                                                                   "Chest Non-lesion Object Type - Tissues (6405)",
                                                                   DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Tissue Segmentation Property Types (7191)</summary>
DicomUID  DicomUID::TissueSegmentationPropertyTypes7191 = DicomUID{"1.2.840.10008.6.1.1190",///NOLINT
                                                                   "Tissue Segmentation Property Types (7191)",
                                                                   DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Anatomical Structure Segmentation Property Types (7192)</summary>
DicomUID  DicomUID::AnatomicalStructureSegmentationPropertyTypes7192 = DicomUID{"1.2.840.10008.6.1.1191",///NOLINT
                                                                                "Anatomical Structure Segmentation Property Types (7192)",
                                                                                DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Physical Object Segmentation Property Types (7193)</summary>
DicomUID  DicomUID::PhysicalObjectSegmentationPropertyTypes7193 = DicomUID{"1.2.840.10008.6.1.1192",///NOLINT
                                                                           "Physical Object Segmentation Property Types (7193)",
                                                                           DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Morphologically Abnormal Structure Segmentation Property Types (7194)</summary>
DicomUID  DicomUID::MorphologicallyAbnormalStructureSegmentationPropertyTypes7194 = DicomUID{///NOLINT
        "1.2.840.10008.6.1.1193",///NOLINT
        "Morphologically Abnormal Structure Segmentation Property Types (7194)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Function Segmentation Property Types (7195)</summary>
DicomUID  DicomUID::FunctionSegmentationPropertyTypes7195 = DicomUID{"1.2.840.10008.6.1.1194",///NOLINT
                                                                     "Function Segmentation Property Types (7195)",
                                                                     DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Spatial and Relational Concept Segmentation Property Types (7196)</summary>
DicomUID  DicomUID::SpatialAndRelationalConceptSegmentationPropertyTypes7196 = DicomUID{///NOLINT
        "1.2.840.10008.6.1.1195",///NOLINT
        "Spatial and Relational Concept Segmentation Property Types (7196)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Body Substance Segmentation Property Types (7197)</summary>
DicomUID  DicomUID::BodySubstanceSegmentationPropertyTypes7197 = DicomUID{"1.2.840.10008.6.1.1196",///NOLINT
                                                                          "Body Substance Segmentation Property Types (7197)",
                                                                          DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Substance Segmentation Property Types (7198)</summary>
DicomUID  DicomUID::SubstanceSegmentationPropertyTypes7198 = DicomUID{"1.2.840.10008.6.1.1197",///NOLINT
                                                                      "Substance Segmentation Property Types (7198)",
                                                                      DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Interpretation Request Discontinuation Reasons (9303)</summary>
DicomUID  DicomUID::InterpretationRequestDiscontinuationReasons9303 = DicomUID{"1.2.840.10008.6.1.1198",///NOLINT
                                                                               "Interpretation Request Discontinuation Reasons (9303)",
                                                                               DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Gray Level Run Length Based Features (7475)</summary>
DicomUID  DicomUID::GrayLevelRunLengthBasedFeatures7475 = DicomUID{"1.2.840.10008.6.1.1199",///NOLINT
                                                                   "Gray Level Run Length Based Features (7475)",
                                                                   DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Gray Level Size Zone Based Features (7476)</summary>
DicomUID  DicomUID::GrayLevelSizeZoneBasedFeatures7476 = DicomUID{"1.2.840.10008.6.1.1200",///NOLINT
                                                                  "Gray Level Size Zone Based Features (7476)",
                                                                  DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Encapsulated Document Source Purposes of Reference (7060)</summary>
DicomUID  DicomUID::EncapsulatedDocumentSourcePurposesOfReference7060 = DicomUID{"1.2.840.10008.6.1.1201",///NOLINT
                                                                                 "Encapsulated Document Source Purposes of Reference (7060)",
                                                                                 DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Model Document Titles (7061)</summary>
DicomUID  DicomUID::ModelDocumentTitles7061 = DicomUID{"1.2.840.10008.6.1.1202",///NOLINT
                                                       "Model Document Titles (7061)", DicomUidType::ContextGroupName,
                                                       false};

///<summary>Context Group Name: Purpose of Reference to Predecessor 3D Model (7062)</summary>
DicomUID  DicomUID::PurposeOfReferenceToPredecessor3DModel7062 = DicomUID{"1.2.840.10008.6.1.1203",///NOLINT
                                                                          "Purpose of Reference to Predecessor 3D Model (7062)",
                                                                          DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Model Scale Units (7063)</summary>
DicomUID  DicomUID::ModelScaleUnits7063 = DicomUID{"1.2.840.10008.6.1.1204",///NOLINT
                                                   "Model Scale Units (7063)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Model Usage (7064)</summary>
DicomUID  DicomUID::ModelUsage7064 = DicomUID{"1.2.840.10008.6.1.1205",///NOLINT
                                              "Model Usage (7064)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Radiation Dose Units (10071)</summary>
DicomUID  DicomUID::RadiationDoseUnits10071 = DicomUID{"1.2.840.10008.6.1.1206",///NOLINT
                                                       "Radiation Dose Units (10071)", DicomUidType::ContextGroupName,
                                                       false};

///<summary>Context Group Name: Radiotherapy Fiducials (7112)</summary>
DicomUID  DicomUID::RadiotherapyFiducials7112 = DicomUID{"1.2.840.10008.6.1.1207",///NOLINT
                                                         "Radiotherapy Fiducials (7112)",
                                                         DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Multi-energy Relevant Materials (300)</summary>
DicomUID  DicomUID::MultiEnergyRelevantMaterials300 = DicomUID{"1.2.840.10008.6.1.1208",///NOLINT
                                                               "Multi-energy Relevant Materials (300)",
                                                               DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Multi-energy Material Units (301)</summary>
DicomUID  DicomUID::MultiEnergyMaterialUnits301 = DicomUID{"1.2.840.10008.6.1.1209",///NOLINT
                                                           "Multi-energy Material Units (301)",
                                                           DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Dosimetric Objective Types (9500)</summary>
DicomUID  DicomUID::DosimetricObjectiveTypes9500 = DicomUID{"1.2.840.10008.6.1.1210",///NOLINT
                                                            "Dosimetric Objective Types (9500)",
                                                            DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Prescription Anatomy Categories (9501)</summary>
DicomUID  DicomUID::PrescriptionAnatomyCategories9501 = DicomUID{"1.2.840.10008.6.1.1211",///NOLINT
                                                                 "Prescription Anatomy Categories (9501)",
                                                                 DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: RT Segment Annotation Categories (9502)</summary>
DicomUID  DicomUID::RTSegmentAnnotationCategories9502 = DicomUID{"1.2.840.10008.6.1.1212",///NOLINT
                                                                 "RT Segment Annotation Categories (9502)",
                                                                 DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Radiotherapy Therapeutic Role Categories (9503)</summary>
DicomUID  DicomUID::RadiotherapyTherapeuticRoleCategories9503 = DicomUID{"1.2.840.10008.6.1.1213",///NOLINT
                                                                         "Radiotherapy Therapeutic Role Categories (9503)",
                                                                         DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: RT Geometric Information (9504)</summary>
DicomUID  DicomUID::RTGeometricInformation9504 = DicomUID{"1.2.840.10008.6.1.1214",///NOLINT
                                                          "RT Geometric Information (9504)",
                                                          DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Fixation or Positioning Devices (9505)</summary>
DicomUID  DicomUID::FixationOrPositioningDevices9505 = DicomUID{"1.2.840.10008.6.1.1215",///NOLINT
                                                                "Fixation or Positioning Devices (9505)",
                                                                DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Brachytherapy Devices (9506)</summary>
DicomUID  DicomUID::BrachytherapyDevices9506 = DicomUID{"1.2.840.10008.6.1.1216",///NOLINT
                                                        "Brachytherapy Devices (9506)", DicomUidType::ContextGroupName,
                                                        false};

///<summary>Context Group Name: External Body Models (9507)</summary>
DicomUID  DicomUID::ExternalBodyModels9507 = DicomUID{"1.2.840.10008.6.1.1217",///NOLINT
                                                      "External Body Models (9507)", DicomUidType::ContextGroupName,
                                                      false};

///<summary>Context Group Name: Non-specific Volumes (9508)</summary>
DicomUID  DicomUID::NonSpecificVolumes9508 = DicomUID{"1.2.840.10008.6.1.1218",///NOLINT
                                                      "Non-specific Volumes (9508)", DicomUidType::ContextGroupName,
                                                      false};

///<summary>Context Group Name: Purpose of Reference For RT Physician Intent Input (9509)</summary>
DicomUID  DicomUID::PurposeOfReferenceForRTPhysicianIntentInput9509 = DicomUID{"1.2.840.10008.6.1.1219",///NOLINT
                                                                               "Purpose of Reference For RT Physician Intent Input (9509)",
                                                                               DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Purpose of Reference For RT Treatment Planning Input (9510)</summary>
DicomUID  DicomUID::PurposeOfReferenceForRTTreatmentPlanningInput9510 = DicomUID{"1.2.840.10008.6.1.1220",///NOLINT
                                                                                 "Purpose of Reference For RT Treatment Planning Input (9510)",
                                                                                 DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: General External Radiotherapy Procedure Techniques (9511)</summary>
DicomUID  DicomUID::GeneralExternalRadiotherapyProcedureTechniques9511 = DicomUID{"1.2.840.10008.6.1.1221",///NOLINT
                                                                                  "General External Radiotherapy Procedure Techniques (9511)",
                                                                                  DicomUidType::ContextGroupName,
                                                                                  false};

///<summary>Context Group Name: Tomotherapeutic Radiotherapy Procedure Techniques (9512)</summary>
DicomUID  DicomUID::TomotherapeuticRadiotherapyProcedureTechniques9512 = DicomUID{"1.2.840.10008.6.1.1222",///NOLINT
                                                                                  "Tomotherapeutic Radiotherapy Procedure Techniques (9512)",
                                                                                  DicomUidType::ContextGroupName,
                                                                                  false};

///<summary>Context Group Name: Fixation Devices (9513)</summary>
DicomUID  DicomUID::FixationDevices9513 = DicomUID{"1.2.840.10008.6.1.1223",///NOLINT
                                                   "Fixation Devices (9513)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Anatomical Structures For Radiotherapy (9514)</summary>
DicomUID  DicomUID::AnatomicalStructuresForRadiotherapy9514 = DicomUID{"1.2.840.10008.6.1.1224",///NOLINT
                                                                       "Anatomical Structures For Radiotherapy (9514)",
                                                                       DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: RT Patient Support Devices (9515)</summary>
DicomUID  DicomUID::RTPatientSupportDevices9515 = DicomUID{"1.2.840.10008.6.1.1225",///NOLINT
                                                           "RT Patient Support Devices (9515)",
                                                           DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Radiotherapy Bolus Device Types (9516)</summary>
DicomUID  DicomUID::RadiotherapyBolusDeviceTypes9516 = DicomUID{"1.2.840.10008.6.1.1226",///NOLINT
                                                                "Radiotherapy Bolus Device Types (9516)",
                                                                DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Radiotherapy Block Device Types (9517)</summary>
DicomUID  DicomUID::RadiotherapyBlockDeviceTypes9517 = DicomUID{"1.2.840.10008.6.1.1227",///NOLINT
                                                                "Radiotherapy Block Device Types (9517)",
                                                                DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Radiotherapy Accessory No-slot Holder Device Types (9518)</summary>
DicomUID  DicomUID::RadiotherapyAccessoryNoSlotHolderDeviceTypes9518 = DicomUID{"1.2.840.10008.6.1.1228",///NOLINT
                                                                                "Radiotherapy Accessory No-slot Holder Device Types (9518)",
                                                                                DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Radiotherapy Accessory Slot Holder Device Types (9519)</summary>
DicomUID  DicomUID::RadiotherapyAccessorySlotHolderDeviceTypes9519 = DicomUID{"1.2.840.10008.6.1.1229",///NOLINT
                                                                              "Radiotherapy Accessory Slot Holder Device Types (9519)",
                                                                              DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Segmented RT Accessory Devices (9520)</summary>
DicomUID  DicomUID::SegmentedRTAccessoryDevices9520 = DicomUID{"1.2.840.10008.6.1.1230",///NOLINT
                                                               "Segmented RT Accessory Devices (9520)",
                                                               DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Radiotherapy Treatment Energy Unit (9521)</summary>
DicomUID  DicomUID::RadiotherapyTreatmentEnergyUnit9521 = DicomUID{"1.2.840.10008.6.1.1231",///NOLINT
                                                                   "Radiotherapy Treatment Energy Unit (9521)",
                                                                   DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Multi-source Radiotherapy Procedure Techniques (9522)</summary>
DicomUID  DicomUID::MultiSourceRadiotherapyProcedureTechniques9522 = DicomUID{"1.2.840.10008.6.1.1232",///NOLINT
                                                                              "Multi-source Radiotherapy Procedure Techniques (9522)",
                                                                              DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Robotic Radiotherapy Procedure Techniques (9523)</summary>
DicomUID  DicomUID::RoboticRadiotherapyProcedureTechniques9523 = DicomUID{"1.2.840.10008.6.1.1233",///NOLINT
                                                                          "Robotic Radiotherapy Procedure Techniques (9523)",
                                                                          DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Radiotherapy Procedure Techniques (9524)</summary>
DicomUID  DicomUID::RadiotherapyProcedureTechniques9524 = DicomUID{"1.2.840.10008.6.1.1234",///NOLINT
                                                                   "Radiotherapy Procedure Techniques (9524)",
                                                                   DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Radiation Therapy Particle (9525)</summary>
DicomUID  DicomUID::RadiationTherapyParticle9525 = DicomUID{"1.2.840.10008.6.1.1235",///NOLINT
                                                            "Radiation Therapy Particle (9525)",
                                                            DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Ion Therapy Particle (9526)</summary>
DicomUID  DicomUID::IonTherapyParticle9526 = DicomUID{"1.2.840.10008.6.1.1236",///NOLINT
                                                      "Ion Therapy Particle (9526)", DicomUidType::ContextGroupName,
                                                      false};

///<summary>Context Group Name: Teletherapy Isotope (9527)</summary>
DicomUID  DicomUID::TeletherapyIsotope9527 = DicomUID{"1.2.840.10008.6.1.1237",///NOLINT
                                                      "Teletherapy Isotope (9527)", DicomUidType::ContextGroupName,
                                                      false};

///<summary>Context Group Name: Brachytherapy Isotope (9528)</summary>
DicomUID  DicomUID::BrachytherapyIsotope9528 = DicomUID{"1.2.840.10008.6.1.1238",///NOLINT
                                                        "Brachytherapy Isotope (9528)", DicomUidType::ContextGroupName,
                                                        false};

///<summary>Context Group Name: Single Dose Dosimetric Objectives (9529)</summary>
DicomUID  DicomUID::SingleDoseDosimetricObjectives9529 = DicomUID{"1.2.840.10008.6.1.1239",///NOLINT
                                                                  "Single Dose Dosimetric Objectives (9529)",
                                                                  DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Percentage and Dose Dosimetric Objectives (9530)</summary>
DicomUID  DicomUID::PercentageAndDoseDosimetricObjectives9530 = DicomUID{"1.2.840.10008.6.1.1240",///NOLINT
                                                                         "Percentage and Dose Dosimetric Objectives (9530)",
                                                                         DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Volume and Dose Dosimetric Objectives (9531)</summary>
DicomUID  DicomUID::VolumeAndDoseDosimetricObjectives9531 = DicomUID{"1.2.840.10008.6.1.1241",///NOLINT
                                                                     "Volume and Dose Dosimetric Objectives (9531)",
                                                                     DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: No-Parameter Dosimetric Objectives (9532)</summary>
DicomUID  DicomUID::NoParameterDosimetricObjectives9532 = DicomUID{"1.2.840.10008.6.1.1242",///NOLINT
                                                                   "No-Parameter Dosimetric Objectives (9532)",
                                                                   DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Delivery Time Structure (9533)</summary>
DicomUID  DicomUID::DeliveryTimeStructure9533 = DicomUID{"1.2.840.10008.6.1.1243",///NOLINT
                                                         "Delivery Time Structure (9533)",
                                                         DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Radiotherapy Targets (9534)</summary>
DicomUID  DicomUID::RadiotherapyTargets9534 = DicomUID{"1.2.840.10008.6.1.1244",///NOLINT
                                                       "Radiotherapy Targets (9534)", DicomUidType::ContextGroupName,
                                                       false};

///<summary>Context Group Name: Radiotherapy Dose Calculation Roles (9535)</summary>
DicomUID  DicomUID::RadiotherapyDoseCalculationRoles9535 = DicomUID{"1.2.840.10008.6.1.1245",///NOLINT
                                                                    "Radiotherapy Dose Calculation Roles (9535)",
                                                                    DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Radiotherapy Prescribing and Segmenting Person Roles (9536)</summary>
DicomUID  DicomUID::RadiotherapyPrescribingAndSegmentingPersonRoles9536 = DicomUID{"1.2.840.10008.6.1.1246",///NOLINT
                                                                                   "Radiotherapy Prescribing and Segmenting Person Roles (9536)",
                                                                                   DicomUidType::ContextGroupName,
                                                                                   false};

///<summary>Context Group Name: Effective Dose Calculation Method Categories (9537)</summary>
DicomUID  DicomUID::EffectiveDoseCalculationMethodCategories9537 = DicomUID{"1.2.840.10008.6.1.1247",///NOLINT
                                                                            "Effective Dose Calculation Method Categories (9537)",
                                                                            DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Radiation Transport-based Effective Dose Method Modifiers (9538)</summary>
DicomUID  DicomUID::RadiationTransportBasedEffectiveDoseMethodModifiers9538 = DicomUID{///NOLINT
        "1.2.840.10008.6.1.1248",///NOLINT
        "Radiation Transport-based Effective Dose Method Modifiers (9538)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Fractionation-based Effective Dose Method Modifiers (9539)</summary>
DicomUID  DicomUID::FractionationBasedEffectiveDoseMethodModifiers9539 = DicomUID{"1.2.840.10008.6.1.1249",///NOLINT
                                                                                  "Fractionation-based Effective Dose Method Modifiers (9539)",
                                                                                  DicomUidType::ContextGroupName,
                                                                                  false};

///<summary>Context Group Name: Imaging Agent Administration Adverse Events (60)</summary>
DicomUID  DicomUID::ImagingAgentAdministrationAdverseEvents60 = DicomUID{"1.2.840.10008.6.1.1250",///NOLINT
                                                                         "Imaging Agent Administration Adverse Events (60)",
                                                                         DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Time Relative to Procedure (61)</summary>
DicomUID  DicomUID::TimeRelativeToProcedure61 = DicomUID{"1.2.840.10008.6.1.1251",///NOLINT
                                                         "Time Relative to Procedure (61)",
                                                         DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Imaging Agent Administration Phase Type (62)</summary>
DicomUID  DicomUID::ImagingAgentAdministrationPhaseType62 = DicomUID{"1.2.840.10008.6.1.1252",///NOLINT
                                                                     "Imaging Agent Administration Phase Type (62)",
                                                                     DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Imaging Agent Administration Mode (63)</summary>
DicomUID  DicomUID::ImagingAgentAdministrationMode63 = DicomUID{"1.2.840.10008.6.1.1253",///NOLINT
                                                                "Imaging Agent Administration Mode (63)",
                                                                DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Imaging Agent Administration Patient State (64)</summary>
DicomUID  DicomUID::ImagingAgentAdministrationPatientState64 = DicomUID{"1.2.840.10008.6.1.1254",///NOLINT
                                                                        "Imaging Agent Administration Patient State (64)",
                                                                        DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Pre-medication For Imaging Agent Administration (65)</summary>
DicomUID  DicomUID::PreMedicationForImagingAgentAdministration65 = DicomUID{"1.2.840.10008.6.1.1255",///NOLINT
                                                                            "Pre-medication For Imaging Agent Administration (65)",
                                                                            DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Medication For Imaging Agent Administration (66)</summary>
DicomUID  DicomUID::MedicationForImagingAgentAdministration66 = DicomUID{"1.2.840.10008.6.1.1256",///NOLINT
                                                                         "Medication For Imaging Agent Administration (66)",
                                                                         DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Imaging Agent Administration Completion Status (67)</summary>
DicomUID  DicomUID::ImagingAgentAdministrationCompletionStatus67 = DicomUID{"1.2.840.10008.6.1.1257",///NOLINT
                                                                            "Imaging Agent Administration Completion Status (67)",
                                                                            DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Imaging Agent Administration Pharmaceutical Unit of Presentation (68)</summary>
DicomUID  DicomUID::ImagingAgentAdministrationPharmaceuticalUnitOfPresentation68 = DicomUID{///NOLINT
        "1.2.840.10008.6.1.1258",///NOLINT
        "Imaging Agent Administration Pharmaceutical Unit of Presentation (68)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Imaging Agent Administration Consumables (69)</summary>
DicomUID  DicomUID::ImagingAgentAdministrationConsumables69 = DicomUID{"1.2.840.10008.6.1.1259",///NOLINT
                                                                       "Imaging Agent Administration Consumables (69)",
                                                                       DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Flush (70)</summary>
DicomUID  DicomUID::Flush70 = DicomUID{"1.2.840.10008.6.1.1260",///NOLINT
                                       "Flush (70)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Imaging Agent Administration Injector Event Type (71)</summary>
DicomUID  DicomUID::ImagingAgentAdministrationInjectorEventType71 = DicomUID{"1.2.840.10008.6.1.1261",///NOLINT
                                                                             "Imaging Agent Administration Injector Event Type (71)",
                                                                             DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Imaging Agent Administration Step Type (72)</summary>
DicomUID  DicomUID::ImagingAgentAdministrationStepType72 = DicomUID{"1.2.840.10008.6.1.1262",///NOLINT
                                                                    "Imaging Agent Administration Step Type (72)",
                                                                    DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Bolus Shaping Curves (73)</summary>
DicomUID  DicomUID::BolusShapingCurves73 = DicomUID{"1.2.840.10008.6.1.1263",///NOLINT
                                                    "Bolus Shaping Curves (73)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Imaging Agent Administration Consumable Catheter Type (74)</summary>
DicomUID  DicomUID::ImagingAgentAdministrationConsumableCatheterType74 = DicomUID{"1.2.840.10008.6.1.1264",///NOLINT
                                                                                  "Imaging Agent Administration Consumable Catheter Type (74)",
                                                                                  DicomUidType::ContextGroupName,
                                                                                  false};

///<summary>Context Group Name: Low-high-equal (75)</summary>
DicomUID  DicomUID::LowHighEqual75 = DicomUID{"1.2.840.10008.6.1.1265",///NOLINT
                                              "Low-high-equal (75)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Type of Pre-medication (76)</summary>
DicomUID  DicomUID::TypeOfPreMedication76 = DicomUID{"1.2.840.10008.6.1.1266",///NOLINT
                                                     "Type of Pre-medication (76)", DicomUidType::ContextGroupName,
                                                     false};

///<summary>Context Group Name: Laterality with Median (245)</summary>
DicomUID  DicomUID::LateralityWithMedian245 = DicomUID{"1.2.840.10008.6.1.1267",///NOLINT
                                                       "Laterality with Median (245)", DicomUidType::ContextGroupName,
                                                       false};

///<summary>Context Group Name: Dermatology Anatomic Sites (4029)</summary>
DicomUID  DicomUID::DermatologyAnatomicSites4029 = DicomUID{"1.2.840.10008.6.1.1268",///NOLINT
                                                            "Dermatology Anatomic Sites (4029)",
                                                            DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Quantitative Image Features (218)</summary>
DicomUID  DicomUID::QuantitativeImageFeatures218 = DicomUID{"1.2.840.10008.6.1.1269",///NOLINT
                                                            "Quantitative Image Features (218)",
                                                            DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Global Shape Descriptors (7477)</summary>
DicomUID  DicomUID::GlobalShapeDescriptors7477 = DicomUID{"1.2.840.10008.6.1.1270",///NOLINT
                                                          "Global Shape Descriptors (7477)",
                                                          DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Intensity Histogram Features (7478)</summary>
DicomUID  DicomUID::IntensityHistogramFeatures7478 = DicomUID{"1.2.840.10008.6.1.1271",///NOLINT
                                                              "Intensity Histogram Features (7478)",
                                                              DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Grey Level Distance Zone Based Features (7479)</summary>
DicomUID  DicomUID::GreyLevelDistanceZoneBasedFeatures7479 = DicomUID{"1.2.840.10008.6.1.1272",///NOLINT
                                                                      "Grey Level Distance Zone Based Features (7479)",
                                                                      DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Neighbourhood Grey Tone Difference Based Features (7500)</summary>
DicomUID  DicomUID::NeighbourhoodGreyToneDifferenceBasedFeatures7500 = DicomUID{"1.2.840.10008.6.1.1273",///NOLINT
                                                                                "Neighbourhood Grey Tone Difference Based Features (7500)",
                                                                                DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Neighbouring Grey Level Dependence Based Features (7501)</summary>
DicomUID  DicomUID::NeighbouringGreyLevelDependenceBasedFeatures7501 = DicomUID{"1.2.840.10008.6.1.1274",///NOLINT
                                                                                "Neighbouring Grey Level Dependence Based Features (7501)",
                                                                                DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Cornea Measurement Method Descriptors (4242)</summary>
DicomUID  DicomUID::CorneaMeasurementMethodDescriptors4242 = DicomUID{"1.2.840.10008.6.1.1275",///NOLINT
                                                                      "Cornea Measurement Method Descriptors (4242)",
                                                                      DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Segmented Radiotherapeutic Dose Measurement Devices (7027)</summary>
DicomUID  DicomUID::SegmentedRadiotherapeuticDoseMeasurementDevices7027 = DicomUID{"1.2.840.10008.6.1.1276",///NOLINT
                                                                                   "Segmented Radiotherapeutic Dose Measurement Devices (7027)",
                                                                                   DicomUidType::ContextGroupName,
                                                                                   false};

///<summary>Context Group Name: Clinical Course of Disease (6098)</summary>
DicomUID  DicomUID::ClinicalCourseOfDisease6098 = DicomUID{"1.2.840.10008.6.1.1277",///NOLINT
                                                           "Clinical Course of Disease (6098)",
                                                           DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Racial Group (6099)</summary>
DicomUID  DicomUID::RacialGroup6099 = DicomUID{"1.2.840.10008.6.1.1278",///NOLINT
                                               "Racial Group (6099)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Relative Laterality (246)</summary>
DicomUID  DicomUID::RelativeLaterality246 = DicomUID{"1.2.840.10008.6.1.1279",///NOLINT
                                                     "Relative Laterality (246)", DicomUidType::ContextGroupName,
                                                     false};

///<summary>Context Group Name: Brain Lesion Segmentation Types With Necrosis (7168)</summary>
DicomUID  DicomUID::BrainLesionSegmentationTypesWithNecrosis7168 = DicomUID{"1.2.840.10008.6.1.1280",///NOLINT
                                                                            "Brain Lesion Segmentation Types With Necrosis (7168)",
                                                                            DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Brain Lesion Segmentation Types Without Necrosis (7169)</summary>
DicomUID  DicomUID::BrainLesionSegmentationTypesWithoutNecrosis7169 = DicomUID{"1.2.840.10008.6.1.1281",///NOLINT
                                                                               "Brain Lesion Segmentation Types Without Necrosis (7169)",
                                                                               DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Non-Acquisition Modality (32)</summary>
DicomUID  DicomUID::NonAcquisitionModality32 = DicomUID{"1.2.840.10008.6.1.1282",///NOLINT
                                                        "Non-Acquisition Modality (32)", DicomUidType::ContextGroupName,
                                                        false};

///<summary>Context Group Name: Modality (33)</summary>
DicomUID  DicomUID::Modality33 = DicomUID{"1.2.840.10008.6.1.1283",///NOLINT
                                          "Modality (33)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Laterality Left-Right Only (247)</summary>
DicomUID  DicomUID::LateralityLeftRightOnly247 = DicomUID{"1.2.840.10008.6.1.1284",///NOLINT
                                                          "Laterality Left-Right Only (247)",
                                                          DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Qualitative Evaluation Modifier Types (210)</summary>
DicomUID  DicomUID::QualitativeEvaluationModifierTypes210 = DicomUID{"1.2.840.10008.6.1.1285",///NOLINT
                                                                     "Qualitative Evaluation Modifier Types (210)",
                                                                     DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Qualitative Evaluation Modifier Values (211)</summary>
DicomUID  DicomUID::QualitativeEvaluationModifierValues211 = DicomUID{"1.2.840.10008.6.1.1286",///NOLINT
                                                                      "Qualitative Evaluation Modifier Values (211)",
                                                                      DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Generic Anatomic Location Modifiers (212)</summary>
DicomUID  DicomUID::GenericAnatomicLocationModifiers212 = DicomUID{"1.2.840.10008.6.1.1287",///NOLINT
                                                                   "Generic Anatomic Location Modifiers (212)",
                                                                   DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Beam Limiting Device Types (9541)</summary>
DicomUID  DicomUID::BeamLimitingDeviceTypes9541 = DicomUID{"1.2.840.10008.6.1.1288",///NOLINT
                                                           "Beam Limiting Device Types (9541)",
                                                           DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Compensator Device Types (9542)</summary>
DicomUID  DicomUID::CompensatorDeviceTypes9542 = DicomUID{"1.2.840.10008.6.1.1289",///NOLINT
                                                          "Compensator Device Types (9542)",
                                                          DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Radiotherapy Treatment Machine Modes (9543)</summary>
DicomUID  DicomUID::RadiotherapyTreatmentMachineModes9543 = DicomUID{"1.2.840.10008.6.1.1290",///NOLINT
                                                                     "Radiotherapy Treatment Machine Modes (9543)",
                                                                     DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Radiotherapy Distance Reference Locations (9544)</summary>
DicomUID  DicomUID::RadiotherapyDistanceReferenceLocations9544 = DicomUID{"1.2.840.10008.6.1.1291",///NOLINT
                                                                          "Radiotherapy Distance Reference Locations (9544)",
                                                                          DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Fixed Beam Limiting Device Types (9545)</summary>
DicomUID  DicomUID::FixedBeamLimitingDeviceTypes9545 = DicomUID{"1.2.840.10008.6.1.1292",///NOLINT
                                                                "Fixed Beam Limiting Device Types (9545)",
                                                                DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Radiotherapy Wedge Types (9546)</summary>
DicomUID  DicomUID::RadiotherapyWedgeTypes9546 = DicomUID{"1.2.840.10008.6.1.1293",///NOLINT
                                                          "Radiotherapy Wedge Types (9546)",
                                                          DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: RT Beam Limiting Device Orientation Labels (9547)</summary>
DicomUID  DicomUID::RTBeamLimitingDeviceOrientationLabels9547 = DicomUID{"1.2.840.10008.6.1.1294",///NOLINT
                                                                         "RT Beam Limiting Device Orientation Labels (9547)",
                                                                         DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: General Accessory Device Types (9548)</summary>
DicomUID  DicomUID::GeneralAccessoryDeviceTypes9548 = DicomUID{"1.2.840.10008.6.1.1295",///NOLINT
                                                               "General Accessory Device Types (9548)",
                                                               DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Radiation Generation Mode Types (9549)</summary>
DicomUID  DicomUID::RadiationGenerationModeTypes9549 = DicomUID{"1.2.840.10008.6.1.1296",///NOLINT
                                                                "Radiation Generation Mode Types (9549)",
                                                                DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: C-Arm Photon-Electron Delivery Rate Units (9550)</summary>
DicomUID  DicomUID::CArmPhotonElectronDeliveryRateUnits9550 = DicomUID{"1.2.840.10008.6.1.1297",///NOLINT
                                                                       "C-Arm Photon-Electron Delivery Rate Units (9550)",
                                                                       DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Treatment Delivery Device Types (9551)</summary>
DicomUID  DicomUID::TreatmentDeliveryDeviceTypes9551 = DicomUID{"1.2.840.10008.6.1.1298",///NOLINT
                                                                "Treatment Delivery Device Types (9551)",
                                                                DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: C-Arm Photon-Electron Dosimeter Units (9552)</summary>
DicomUID  DicomUID::CArmPhotonElectronDosimeterUnits9552 = DicomUID{"1.2.840.10008.6.1.1299",///NOLINT
                                                                    "C-Arm Photon-Electron Dosimeter Units (9552)",
                                                                    DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Treatment Points (9553)</summary>
DicomUID  DicomUID::TreatmentPoints9553 = DicomUID{"1.2.840.10008.6.1.1300",///NOLINT
                                                   "Treatment Points (9553)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Equipment Reference Points (9554)</summary>
DicomUID  DicomUID::EquipmentReferencePoints9554 = DicomUID{"1.2.840.10008.6.1.1301",///NOLINT
                                                            "Equipment Reference Points (9554)",
                                                            DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Radiotherapy Treatment Planning Person Roles (9555)</summary>
DicomUID  DicomUID::RadiotherapyTreatmentPlanningPersonRoles9555 = DicomUID{"1.2.840.10008.6.1.1302",///NOLINT
                                                                            "Radiotherapy Treatment Planning Person Roles (9555)",
                                                                            DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Real Time Video Rendition Titles (7070)</summary>
DicomUID  DicomUID::RealTimeVideoRenditionTitles7070 = DicomUID{"1.2.840.10008.6.1.1303",///NOLINT
                                                                "Real Time Video Rendition Titles (7070)",
                                                                DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Geometry Graphical Representation (219)</summary>
DicomUID  DicomUID::GeometryGraphicalRepresentation219 = DicomUID{"1.2.840.10008.6.1.1304",///NOLINT
                                                                  "Geometry Graphical Representation (219)",
                                                                  DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Visual Explanation (217)</summary>
DicomUID  DicomUID::VisualExplanation217 = DicomUID{"1.2.840.10008.6.1.1305",///NOLINT
                                                    "Visual Explanation (217)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Prostate Sector Anatomy from PI-RADS v2.1 (6304)</summary>
DicomUID  DicomUID::ProstateSectorAnatomyFromPIRADSV216304 = DicomUID{"1.2.840.10008.6.1.1306",///NOLINT
                                                                      "Prostate Sector Anatomy from PI-RADS v2.1 (6304)",
                                                                      DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Radiotherapy Robotic Node Sets (9556)</summary>
DicomUID  DicomUID::RadiotherapyRoboticNodeSets9556 = DicomUID{"1.2.840.10008.6.1.1307",///NOLINT
                                                               "Radiotherapy Robotic Node Sets (9556)",
                                                               DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Tomotherapeutic Dosimeter Units (9557)</summary>
DicomUID  DicomUID::TomotherapeuticDosimeterUnits9557 = DicomUID{"1.2.840.10008.6.1.1308",///NOLINT
                                                                 "Tomotherapeutic Dosimeter Units (9557)",
                                                                 DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Tomotherapeutic Dose Rate Units (9558)</summary>
DicomUID  DicomUID::TomotherapeuticDoseRateUnits9558 = DicomUID{"1.2.840.10008.6.1.1309",///NOLINT
                                                                "Tomotherapeutic Dose Rate Units (9558)",
                                                                DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Robotic Delivery Device Dosimeter Units (9559)</summary>
DicomUID  DicomUID::RoboticDeliveryDeviceDosimeterUnits9559 = DicomUID{"1.2.840.10008.6.1.1310",///NOLINT
                                                                       "Robotic Delivery Device Dosimeter Units (9559)",
                                                                       DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Robotic Delivery Device Dose Rate Units (9560)</summary>
DicomUID  DicomUID::RoboticDeliveryDeviceDoseRateUnits9560 = DicomUID{"1.2.840.10008.6.1.1311",///NOLINT
                                                                      "Robotic Delivery Device Dose Rate Units (9560)",
                                                                      DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Anatomic Structures (8134)</summary>
DicomUID  DicomUID::AnatomicStructures8134 = DicomUID{"1.2.840.10008.6.1.1312",///NOLINT
                                                      "Anatomic Structures (8134)", DicomUidType::ContextGroupName,
                                                      false};

///<summary>Context Group Name: Mediastinum Finding or Feature (6148)</summary>
DicomUID  DicomUID::MediastinumFindingOrFeature6148 = DicomUID{"1.2.840.10008.6.1.1313",///NOLINT
                                                               "Mediastinum Finding or Feature (6148)",
                                                               DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Mediastinum Anatomy (6149)</summary>
DicomUID  DicomUID::MediastinumAnatomy6149 = DicomUID{"1.2.840.10008.6.1.1314",///NOLINT
                                                      "Mediastinum Anatomy (6149)", DicomUidType::ContextGroupName,
                                                      false};

///<summary>Context Group Name: Vascular Ultrasound Report Document Titles (12100)</summary>
DicomUID  DicomUID::VascularUltrasoundReportDocumentTitles12100 = DicomUID{"1.2.840.10008.6.1.1315",///NOLINT
                                                                           "Vascular Ultrasound Report Document Titles (12100)",
                                                                           DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Parts of Organs (Non-Lateralized) (12130)</summary>
DicomUID  DicomUID::PartsOfOrgansNonLateralized12130 = DicomUID{"1.2.840.10008.6.1.1316",///NOLINT
                                                                "Parts of Organs (Non-Lateralized) (12130)",
                                                                DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Parts of Organs (Lateralized) (12131)</summary>
DicomUID  DicomUID::PartsOfOrgansLateralized12131 = DicomUID{"1.2.840.10008.6.1.1317",///NOLINT
                                                             "Parts of Organs (Lateralized) (12131)",
                                                             DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Treatment Termination Reasons (9561)</summary>
DicomUID  DicomUID::TreatmentTerminationReasons9561 = DicomUID{"1.2.840.10008.6.1.1318",///NOLINT
                                                               "Treatment Termination Reasons (9561)",
                                                               DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Radiotherapy Treatment Delivery Person Roles (9562)</summary>
DicomUID  DicomUID::RadiotherapyTreatmentDeliveryPersonRoles9562 = DicomUID{"1.2.840.10008.6.1.1319",///NOLINT
                                                                            "Radiotherapy Treatment Delivery Person Roles (9562)",
                                                                            DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Interlock Resolutions (9563)</summary>
DicomUID  DicomUID::InterlockResolutions9563 = DicomUID{"1.2.840.10008.6.1.1320",///NOLINT
                                                        "Interlock Resolutions (9563)", DicomUidType::ContextGroupName,
                                                        false};

///<summary>Context Group Name: Treatment Session Confirmation Assertions (9564)</summary>
DicomUID  DicomUID::TreatmentSessionConfirmationAssertions9564 = DicomUID{"1.2.840.10008.6.1.1321",///NOLINT
                                                                          "Treatment Session Confirmation Assertions (9564)",
                                                                          DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Treatment Tolerance Violation Causes (9565)</summary>
DicomUID  DicomUID::TreatmentToleranceViolationCauses9565 = DicomUID{"1.2.840.10008.6.1.1322",///NOLINT
                                                                     "Treatment Tolerance Violation Causes (9565)",
                                                                     DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Clinical Tolerance Violation Types (9566)</summary>
DicomUID  DicomUID::ClinicalToleranceViolationTypes9566 = DicomUID{"1.2.840.10008.6.1.1323",///NOLINT
                                                                   "Clinical Tolerance Violation Types (9566)",
                                                                   DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Machine Tolerance Violation Types (9567)</summary>
DicomUID  DicomUID::MachineToleranceViolationTypes9567 = DicomUID{"1.2.840.10008.6.1.1324",///NOLINT
                                                                  "Machine Tolerance Violation Types (9567)",
                                                                  DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Treatment Interlocks (9568)</summary>
DicomUID  DicomUID::TreatmentInterlocks9568 = DicomUID{"1.2.840.10008.6.1.1325",///NOLINT
                                                       "Treatment Interlocks (9568)", DicomUidType::ContextGroupName,
                                                       false};

///<summary>Context Group Name: Isocentric Patient Support Position Parameters (9569)</summary>
DicomUID  DicomUID::IsocentricPatientSupportPositionParameters9569 = DicomUID{"1.2.840.10008.6.1.1326",///NOLINT
                                                                              "Isocentric Patient Support Position Parameters (9569)",
                                                                              DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: RT Overridden Treatment Parameters (9570)</summary>
DicomUID  DicomUID::RTOverriddenTreatmentParameters9570 = DicomUID{"1.2.840.10008.6.1.1327",///NOLINT
                                                                   "RT Overridden Treatment Parameters (9570)",
                                                                   DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: EEG Leads (3030)</summary>
DicomUID  DicomUID::EEGLeads3030 = DicomUID{"1.2.840.10008.6.1.1328",///NOLINT
                                            "EEG Leads (3030)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Lead locations near or in muscles (3031)</summary>
DicomUID  DicomUID::LeadLocationsNearOrInMuscles3031 = DicomUID{"1.2.840.10008.6.1.1329",///NOLINT
                                                                "Lead locations near or in muscles (3031)",
                                                                DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Lead locations near peripheral nerves (3032)</summary>
DicomUID  DicomUID::LeadLocationsNearPeripheralNerves3032 = DicomUID{"1.2.840.10008.6.1.1330",///NOLINT
                                                                     "Lead locations near peripheral nerves (3032)",
                                                                     DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: EOG Leads (3033)</summary>
DicomUID  DicomUID::EOGLeads3033 = DicomUID{"1.2.840.10008.6.1.1331",///NOLINT
                                            "EOG Leads (3033)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Body Position Channels (3034)</summary>
DicomUID  DicomUID::BodyPositionChannels3034 = DicomUID{"1.2.840.10008.6.1.1332",///NOLINT
                                                        "Body Position Channels (3034)", DicomUidType::ContextGroupName,
                                                        false};

///<summary>Context Group Name: EEG Annotations – Neurophysiologic Enumerations (EEG) (3035)</summary>
DicomUID  DicomUID::EEGAnnotationsNeurophysiologicEnumerationsEEG3035 = DicomUID{"1.2.840.10008.6.1.1333",///NOLINT
                                                                                 "EEG Annotations Neurophysiologic Enumerations (EEG) (3035)",
                                                                                 DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: EMG Annotations – Neurophysiological Enumerations (EMG) (3036)</summary>
DicomUID  DicomUID::EMGAnnotationsNeurophysiologicalEnumerationsEMG3036 = DicomUID{"1.2.840.10008.6.1.1334",///NOLINT
                                                                                   "EMG Annotations Neurophysiological Enumerations (EMG) (3036)",
                                                                                   DicomUidType::ContextGroupName,
                                                                                   false};

///<summary>Context Group Name: EOG Annotations – Neurophysiological Enumerations (EOG) (3037)</summary>
DicomUID  DicomUID::EOGAnnotationsNeurophysiologicalEnumerationsEOG3037 = DicomUID{"1.2.840.10008.6.1.1335",///NOLINT
                                                                                   "EOG Annotations Neurophysiological Enumerations (EOG) (3037)",
                                                                                   DicomUidType::ContextGroupName,
                                                                                   false};

///<summary>Context Group Name: Pattern Events  (3038)</summary>
DicomUID  DicomUID::PatternEvents3038 = DicomUID{"1.2.840.10008.6.1.1336",///NOLINT
                                                 "Pattern Events  (3038)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Device-related and Environment-related Events (3039)</summary>
DicomUID  DicomUID::DeviceRelatedAndEnvironmentRelatedEvents3039 = DicomUID{"1.2.840.10008.6.1.1337",///NOLINT
                                                                            "Device-related and Environment-related Events (3039)",
                                                                            DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: EEG Annotations - Neurological Monitoring Measurements (3040)</summary>
DicomUID  DicomUID::EEGAnnotationsNeurologicalMonitoringMeasurements3040 = DicomUID{"1.2.840.10008.6.1.1338",///NOLINT
                                                                                    "EEG Annotations - Neurological Monitoring Measurements (3040)",
                                                                                    DicomUidType::ContextGroupName,
                                                                                    false};

///<summary>Context Group Name: OB-GYN Ultrasound Report Document Titles (12024)</summary>
DicomUID  DicomUID::OBGYNUltrasoundReportDocumentTitles12024 = DicomUID{"1.2.840.10008.6.1.1339",///NOLINT
                                                                        "OB-GYN Ultrasound Report Document Titles (12024)",
                                                                        DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Automation of Measurement (7230)</summary>
DicomUID  DicomUID::AutomationOfMeasurement7230 = DicomUID{"1.2.840.10008.6.1.1340",///NOLINT
                                                           "Automation of Measurement (7230)",
                                                           DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: OB-GYN Ultrasound Beam Path (12025)</summary>
DicomUID  DicomUID::OBGYNUltrasoundBeamPath12025 = DicomUID{"1.2.840.10008.6.1.1341",///NOLINT
                                                            "OB-GYN Ultrasound Beam Path (12025)",
                                                            DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Angle Measurements (7550)</summary>
DicomUID  DicomUID::AngleMeasurements7550 = DicomUID{"1.2.840.10008.6.1.1342",///NOLINT
                                                     "Angle Measurements (7550)", DicomUidType::ContextGroupName,
                                                     false};

///<summary>Context Group Name: Generic Purpose of Reference to Images and Coordinates in Measurements (7551)</summary>
DicomUID  DicomUID::GenericPurposeOfReferenceToImagesAndCoordinatesInMeasurements7551 = DicomUID{///NOLINT
        "1.2.840.10008.6.1.1343",///NOLINT
        "Generic Purpose of Reference to Images and Coordinates in Measurements (7551)", DicomUidType::ContextGroupName,
        false};

///<summary>Context Group Name: Generic Purpose of Reference to Images in Measurements (7552)</summary>
DicomUID  DicomUID::GenericPurposeOfReferenceToImagesInMeasurements7552 = DicomUID{"1.2.840.10008.6.1.1344",///NOLINT
                                                                                   "Generic Purpose of Reference to Images in Measurements (7552)",
                                                                                   DicomUidType::ContextGroupName,
                                                                                   false};

///<summary>Context Group Name: Generic Purpose of Reference to Coordinates in Measurements (7553)</summary>
DicomUID  DicomUID::GenericPurposeOfReferenceToCoordinatesInMeasurements7553 = DicomUID{///NOLINT
        "1.2.840.10008.6.1.1345",///NOLINT
        "Generic Purpose of Reference to Coordinates in Measurements (7553)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Fitzpatrick Skin Type (4401)</summary>
DicomUID  DicomUID::FitzpatrickSkinType4401 = DicomUID{"1.2.840.10008.6.1.1346",///NOLINT
                                                       "Fitzpatrick Skin Type (4401)", DicomUidType::ContextGroupName,
                                                       false};

///<summary>Context Group Name: History of Malignant Melanoma (4402)</summary>
DicomUID  DicomUID::HistoryOfMalignantMelanoma4402 = DicomUID{"1.2.840.10008.6.1.1347",///NOLINT
                                                              "History of Malignant Melanoma (4402)",
                                                              DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: History of Melanoma in Situ (4403)</summary>
DicomUID  DicomUID::HistoryOfMelanomaInSitu4403 = DicomUID{"1.2.840.10008.6.1.1348",///NOLINT
                                                           "History of Melanoma in Situ (4403)",
                                                           DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: History of Non-Melanoma Skin Cancer (4404)</summary>
DicomUID  DicomUID::HistoryOfNonMelanomaSkinCancer4404 = DicomUID{"1.2.840.10008.6.1.1349",///NOLINT
                                                                  "History of Non-Melanoma Skin Cancer (4404)",
                                                                  DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: History of Non-Melanoma Skin Cancer (4405)</summary>
DicomUID  DicomUID::HistoryOfNonMelanomaSkinCancer4405 = DicomUID{"1.2.840.10008.6.1.1350",///NOLINT
                                                                  "History of Non-Melanoma Skin Cancer (4405)",
                                                                  DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Patient Reported Lesion Characteristics (4406)</summary>
DicomUID  DicomUID::PatientReportedLesionCharacteristics4406 = DicomUID{"1.2.840.10008.6.1.1351",///NOLINT
                                                                        "Patient Reported Lesion Characteristics (4406)",
                                                                        DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Lesion Palpation Findings (4407)</summary>
DicomUID  DicomUID::LesionPalpationFindings4407 = DicomUID{"1.2.840.10008.6.1.1352",///NOLINT
                                                           "Lesion Palpation Findings (4407)",
                                                           DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Lesion Visual Findings (4408)</summary>
DicomUID  DicomUID::LesionVisualFindings4408 = DicomUID{"1.2.840.10008.6.1.1353",///NOLINT
                                                        "Lesion Visual Findings (4408)", DicomUidType::ContextGroupName,
                                                        false};

///<summary>Context Group Name: Lesion Visual Findings (4409)</summary>
DicomUID  DicomUID::LesionVisualFindings4409 = DicomUID{"1.2.840.10008.6.1.1354",///NOLINT
                                                        "Lesion Visual Findings (4409)", DicomUidType::ContextGroupName,
                                                        false};

///<summary>Context Group Name: Abdominopelvic Vessels (12125)</summary>
DicomUID  DicomUID::AbdominopelvicVessels12125 = DicomUID{"1.2.840.10008.6.1.1355",///NOLINT
                                                          "Abdominopelvic Vessels (12125)",
                                                          DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Numeric Value Failure Qualifier (43)</summary>
DicomUID  DicomUID::NumericValueFailureQualifier43 = DicomUID{"1.2.840.10008.6.1.1356",///NOLINT
                                                              "Numeric Value Failure Qualifier (43)",
                                                              DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Numeric Value Unknown Qualifier (44)</summary>
DicomUID  DicomUID::NumericValueUnknownQualifier44 = DicomUID{"1.2.840.10008.6.1.1357",///NOLINT
                                                              "Numeric Value Unknown Qualifier (44)",
                                                              DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Couinaud Liver Segments (7170)</summary>
DicomUID  DicomUID::CouinaudLiverSegments7170 = DicomUID{"1.2.840.10008.6.1.1358",///NOLINT
                                                         "Couinaud Liver Segments (7170)",
                                                         DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Liver Segmentation Types (7171)</summary>
DicomUID  DicomUID::LiverSegmentationTypes7171 = DicomUID{"1.2.840.10008.6.1.1359",///NOLINT
                                                          "Liver Segmentation Types (7171)",
                                                          DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Contraindications For XA Imaging (1201)</summary>
DicomUID  DicomUID::ContraindicationsForXAImaging1201 = DicomUID{"1.2.840.10008.6.1.1360",///NOLINT
                                                                 "Contraindications For XA Imaging (1201)",
                                                                 DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Neurophysiologic Stimulation Modes (3041)</summary>
DicomUID  DicomUID::NeurophysiologicStimulationModes3041 = DicomUID{"1.2.840.10008.6.1.1361",///NOLINT
                                                                    "Neurophysiologic Stimulation Modes (3041)",
                                                                    DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: Reported Value Types (10072)</summary>
DicomUID  DicomUID::ReportedValueTypes10072 = DicomUID{"1.2.840.10008.6.1.1362",///NOLINT
                                                       "Reported Value Types (10072)", DicomUidType::ContextGroupName,
                                                       false};

///<summary>Context Group Name: Value Timings (10073)</summary>
DicomUID  DicomUID::ValueTimings10073 = DicomUID{"1.2.840.10008.6.1.1363",///NOLINT
                                                 "Value Timings (10073)", DicomUidType::ContextGroupName, false};

///<summary>Context Group Name: RDSR Frame of Reference Origins (10074)</summary>
DicomUID  DicomUID::RDSRFrameOfReferenceOrigins10074 = DicomUID{"1.2.840.10008.6.1.1364",///NOLINT
                                                                "RDSR Frame of Reference Origins (10074)",
                                                                DicomUidType::ContextGroupName, false};




