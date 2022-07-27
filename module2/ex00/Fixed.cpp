#include"Fixed.hpp"

int Fixed::getRawBits(void)
{
    std::cout << "gettrawsbits" <<std::endl;
    return(this->fixed_point);
}

void Fixed::setRawsBits(int const raw)
{
    std::cout << "setrawsbits" <<std::endl;
    this->fixed_point = raw;
}

Fixed::Fixed(Fixed &copy_fixed)
{
    std::cout << "Copy constructor called" <<std::endl;
    this->fixed_point = copy_fixed.getRawBits();
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" <<std::endl;
}

Fixed::Fixed(void)
{
    std::cout << "Default constructor called" <<std::endl;

    this->fixed_point = 0;
}

Fixed & Fixed::operator=(Fixed & value)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->fixed_point = value.getRawBits();
    return *this;
}