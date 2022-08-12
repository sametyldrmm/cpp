#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include<iostream>
#include<ostream>
#include"Form.hpp"

class Form;

class Bureaucrat
{
private:
    std::string const name;
    unsigned int grade;
public:
    Bureaucrat();
    Bureaucrat(unsigned int a,std::string name);
    ~Bureaucrat();
    std::string const getName() const;
    unsigned int getGrade() const;
    void decrement_grade(int a);
    void increment_grade(int a);
    void signForm(Form &form0) const;
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
std::ostream& operator<<(std::ostream &os, const Bureaucrat &set);


#endif