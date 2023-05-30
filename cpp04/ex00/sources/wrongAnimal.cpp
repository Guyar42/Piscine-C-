#include "../includes/wrongAnimal.hpp"


wrongAnimal::wrongAnimal(): _type("wrongAnimal") {
    std::cout << "Constructor default wrongAnimal called" << std::endl;
}

wrongAnimal::~wrongAnimal() {
    std::cout << "Destructor default wrongAnimal called" << std::endl;
}

wrongAnimal::wrongAnimal(wrongAnimal const & src) {
    std::cout << "Copy Constructor wrongAnimal called" << std::endl;
    *this = src;
    return;
}

wrongAnimal & wrongAnimal::operator=(wrongAnimal const & rhs) {
    this->_type = rhs._type;
    return *this;
}

void wrongAnimal::makeSound() const {
std::cout << "hey, i am a wrongAnimal and i make some sound" << std::endl;
}

std::string wrongAnimal::getType() const {
    return this->_type;
}