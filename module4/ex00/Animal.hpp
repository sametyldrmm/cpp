#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>

class Animal
{
protected:
    std::string type;
public:
    Animal();
    virtual ~Animal();
    Animal(std::string type_n);
    std::string getType() const;
    Animal &operator=(const Animal &a);
    virtual void makeSound() const;
};

#endif