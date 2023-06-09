#include "../includes/ScalarConverter.hpp"



int main (int ac, char **av) {

    //gerer +inf +inff -inf -inff
    if (ac < 2 || ac > 2)
    {
        std::cout << "wrong number of arg" << std::endl;
        return (0);
    }
    std::string str;
    str = av[1];
    ScalarConverter A(str);
    if (A.checkInf() == 1)
        return (0);
    if (A.isNan() == 1)
        return (0);
    A.checkDot();
    A.initNb(av);
    A.putNb();
    return (0);
}
