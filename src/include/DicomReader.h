//
// Created by dhz on 2021/12/30.
//

#ifndef CPPX_DICOMREADER_H
#define CPPX_DICOMREADER_H

#include "comm.h"

class DicomReader {

public:
    explicit DicomReader() = default;

    DicomReader(const DicomReader &) = delete;

    DicomReader &operator=(const DicomReader &) = delete;

    DicomReader(DicomReader &&) = delete;

    virtual  ~DicomReader() = default;


public:
    /***
     * 是否可以调用Seek
     * @return
     */
    virtual bool Seekable() const;

    /***
     * 文件长度，错误返回 -1
     * @return
     */

    virtual int Length() const;

    /***
       * 文件长度，错误返回 -1
       * @return
       */

    virtual int Postion() const;

    /***
       * 文件长度，错误返回 -1
       * @return
       */

    virtual bool Seek(int positon, SeekOnce seedOnce);



    virtual  bool   Read(const char *buffer, size_t size ) ;


    virtual  bool   Endof() =0;
};


#endif //CPPX_DICOMREADER_H
