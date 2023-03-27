#include <iostream>
#include <string>

#define nan 2
#define ok 1

class Convert {
    public:

    Convert();
    Convert(std::string str);
    ~Convert();

    int getCode() const;
    void isZero(void);
    void isNan(void);
    void initNb(char **av);
    void putNb() const;
    void checkDot();
    int checkInf() const;

    private:

    int _code;
    double _nb;
    std::string _str;

    protected:

};