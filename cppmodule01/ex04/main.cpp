#include "files.hpp"

int main(int argc, char *argv[])
{

    if (argc != 4)
    {
        std::cout << "Invalid number of arguments" << std::endl;
        return (1);
    }

    std::string     input_file1 = argv[1];
    std::string     output_file1 = input_file1 + ".replace";
    std::string     s1 = argv[2]; 
    std::string     s2 = argv[3];
    Files           files(input_file1.c_str(), output_file1.c_str(), s1, s2);

    std::ifstream   ifs(files.get_input_file());
    if (!ifs.is_open()) {
        std::cout << "Input file could not be opened" << std::endl;
        return (1);
    }

    std::ofstream   ofs(files.get_output_file());
    if (!ofs.is_open()) {
        std::cout << "Output file could not be opened" << std::endl;
        return (1);
    }

    files.ft_write_from_infile_to_outfile(ifs, ofs);

    ifs.close();
    ofs.close();

    return (0);

}