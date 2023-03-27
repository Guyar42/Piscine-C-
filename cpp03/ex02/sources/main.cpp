#include "../includes/ClapTrap.h"
#include "../includes/FragTrap.h"



int main ()
{
    FragTrap A("A");
    FragTrap B("B");

    A.attack("B");
    B.attack("A");

    A.hightFiveGuys();

}
