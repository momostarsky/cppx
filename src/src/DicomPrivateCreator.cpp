//
// Created by dhz on 2021/12/27.
//

#include "../include/DicomPrivateCreator.h"


DicomPrivateCreator::DicomPrivateCreator(DicomPrivateCreator &&src) noexcept
        : m_Creator(src.m_Creator) {

    src.m_Creator = nullptr;

}

DicomPrivateCreator::DicomPrivateCreator(std::string &creator) : m_Creator(creator) {

}

DicomPrivateCreator &DicomPrivateCreator::operator=(const DicomPrivateCreator &src) {
    this->m_Creator = src.m_Creator;
    return *this;
}


DicomPrivateCreator::DicomPrivateCreator(const DicomPrivateCreator &src) = default;
