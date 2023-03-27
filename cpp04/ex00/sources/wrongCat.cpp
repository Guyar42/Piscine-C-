#include "../includes/wrongCat.hpp"
#include "../includes/wrongAnimal.hpp"


wrongCat::wrongCat(): wrongAnimal() {
    std::cout << "Constructor default wrongCat called" << std::endl;
    this->_name = "wrongCat"; 
}

wrongCat::~wrongCat() {
    std::cout << "Destructor default wrongCat called" << std::endl;
}

wrongCat::wrongCat(wrongCat const & src) {
    std::cout << "Copy Constructor wrongCat called" << std::endl;
    *this = src;
    return;
}

wrongCat & wrongCat::operator=(wrongCat const & rhs) {
   (void) rhs;
    return *this;
}

void wrongCat::makeSound(void) const {
    std::cout << "miaouw miaouw" << std::endl;
}