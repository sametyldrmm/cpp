#include"Dog.hpp"

Dog::Dog() :Animal("dog")
{
    std::cout << "dog constructor" << std::endl;
}

Dog::~Dog()
{
    std::cout << "dog destructor" << std::endl;
}

void Dog::makeSound() const
{
    std::cout <<"hav hav hav" << std::endl; 
}