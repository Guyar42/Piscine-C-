#include "../includes/Base.hpp"
#include "../includes/A.hpp"
#include "../includes/B.hpp"
#include "../includes/C.hpp"
#include <exception>
#include <stdlib.h>
#include <iostream>

Base * generate(void) {
    int i;
    // int range;
    
    Base * b;

    i = rand()% 5 + 1;
    switch (i)
    {
        case 1 :
            b = new A;
            break;
        case 2 :
            b = new B;
            break;
        case 3 :
            b = new C; 
            break;
        default :
            b = NULL;
            break;
    }
    return b; 
}

void identify(Base * p) {
    if (dynamic_cast<A *>(p))
        std::cout << "Base is a A type" << std::endl;
    else if (dynamic_cast<B *>(p))
        std::cout << "Base is a B type" << std::endl;
    else if (dynamic_cast<C *>(p))
        std::cout << "Base is a C type" << std::endl;
    else
        std::cout << "undetected type" << std::endl;
}

void identify(Base &p)
{
	try
	{
		A &a = dynamic_cast<A &>(p);
		(void) a;
		std::cout << "Base is a A type" << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout <<"A: " << e.what() << std::endl;
	}
	try
	{
		B &b = dynamic_cast<B &>(p);
		(void) b;
		std::cout << "Base is a B type" << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "B: " << e.what() << std::endl;
	}
	try
	{
		C &c = dynamic_cast<C &>(p);
		(void) c;
		std::cout << "Base is a C type." << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "C: "<< e.what() << std::endl;
	}
	return ;
}

int main () {

    int a;
    a = 5;

    Base *A;
    A = generate();

    identify(A);
    if (A == NULL)
        std::cout << "Base is NULL" << std::endl;
    else
        identify(*A);
    A = generate();
    identify(A);
    identify(*A);
        A = generate();
    identify(A);

    delete A;
    return(0);
}