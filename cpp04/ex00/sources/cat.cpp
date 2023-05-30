#include "../includes/cat.hpp"
#include "../includes/animal.hpp"


Cat::Cat(): Animal() {
    std::cout << "Constructor default Cat called" << std::endl;
    this->_type = "Cat"; 
}

Cat::~Cat() {
    std::cout << "Destructor default Cat called" << std::endl;
}

Cat::Cat(Cat const & src) {
    std::cout << "Copy Constructor Cat called" << std::endl;
    *this = src;
    return;
}

Cat & Cat::operator=(Cat const & rhs) {
   this->_type = rhs._type;
    return *this;
}

void Cat::makeSound(void) const {
    std::cout << "miaouw miaouw" << std::endl;
}