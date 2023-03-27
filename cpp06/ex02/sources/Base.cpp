#include "../includes/Base.hpp"
#include "../includes/A.hpp"
#include "../includes/B.hpp"
#include "../includes/C.hpp"
#include <cstdlib>
#include <iostream>



// Base * generate(void) {
//     int i;
//     int range;
    
//     Base * b;

//     range = (3 - 1) + 1;
//     i = rand() % range + 1;

//     switch (i)
//     {
//         case 1 :
//             b = new A;
//             break;
//         case 2 :
//             b = new B;
//             break;
//         case 3 :
//             b = new C; 
//             break;
//         default :
//             return NULL;
//     }

//     return b; 
// }

// void identify(Base * p) {
//     if (dynamic_cast<A *>(p))
//         std::cout << "Base is a A type" << std::endl;
//     else if (dynamic_cast<B *>(p))
//         std::cout << "Base is a B type" << std::endl;
//     else if (dynamic_cast<C *>(p))
//         std::cout << "Base is a B type" << std::endl;
// }

// void identify(Base & p) {
//     if (dynamic_cast<A *>(p))
//         std::cout << "Base is a A type" << std::endl;
//     else if (dynamic_cast<B *>(p))
//         std::cout << "Base is a B type" << std::endl;
//     else if (dynamic_cast<C *>(p))
//         std::cout << "Base is a B type" << std::endl;
// }