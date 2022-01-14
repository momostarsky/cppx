//
// Created by dhz on 2021/12/28.
//

#include <regex>
#include "../include/comm.h"

const char * const DicomVR_AE = "AE";
const char * const DicomVR_AS = "AS";
const char * const DicomVR_AT = "AT";
const char * const DicomVR_CS = "CS";
const char * const DicomVR_DA = "DA";
const char * const DicomVR_DS = "DS";
const char * const DicomVR_DT = "DT";
const char * const DicomVR_FD = "FD";
const char * const DicomVR_FL = "FL";
const char * const DicomVR_IS = "IS";
const char * const DicomVR_LO = "LO";
const char * const DicomVR_LT = "LT";
const char * const DicomVR_OB = "OB";
const char * const DicomVR_OD = "OD";
const char * const DicomVR_OF = "OF";
const char * const DicomVR_OL = "OL";
const char * const DicomVR_OV = "OV";
const char * const DicomVR_OW = "OW";
const char * const DicomVR_PN = "PN";
const char * const DicomVR_SH = "SH";
const char * const DicomVR_SL = "SL";
const char * const DicomVR_SQ = "SQ";
const char * const DicomVR_SS = "SS";
const char * const DicomVR_ST = "ST";
const char * const DicomVR_SV = "SV";
const char * const DicomVR_TM = "TM";
const char * const DicomVR_UC = "UC";
const char * const DicomVR_UI = "UI";
const char * const DicomVR_UL = "UL";
const char * const DicomVR_UN = "UN";
const char * const DicomVR_UR = "UR";
const char * const DicomVR_US = "US";
const char * const DicomVR_UT = "UT";
const char * const DicomVR_UV = "UV";
const char * const DicomVR_NONE = "NONE";

void StringTrimStartEnd(std::string &strBase, std::string &strDest) {

    std::regex reg("(^\\s*)|(\\s*$)");

    strDest = std::regex_replace(strBase, reg, "");

}

void StringReplace(std::string &strBase, const std::string &strSrc, const std::string &strDes) {
    //参数1：待修改的字符串；参数2：要替换的内容；参数3：替换后的内容，比如把AA替换成BB，这里要填的是BB
    //替换完后会返回给原字符串变量也就是strBase。
    std::string::size_type pos = 0;
    std::string::size_type srcLen = strSrc.size();
    std::string::size_type desLen = strDes.size();
    pos = strBase.find(strSrc, pos);
    while ((pos != std::string::npos)) {
        strBase.replace(pos, srcLen, strDes);
        pos = strBase.find(strSrc, (pos + desLen));
    }
}


void Split(const std::string &src, const std::vector<std::string> &separators, std::vector<std::string> &dest) {
    std::string _sep = "$";
    std::string txt(src);
    for (const auto &sp: separators) {
        if (sp == _sep) {
            continue;
        }
        StringReplace(txt, sp, _sep);
    }


    std::regex reg("\\${2,}");

    txt = std::regex_replace(txt, reg, "$");


    std::string substring;
    std::string::size_type start = 0, index;
    dest.clear();
    index = txt.find_first_of(_sep, start);
    do {
        if (index != std::string::npos) {
            substring = txt.substr(start, index - start);
            if (!substring.empty()) {
                dest.push_back(substring);
            }

            start = index + _sep.size();
            index = txt.find(_sep, start);
            if (start == std::string::npos) {
                break;
            }
        }
    } while (index != std::string::npos);
    //the last part
    if (start != std::string::npos) {
        substring = txt.substr(start);
        if (!substring.empty()) {
            dest.push_back(substring);
        }

    }

}


void int4to_bytes(uint32_t num, char bytes[4] /*in array size must be 4*/) {
    //turn integer to bytes array
    bytes[0] = (char) num;
    bytes[1] = (char) (num >> 8);
    bytes[2] = (char) (num >> 16);
    bytes[3] = (char) (num >> 24);
}


uint32_t bytesto_int4(const char bytes[4]) {
    //https://blog.csdn.net/weixin_40583386/article/details/86152852
    //turn bytes array to integer
    uint32_t num = bytes[0] & 0xFF;
    num |= ((bytes[1] << 8) & 0xFF00);
    num |= ((bytes[2] << 16) & 0xFF0000);
    num |= ((bytes[3] << 24) & 0xFF000000);
    return num;
}

uint16_t bytesto_int2(const char bytes[2]) {
    //https://blog.csdn.net/weixin_40583386/article/details/86152852
    //turn bytes array to integer
    uint16_t num = bytes[0] & 0xFF;
    num |= ((bytes[1] << 8) & 0xFF00);
    return num;
}

uint64_t bytesto_int8(const char bytes[8] /*size must be 8*/) {
    //turn bytes array to integer
    uint64_t num = bytes[0] & 0xFF;
    num |= (((uint64_t) bytes[1] << 8) & 0xFF00);
    num |= (((uint64_t) bytes[2] << 16) & 0xFF0000);
    num |= (((uint64_t) bytes[3] << 24) & 0xFF000000);
    num |= (((uint64_t) bytes[4] << 32) & 0xFF00000000);
    num |= (((uint64_t) bytes[5] << 40) & 0xFF0000000000);
    num |= (((uint64_t) bytes[6] << 48) & 0xFF000000000000);
    num |= (((uint64_t) bytes[7] << 56) & 0xFF00000000000000);
    return num;
}

void int8to_bytes(uint64_t num, char bytes[8] /*in array size must be 8*/) {
    bytes[0] = (char) num;
    bytes[1] = (char) (num >> 8);
    bytes[2] = (char) (num >> 16);
    bytes[3] = (char) (num >> 24);
    bytes[4] = (char) (num >> 32);
    bytes[5] = (char) (num >> 40);
    bytes[6] = (char) (num >> 48);
    bytes[7] = (char) (num >> 56);
}