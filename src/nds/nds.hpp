#include <cstdint>
#include <string>
#include <iostream>
#include "arm9.hpp"

class NDS {
    public:
        ARM9 arm9;
        std::string toString();
};