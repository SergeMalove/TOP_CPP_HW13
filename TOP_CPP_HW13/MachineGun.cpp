#include "MachineGun.h"
#include <iostream>

void MachineGun::shoot() {
    std::cout << "paf! paf! paf!\n";
}

void MachineGun::reload() {
    std::cout << "MachineGun reloaded!!!\n";
}

void MachineGun::hit() {
    std::cout << "Hit by MachineGun!!!\n";
}