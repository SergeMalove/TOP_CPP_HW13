#ifndef PISTOL_H
#define PISTOL_H
#include "Weapon.h"

class Pistole : public Weapon {
public:
    void shoot() override;
    void reload() override;
    void hit() override;
};

#endif // PISTOL_H