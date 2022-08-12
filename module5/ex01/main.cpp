#include"Bureaucrat.hpp"
#include"Form.hpp"
int main()
{
    Bureaucrat g(0,"sat");
    Bureaucrat f(80,"sat");
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
    
    
    Form form0("",50,50);
    Form form1("",50,50);
    try
    {
        std::cout << form0.get_signed() << std::endl;
        form0.beSigned(g);
        std::cout << form0.get_signed() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        std::cout << form1.get_signed() << std::endl;
        form1.beSigned(f);
        std::cout << form1.get_signed() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n'; // burası diğerlerinden kontrol edilecek birşeyler eklenir
    }

    return 0;
}