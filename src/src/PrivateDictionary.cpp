//
// Created by dhz on 2022/3/22.
//

#include "../include/privDicts.h"
#include "../include/tinyxml2.h"
#include "../include/PrivateDictionary.h"
#include <algorithm>

#include <iostream>


PrivateDictionary *PrivateDictionary::getPrivateDictionary() {
    static PrivateDictionary m_imbxDicomDictionary;
    return &m_imbxDicomDictionary;
}

PrivateDictionary::PrivateDictionary() {
    tinyxml2::XMLDocument doc;
    doc.Parse(PRIVATE_DICTS);
    auto rootElement = doc.FirstChildElement("dictionaries");
    auto dictElement = rootElement->FirstChildElement("dictionary");
    while (dictElement != nullptr) {

        std::string creator = dictElement->Attribute("creator");
//        std::cout << "Private Creator:" << creator << std::endl;

        auto tagElement = dictElement->FirstChildElement("tag");

        std::list<tagPriDesc_t> dicts;
//        <tag group="0029" element="xx26" vr="UL" vm="1">ROI Shape</tag>
        while (tagElement != nullptr) {

            std::string group = tagElement->Attribute("group");
            std::string element = tagElement->Attribute("element");
            std::string vr = tagElement->Attribute("vr");
            std::string vm = tagElement->Attribute("vm");
            std::string key = tagElement->GetText();

            struct tagPriDesc_t ctag{
                    group, element, vr, vm, key
            };
            dicts.push_back(ctag);
            tagElement = tagElement->NextSiblingElement();
        }

        privateMaps[creator] = dicts;
        dictElement = dictElement->NextSiblingElement();
    }
}

bool PrivateDictionary::PrivateCreator(const std::string &privateCreator) {
    return privateMaps.find(privateCreator) != privateMaps.end();
}

struct tagPriDesc_t PrivateDictionary::PrivateTag(const std::string &privateCreator, uint16_t groupId, uint16_t elementId) {
    struct tagPriDesc_t ctag{};
    char grpstr[10] = {0};
    char elmstr[10] = {0};
    snprintf(grpstr, 8, "%04x", groupId);
    snprintf(elmstr, 8, "xx%02x", elementId);
    if (privateMaps.find(privateCreator) == privateMaps.end()) {
        return {};
    }

    std::string grupStr(grpstr);
    std::string elemStr(elmstr);
    auto tags = privateMaps[privateCreator];

    auto iter = std::find_if(tags.begin(), tags.end(), [&](const tagPriDesc_t &item) {

        return item.m_group == grupStr && item.m_element == elemStr;

    });
    if (iter == tags.end()) {
        return {};
    }
    return *iter;

}

