// #include <iostream>
#include "Array.hpp"


int main () {

    Array<unsigned int> A(5);
    
    unsigned i;
    i = 0;
    while (A.getData(i))
    {
        std::cout << A.getData(i) << std::endl;
        i++;
    }
    Array<unsigned int> C(A);
    C.setData(0, 8);
    try {
        C.getData(10);
    }
    catch (std::exception const & e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << "size == " << A.size() << std::endl; 
    // std::cout<< "for A = " << A.getData(0) << std::endl;
    // std::cout<< "for C = " << C.getData(0) << std::endl;

    // C = A;
    // std::cout<< "for A = " << A.getData(0) << std::endl;
    // std::cout<< "for C = " << C.getData(0) << std::endl;
}