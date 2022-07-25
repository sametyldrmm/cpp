#include"harl.hpp"

void harl::debug()
{
    std::cout <<"debug"<< std::endl;
}

void harl::info()
{
    std::cout <<"info"<< std::endl;
}

void harl::warning()
{
    std::cout <<"warning"<< std::endl;
}

void harl::error()
{
    std::cout <<"error"<< std::endl;
}

void harl::function()
{
    harl::funtions[0] = &harl::debug;
    harl::funtions[1] = &harl::info;
    harl::funtions[2] = &harl::warning;
    harl::funtions[3] = &harl::error;
}

void harl::complain( std::string level)
{
    std::string level_case[4] ={"DEBUG", "INFO", "WARNING", "ERROR"}; ;
    int index = 0;
    while (index < 4 && level != level_case[index])
		index++;
    function();
    switch (index)
    {
    case (0):
        void (harl::*fun)(void);
	    fun = funtions[0];
	    (this->*fun)();
    case (1):
        void (harl::*fun)(void);
	    fun = funtions[1];
	    (this->*fun)();
    case (2):
        void (harl::*fun)(void);
	    fun = funtions[2];
	    (this->*fun)(); 
    case (3):
        void (harl::*fun)(void);
	    fun = funtions[3];
	    (this->*fun)();
        break;
    }

}
