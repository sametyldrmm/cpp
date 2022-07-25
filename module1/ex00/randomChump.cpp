#include "Zombie.hpp"

void randomChump( std::string name )
{
    Zombie stack;
    stack.name_change(name);
    stack.announce();
}
