#include"ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name,int hit_points,int energy_points,int attack_damage)
{
    this->name = name;
    this->attack_damage = attack_damage;
    this->energy_points = energy_points;
    this->hit_points = hit_points;
    std::cout << "constructor called"<<std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "destructor called"<<std::endl;
}

void ClapTrap::attack(const std::string& target)
{
    if(this->energy_points)
    {
        std::cout << "ClapTrap" << this->name <<"attacks " << target << "causing "<<this->attack_damage<< "point of damage" <<std::endl;
        this->energy_points--;
    }
    else
        std::cout<<this->name <<"doesn't have enough energy"<<std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if(this->hit_points > 0)
    {
        this->hit_points -= amount;
        std::cout << "ClapTrap" << this->name << amount <<"has damged" <<std::endl;
        if(this->hit_points < 0)
            std::cout<<this->name <<"dead!"<<std::endl;
    }
    else
        std::cout<<this->name <<"dead!"<<std::endl;

}

void ClapTrap::beRepaired(unsigned int amount)
{
    if(this->energy_points)
    {
        std::cout << "ClapTrap" << this->name <<"repaired him self " << amount << "hit points "<<this->attack_damage<< "point of damage" <<std::endl;
        this->energy_points--;
    }
    else
        std::cout<<this->name <<"doesn't have enough energy"<<std::endl;
}

std::string ClapTrap::get_name()
{
    return(this->name);
}

void ClapTrap::print_hit_points()
{
    std::cout<<this->hit_points<<std::endl;
}

int ClapTrap::get_damage()
{
    return(this->attack_damage);
}