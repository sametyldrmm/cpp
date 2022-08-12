#include"ClapTrap.hpp"

class ScavTrap :public ClapTrap
{
private:
    /* data */
public:
    ScavTrap(std::string name);
    ScavTrap();
    ~ScavTrap();
    void guardGate();
    void print_name();
    void attack(const std::string& target2);
};
