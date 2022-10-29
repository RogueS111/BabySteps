//
// Created by Rogue on 5/16/2022.
//

#ifndef DOCUMENTS_BABYSTEPS_H
#define DOCUMENTS_BABYSTEPS_H

#include <cstdint>
#include <array>
#include <algorithm>

class  BabySteps{

public:
    uint16_t N[5] = {16, 4, 21, 5, 0};
    uint32_t position;
    uint16_t value;
    int maximum;
    int minimum;

    BabySteps();
    virtual ~BabySteps();

    uint16_t max();
    uint16_t min();

    uint32_t getMeMyValue();
    void set(uint32_t index, uint16_t value);
    uint16_t get(uint32_t index);
};

#endif //DOCUMENTS_BABYSTEPS_H
