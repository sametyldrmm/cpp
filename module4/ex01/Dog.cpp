#include"Dog.hpp"

Dog::Dog() :Animal("dog")
{
    this->bra = new brain();
    std::cout << "dog constructor" << std::endl;
}

Dog::~Dog()
{
    delete this->bra;
    std::cout << "dog destructor" << std::endl;
}

void Dog::makeSound() const
{
    std::cout <<"hav hav hav" << std::endl; 
}