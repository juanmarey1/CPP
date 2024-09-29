#pragma once

#include "Contact.hpp"
#include <iostream>

class PhoneBook
{
    
    private:

        int         size;          //<--- Size of contact list
        int         index;         //<--- Index for introducing new contacts
        Contact     contacts[8];   //<--- Contact array
        std::string data[5];       //<--- Where data is introduced

    public:

        PhoneBook(void);
        ~PhoneBook(void);

        void    get_contact_info(void);
        void    add_contact(void);
        void    show_contact(void) const;
        void    show_contact_index(void) const;

};