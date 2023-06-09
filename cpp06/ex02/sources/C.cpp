#include "../includes/C.hpp"
#include <iostream>

    C::C(){
        std::cout << "constructor for C called" << std::endl;
    }

    C::~C() {
        std::cout << "destructor for C called" << std::endl;
    }

    std::string C::getType() {
        return (this->_type);
    }