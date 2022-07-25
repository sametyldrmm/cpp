# ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>
#include <string.h>

class Zombie
{
private:
    std ::string name;
public:
    void announce( void );
    void name_change(std::string ad);
    ~Zombie();
};

Zombie *newZombie(std::string name);
Zombie *zombieHorde( int N, std::string name );
#endif