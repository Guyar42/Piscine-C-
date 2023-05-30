#pragma once 

#include <string>
#include <iostream>

class wrongAnimal {
public:

    wrongAnimal();
    wrongAnimal(wrongAnimal const & src);
    ~wrongAnimal();
    wrongAnimal & operator=(wrongAnimal const & rhs);
    void makeSound() const; // virtual exist only in .hpp
    std::string getType() const;
private:

protected:
    std::string _type;

};