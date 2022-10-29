//
// Created by Rogue on 5/16/2022.
//

#include <iostream>
#include "BabySteps2.h"
#include "BabySteps.h"


int main() {
    BabySteps2 babysteps;

    std::cout << "Maximum: " << babysteps.max() << std::endl;
    std::cout << "Minimum: " << babysteps.min() << std::endl;
    std::cout << "Tens Count: " << babysteps.getMeMyValue() << std::endl;
    babysteps.set(2, 1);
    std::cout << "Index Value: " << babysteps.get(2) << std::endl;


    return 0;
}