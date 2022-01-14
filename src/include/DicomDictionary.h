//
// Created by dhz on 2022/1/12.
//

#ifndef CPPX_DICOMDICTIONARY_H
#define CPPX_DICOMDICTIONARY_H


#include <map>
#include "dicts.h"
class DicomDictionary {

public:
    DicomDictionary();
    static DicomDictionary* getDicomDictionary();
    tagDescription_t getTagDescriptions(uint16_t groupId, uint16_t tagId) const;
protected:
    typedef std::map<std::uint32_t, tagDescription_t> tDicomDictionary;
    tDicomDictionary m_dicomDict;

    void
    registerTag(uint32_t tagId, uint32_t tagMask, const wchar_t *tagName, const char *tagKeyword, const DicomVR *vr0,
                const DicomVR *vr1, uint32_t multiplicityMin, uint32_t multiplicityMax, uint32_t multiplicityStep);


};


#endif //CPPX_DICOMDICTIONARY_H
