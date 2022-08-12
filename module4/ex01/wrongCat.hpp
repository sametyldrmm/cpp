#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP
#include"wrongAnimal.hpp"
class wrongCat :public wrongAnimal
{
private:
    std::string type;
public:
    wrongCat();
    ~wrongCat();
    void makeSound() const;
};

#endif