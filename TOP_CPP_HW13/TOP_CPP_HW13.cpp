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
#include "Weapon.h"
#include "Bazooka.h"
#include "Pistole.h"
#include "MachineGun.h"
#include "PlazmaDildo.h"
#include "Player.h"

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