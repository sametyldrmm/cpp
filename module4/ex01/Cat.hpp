#ifndef CAT_HPP
#define CAT_HPP
#include <iostream>
#include "Animal.hpp"
#include"brain.hpp"

class Cat :public Animal
{
private:
    brain *bra;
public:
    ~Cat();
    Cat();
    Cat &operator=(const Cat &);
    void makeSound() const;
};


#endif