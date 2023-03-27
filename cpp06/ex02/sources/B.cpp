#include "../includes/B.hpp"
#include <iostream>

    B::B() {
        std::cout << "constructor for B called" << std::endl;
    }

    B::~B() {
        std::cout << "constructor for B called" << std::endl;
    }

    std::string B::getType() {
        return (this->_type);
    }