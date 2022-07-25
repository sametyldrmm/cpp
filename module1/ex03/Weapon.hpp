# ifndef WEAPON_H
#define WEAPON_H

#include <iostream>
#include <string.h>

class Weapon
{
private:
    std::string type;
public:
    Weapon(std::string type);
    std::string get_type();
    void setType(std::string type);
};

#endif