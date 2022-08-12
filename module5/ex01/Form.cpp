#include"Form.hpp"

Form::~Form()
{
    std::cout << "Form destructor" << std::endl;
}

unsigned int Form::get_gsigned() const
{
    return(this->_gsigned);   
}

unsigned int Form::get_gexec() const
{
    return(this->_gexec);   
}

bool Form::get_signed() const
{
    return(this->_signed);   
}

std::string Form::get_name() const
{
    return(this->name);   
}

void Form::beSigned(Bureaucrat bureaucrat)
{
    if(bureaucrat.getGrade() >= this->_gsigned )
    {
        throw(Form::GradeToolowException());
    }
    this->_signed = true;
}

Form::Form(std::string name,unsigned int gsigned,unsigned int gexec) :name(name),_gsigned(gsigned),_gexec(gexec)
{
    std::cout << "Form constructor" << std::endl;
    // 2 if gelicek throwlar için
    if(this->_gsigned > 150)
        throw(GradeToolowException());
    if(this->_gsigned < 1)
        throw(GradeTooHighException());
}

std::ostream& operator<<(std::ostream &os, const Form &set)
{
    os << set.get_name()    <<", form signed point"<< set.get_gsigned() 
                            << "form exec point "<<set.get_gexec()
                            << "form signed"<<set.get_signed();
    return(os);
}
