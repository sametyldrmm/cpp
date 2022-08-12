#include"wrongAnimal.hpp"

wrongAnimal::wrongAnimal()
{
    this->type = "wronganimal";
    std::cout << "wrongAnimal constructor" << std::endl;
}

wrongAnimal::~wrongAnimal()
{
    std::cout << "wrongAnimal destructor" << std::endl;
}
wrongAnimal::wrongAnimal(std::string type_n)
{
    this->type = type_n;
}

std::string wrongAnimal::getType() const
{
    return(this->type);
}

void wrongAnimal::makeSound() const
{
    std::cout << "bla bla" << std::endl;
}