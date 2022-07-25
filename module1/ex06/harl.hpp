#ifndef HARL_H
#define HARL_H

#include <iostream>
#include <string.h>

class harl
{
private:
    void debug(void);
    void info(void);
    void warning(void);
    void error(void);
    void function();
    void (harl::*funtions[4])(void);

public:
    void complain( std::string level);
};



#endif