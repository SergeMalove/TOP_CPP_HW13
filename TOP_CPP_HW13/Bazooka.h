#ifndef BAZOOKA_H
#define BAZOOKA_H
#include "Weapon.h"

class Bazooka : public Weapon {
public:
    void shoot() override;
    void reload() override;
    void hit() override;
};

#endif // BAZOOKA_H