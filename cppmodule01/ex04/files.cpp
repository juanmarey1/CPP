#include "files.hpp"

Files::Files(const char *input, const char *output, std::string s1, std::string s2)
{
    this->input_file = input;
    this->output_file = output;
    this->s1 = s1;
    this->s2 = s2;
    return ;
}

const char  *Files::get_input_file(void) const {
    return (this->input_file);
}

const char  *Files::get_output_file(void) const {
    return (this->output_file);
}

std::string Files::get_s1(void) const {
    return (this->s1);
}
std::string Files::get_s2(void) const {
    return (this->s2);
}

void    Files::ft_write_from_infile_to_outfile(std::ifstream& ifs, std::ofstream& ofs)
{
    std::string line;

    while (std::getline(ifs, line))
    {
        size_t      position = 0;
        while (1)
        {
            position = line.find(this->s1, position);
            if (position == std::string::npos)
                break ;
            line.erase(position, this->s1.length());
            line.insert(position, this->s2);
            position = position + this->s2.length();
        }
        ofs << line << std::endl;
    }
}