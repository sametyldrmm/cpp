#ifndef FIXED_H
#define FIXED_H
#include <iostream>
# include <cmath>

class Fixed
{
private:
    int fixed_point;
    static const int fractional_bits = 8;
public:
    Fixed(void);
    Fixed(const int a); 
    Fixed(const float b);
    Fixed(const Fixed &copy_fixed);
    ~Fixed(void);
    int getRawBits(void) const;
    void setRawsBits(int const raw);
    float	toFloat (void) const;
	int		toInt(void) const;
    static const Fixed max(const Fixed &a,const Fixed &b);
    static const Fixed min(const Fixed &a,const Fixed &b);

    static int max(int a,int b);
    static int min(int a,int b);
    Fixed &operator =(const Fixed &value);
    
    Fixed &operator+(const Fixed &value);
    Fixed &operator-(const Fixed &value);
    Fixed &operator*(const Fixed &value);
    Fixed &operator/(const Fixed &value);

    bool operator<=(const Fixed &value);
    bool operator>=(const Fixed &value);
    bool operator<(const Fixed &value);
    bool operator>(const Fixed &value);
    bool operator==(const Fixed &value);
    bool operator!=(const Fixed &value);

    int operator ++();
    int operator ++(int);
    int operator --();
    int operator --(int);

};

std::ostream& operator<<(std::ostream &os,const Fixed &value);



#endif