# ifndef HUMANB_H
#define HUMANB_H

#include <iostream>
#include <string.h>
#include"Weapon.hpp"

class HumanB
{
    int a;
private:
    std::string name;
    Weapon *weapon;
public:
    HumanB(std::string name);
    void attack(void);
    void name_changed(std::string name);
    void setWeapon(Weapon &weapon);
};

#endif