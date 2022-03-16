//
// Created by dhz on 2022/3/16.
//

#ifndef CPPX_ENDIAN_H
#define CPPX_ENDIAN_H

#include <string>
enum class tByteOrdering : int {
    lowByteEndian = 1,  ///< the byte ordering is low endian: the least significant bytes of a word are stored first
    highByteEndian = 2  ///< the byte ordering is high endian: the most significant bytes of a word are stored first
};

class EndianConvert {

public:

    static void adjustEndian(std::uint8_t *pBuffer, size_t wordLength, tByteOrdering endianType,
                             size_t words = 1);

    static void reverseEndian(std::uint8_t *pBuffer, size_t wordLength, size_t words = 1);

    static std::uint16_t adjustEndian(std::uint16_t buffer, tByteOrdering endianType);

    static std::uint32_t adjustEndian(std::uint32_t buffer, tByteOrdering endianType);

    static std::uint64_t adjustEndian(std::uint64_t buffer, tByteOrdering endianType);

    static tByteOrdering getPlatformEndian();


};


#endif //CPPX_ENDIAN_H
