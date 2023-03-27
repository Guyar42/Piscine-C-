#include "../includes/Convert.hpp"
#include <iostream>

#define nan 2
#define ok 1
#define zeroAfterDot 3
#define noDot 4
#define pinf 5
#define ninf 6
#define zero 7
#define asciiMin 32
#define asciiMax 126

Convert::Convert(): _code(0) {
    std::cout << "constructor for Convert called" << std::endl;
}

Convert::~Convert() {
    std::cout << "Destructor for Convert called" << std::endl;
}

Convert::Convert(std::string str): _code(0), _str(str) {
    std::cout << "constructor for Convert called" << std::endl;
}

int Convert::getCode() const {
    return this->_code;
}

void Convert::isZero() {
    int i;

    i = 0;
    while (this->_str[i])
    {
        if (_str[i] != '0')
        {
            _code = ok;
            return;
        }
        else
            i++;
    }
    _code = zero;
}

void Convert::isNan() {
    size_t i;
    i = 0;
    if (this->_code == pinf || this->_code == ninf)
        return;
    if (isalpha(_str[0]) || (_str[0] < '0' || _str[0] > '9'))
    {
        _code = nan;
        return;
    }
    while (i < _str.length() - 1)
    {
        if (isalpha(_str[i]))
        {
            _code = nan;
            return;
        }
        i++;
    }
    if (_str[i] != 'f' && (_str[i] < '0' || _str[i] > '9'))
    {
        std::cout << _str[i] << std::endl;
        _code = nan;
    }
    else
    {
        _code = ok;
    }
}

void Convert::checkDot() {
    size_t i;
    int d;

    i = 0;
    d = 0;
    while (i <= _str.length())
    {
        if (_str[i] == '.')
            d++;
        if (d > 1)
        {
            this->_code = nan;
            return;
        }
        i++;
    }
    if (d == 0)
    {
        this->_code = noDot;
        return;
    }
    i = 0;
    while (this->_str[i] != '.')
        i++;
    if (!this->_str[i + 1])
    {
        this->_code = nan;
        return;
    }
    while (this->_str[i])
    {
        if ((this->_str[i] >= '1' && this->_str[i] <= '9') || (this->_str[i] == 'f' && !_str[i + 1]))
        {
            this->_code = zeroAfterDot;
            return;
        }
        i++;
    }
    this->_code = zeroAfterDot;
    return;
}

void Convert::initNb(char **av) {
    _nb = strtod(av[1], av);
}

void Convert::putNb() const {
    std::cout << "code = "<< this->getCode() << std::endl;
    if (this->_code == zero)
    {
        std::cout << "is zero" << std::endl; 
        return;
    }
    if (this->_code == nan)
    {
        std::cout << "NAN\n";
        return;
    }
    std::cout << "char: ";
    if (this->_nb < asciiMin || this->_nb > asciiMax)
        std::cout << "Non displayable" << std::endl;
    else
        std::cout << (char)this->_nb << std::endl;
    
    if (_nb > INT_MAX || _nb < INT_MIN)
        std::cout << "The number is too big for an int" << std::endl;
    else 
        std::cout << "int: " << (int)(this->_nb) << std::endl;
    if (this->_code == zeroAfterDot || this->_code == noDot)
    {
        std::cout << "float: " << (float)(this->_nb) << ".0f" << std::endl;
        std::cout << "double: " << (double)(this->_nb) << ".0" << std::endl;
    }
    else if (this->_code == ok)
    {
        std::cout << "float: " << (float)(this->_nb) << "f" << std::endl;
        std::cout << "double: " << (double)(this->_nb) << std::endl;
    }
    else if (this->_code == pinf)
        std::cout << "+" << std::endl;
    else if (this->_code == ninf)
        std::cout << "-" << std::endl;
}

int Convert::checkInf() const {
    if (this->_str == "+inf" || this->_str == "+inff")
    {
        std::cout << "+" << std::endl;
        return 1;
    }
    else if (this->_str == "-inf" || this->_str == "-inff")
    {
        std::cout << "-" << std::endl;
        return 1;
    }
    else 
        return 0;
}