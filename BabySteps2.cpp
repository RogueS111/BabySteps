//
// Created by Rogue on 5/23/2022.
//

#ifndef BABYSTEPS_BABYSTEPS2_H
#define BABYSTEPS_BABYSTEPS2_H

#include "BabySteps2.h"
#include "BabySteps.h"


class BabySteps2 : public BabySteps {
public:

    uint32_t getMeMyValue(){
        int value = 0;
        for (int i=0; i<5; i++)
        {
            if (N[i] == 10) {
                value += 1;
            }
        }
        return value;
    }
};


#endif //BABYSTEPS_BABYSTEPS2_H
