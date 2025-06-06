#ifndef MACHINE_GUN_H
#define MACHINE_GUN_H
#include "Weapon.h"

class MachineGun : public Weapon {
public:
    void shoot() override;
    void reload() override;
    void hit() override;
};

#endif // MACHINE_GUN_H