
#pragma once

#include <stdlib.h>
#include <string>
#include <iostream>

class ClapTrap {

public:

    ClapTrap(void);
    ClapTrap(std::string name);
    ~ClapTrap(void);

    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    void getInfo() const;
    
protected:
    std::string _name;
    int _hit;
    int _energy;
    int _attack;

private:

};

//masquage;
//protected;
//attribution de pointeur;