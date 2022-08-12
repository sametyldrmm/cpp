#ifndef DOG_HPP
#define DOG_HPP
#include <iostream>
#include "Animal.hpp"
#include"brain.hpp"

class Dog :public Animal
{
private:
    brain *bra;
public:
    Dog();
    ~Dog();
    void makeSound() const ;
};


#endif