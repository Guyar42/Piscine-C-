#include "Data.hpp"


// mettre la classe DATA en format Coplien
int main () {

    Data *A = new Data();
    uintptr_t p;
    // Data *test;

    p = serialize(A);
    std::cout<<"adress p = "<< p << std::endl;
    // test = deserialize(p);
    std::cout<<"adress test = "<< deserialize(p) << std::endl;

    // std::cout<<"adress a = "<< A << std::endl;
    // std::cout<<"adress a = "<< A << std::endl;
    // p = serialize(A);
    // std::cout<<"adress p = "<< p << std::endl;

    // test = deserialize(p);
    // std::cout<<"adress t = "<< test << std::endl;

    
    // std::cout << test->geti() << std::endl;
    // std::cout << test->getj() << std::endl;

    // test->seti(42);

    // std::cout << test->geti() << std::endl;
    // std::cout << A->geti() << std::endl;
    // delete A;

}