#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP
#include<iostream>

class wrongAnimal
{
protected:
    std::string type;
public:
    wrongAnimal();
    wrongAnimal(std::string type_n);
    virtual ~wrongAnimal();
    std::string getType() const;
    void makeSound() const;
};


#endif