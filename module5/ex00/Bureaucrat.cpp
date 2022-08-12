#include"Bureaucrat.hpp"

Bureaucrat::Bureaucrat(unsigned int a,std::string name): name(name) ,grade(a)
{
    std::cout << "Bureaucrat constructor" << std::endl;
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Bureaucrat destructor" << std::endl;
}

std:: string const Bureaucrat::getName() const
{
    return(this->name);
}

unsigned int Bureaucrat::getGrade() const
{
    return(this->grade);
}

void Bureaucrat::increment_grade(int a)
{
    if (this->grade - a > 150)
        throw Bureaucrat::GradeToolowException();
    if (this->grade - a < 1)
        throw Bureaucrat::GradeTooHighException();
    this->grade -= a;
}

void Bureaucrat::decrement_grade(int a)
{
    if (this->grade + a > 150)
        throw Bureaucrat::GradeToolowException();
    if (this->grade + a < 1)
        throw Bureaucrat::GradeTooHighException();
    this->grade += a;
}

std::ostream& operator<<(std::ostream &os, const Bureaucrat &set)
{
    os << set.getName() <<"   "<< set.getGrade();
    return(os);
}
