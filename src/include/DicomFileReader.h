//
// Created by dhz on 2021/12/31.
//

#ifndef CPPX_DICOMFILEREADER_H
#define CPPX_DICOMFILEREADER_H

#include "DicomReader.h"

class DicomFileReader : public DicomReader {

public:
    explicit DicomFileReader(const std::string &filepath) : DicomReader(), fd(nullptr), m_offset(-1), m_path(filepath) {


        fd = fopen(filepath.c_str(), "rb");
        if (fd) {
            m_offset = 0;
        }
    }

    DicomFileReader(const DicomFileReader &) = delete;

    DicomFileReader &operator=(const DicomFileReader &) = delete;

    DicomFileReader(DicomFileReader &&) = delete;

    const std::string &FilePath() const {
        return m_path;
    }

    int Length() const override;

    bool Seekable() const override;

    int Seek(int positon, SeekOnce seedOnce) override;




    int Postion() const override;

    ~DicomFileReader() override;


protected:
    const std::string &m_path;
    int m_offset;
    FILE *fd;
};


#endif //CPPX_DICOMFILEREADER_H
