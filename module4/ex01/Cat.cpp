#include"Cat.hpp"

Cat::Cat():Animal("cat") {
    this->bra = new brain();
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
    delete bra;
}

void Cat::makeSound() const
{
    std::cout << "miaww" << std::endl;
}