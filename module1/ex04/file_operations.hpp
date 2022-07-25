# ifndef FILE_OPERATIONS_H
#define FILE_OPERATIONS_H

#include <iostream>
#include <string.h>
#include <fstream>

class file_operations
{
private:
    std::string file_name;
    std::string str1;
    std::string str2;
    std::string file_data;
public:
    file_operations(std::string file_name,std::string str1,std::string str2);
    void get_file_data();
    void data_changed();
    void new_file(std::string new_file_name);
};


#endif