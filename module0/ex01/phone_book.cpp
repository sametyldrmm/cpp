#include"phone_book.hpp"

int main()
{
    phone_book people;
    std::string input;
	int a = 0;
	while (1)
	{
		std::cout << std::setw(0) << "> ";
		std::getline(std::cin, input);

		if (input == "SEARCH")
			people.show_persons(a++);
		if (input == "ADD")
			people.add_person(a++);
		if (input == "EXIT")
			return (0);
	}
}