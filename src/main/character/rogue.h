#pragma once
#include "hp.h"
#include "statblock.h"

class Rogue: public hp, public statblock {

    public:
        static const hptype HPGROWTH = (hptype)13u; // always instantiates growth rate
        static const stattype BASESTR = (stattype)3u;
        static const stattype BASEINT = (stattype)1u;
        static const stattype BASESNK = (stattype)4u;
        
        Rogue() : hp(HPGROWTH, HPGROWTH), statblock(BASESTR, BASEINT, BASESNK) {};
        

    private:
};