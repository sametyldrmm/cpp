#ifndef BRAIN_HPP
#define BRAIN_HPP
#include<iostream>


class brain
{
protected:
    std::string str[100];
public:
    brain();
    ~brain();
    void fill_str();
    std::string get_str(int a) const;
};


#endif