#pragma once

#include <string>
#include <iostream>
#include "../includes/ClapTrap.h"

class FragTrap : public ClapTrap {

public:
    FragTrap(void);
    ~FragTrap(void);
    FragTrap(FragTrap const & src);
    FragTrap(std::string name);
    void hightFiveGuys();
    FragTrap & operator=(FragTrap const & rhs);

protected:

private:
};