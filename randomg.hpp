//
// Created by KAVOSH on 8/18/2023.
//

#ifndef COVV_GME_RANDOMG_HPP
#define COVV_GME_RANDOMG_HPP

#include <random>

namespace random{
    inline std::random_device rd;
    inline std::mt19937 mt{rd()};

    template<int prec>
    inline bool putP()
    {
        static std::uniform_int_distribution<> uid(0, 100);
        return uid(mt) <= prec;

    }
}

#endif //COVV_GME_RANDOMG_HPP
