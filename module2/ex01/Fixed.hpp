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
    Fixed &operator =(const Fixed &value);
    float	toFloat (void) const;
	int		toInt(void) const;
};

std::ostream& operator<<(std::ostream &os,const Fixed &value);



#endif