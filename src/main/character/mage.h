#pragma once
#include "hp.h"
#include "statblock.h"

class Mage: public hp, public statblock {

    public:
        static const hptype HPGROWTH = (hptype)9u; 
        static const stattype BASESTR = (stattype)1u;
        static const stattype BASEINT = (stattype)5u;
        static const stattype BASESNK = (stattype)2u;
        
        Mage() : hp(HPGROWTH, HPGROWTH), statblock(BASESTR, BASEINT, BASESNK) {};
        

    private:
};