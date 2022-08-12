#include"Bureaucrat.hpp"

int main()
{
    Bureaucrat g(20,"sat");
    try
    {
        g.increment_grade(4);
        std::cout << g << std::endl;
        g.decrement_grade(5);
        std::cout << g << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    try
    {
        g.increment_grade(4);
        std::cout << g << std::endl;
        g.decrement_grade(5);
        std::cout << g << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    return 0;
}