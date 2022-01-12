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


extern const char * const DicomVR_AE ;
extern const char * const DicomVR_AS ;
extern const char * const DicomVR_AT ;
extern const char * const DicomVR_CS ;
extern const char * const DicomVR_DA ;
extern const char * const DicomVR_DS ;
extern const char * const DicomVR_DT ;
extern const char * const DicomVR_FD ;
extern const char * const DicomVR_FL ;
extern const char * const DicomVR_IS ;
extern const char * const DicomVR_LO ;
extern const char * const DicomVR_LT ;
extern const char * const DicomVR_OB ;
extern const char * const DicomVR_OD ;
extern const char * const DicomVR_OF ;
extern const char * const DicomVR_OL ;
extern const char * const DicomVR_OV ;
extern const char * const DicomVR_OW ;
extern const char * const DicomVR_PN ;
extern const char * const DicomVR_SH ;
extern const char * const DicomVR_SL ;
extern const char * const DicomVR_SQ ;
extern const char * const DicomVR_SS ;
extern const char * const DicomVR_ST ;
extern const char * const DicomVR_SV ;
extern const char * const DicomVR_TM ;
extern const char * const DicomVR_UC ;
extern const char * const DicomVR_UI ;
extern const char * const DicomVR_UL ;
extern const char * const DicomVR_UN ;
extern const char * const DicomVR_UR ;
extern const char * const DicomVR_US ;
extern const char * const DicomVR_UT ;
extern const char * const DicomVR_UV ;
extern const char * const DicomVR_NONE  ;



void StringReplace(std::string &strBase, const std::string &strSrc, const std::string &strDes);

void StringTrimStartEnd(std::string &strBase, std::string &strDest);

void Split(const std::string &src, const std::vector<std::string> &separators, std::vector<std::string> &dest);


void int4to_bytes(uint32_t num, char bytes[4] /*in array size must be 4*/);

uint32_t bytesto_int4(const char bytes[4]);

uint16_t bytesto_int2(const char bytes[2]);

uint64_t bytesto_int8(const char bytes[8] /*size must be 8*/);

void int8to_bytes(uint64_t num, char bytes[8] /*in array size must be 8*/);


#endif //CPPX_COMM_H