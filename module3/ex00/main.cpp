#include"ClapTrap.hpp"

int main()
{
    ClapTrap naruto("naruto",100,10,10);
    ClapTrap sasuke("sasuke",100,10,10);

    naruto.attack(sasuke.get_name());
    sasuke.takeDamage(naruto.get_damage());
    sasuke.print_hit_points();    
}