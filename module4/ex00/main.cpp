#include<iostream>
#include"Animal.hpp"
#include"Cat.hpp"
#include"wrongAnimal.hpp"
#include"wrongCat.hpp"
#include"Dog.hpp"
void a()
{
    const Animal* meta = new Animal();
    const Animal* j = new Cat();
    const Animal* i = new Dog();
    
    std::cout << meta->getType() << std::endl;
    std::cout << j->getType() << std::endl;
    j->makeSound();
    i->makeSound();
    
    const wrongAnimal* one = new wrongAnimal();
    const wrongAnimal* two = new wrongCat();
    std::cout << std::endl<< std::endl<< std::endl<< std::endl;
    
    std::cout << one->getType() << std::endl;
    std::cout << two->getType() << std::endl;
    std::cout << std::endl<< std::endl<< std::endl<< std::endl;
    one->makeSound();
    two->makeSound();
    delete meta;
    delete j;
    delete i;
    delete one;
    delete two;
}

int main()
{
 a();   
}