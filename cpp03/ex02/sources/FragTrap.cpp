#include "../includes/FragTrap.h"

FragTrap::FragTrap(void) : ClapTrap() {
    this->_hit = 100;
    this->_energy = 100;
    this->_attack = 30;
    std::cout << "Constructor FragTrap default called" << std::endl;
    return;
}
FragTrap::FragTrap(std::string name) : ClapTrap(name) {
    this->_hit = 100;
    this->_energy = 50;
    this->_attack = 20;
    std::cout << "Constructor FragTrap with name called" << std::endl;
    return;
}

FragTrap::~FragTrap(void) {
    std::cout << "Destructor default FragTrap called" << std::endl;
    return;
}

FragTrap::FragTrap(FragTrap const & src) : ClapTrap() {
    *this = src;
    return;
}

FragTrap & FragTrap::operator=(FragTrap const & rhs) {
    (void)rhs;
    return *this;
}

void FragTrap::hightFiveGuys(void) {
    std::cout << _name << " ask for a hight five" << std::endl;
}

