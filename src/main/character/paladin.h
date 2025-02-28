#pragma once
#include "hp.h"
#include "statblock.h"

class Paladin: public hp, public statblock {

    public:
        static const hptype HPGROWTH = (hptype)14u; // always instantiates growth rate
        static const stattype BASESTR = (stattype)3u;
        static const stattype BASEINT = (stattype)3u;
        static const stattype BASESNK = (stattype)2u;

        
        Paladin() : hp(HPGROWTH, HPGROWTH), statblock(BASESTR, BASEINT, BASESNK) {};

    private:
};