#include"Animal.hpp"

Animal::Animal()
{
    this->type = "??";
    std::cout << "Animal constructor" << std::endl;
}

Animal::~Animal()
{
    std::cout << "Animal destructor" << std::endl;
}

std::string Animal::getType()const
{
    return(this->type);
}

Animal &Animal::operator=(const Animal &a)
{
    this->type = a.type;
    return(*this);
}

Animal::Animal(std::string type_n)
{
    this->type = type_n;
}

void Animal::makeSound() const
{
    std::cout <<"Animal makeSound" << std::endl; 
}