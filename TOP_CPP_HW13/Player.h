#ifndef PLAYER_H
#define PLAYER_H
#include "Weapon.h"

class Player {
private:
    Weapon* weapon_;
public:
    Player(Weapon* weapon);
    void shootByWeapon();
    void changeWeapon(Weapon* newWeapon);
    void reloadWeapon();
    void hitByWeapon();
};

#endif // PLAYER_H