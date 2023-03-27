#include "../includes/A.hpp"
#include <iostream>

    A::A() {
        std::cout << "constructor for A called" << std::endl;
    }

    A::~A() {
        std::cout << "constructor for A called" << std::endl;
    }

    std::string A::getType() {
        return (this->_type);
    }

    