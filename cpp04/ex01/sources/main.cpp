#include "../includes/animal.hpp"
#include "../includes/dog.hpp"
#include "../includes/cat.hpp"


int main() {

int a;
a = 0;

const Animal* meta[100];

while (a <= 49)
{
    meta[a] = new Dog(); 
    a++;
}
while (a<= 99)
{
    meta[a] = new Cat(); 
    a++;
}
a = 0;
while (a <= 49)
{
    delete meta[a]; 
    a++;
}
while (a<= 99)
{
    delete meta[a]; 
    a++;
}

std::cout << "---------------------" << std::endl;
// std::cout << k->getType() << " " << std::endl;
// std::cout << l->getType() << " " << std::endl;

// k->makeSound();
// l->makeSound();


return 0;

}