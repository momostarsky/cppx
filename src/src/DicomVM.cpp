//
// Created by dhz on 2021/12/27.
//

#include <string>
#include <vector>
#include <regex>
#include "../include/comm.h"
#include "../include/DicomVM.h"

DicomVM DicomVM::ParseVM(std::string &s) {

    std::vector<std::string> parts;
    std::vector<std::string> seps{"-", " ", "or"};
    const std::string &vmstr(s);
    Split(vmstr, seps, parts);
    char *endptr = nullptr;
    DicomVM vm{0, 0, 0};
    if (parts.size() == 1) {
        auto vl = (int32_t) strtol(parts.at(0).data(), &endptr, 10);
        vm.Minimum = vl;
        vm.Maximum = vl;
        vm.Multiplicity = vl;

    } else {
        auto vl = (int32_t) strtol(parts.at(0).data(), &endptr, 10);
        vm.Minimum = vl;
        vm.Multiplicity = 1;
        std::regex reg("n", std::regex::icase);
        if (std::regex_search(parts.at(1), reg)) {
            vm.Maximum = INT32_MAX;
            std::string rtext = std::regex_replace(parts.at(1).data(), reg, "");
            if (rtext.length() > 0) {
                vm.Multiplicity = (int32_t) strtol(rtext.data(), &endptr, 10);
            }
        } else {
            // not endsWith N
            vm.Maximum = (int32_t) strtol(parts.at(1).data(), &endptr, 10);
        }
    }
    return vm;

}
