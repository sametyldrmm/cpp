#include"Weapon.hpp"
#include"HumanA.hpp"
#include"HumanB.hpp"

void Weapon::setType(std::string type)
{
    this->type = type;   
}

std::string Weapon::get_type()
{
    return( this->type);
}

Weapon::Weapon(std::string type)
{
    this->type = type;
}