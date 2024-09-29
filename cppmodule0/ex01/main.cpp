#include "PhoneBook.hpp"

int main(void)
{
    PhoneBook   phonebook;
    std::string str;

    while (1) // No finish until exit option is entered
    {
        std::cout << "Please, select an option (ADD, SEARCH, EXIT): "<< std::endl;
        std::cout <<str<< std::endl;
        std::getline(std::cin, str);

        if (str == "ADD")
        {
            phonebook.get_contact_info();
            phonebook.add_contact();
        }
        else if (str == "SEARCH")
        {
            phonebook.show_contact();
            phonebook.show_contact_index();
        }
        else if (str == "EXIT") {
            std::cout<<"You have selected to exit the program."<<std::endl;
            break ;
        }
        else {
            std::cout<<"Invalid input. Please select a valid option: "<<std::endl;
        }
    }

    return (0);
}