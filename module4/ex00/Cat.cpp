#include"Cat.hpp"

Cat::Cat():Animal("cat") {
    std::cout<<"cat constructor" << std::endl;
}
// Cat::Cat(const Cat &params) : Animal(params) {}

Cat &Cat::operator=(const Cat & params)
{
    this->Animal::operator=(params);
    return *this;
}
Cat::~Cat()
{
    std::cout << "Cat destructor" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "miaww" << std::endl;
}