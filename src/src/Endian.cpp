//
// Created by dhz on 2022/3/16.
//

#include "../include/Endian.h"


static const std::uint16_t m_endianCheck(0x00ff);
static std::uint8_t const *const pBytePointer((std::uint8_t *) &m_endianCheck);
static const tByteOrdering m_platformByteOrder(
        (*pBytePointer) == 0xff ? tByteOrdering::lowByteEndian : tByteOrdering::highByteEndian);


void EndianConvert::reverseEndian(std::uint8_t *pBuffer, size_t wordLength, size_t words) {
    switch (wordLength) {
        case 2: {
            auto *pWord((std::uint16_t *) pBuffer);
            for (size_t scanWords = words; scanWords != 0; --scanWords) {
                *pWord = (std::uint16_t) (((*pWord & 0x00ff) << 8) | ((*pWord & 0xff00) >> 8));
                ++pWord;
            }
        }
            return;
        case 4: {
            auto *pDWord((std::uint32_t *) pBuffer);
            for (size_t scanWords = words; scanWords != 0; --scanWords) {
                *pDWord =
                        ((*pDWord & 0xff000000) >> 24) | ((*pDWord & 0x00ff0000) >> 8) | ((*pDWord & 0x0000ff00) << 8) |
                        ((*pDWord & 0x000000ff) << 24);
                ++pDWord;
            }
        }
            return;
        case 8: {
            auto *pQWord((std::uint64_t *) pBuffer);
            for (std::uint64_t scanWords = words; scanWords != 0; --scanWords) {
                *pQWord =
                        ((*pQWord & 0xff00000000000000) >> 56) |
                        ((*pQWord & 0x00ff000000000000) >> 40) |
                        ((*pQWord & 0x0000ff0000000000) >> 24) |
                        ((*pQWord & 0x000000ff00000000) >> 8) |
                        ((*pQWord & 0x00000000ff000000) << 8) |
                        ((*pQWord & 0x0000000000ff0000) << 24) |
                        ((*pQWord & 0x000000000000ff00) << 40) |
                        ((*pQWord & 0x00000000000000ff) << 56);
                ++pQWord;
            }
        }
            return;
    }

}

///////////////////////////////////////////////////////////
//
// Adjust the byte ordering of pBuffer
//
///////////////////////////////////////////////////////////
void EndianConvert::adjustEndian(std::uint8_t *pBuffer, const size_t wordLength, const tByteOrdering endianType,
                                 const size_t words /* =1 */) {
    if (endianType != m_platformByteOrder && wordLength >= 2u) {
        reverseEndian(pBuffer, wordLength, words);
    }
}

std::uint16_t EndianConvert::adjustEndian(std::uint16_t buffer, const tByteOrdering endianType) {
    if (endianType == m_platformByteOrder) {
        return buffer;
    }
    return (std::uint16_t) (((buffer & 0xff00) >> 8) | ((buffer & 0xff) << 8));
}

std::uint32_t EndianConvert::adjustEndian(std::uint32_t buffer, const tByteOrdering endianType) {
    if (endianType == m_platformByteOrder) {
        return buffer;
    }
    return (std::uint32_t) (
            ((buffer & 0xff000000) >> 24) |
            ((buffer & 0x00ff0000) >> 8) |
            ((buffer & 0x0000ff00) << 8) |
            ((buffer & 0x000000ff) << 24));
}

std::uint64_t EndianConvert::adjustEndian(std::uint64_t buffer, const tByteOrdering endianType) {
    if (endianType == m_platformByteOrder) {
        return buffer;
    }
    return (std::uint64_t) (
            ((buffer & 0xff00000000000000) >> 56) |
            ((buffer & 0x00ff000000000000) >> 40) |
            ((buffer & 0x0000ff0000000000) >> 24) |
            ((buffer & 0x000000ff00000000) >> 8) |
            ((buffer & 0x00000000ff000000) << 8) |
            ((buffer & 0x0000000000ff0000) << 24) |
            ((buffer & 0x000000000000ff00) << 40) |
            ((buffer & 0x00000000000000ff) << 56));
}

tByteOrdering EndianConvert::getPlatformEndian() {
    return m_platformByteOrder;
}


