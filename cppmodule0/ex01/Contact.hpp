#pragma once

#include <string>

class Contact
{

    public:

        void    set_firstname(std::string str);
        void    set_lastname(std::string str);
        void    set_nickname(std::string str);
        void    set_darkest_secret(std::string str);
        void    set_phone_number(std::string str);
        
        const std::string get_firstname(void) const;
        const std::string get_lastname(void) const;
        const std::string get_nickname(void) const;
        const std::string get_darkest_secret(void) const;
        const std::string get_phone_number(void) const;

    private:

        std::string _firstname;
        std::string _lastname;
        std::string _nickname;
        std::string _darkest_secret;
        std::string _phone_number;

};