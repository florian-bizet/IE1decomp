#include <iostream>
#include "nds/nds.hpp"

NDS nds;

void FUN_02000ab0() {
    //idk man
}

void entry_arm9() {
    //Sets smth to handle irqs
    //vblankwait
    //calling FUN_02000ab0
}

int main() {
    
    entry_arm9();
    std::cout << nds.toString() << std::endl;
    return 0;
}