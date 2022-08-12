#include"brain.hpp"

brain::brain()
{
    fill_str();
    std::cout << "brain constructor" << std::endl;
}

brain::~brain()
{
    std::cout << "brain destructor" << std::endl;
}

void brain::fill_str()
{
    std::cout <<"brain fill_str start" << std::endl;
    for (size_t i = 0; i < 100; i++)
    {
        if( i % 2 == 0)
            this->str[i] = std::string("earth");
        else
            this->str[i] = std::string("mars");
    }
}

std::string brain::get_str(int a) const
{
    return(this->str[a]);
}