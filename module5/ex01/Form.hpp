#ifndef FORM_HPP
#define FORM_HPP
#include"Bureaucrat.hpp"
#include<iostream>
#include<ostream>

class Bureaucrat;
class Form
{
private:
    std::string const name;
    bool _signed;
    unsigned int  _gsigned;
    unsigned int  _gexec;
public:
    Form(std::string name,unsigned int gsigned,unsigned int gexec);
    ~Form();
    void            beSigned(Bureaucrat bureucrat);
    unsigned int    get_gsigned() const;
    unsigned int    get_gexec() const;
    bool            get_signed() const;
    std::string     get_name()  const;
    class GradeToolowException : public std::exception 
    {
        virtual const char *what() const throw()
        {
            return("too low");
        }
    };
    class GradeTooHighException : public std::exception 
    {
        virtual const char *what() const throw()
        {
            return("too hight");
        }
    };
};


std::ostream& operator<<(std::ostream &os, const Form &set);

#endif