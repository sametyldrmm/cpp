#ifndef PHONE_BOOK_H
#define PHONE_BOOK_H
#include <iostream>
#include <string.h>
#include <bits/stdc++.h>

#include "contact.hpp"

class phone_book
{
private:
    contact contacts[8];
public:
    void show_persons(int a)
    {
        for (size_t i = 0; i < a % 8; i++)
        {
            std:: cout << std:: setw(8 )<< std:: setfill(' ') << std:: right << contacts[i].person_info[0] ;
            std:: cout << std:: setw(8) << std:: setfill(' ') << std:: right << contacts[i].person_info[1] ;
            std:: cout << std:: setw(8) << std:: setfill(' ') << std:: right << contacts[i].person_info[2] ;
            std:: cout << std:: setw(8) << std:: setfill(' ') << std:: right << contacts[i].person_info[3] ;
            std:: cout << std:: setw(8) << std:: setfill(' ') << std:: right << contacts[i].person_info[4] << std::endl;
        }
    }
    void add_person(int a)
    {
        std:: cout << "ad giriniz" << std::endl;
        std :: cin >> contacts[a % 8].person_info[0];
        std:: cout << "soyad giriniz" << std::endl;
        std :: cin >> contacts[a % 8].person_info[1];
        std:: cout << "takma ad giriniz" << std::endl;
        std :: cin >> contacts[a % 8].person_info[2];
        std:: cout << "telefon numarasi giriniz" << std::endl;
        std :: cin >> contacts[a % 8].person_info[3];
        std:: cout << "karanlik bir sirrinizi giriniz" << std::endl;
        std :: cin >> contacts[a % 8].person_info[4];
        contacts[a %8].person_info_regulation();
        a++;
    }
};


#endif