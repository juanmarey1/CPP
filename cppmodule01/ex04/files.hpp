#pragma once

#include <string>
#include <iostream>
#include <fstream>

class Files
{
    
    private:

        const char  *input_file;
        const char  *output_file;
        std::string s1;
        std::string s2;

    public:

        Files(const char *input, const char *output, std::string s1, std::string s2);
        const char  *get_input_file(void) const;
        const char  *get_output_file(void) const;
        std::string get_s1(void) const;
        std::string get_s2(void) const;
        void        ft_write_from_infile_to_outfile(std::ifstream& ifs, std::ofstream& ofs);

};