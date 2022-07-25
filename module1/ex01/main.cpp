#include "Zombie.hpp"

int main()
{
	Zombie *zombie = zombieHorde(5,"zombi_heap");
    
	delete[] zombie;    
	return (0);
}
