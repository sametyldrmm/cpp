# ifndef HUMANA_H
#define HUMANA_H

#include <iostream>
#include <string.h>
class HumanA
{
private:
    std::string name;
    Weapon &weapon;
public:
    HumanA(std::string name,Weapon &weapon);
   void attack();
   void name_changed(std::string name);
};


#endif