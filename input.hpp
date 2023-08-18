//
// Created by KAVOSH on 8/18/2023.
//
#ifndef COVV_GME_INPUT_HPP
#define COVV_GME_INPUT_HPP
#include <iostream>
#include <limits>

namespace input{

    enum class MonBe{
        Run,
        Fight,
    };

    MonBe getMoBeInput()
    {
        char c{};

        while(true) {
            std::cout << "run or fight(R, F)" << std::endl;
            std::cin>>c;

            switch(c){
                case 'R': return MonBe::Run;
                case 'F': return MonBe::Fight;
                default: std::cout<<"what is this. just run or fight."<<std::endl;
            }

            if(!std::cin){
                std::cin.clear();

            }
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
    }


}

#endif //COVV_GME_INPUT_HPP
