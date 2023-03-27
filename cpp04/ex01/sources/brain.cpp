#include "../includes/brain.hpp"

Brain::Brain() {
    std::cout << "Constructor default Brain called" << std::endl;
}

Brain::~Brain() {
    std::cout << "Destructor default Brain called" << std::endl;
}

Brain::Brain(Brain const & src) {
    std::cout << "Copy Constructor Brain called" << std::endl;
    *this = src;
    return;
}

Brain & Brain::operator=(Brain const & rhs) {
   (void) rhs;
    return *this;
}