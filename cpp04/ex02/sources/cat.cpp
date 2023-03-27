#include "../includes/cat.hpp"
#include "../includes/animal.hpp"


Cat::Cat(): Animal() {
    std::cout << "Constructor default Cat called" << std::endl;
    this->_name = "Cat";
    this->brain = new Brain();
}

Cat::~Cat() {
    std::cout << "Destructor default Cat called" << std::endl;
    delete this->brain;
}

Cat::Cat(Cat const & src) {
    std::cout << "Copy Constructor Cat called" << std::endl;
    *this = src;
    return;
}

Cat & Cat::operator=(Cat const & rhs) {
   (void) rhs;
    return *this;
}

void Cat::makeSound(void) const {
    std::cout << "miaouw miaouw" << std::endl;
}

void Cat::creatBrain() {
    this->brain = new Brain();
}