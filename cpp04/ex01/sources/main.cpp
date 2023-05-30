#include "../includes/animal.hpp"
#include "../includes/dog.hpp"
#include "../includes/cat.hpp"


int main() {

// int a;
// a = 0;

// const Animal* meta[100];

// while (a <= 49)
// {
//     meta[a] = new Dog(); 
//     a++;
// }
// while (a<= 99)
// {
//     meta[a] = new Cat(); 
//     a++;
// }
// a = 0;
// while (a <= 49)
// {
//     delete meta[a]; 
//     a++;
// }
// while (a<= 99)
// {
//     delete meta[a];
//     a++;
// }

std::cout << "---------------------" << std::endl;
// std::cout << k->getType() << " " << std::endl;
// std::cout << l->getType() << " " << std::endl;

// k->makeSound();
// l->makeSound();

std::cout << "---------------------" << std::endl;

// Dog basic;
// {
//     Dog tmp = basic;
// }

std::cout << "---------------------" << std::endl;

Cat A;
A.setIdeas(0, "sit");
A.setIdeas(1, "jump");
std::cout << A.getIdeas(0) << std::endl;
std::cout << A.getIdeas(1) << std::endl;

Cat B(A);
std::cout << B.getIdeas(0) << std::endl;;
std::cout << B.getIdeas(1) << std::endl;;


// return 0;
}