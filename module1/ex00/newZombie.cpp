#include "Zombie.hpp"

Zombie* newZombie( std::string ad )
{
    Zombie *new_zombie = new Zombie;
    new_zombie->name_change(ad);
    return(new_zombie);
}