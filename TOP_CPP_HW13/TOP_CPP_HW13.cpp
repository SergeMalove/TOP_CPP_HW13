/*
домашнее задание :
1) добавить в абстрактный класс Weapon чисто виртуальный метод hit (ударить оружием)
2) соответственно нужно реализовать этот метод во всех наследниках
3) добавьте также свой класс оружия (например, пулемет)
4) добавьте классу Player возможность перезаряжать его оружие и ударять им
5) попробуйте в main создать игрока, менять ему оружия и стрелять, перезаряжать
и ударять текущим оружием. Проверьте, что проект успешно компилируется. Ответ представьте
в виде .cpp файла или ссылки на гитхаб.
*/
#include <iostream>

class Weapon {
public:
    virtual void shoot() = 0;
    virtual void reload() = 0;
    virtual void hit() = 0;
};

class Bazooka : public Weapon {
public:
    void shoot() override {
        std::cout << "PAAAAAAF!!!\n";
    }
    void reload() override {
        std::cout << "Bazooka reloaded!!!\n";
    }
    void hit() override {
        std::cout << "Hit by Bazooka!!!\n";
    }
};

class Pistole : public Weapon {
public:
    void shoot() override {
        std::cout << "paf!\n";
    }
    void reload() override {
        std::cout << "Pistole reloaded!!!\n";
    }
    void hit() override {
        std::cout << "Hit by Pistol!!!\n";
    }
};

class MachineGun : public Weapon {
public:
    void shoot() override {
        std::cout << "paf! paf! paf!\n";
    }
    void reload() override {
        std::cout << "MachineGun reloaded!!!\n";
    }
    void hit() override {
        std::cout << "Hit by MachineGun!!!\n";
    }
};

class PlazmaDildo : public Weapon {
public:
    void shoot() override {
        std::cout << "Bum! Bum! Bum!\n";
    }
    void reload() override {
        std::cout << "PlazmaDildo reloaded!!!\n";
    }
    void hit() override {
        std::cout << "Hit by PlazmaDildo!!!\n";
    }
};

class Player {
private:
    Weapon* weapon_;
public:
    Player(Weapon* weapon) : weapon_(weapon) {}

    void shootByWeapon() {
        weapon_->shoot();
    }
    void changeWeapon(Weapon* newWeapon) {
        weapon_ = newWeapon;
    }
    void reloadWeapon() {
        weapon_->reload();
    }
    void hitByWeapon() {
        weapon_->hit();
    }
};

int main()
{
    Bazooka b;
    Pistole p;
    MachineGun m;
    PlazmaDildo d;
    Player p1(&b);
    p1.shootByWeapon();
    p1.changeWeapon(&p);
    p1.shootByWeapon();
    p1.reloadWeapon();
    p1.changeWeapon(&d);
    p1.shootByWeapon();
    p1.reloadWeapon();
    p1.shootByWeapon();
    std::cout << "Suka blyat'! Konchilis' patroni! Idem v rukopashku!\n";
    p1.hitByWeapon();
}