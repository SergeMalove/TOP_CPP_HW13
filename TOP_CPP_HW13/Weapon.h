#ifndef WEAPON_H
#define WEAPON_H

class Weapon {
public:
    virtual void shoot() = 0;
    virtual void reload() = 0;
    virtual void hit() = 0;
};

#endif // WEAPON_H