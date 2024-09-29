#include "Contact.hpp"

//////      STORE PRIVATE VARS         /////////

void    Contact::set_firstname(std::string str) {
    this->_firstname = str;
    return ;
}

void    Contact::set_lastname(std::string str) {
    this->_lastname = str;
    return ;
}

void    Contact::set_nickname(std::string str) {
    this->_nickname = str;
    return ;
}

void    Contact::set_darkest_secret(std::string str) {
    this->_darkest_secret = str;
    return ;
}

void    Contact::set_phone_number(std::string str) {
    this->_phone_number = str;
    return ;
}

/////////    ACCESS PRIVATE VARS     ///////////////

const std::string Contact::get_firstname(void) const {
    return (this->_firstname);
}

const std::string Contact::get_lastname(void) const {
    return (this->_lastname);
}

const std::string Contact::get_nickname(void) const {
    return (this->_nickname);
}

const std::string Contact::get_phone_number(void) const {
    return (this->_phone_number);
}

const std::string Contact::get_darkest_secret(void) const {
    return (this->_darkest_secret);
}