#include "../inc/Bureaucrat.hpp"
#include "../inc/Form.hpp"

int main()
{
	try
	{
		Bureaucrat Harry("Harry", 5);
		Form Paper("Paper", 18, 18);
		Form Paper2(Paper);
		Form Paper3("Paper3", 3, 3);

		Paper.beSigned(Harry);
		Paper2.beSigned(Harry);
		Paper3.beSigned(Harry);
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	return (0);
}
