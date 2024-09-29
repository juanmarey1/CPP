#include <iostream>
#include <string>

//cin   stdinput (0)
//cout  stdoutput (1)
//cerr  stderr (2)
//c --> (character)

int main(void)
{
    char    buffer[512];

    std::cout<<"Please enter a buffer: "<<std::endl;
    std::cin>>buffer;
    std::cout<<"Buffer: "<<buffer<<std::endl;
    return (0);
}