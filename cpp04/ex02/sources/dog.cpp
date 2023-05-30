#include "../includes/dog.hpp"
#include "../includes/animal.hpp"


Dog::Dog(): Animal(),  brain(new Brain()){
    std::cout << "Constructor default Dog called" << std::endl;
    this->_type = "Dog";
}

Dog::~Dog() {
    std::cout << "Destructor default Dog called" << std::endl;
    delete this->brain;
}

Dog::Dog(Dog const & src): Animal(src), brain(new Brain(*src.brain)) {
    std::cout << "Copy Constructor Dog called" << std::endl;
    *this = src;
    return;
}

Dog & Dog::operator=(Dog const & rhs) {
    this->_type = rhs._type;
    *this->brain = *rhs.brain;
    return *this;
}

void Dog::makeSound(void) const {
    std::cout << "who let the dogs out ? woof woof woof" << std::endl;
}

void Dog::setIdeas(int i, std::string str) {
    this->brain->setIdeas(i, str);
}

std::string Dog::getIdeas(int i) {
    return this->brain->getIdeas(i);
}