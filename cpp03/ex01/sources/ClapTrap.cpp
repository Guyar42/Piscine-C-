#include "../includes/ClapTrap.h"

ClapTrap::ClapTrap(void): _hit(10), _energy(10), _attack(0)
{
    std::cout << "Constructor default ClapTrap called" << std::endl;
}

ClapTrap::ClapTrap(std::string name): _name(name), _hit(10), 
                                    _energy(10), _attack(0)
{
    std::cout << "Constructor ClapTrap with string Called" << std::endl;
    return;
}

ClapTrap::ClapTrap(ClapTrap const & src) {
    *this = src;
    return;
}

ClapTrap & ClapTrap::operator=(ClapTrap const & rhs) {
    if (this != &rhs)
    {
        this->_name = rhs._name;
        this->_hit = rhs._hit;
        this->_energy = rhs._energy;
        this->_attack = rhs._attack;
    }
    return *this;
}

ClapTrap::~ClapTrap(void)
{
    std::cout << "Destructor ClapTrap Called" << std::endl;
    return;
}

void ClapTrap::attack(const std::string& target)
{
    if (this->_energy > 0 && _hit > 0)
    {
        _energy -= 1;
        std::cout << this->_name << " attack " << target << std::endl;
        std::cout << "Left energie: " << this->_energy << std::endl;
    }
    else if (this->_hit == 0)
        std::cout << _name << " is dead" << std::endl;
    else
        std::cout << this->_name << " has not enought energy to attack" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (_hit == 0)
    {
        std::cout << _name << " is dead";
    }
    else
    {
        std::cout << this->_name << "take " << amount << " of damage" << std::endl;
        this->_hit -= amount;
        if (_hit <= 0)
            _hit = 0; 
        std::cout << "Left hp: " << this->_hit << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (_hit == 0)
    {
        std::cout << _name << " is dead";
    }
    else if (this->_energy > 0)
    {
        this->_energy -= 1;
        this->_hit += amount;  
        std::cout << this->_name << " is repaired by " << amount << std::endl;
        std::cout << "Left hp for " << _name << ": " << this->_hit << std::endl;
        std::cout << "Left energie for " << _name << ": " << this->_energy << std::endl;
    }
    else
        std::cout << this->_name << " has not enought energy to be repaired" << std::endl;
}

void ClapTrap::getInfo() const
{
    std::cout << "Name: " << _name << std::endl;
    std::cout << "HP: " << _hit << std::endl;
    std::cout << "Energy: " << _energy << std::endl;
}