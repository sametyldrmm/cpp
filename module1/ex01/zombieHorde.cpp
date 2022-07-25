#include"Zombie.hpp"
Zombie* newZombie( std::string ad )
{
    Zombie *new_zombie = new Zombie;
    new_zombie->name_change(ad);
    return(new_zombie);
}

Zombie *zombieHorde( int N, std::string name2 )
{
    Zombie *new_zombie = new Zombie[N];
    
    for (size_t i = 0; i < N; i++)
    {
        new_zombie[i].name_change(name2);    
    }
    return(new_zombie);
}
