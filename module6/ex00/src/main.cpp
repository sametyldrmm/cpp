#include "../inc/Bureaucrat.hpp"

int main()
{
	std::cout << "_________________________________________" << std::endl;
	{
		try { Bureaucrat("Harry", 0); }
		catch (const std::exception& e) { std::cerr << e.what() << std::endl; }
	}
	std::cout << "_________________________________________" << std::endl;
	{
		try { Bureaucrat("Ron", 151); }
		catch (const std::exception& e) { std::cerr << e.what() << std::endl; }
	}
	std::cout << "_________________________________________" << std::endl;
	{
		try {
			Bureaucrat Hermione = Bureaucrat("Hermione", 2);
			std::cout << Hermione << std::endl;
			++Hermione;
			std::cout << Hermione << std::endl;
			++Hermione;
			std::cout << Hermione << std::endl;
		}
		catch (const std::exception& e) { std::cerr << e.what() << std::endl; }
	}
	std::cout << "_________________________________________" << std::endl;
	return (0);
}
