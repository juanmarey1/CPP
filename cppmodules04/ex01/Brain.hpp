#include <iostream>
#include <string>


class Brain 
{

    public:

        std::string    ideas[100];

        Brain();
        Brain(const Brain &source);

        Brain   &operator = (const Brain &source);

        ~Brain();

};