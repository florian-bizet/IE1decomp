/**
 * @file arm9.cpp
 * @author Florian BIZET
 * @brief Class simulating the NDS ARM9 CPU
 * @version 0.1
 * @date 2025-03-06
 * 
 * 
 */


#include <string>
#include <iostream>
#include "arm9.hpp"

ARM9::ARM9() {
    //Initting registers to 0
    for (int i = 0; i < 16; i++) {
        r[i] = 0;
    }
}

std::string ARM9::toString() {
    std::string str = "ARM9 :\n";
    str += "\tRegisters:\n";
    for (int i = 0; i < 16; i++) {
        str += "\t\tr"+std::to_string(i)+" : "+std::to_string(r[i])+"\n";
    }

    return str;
}

