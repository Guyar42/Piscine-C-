#pragma once

#include <string>
#include <iostream>


class Animal {
public:

    Animal();
    Animal(Animal const & src);
    virtual ~Animal();
    Animal & operator=(Animal const & rhs);
    virtual void makeSound() const = 0; // virtual exist only in .hpp
    std::string getType() const;
private:

protected:
    std::string _name;
};
