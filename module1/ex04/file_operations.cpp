#include"file_operations.hpp"

file_operations::file_operations(std::string file_name,std::string str1,std::string str2)
{
    this->file_name = file_name;
    this->str1 = str1;
    this->str2 = str2;
}

void file_operations::get_file_data()
{
    std::string buffer_str;
    std::ifstream read_file(this->file_name);

  if ( read_file.is_open() ){
    while ( getline(read_file, buffer_str) )
    {
        this->file_data += buffer_str + "\n";
    }
    // std::cout <<this->file_data ;
  }
  else
    std::cerr << "Error opening file"<<std::endl;
  
}

void file_operations::data_changed()
{
    int found_str1_index = 0;
    while (this->file_data.find(this->str1 ,found_str1_index) != std::string::npos)
    {
        found_str1_index = this->file_data.find(this->str1 ,found_str1_index);
        this->file_data.erase(found_str1_index,this->str1.length());
        this->file_data.insert(found_str1_index,this->str2);
        found_str1_index += this->str2.length() ;
    }
}

void file_operations::new_file(std::string new_file_name)
{
    std::ofstream file_write(new_file_name);
    if(file_write.fail())
        std::cerr << "Error opening file" <<std::endl;
    file_write << this->file_data;
    file_write.close();
}
