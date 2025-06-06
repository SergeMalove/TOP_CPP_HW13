#ifndef PLASMA_DILDO_H
#define PLASMA_DILDO_H
#include "Weapon.h"

class PlazmaDildo : public Weapon {
public:
    void shoot() override;
    void reload() override;
    void hit() override;
};

#endif // PLASMA_DILDO_H