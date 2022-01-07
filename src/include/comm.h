//
// Created by dhz on 2021/12/27.
//

#ifndef CPPX_COMM_H
#define CPPX_COMM_H

#include <cstring>
#include <cstdint>
#include <memory>
#include <utility>
#include <vector>

/***
 * 文件流跳转方向
 */
//　SEEK_SET： 文件开头
//　　SEEK_CUR： 当前位置
//　　SEEK_END： 文件结尾
// 其中SEEK_SET,SEEK_CUR和SEEK_END依次为0，1和2.
enum class SeekOnce : int {
    /***
     * 从当前位置
     */
    Current = 0,

    /***
     * 相对于文件尾巴
     */

    Begin = 1,
    /***
     * 相对于文件头
     */
    End = 2,
};


class DicomVRCode {
public:

    DicomVRCode() noexcept {
        mCode = "NONE";
    }

    explicit DicomVRCode(const char *code) noexcept: mCode(code) {


    }

    explicit operator std::string() {
        return mCode;
    }

    bool operator==(DicomVRCode &other) const {
        return this->mCode == other.mCode;
    }

    explicit operator const char *() {
        return mCode.c_str();
    }

    static DicomVRCode AE;
    static DicomVRCode AS;
    static DicomVRCode AT;
    static DicomVRCode CS;
    static DicomVRCode DA;
    static DicomVRCode DS;
    static DicomVRCode DT;
    static DicomVRCode FD;
    static DicomVRCode FL;
    static DicomVRCode IS;
    static DicomVRCode LO;
    static DicomVRCode LT;
    static DicomVRCode OB;
    static DicomVRCode OD;
    static DicomVRCode OF;
    static DicomVRCode OL;
    static DicomVRCode OV;
    static DicomVRCode OW;
    static DicomVRCode PN;
    static DicomVRCode SH;
    static DicomVRCode SL;
    static DicomVRCode SQ;
    static DicomVRCode SS;
    static DicomVRCode ST;
    static DicomVRCode SV;
    static DicomVRCode TM;
    static DicomVRCode UC;
    static DicomVRCode UI;
    static DicomVRCode UL;
    static DicomVRCode UN;
    static DicomVRCode UR;
    static DicomVRCode US;
    static DicomVRCode UT;
    static DicomVRCode UV;
    static DicomVRCode NONE;
private:
    std::string mCode;
};

void StringReplace(std::string &strBase, const std::string &strSrc, const std::string &strDes);

void StringTrimStartEnd(std::string &strBase, std::string &strDest);

void Split(const std::string &src, const std::vector<std::string> &separators, std::vector<std::string> &dest);



void int4to_bytes(uint32_t num, char bytes[4] /*in array size must be 4*/)  ;

uint32_t bytesto_int4(const char bytes[4])  ;

uint16_t bytesto_int2(const char bytes[2])  ;

uint64_t bytesto_int8(const char bytes[8] /*size must be 8*/) ;

void int8to_bytes(uint64_t num, char bytes[8] /*in array size must be 8*/)  ;


#endif //CPPX_COMM_H