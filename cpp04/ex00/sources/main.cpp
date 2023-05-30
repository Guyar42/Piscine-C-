#include "../includes/animal.hpp"
#include "../includes/dog.hpp"
#include "../includes/cat.hpp"
#include "../includes/wrongAnimal.hpp"
#include "../includes/wrongCat.hpp"


int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    const wrongAnimal* k= new wrongAnimal();
    const wrongAnimal* l= new wrongCat();

    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound! j->makeSound();
    meta->makeSound();
    j->makeSound();
    i->makeSound();
    std::cout << "---------------------" << std::endl;
    std::cout << k->getType() << " " << std::endl;
    k->makeSound();
    l->makeSound();
    std::cout << l->getType() << " " << std::endl;

                        // k->makeSound();
    // l->makeSound();

    delete meta;
    delete j;
    delete i;
    delete k;
    delete l;
    return 0;

}