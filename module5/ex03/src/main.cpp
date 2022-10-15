#include "../inc/Bureaucrat.hpp"
#include "../inc/AForm.hpp"
#include "../inc/Intern.hpp"

int main()
{
	try
	{
		Bureaucrat Harry("Harry", 1);
		AForm *newForm;
		Intern Ron;

		newForm = Ron.makeForm("shrubbery", "Olivier");
		newForm->beSigned(Harry);
		newForm->execute(Harry);
		delete(newForm);
		newForm = Ron.makeForm("doesn't exist", "Olivier");
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}
