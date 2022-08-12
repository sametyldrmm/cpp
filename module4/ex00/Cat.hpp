#ifndef CAT_HPP
#define CAT_HPP
#include <iostream>
#include "Animal.hpp"

class Cat :public Animal
{
private:
    std::string type;
public:
    ~Cat();
    Cat();
    Cat &operator=(const Cat &);
    void makeSound() const;
};


#endif