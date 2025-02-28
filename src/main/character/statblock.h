#pragma once
#include "stattypes.h"

struct statblock {
    stattype Strength; //0xFF
    stattype Intellect; //0xFF
    stattype Sneak; //0xFF

    statblock() {
        Strength = (stattype)1u; 
        Intellect = (stattype)1u;
        Sneak = (stattype)1u;
    }
    explicit statblock(stattype s, stattype i, stattype t) {
        Strength = (stattype)1u; 
        Intellect = (stattype)1u;
        Sneak = (stattype)1u;
    }
};