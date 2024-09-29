#include "PhoneBook.hpp"

///////////////     CONSTRUCTOR/DESTRUCTOR      //////////////////////

PhoneBook::PhoneBook(void)
{
    std::cout<<"////  Welcome to the PhoneBook!  ////"<<std::endl;
    this->size = 0;
    this->index = 0;
    return ;
}

PhoneBook::~PhoneBook(){
    return ;
}

//////////////////////////////////////////////////////////////////////

/////////////////////       ADD CONTACT      /////////////////////////

//////////////////////////////////////////////////////////////////////

int ft_valid_info(std::string str) //In order to know if the phone number is valid
{
    int i = 0;

    while (str[i])
    {
        if (str[i] < '0' || str[i] > '9')
            return (0);
        i++;
    }
    if (i != 9)
        return (0);
    return (1);
}

void    PhoneBook::get_contact_info(void) //Stores all input in PhoneBook::data[] variable
{
    std::cout<<"Enter the information of the new contact: "<<std::endl;
    std::cout<<"Enter the first name: ";
    std::getline(std::cin, this->data[0]);
    std::cout<<this->data[0]<<std::endl;
    std::cout<<"Enter the last name: ";
    std::getline(std::cin, this->data[1]);
    std::cout<<this->data[1]<<std::endl;
    std::cout<<"Enter the nickname: ";
    std::getline(std::cin, this->data[2]);
    std::cout<<this->data[2]<<std::endl;
    while (1)
    {
        std::cout<<"Enter the phone number: ";
        std::getline(std::cin, this->data[3]);
        std::cout<<this->data[3]<<std::endl;
        if (ft_valid_info(this->data[3]) == 1)
            break ;
        std::cout<<"Invalid phone number"<<std::endl;
    }
    std::cout<<"Enter the darkest secret: ";
    std::getline(std::cin, this->data[4]);
    std::cout<<this->data[4]<<std::endl;
}

void    PhoneBook::add_contact(void) //Adds contact information to the Contact class array. Also increases size and manages index info for next contact addition
{
    this->contacts[this->index].set_firstname(this->data[0]);
    this->contacts[this->index].set_lastname(this->data[1]);
    this->contacts[this->index].set_nickname(this->data[2]);
    this->contacts[this->index].set_phone_number(this->data[3]);
    this->contacts[this->index].set_darkest_secret(this->data[4]);

    if (this->size < 8)
        this->size++;
    if (this->index < 7)
        this->index++;
    else
        this->index = 0;

    std::cout<<"Contact added successfully"<<std::endl;
}

/////////////////////////////////////////////////////////////////////////////////////////

///////////////////////       SHOW CONTACTS              ////////////////////////////////

/////////////////////////////////////////////////////////////////////////////////////////

void    print_info(std::string str) //Prints the information in order to fit in a 10 character margin.
{
    int size;
    int i;

    size = 0;
    while (str[size])
        size++;
    if (size > 10)
    {
        i = 0;
        while(i < 9)
        {
            std::cout << str[i];
            i++;
        }
        std::cout<< ".";
    }
    else
    {
        i = 10;
        while (i - size > 0)
        {
            std::cout << " ";
            i--;
        }
        i = -1;
        while (str[++i])
            std::cout << str[i];
    }
    std::cout<<"|";
}

void    PhoneBook::show_contact(void) const //Prints all the basic info of the added contacts in a table style
{
    int i = 0;

    if (this->size == 0)
        return ;
    std::cout<<"     Index|First Name| Last Name|  Nickname|"<<std::endl;
    std::cout<<"--------------------------------------------"<<std::endl;
    while (i < this->size)
    {
        std::cout<<"         ";
        std::cout<<i + 1;
        std::cout<<"|";
        print_info(this->contacts[i].get_firstname());
        print_info(this->contacts[i].get_lastname());
        print_info(this->contacts[i].get_nickname());
        std::cout<<""<<std::endl;
        i++;
    }
}

void    PhoneBook::show_contact_index(void) const //Shows all the info of the contact whose index is selected
{
    int i;

    if (this->size == 0)
        return ;
    while (1)
    {
        std::cout << "Enter the index of the contact to view: ";
        std::cin >> i;
        std::cout << i << std::endl;
        if (i - 1 < this->size && i - 1 >= 0)
            break ;
        std::cout << "Please, introduce a correct index." << std::endl;
    }
    std::cout << "First Name : "<< this->contacts[i - 1].get_firstname() << std::endl;
    std::cout << "Last Name : "<< this->contacts[i - 1].get_lastname() << std::endl;
    std::cout << "Nickname : "<< this->contacts[i - 1].get_nickname() << std::endl;
    std::cout << "Phone Number : "<< this->contacts[i - 1].get_phone_number() << std::endl;
    std::cout << "Darkest Secret : "<< this->contacts[i - 1].get_darkest_secret() << std::endl;
}