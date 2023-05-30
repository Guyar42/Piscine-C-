#include "../includes/ScavTrap.h"

ScavTrap::ScavTrap(void) : ClapTrap() {
    this->_hit = 100;
    this->_energy = 100;
    this->_attack = 30;
    std::cout << "Constructor ScavTrap default called" << std::endl;
    return;
}
ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
    this->_hit = 100;
    this->_energy = 50;
    this->_attack = 20;
    std::cout << "Constructor ScavTrap with name called" << std::endl;
    return;
}
ScavTrap::ScavTrap(ScavTrap const & src) : ClapTrap() {
    *this = src;
    return;
}

ScavTrap::~ScavTrap(void) {
    std::cout << "Destructor default ScavTrap called" << std::endl;
    return;
}


ScavTrap & ScavTrap::operator=(ScavTrap const & rhs) {
    (void)rhs;
    return *this;
}

void ScavTrap::guardGate() {
    std::cout << this->_name << " enter in Gate keeper mode" << std::endl;
}
