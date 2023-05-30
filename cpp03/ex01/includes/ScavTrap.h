#pragma once

#include <string>
#include <iostream>
#include "../includes/ClapTrap.h"

class ScavTrap: public ClapTrap {

public:
    ScavTrap(void);
    ScavTrap(std::string name);
    ScavTrap(ScavTrap const & src);
    ~ScavTrap(void);
    void guardGate();
    ScavTrap& operator=(ScavTrap const & rhs);

protected:

private:

};