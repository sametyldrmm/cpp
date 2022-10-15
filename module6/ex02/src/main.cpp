#include "../inc/Bureaucrat.hpp"
#include "../inc/PresidentialPardonForm.hpp"
#include "../inc/RobotomyRequestForm.hpp"
#include "../inc/ShrubberyCreationForm.hpp"

int main()
{
	try
	{
		Bureaucrat Harry("Harry", 5);
		Bureaucrat Ron("Ron", 46);

		ShrubberyCreationForm a("Shrubbery");
		PresidentialPardonForm b("Presidential");
		ShrubberyCreationForm c("Shrubbery");

		a.beSigned(Harry);
		//a.execute(Harry);
		Harry.executeForm(a);

		b.beSigned(Harry);
		b.execute(Harry);

		c.beSigned(Ron);
		c.execute(Ron);
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}
