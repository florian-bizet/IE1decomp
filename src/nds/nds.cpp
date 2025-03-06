#include <cstdint>
#include <string>
#include "nds.hpp"

std::string NDS::toString() {
    std::string str = "NDS :\n";
    str += "\t" + arm9.toString();
    return str;
}