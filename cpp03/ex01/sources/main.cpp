#include "../includes/ClapTrap.h"
#include "../includes/ScavTrap.h"



int main ()
{
    ScavTrap A("A");

    A.attack("B");
    A.beRepaired(1);
    A.guardGate();
    return (0);
}
