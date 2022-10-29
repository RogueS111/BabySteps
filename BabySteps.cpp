//
// Created by Rogue on 5/17/2022.
//

#include <cstdint>
#include "BabySteps.h"

    uint16_t N[5] = {16, 4, 21, 5, 0};

    BabySteps::BabySteps() {}

    BabySteps::~BabySteps() {}

    uint16_t BabySteps::max() {
        uint16_t maximum = N[0];
        for (int i=1; i<6; i++){
            if (N[i] > maximum && i != 5){
                maximum = N[i];
            }
        }
        return maximum;
    }

    uint16_t BabySteps::min(){
        uint16_t minimum = N[0];
        for (int i=1; i<6; i++){
            if (N[i] < minimum){
                minimum = N[i];
            }
        }
        return minimum;
    }

     uint32_t BabySteps::getMeMyValue(){
        int zeroCount = 0;
        for (int i=0; i<5; i++) {
            if (N[i] == 0){
                zeroCount += 1;
            }
        }
        return zeroCount;
    }

    void BabySteps::set(uint32_t index, uint16_t value) {
        N[index] = value;
    }

    uint16_t BabySteps::get(uint32_t index){
        return N[index];
    }

