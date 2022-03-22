//
// Created by dhz on 2022/3/22.
//

#ifndef CPPX_PRIVATEDICTIONARY_H
#define CPPX_PRIVATEDICTIONARY_H

#include <map>
#include <list>
#include "dicts.h"

class PrivateDictionary {
public:

    static PrivateDictionary *getPrivateDictionary();
    bool   PrivateCreator(const std::string& privateCreator);

    struct tagPriDesc_t   PrivateTag(const std::string& privateCreator, uint16_t groupId, uint16_t elementId);


protected:
    PrivateDictionary();
    typedef std::map<std::string, std::list<tagPriDesc_t>> PrivatorMap;
    PrivatorMap privateMaps;

};


#endif //CPPX_PRIVATEDICTIONARY_H
