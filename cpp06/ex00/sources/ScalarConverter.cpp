#include "../includes/ScalarConverter.hpp"
#include <iostream>

#define ISINT 1
#define ISCHAR 2
#define ISFLOAT 3
#define ISDOUBLE 4
#define asciiMin 32
#define asciiMax 126



int ScalarConverter::_code = 0;
std::string ScalarConverter::_str = "";
char ScalarConverter::_fromChar = 0;
int ScalarConverter::_fromInt = 0;
float ScalarConverter::_fromFloat = 0;
double ScalarConverter::_fromDouble = 0;

ScalarConverter::ScalarConverter() {
    std::cout << "constructor for ScalarConverter called" << std::endl;
}

ScalarConverter::~ScalarConverter() {
    std::cout << "Destructor for ScalarConverter called" << std::endl;
}

ScalarConverter::ScalarConverter(std::string str) {
    std::cout << "constructor for ScalarConverter called" << std::endl;
    this->_code = 0;
    this->_str = str;
}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter& other) {
    if (this != &other) {
        _str = other._str;
    }
    return *this;
}

ScalarConverter::ScalarConverter(const ScalarConverter& other) {
    _str = other._str;
}

int ScalarConverter::getCode() {
    return _code;
}


int ScalarConverter::isNan() {
    size_t i;
    i = 0;
    if (_str.length() == 1 && std::isalpha(_str[0]))
    {
        _code = ISCHAR;
        return (0);
    }
    if (_str[0] != '-' && (isalpha(_str[0]) || (_str[0] < '0' || _str[0] > '9')))
    {
        std::cout << _str[i] << std::endl;
        std::cout << "NAN\n";
        return (1);
    }
    while (i < _str.length() - 1)
    {
        if (isalpha(_str[i]))
        {
            std::cout << _str[i] << std::endl;
            std::cout << "NAN\n";
            return(1);
        }
        i++;
    }
    if (_str[i] != 'f' && (_str[i] < '0' || _str[i] > '9'))
    {
        std::cout << _str[i] << std::endl;
        std::cout << "NAN\n";
        return (1);
    }
    return(0);
}

void ScalarConverter::checkDot() {
    int count = 0;
    int i;
    i = 0;

    while (_str[i])
    {
        if (_str[i] == '.')
            count++;
        i++;
    }
    if (count == 0)
    {
        if (_str.length() == 1 && isalpha(_str[0]) != 0)
            _code = ISCHAR;
        else
            _code = ISINT;
    }
    if (count > 1)
        _code = nan;
    if (count == 1)
    {
        if (_str[_str.length() - 1] == 'f')
            _code = ISFLOAT;
        else
            _code = ISDOUBLE;
    }
}  

void ScalarConverter::initNb(char **av) {
    if(_code == ISDOUBLE)
        _fromDouble = strtod(av[1], av);
    else if(_code == ISINT)
        _fromInt = std::atoi(av[1]);
    else if(_code == ISCHAR)
        _fromChar = av[1][0];
    else if(_code == ISFLOAT)
        _fromFloat = std::atof(av[1]);
}

void ScalarConverter::putNb() const {
    std::cout << "code = "<< this->getCode() << std::endl;
    if (_code == ISINT)
    {
        std::cout << "char: ";
        if (this->_fromInt < asciiMin || this->_fromInt > asciiMax)
            std::cout << "Non displayable" << std::endl;
        else
            std::cout << static_cast<char>(this->_fromInt) << std::endl;
        std::cout << "int: " << static_cast<int>(this->_fromInt) << std::endl;
        std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(this->_fromInt) << "f" << std::endl;
        std::cout << "double: " << std::fixed << std::setprecision(1) << static_cast<double>(this->_fromInt) << std::endl;
    }
    else if (_code == ISCHAR)
    {
        std::cout << "char: ";
        if (this->_fromChar < asciiMin || this->_fromChar > asciiMax)
            std::cout << "Non displayable" << std::endl;
        else
            std::cout << static_cast<char>(this->_fromChar) << std::endl;
        std::cout << "int: " << static_cast<int>(_fromChar) << std::endl;
        std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(this->_fromChar) << "f" << std::endl;
        std::cout << "double: " << std::fixed << std::setprecision(1) << static_cast<double>(this->_fromChar) << std::endl;
    }
    else if (_code == ISDOUBLE)
    {
        std::cout << "char: ";
        if (this->_fromDouble < asciiMin || this->_fromDouble> asciiMax)
            std::cout << "Non displayable" << std::endl;
        else
            std::cout << static_cast<char>(this->_fromDouble) << std::endl;
        std::cout << "int: " << static_cast<int>(this->_fromDouble) << std::endl;
        std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(this->_fromDouble)<< "f" << std::endl;
        std::cout << "double: " << std::fixed << std::setprecision(1) << static_cast<double>(this->_fromDouble) << std::endl;
    }
    else if (_code == ISFLOAT)
    {
        std::cout << "char: ";
        if (this->_fromFloat < asciiMin || this->_fromFloat > asciiMax)
            std::cout << "Non displayable" << std::endl;
        else
            std::cout << static_cast<char>(this->_fromFloat) << std::endl;
        std::cout << "int: " << std::fixed << std::setprecision(1) << static_cast<int>(this->_fromFloat) << std::endl;
        std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(this->_fromFloat) << "f" << std::endl;
        std::cout << "double: " << std::fixed << std::setprecision(1) << static_cast<double>(this->_fromFloat) << std::endl;
    }
}

int ScalarConverter::checkInf() const {
    if (this->_str == "+inf" || this->_str == "+inff")
    {
        std::cout << "+" << std::endl;
        return (1);
    }
    else if (this->_str == "-inf" || this->_str == "-inff")
    {
        std::cout << "-" << std::endl;
        return (1);
    }
    else 
        return 0;
}