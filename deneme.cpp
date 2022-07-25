#include <iostream>
#include <string.h>

class HumanA {

	private:
		std::string	name;

	public:
        HumanA( std::string name);
		void	attack( void );
};

HumanA::HumanA(std::string name)
{
    this->name =name;
}
int main()
{

    HumanA adam = HumanA("ASD");

}