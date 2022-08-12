#include"wrongCat.hpp"

wrongCat::wrongCat() :wrongAnimal("cat")
{
    std::cout << "wrongCat constructor" << std::endl;
}

wrongCat::~wrongCat()
{
    std::cout << "wrongCat destructor" << std::endl;
}

void wrongCat::makeSound() const
{
    std::cout << "wrongCat mioaw" << std::endl;
}