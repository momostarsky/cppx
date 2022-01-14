//
// Created by dhz on 2022/1/12.
//

#include "../include/DicomDictionary.h"

DicomDictionary::DicomDictionary() {

    for (size_t scanDescriptions(0);
         m_tagsDescription[scanDescriptions].m_tagId != (std::uint32_t) 0xffffffff; ++scanDescriptions) {
        registerTag(m_tagsDescription[scanDescriptions].m_tagId,
                    m_tagsDescription[scanDescriptions].m_tagMask,
                    m_tagsDescription[scanDescriptions].m_tagDescription,
                    m_tagsDescription[scanDescriptions].m_tagKeyword,
                    m_tagsDescription[scanDescriptions].m_vr0, m_tagsDescription[scanDescriptions].m_vr1,
                    m_tagsDescription[scanDescriptions].m_multiplicityMin,
                    m_tagsDescription[scanDescriptions].m_multiplicityMax,
                    m_tagsDescription[scanDescriptions].m_multiplicityStep);

    }
}

void
DicomDictionary::registerTag(std::uint32_t tagId, std::uint32_t tagMask, const wchar_t *tagName, const char *tagKeyword,
                             const DicomVR *vr0, const DicomVR *vr1, std::uint32_t multiplicityMin,
                             std::uint32_t multiplicityMax,
                             std::uint32_t multiplicityStep) {

    std::uint32_t increaseValue = 1u;
    while (tagMask != 0xffffffff && (increaseValue & tagMask) != 0) {
        increaseValue <<= 1;
    }

    for (std::uint32_t registerTagId(tagId); (registerTagId & tagMask) == tagId; registerTagId += increaseValue) {

        tagDescription_t newElement{};
        newElement.m_tagDescription = tagName;
        newElement.m_tagKeyword = tagKeyword;
        newElement.m_vr0 = vr0;
        newElement.m_vr1 = vr1;
        newElement.m_multiplicityMin = multiplicityMin;
        newElement.m_multiplicityMax = multiplicityMax;
        newElement.m_multiplicityStep = multiplicityStep;
        m_dicomDict[registerTagId] = newElement;
    }


}

DicomDictionary *DicomDictionary::getDicomDictionary() {
    static DicomDictionary m_imbxDicomDictionary;
    return &m_imbxDicomDictionary;
}

tagDescription_t DicomDictionary::getTagDescriptions(std::uint16_t groupId, std::uint16_t tagId) const {

    std::uint32_t tagDWordId = (((std::uint32_t) groupId) << 16) | (std::uint32_t) tagId;

    auto findIterator = m_dicomDict.find(tagDWordId);
    if (findIterator == m_dicomDict.end()) {
        return {};
    }

    return findIterator->second;


}