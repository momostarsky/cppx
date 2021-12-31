//
// Created by dhz on 2021/12/27.
//

#ifndef CPPX_DICOMPRIVATECREATOR_H
#define CPPX_DICOMPRIVATECREATOR_H


#include <string>

class DicomPrivateCreator {
public:
    explicit DicomPrivateCreator(std::string& creator);

    DicomPrivateCreator(const DicomPrivateCreator& src) ;

    DicomPrivateCreator& operator=(const DicomPrivateCreator&);

    DicomPrivateCreator(DicomPrivateCreator &&src ) noexcept ;

    ~DicomPrivateCreator()=default;

    std::string&  getCreator() const {return m_Creator;}

private:
    std::string&  m_Creator;

};


#endif //CPPX_DICOMPRIVATECREATOR_H
