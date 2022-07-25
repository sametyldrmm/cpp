#include"Weapon.hpp"
#include"HumanA.hpp"
#include"HumanB.hpp"

void HumanA::attack(void )
{
    std::cout << name << " attacks with their"<< weapon.get_type() <<std::endl;
}

void HumanA::name_changed(std::string name)
{
    this->name = name;
}

HumanA::HumanA(std::string name,Weapon &weapon) :weapon(weapon)
{
    this->name = name;
    this->weapon = weapon;
}