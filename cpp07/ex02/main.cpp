// #include <iostream>
#include "Array.hpp"


int main () {

    Array<unsigned int> A(5);
    
    unsigned i;
    i = 0;

    A.setData(1, 5);
    while (i< A.size())
    {
        std::cout << "data A = " << A.getData(i) << std::endl;
        i++;
    }

    Array<unsigned int> C(A);
    try {
        std::cout << "data = " << C.getData(1) << std::endl;
    }
    catch (std::exception const & e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << "size = " << A.size() << std::endl;
}