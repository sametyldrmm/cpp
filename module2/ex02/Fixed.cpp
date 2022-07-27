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

int Fixed::getRawBits(void) const
{
    std::cout << "gettrawsbits" <<std::endl;
    return(this->fixed_point);
}

void Fixed::setRawsBits(int const raw)
{
    // std::cout << "setrawsbits" <<std::endl;
    this->fixed_point = raw;
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

Fixed & Fixed::operator*(const Fixed &value)
{
    this->setRawsBits((this->fixed_point * value.fixed_point)>> this->fractional_bits);
    return(*this);
}

Fixed & Fixed::operator/(const Fixed &value)
{
    this->setRawsBits((this->fixed_point ) / value.fixed_point << this->fractional_bits);

    return(*this);
}

Fixed & Fixed::operator+(const Fixed &value)
{
    this->setRawsBits((this->fixed_point + value.fixed_point));
    return(*this);
}

Fixed & Fixed::operator-(const Fixed &value)
{
    this->setRawsBits((this->fixed_point - value.fixed_point));
    return(*this);
}

bool Fixed::operator<=(const Fixed &value) 
{
    return(this->getRawBits() <= value.getRawBits());
}

bool Fixed::operator>=(const Fixed &value) 
{
    return(this->getRawBits() >= value.getRawBits());
}

bool Fixed::operator<(const Fixed &value) 
{
    return(this->getRawBits() < value.getRawBits());
}

bool Fixed::operator>(const Fixed &value) 
{
    return(this->getRawBits() > value.getRawBits());
}

bool Fixed::operator==(const Fixed &value) 
{
    return(this->getRawBits() == value.getRawBits());
}

bool Fixed::operator!=(const Fixed &value) 
{
    return(this->getRawBits() != value.getRawBits());
}

int Fixed::operator++() ////++a
{
    int b = this->fixed_point;
    this->setRawsBits(this->fixed_point + 256);
    return(this->fixed_point / 256);
}

int Fixed::operator++(int) //a++
{
    int b = this->fixed_point;
    this->setRawsBits(this->fixed_point + 256);
    return((this->fixed_point / 256) -1);
}

int Fixed::operator--() //--a
{
    int b = this->fixed_point;
    this->setRawsBits(this->fixed_point - 256);
    return(this->fixed_point / 256);
}

int Fixed::operator--(int)
{
    int b = this->fixed_point;
    this->setRawsBits(this->fixed_point - 256);
    return((this->fixed_point / 256) + 1);
}

std::ostream& operator<<(std::ostream &os,const Fixed &value)
{
    os<<value.toFloat();
    return(os);
}

const Fixed Fixed::max(const Fixed &a,const Fixed &b)
{
    if(a.toFloat() > b.toFloat())
        return(a);
    else
        return(b);
}

const Fixed Fixed::min(const Fixed &a,const Fixed &b)
{
    if(a.toFloat() < b.toFloat())
        return(a);
    else
        return(b);
}

int Fixed::max(int a,int b)
{
    if(a > b)
        return(a);
    else
        return(b);
}

int Fixed::min(int a,int b)
{
    if(a < b)
        return(a);
    else
        return(b);
}