#include "Zombie.hpp"

Zombie::~Zombie(void)
{
    std::cout << name <<": " <<"dead" << std ::endl;
}
void Zombie::announce(void)
{
    std::cout << name <<": " <<"BraiiiiiiinnnzzzZ..." << std ::endl;
}

void Zombie::name_change(std::string ad)
{
    name = ad;
}



