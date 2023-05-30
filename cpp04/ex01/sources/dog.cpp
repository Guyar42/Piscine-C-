#include "../includes/dog.hpp"
#include "../includes/animal.hpp"


Dog::Dog(): Animal(), _brain(new Brain()) {
    std::cout << "Constructor default Dog called" << std::endl;
    this->_type = "Dog";
}

Dog::~Dog() {
    std::cout << "Destructor default Dog called" << std::endl;
    delete this->_brain;
}

Dog::Dog(Dog const & src): Animal(src), _brain(new Brain(*src._brain)) {
    std::cout << "Copy Constructor Dog called" << std::endl;
    *this = src;
    return;
}

Dog & Dog::operator=(Dog const & rhs) {
    this->_type = rhs._type;
    *this->_brain = *rhs._brain;
    return *this;
}

void Dog::makeSound(void) const {
    std::cout << "who let the dogs out ? woof woof woof" << std::endl;
}

Brain * Dog::getBrain() const {
    return this->_brain;
}

void Dog::setIdeas(int i, std::string str) {
    this->_brain->setIdeas(i, str);
}

std::string Dog::getIdeas(int i) {
    return this->_brain->getIdeas(i);
}