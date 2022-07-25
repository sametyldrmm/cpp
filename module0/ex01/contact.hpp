#ifndef CONTACT_H
#define CONTACT_H
#include <iostream>
#include <string.h>

class contact
{
public:
    std::string person_info[5];

void person_info_regulation()
{
    for (size_t i = 0; i < 5; i++)
    {
        if(person_info[i].length() > 8)
            person_info[i] = person_info[i].substr(0,7).insert(7,".");
    }
}
};


#endif