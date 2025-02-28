#pragma once
#include "hp.h"
#include "statblock.h"

class Warrior: public hp, public statblock {

    public:
        static const hptype HPGROWTH = (hptype)19u; // always instantiates growth rate
        static const stattype BASESTR = (stattype)6u;
        static const stattype BASEINT = (stattype)1u;
        static const stattype BASESNK = (stattype)1u;

        Warrior() : hp(HPGROWTH, HPGROWTH), statblock(BASESTR, BASEINT, BASESNK) {};
        

    private:
};