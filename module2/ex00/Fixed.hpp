#ifndef FIXED_H
#define FIXED_H
#include <iostream>

class Fixed
{
private:
    int fixed_point;
    static const int a = 8;
public:
    Fixed(void);
    Fixed(Fixed &copy_fixed);
    ~Fixed();
    Fixed &operator =(Fixed &value);
    int getRawBits(void);
    void setRawsBits(int const raw);
};




#endif