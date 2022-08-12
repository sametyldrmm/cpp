#ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include <iostream>

class ClapTrap
{
protected:
    std::string name;
    int hit_points;
    int energy_points;
    int attack_damage;
public:
    ClapTrap();
    ClapTrap(std::string name);
    ClapTrap(std::string name,int hit_points,int energy_points,int attack_damage);
    ~ClapTrap();
    virtual void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    std::string get_name();
    void print_hit_points();
    int get_damage();
};

#endif