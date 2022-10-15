#include"file_operations.hpp"

int main(int argc,char **argv)
{
    if(argc != 4)
        std::cout << "wrong arg" <<std::endl;
    else
    {
        file_operations file_op =file_operations(argv[1],argv[2],argv[3]);
        file_op.get_file_data();
        file_op.data_changed();
        file_op.new_file("new_file");
    }
    
}