#include <iostream>
#include <string.h>

int main(int argc,char **argv)
{
    if (argc == 1)
    {
        std :: string message = "message";
        std :: cout << message << std::endl;
    }
    else
    {
        std :: string message = argv[1];
        std::cout.write(argv[1],message.length());
        // for (size_t i = 0; argv[1][i]; i++)
        // {
        //     std:: cout << (char)toupper(argv[1][i]) << std::endl;
        // }
    }   
}