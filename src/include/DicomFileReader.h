//
// Created by dhz on 2021/12/31.
//

#ifndef CPPX_DICOMFILEREADER_H
#define CPPX_DICOMFILEREADER_H

#include "DicomReader.h"

class DicomFileReader : public DicomReader {

public:
    explicit DicomFileReader(const std::string &filepath)
            : DicomReader(), fd(nullptr), m_offset(-1), m_len(0), m_path(filepath) {


        fd = fopen(filepath.c_str(), "rb");
        if (fd) {
            m_offset = 0;
            struct stat sb{};
            if (!stat(m_path.c_str(), &sb)) {
                m_len = (int) sb.st_size;
            }

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

    bool Seek(int positon, SeekOnce seedOnce) override;


    bool Read(const char *buffer, size_t size) override;


    int Postion() const override;



    ~DicomFileReader() override;

    bool Endof() override;



protected:
    const std::string &m_path;
    int m_offset;
    int m_len;
    FILE *fd;
};


#endif //CPPX_DICOMFILEREADER_H
