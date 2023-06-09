// #include <iostream>
#include "Array.hpp"


int main () {

    Array<unsigned int> A(5);
    Array<int> B;
    
    unsigned i;
    i = 0;
    while (A.getData(i))
    {
        std::cout << A.getData(i) << std::endl;
        i++;
    }

    Array<unsigned int> C(A);
    C.setData(0);
    std::cout<< "for A = " << A.getData(0) << std::endl;
    std::cout<< "for C = " << C.getData(0) << std::endl;

    C = A;
    std::cout<< "for A = " << A.getData(0) << std::endl;
    std::cout<< "for C = " << C.getData(0) << std::endl;
}