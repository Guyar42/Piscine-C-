#include "../includes/dog.hpp"
#include "../includes/animal.hpp"


Dog::Dog(): Animal() {
    std::cout << "Constructor default Dog called" << std::endl;
    this->_type = "Dog";
}

Dog::~Dog() {
    std::cout << "Destructor default Dog called" << std::endl;
}

Dog::Dog(Dog const & src): Animal(src) {
    std::cout << "Copy Constructor Dog called" << std::endl;
    *this = src;
    return;
}

Dog & Dog::operator=(Dog const & rhs) {
   this->_type = rhs._type;
    return *this;
}

void Dog::makeSound(void) const {
    std::cout << "who let the dogs out ? woof woof woof" << std::endl;
}