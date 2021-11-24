//
// Created by dhz on 2021/11/23.
//

#ifndef CPPX_UNITY_H
#define CPPX_UNITY_H

namespace Hzjp{

    class Unity {

    public:
        Unity();
        virtual  ~Unity();

        double add_numbers(const double f1, const double f2);

        double subtract_numbers(const double f1, const double f2);

        double multiply_numbers(const double f1, const double f2);
    };

}

#endif //CPPX_UNITY_H
