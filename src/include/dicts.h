//
// Created by dhz on 2022/1/12.
//

#ifndef CPPX_DICTS_H
#define CPPX_DICTS_H

#include "comm.h"
#include "DicomVR.h"

struct tagDescription_t {
    std::uint32_t m_tagId{0};            ///< Tag group and id
    std::uint32_t m_tagMask{0};          ///< Mask used to compare the tag
    const wchar_t *m_tagDescription{nullptr};        ///< Tag description
    const char *m_tagKeyword{nullptr};               ///< Tag keyword
    std::uint32_t m_multiplicityMin{1};  ///< Minimum multiplicity
    std::uint32_t m_multiplicityMax{0};  ///< Maximum multiplicity
    std::uint32_t m_multiplicityStep{1}; ///< Multiplicity increment step
    const DicomVR *m_vr0{nullptr};                          ///< Default VR
    const DicomVR *m_vr1{nullptr};                          ///< Alternative VR
};
extern const tagDescription_t m_tagsDescription[4510];

#endif //CPPX_DICTS_H
