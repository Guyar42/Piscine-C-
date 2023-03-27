#include "../includes/Convert.hpp"



int main (int ac, char **av) {

    //gerer +inf +inff -inf -inff
    if (ac < 2 || ac > 2)
    {
        std::cout << "wrong number of arg" << std::endl;
        return (0);
    }
    std::string str;
    str = av[1];
    Convert A(str);
    if (A.checkInf())
        return (0);
    A.isNan();
    if (A.getCode() == nan)
    {
        A.putNb();
        return(0);
    }
    A.checkDot();
    A.initNb(av);
    A.putNb();
    return (0);
}

// gerer .0
// 