#include "Brain.hpp"


Brain::Brain() {
    std::cout << "Brain created!" << std::endl;
}

Brain::Brain(const Brain &source) {
    *this = source;
    std::cout << "Brain copy created!" << std::endl;
}


Brain::~Brain() {
    std::cout << "Brain destroyed!" << std::endl;
}



Brain   &Brain::operator = (const Brain &source) {
    if (this != &source) {
        for (int i = 0; i < 100; i++) {
            this->ideas[i] = source.ideas[i];
        }
    }
    return (*this);
}