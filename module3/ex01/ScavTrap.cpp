#include"ScavTrap.hpp"

void ScavTrap::guardGate()
{
    std::cout<<"ScavTrap is now in Gate keeper mode."<<std::endl;
}

ScavTrap::ScavTrap()
{
    std::cout << "ScavTrap constructor called"<<std::endl;
    this->name = "??123?";
    this->attack_damage =20;
    this->hit_points = 100;
    this->energy_points = 50;
}

ScavTrap::ScavTrap(std::string name)
{
    std::cout << "ScavTrap constructor called"<<std::endl;
    this->name = name;
    this->attack_damage =20;
    this->hit_points = 100;
    this->energy_points = 50;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap destructor called"<<std::endl;
}

void ScavTrap::print_name()
{
    std::cout<<this->name<<std::endl;
}

void ScavTrap::attack(const std::string& target2)
{
    if(this->energy_points)
    {
        std::cout << "ScavTrap " << this->name <<"attacks " << target2 << "causing "<<this->attack_damage<< "point of damage" <<std::endl;
        this->energy_points--;
    }
    else
        std::cout<<this->name <<"doesn't have enough energy"<<std::endl;
}
