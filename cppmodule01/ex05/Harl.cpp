#include "Harl.hpp"

void    Harl::debug(void) {
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
    return ;
}

void    Harl::info(void) {
    std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
    return ;
}

void    Harl::warning(void) {
    std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl;
    return ;
}

void    Harl::error(void) {
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
    return ;
}

void    Harl::complain(std::string level) {
    void    (Harl::*ft_messages[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

    std::string strings[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

    for (int i = 0; i < 4; i++)
    {
        if (strings[i] == level) {
            (this->*ft_messages[i])();
            return ;
        }
    }

    std::cout << "Invalid message" << std::endl;
}