#include "Data.hpp"
#include "Serializer.hpp"


// mettre la classe DATA en format Coplien
int main () {

    Data *A = new Data();
    uintptr_t p;
    Data *test;
    Serializer S;

    std::cout << "for A = " << std::endl;
    std::cout << A->geti() << std::endl;
    std::cout << A->getj() << std::endl;    
    p = S.serialize(A);
    std::cout<<"adress p = "<< p << std::endl;
    test = S.deserialize(p);
    std::cout<<"adress p = "<< p << std::endl;
    std::cout<<"adress test = "<< test << std::endl;
    


    std::cout << "for test = " << std::endl;
    std::cout << test->geti() << std::endl;
    std::cout << test->getj() << std::endl;

    // std::cout<<"adress a = "<< A << std::endl;
    // std::cout<<"adress a = "<< A << std::endl;
    // p = serialize(A);
    // std::cout<<"adress p = "<< p << std::endl;

    // test = deserialize(p);
    // std::cout<<"adress t = "<< test << std::endl;


    // test->seti(42);

    // std::cout << test->geti() << std::endl;
    // std::cout << A->geti() << std::endl;
    // delete A;

}