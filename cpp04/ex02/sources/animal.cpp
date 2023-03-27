
#include "../includes/animal.hpp"


Animal::Animal(): _name("Animal") {
    std::cout << "Constructor default animal called" << std::endl;
}

Animal::~Animal() {
    std::cout << "Destructor default animal called" << std::endl;
}

Animal::Animal(Animal const & src) {
    std::cout << "Copy Constructor animal called" << std::endl;
    *this = src;
    return;
}

Animal & Animal::operator=(Animal const & rhs) {
    (void) rhs;
    return *this;
}

// void Animal::makeSound() const {
// std::cout << "hey, i am ann animal and i make some sound" << std::endl;
// }

std::string Animal::getType() const {
    return this->_name;
}