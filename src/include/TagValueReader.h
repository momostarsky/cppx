//
// Created by dhz on 2022/1/12.
//

#ifndef CPPX_TAGVALUEREADER_H
#define CPPX_TAGVALUEREADER_H


#include <cstddef>
#include <list>

template<typename T>
class TagValueReader {
public:
    TagValueReader() = default;
    size_t Size();
    std::list<T> Values();
protected:
    std::list<T> m_values;

};

template<typename T>
size_t TagValueReader<T>::Size() {
    return m_values.size();
}

template<typename T>
std::list<T> TagValueReader<T>::Values() {
    return m_values;
}


#endif //CPPX_TAGVALUEREADER_H
