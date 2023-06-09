#include "../includes/Base.hpp"
#include "../includes/A.hpp"
#include "../includes/B.hpp"
#include "../includes/C.hpp"
#include <cstdlib>
#include <iostream>


Base::~Base() {
        std::cout << "Destructor Base called " << std::endl;
}
