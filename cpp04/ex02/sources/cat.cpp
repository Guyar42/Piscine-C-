#include "../includes/cat.hpp"
#include "../includes/animal.hpp"


Cat::Cat(): Animal(), brain(new Brain()){
    std::cout << "Constructor default Cat called" << std::endl;
    this->_type = "Cat";
}

Cat::~Cat() {
    std::cout << "Destructor default Cat called" << std::endl;
    delete this->brain;
}

Cat::Cat(Cat const & src): Animal(src), brain(new Brain(*src.brain)) {
    std::cout << "Copy Constructor Cat called" << std::endl;
    *this = src;
    return;
}

Cat & Cat::operator=(Cat const & rhs) {
   this->_type = rhs._type;
   *this->brain = *rhs.brain;
    return *this;
}

void Cat::makeSound(void) const {
    std::cout << "miaouw miaouw" << std::endl;
}

void Cat::setIdeas(int i, std::string str) {
    this->brain->setIdeas(i, str);
}

std::string Cat::getIdeas(int i) {
    return this->brain->getIdeas(i);
}