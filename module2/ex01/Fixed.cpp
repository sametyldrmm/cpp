#include"Fixed.hpp"
# include <cmath>

Fixed::Fixed(void)
{
    std::cout<<"Default constructor called" << std::endl;
    this->fixed_point = 0;
}
Fixed::Fixed(const int value)
{
    this->fixed_point =(value << this->fractional_bits);
    std::cout<<"int constructor called" << std::endl;
}

Fixed::Fixed(const float value)
{
    this->fixed_point = (value * (1 << this->fractional_bits));
    std::cout<<"float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &copy_fixed)
{
    this->fixed_point = copy_fixed.fixed_point;
    std::cout<<"copy constructor called" << std::endl;
}

Fixed::~Fixed(void)
{
    std::cout<<"destructor called" << std::endl;
}

float Fixed::toFloat(void) const
{
    return(float(this->fixed_point) / (1 << this->fractional_bits));
}

int Fixed::toInt(void) const
{
    return(this->fixed_point >> this->fractional_bits);
}

Fixed & Fixed::operator=(const Fixed &value)
{
    std::cout<<"Copy assignment operator called" << std::endl;
    this->fixed_point = value.fixed_point;
    return(*this);
}

std::ostream& operator<<(std::ostream &os,const Fixed &value)
{
    os<<value.toFloat();
    return(os);
}
