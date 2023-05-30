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
   int i; 

   i = 0;
   while(i < 100)
   {
        this->_ideas[i] = rhs._ideas[i];
        i++;
   }
    return *this;
}

std::string Brain::getIdeas(int i) const {
    return this->_ideas[i];
}

void Brain::setIdeas(int i, std::string str) {
    this->_ideas[i] = str;
}