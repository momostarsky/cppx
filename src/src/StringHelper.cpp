#include "../include/StringHelper.h"
#include <algorithm>

//
// Created by dhz on 2022/3/21.
//

/**!
 * 按指定字符分割字符串
 * @param strValue   原始字符串
 * @param sepChar   分割字符
 * @param array   结果集
 */
void StringHelper::splitStringToArray(std::string &strValue, char sepChar, std::list<std::string> &array) {
    std::string buffer (strValue);
    std::string::size_type startPos = 0;
    std::string::size_type fpos = buffer.find(sepChar);
    while (fpos != std::string::npos) {
        auto seg = buffer.substr(startPos, fpos);
        if (!seg.empty()) {
            array.push_back(seg);
        }

        buffer = buffer.substr(fpos + 1);
        fpos = buffer.find('\\');
    }
    auto gcf = buffer.substr(startPos);
    if (!gcf.empty()) {
        array.push_back(gcf);
    }
}
