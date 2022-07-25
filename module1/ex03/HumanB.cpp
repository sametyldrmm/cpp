#include"Weapon.hpp"
#include"HumanA.hpp"
#include"HumanB.hpp"

void HumanB::setWeapon(Weapon &weapon)
{
    this->weapon = &weapon;
}

void HumanB::attack()
{
    std::cout << name << " attacks with their"<< this->weapon->get_type() <<std::endl;
}

void HumanB::name_changed(std::string name)
{
    this->name = name;
}

HumanB::HumanB(std::string name):weapon(weapon)
{
    this->name = name;
}
