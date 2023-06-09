#include <iostream>
#include <string>
#include <stdlib.h>
#include <limits.h>
#include <iomanip>


#define nan 2
#define ok 1

class ScalarConverter {
public:

    ScalarConverter(std::string str);
    ~ScalarConverter();
    ScalarConverter(const ScalarConverter& other);
    ScalarConverter& operator=(const ScalarConverter& other);

    static int getCode();
    int isNan(void);
    void initNb(char **av);
    void putNb() const;
    void checkDot();
    int checkInf() const;

private:

    ScalarConverter();

    static char _fromChar;
    static int _fromInt;
    static float _fromFloat;
    static double _fromDouble;
    static int _code;
    static std::string _str;

protected:

};