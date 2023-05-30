#pragma once

#include "../includes/bureaucrat.hpp"

#include <string>
#include <iostream>

class Bureaucrat;

class Form {
public:

    Form();
    Form(std::string name, int toSign, int toExec);
    ~Form();
    Form(Form const & src);
    Form & operator=(Form const & rhs);

    std::string getName() const;
    bool getSigned() const;
    int getToSign() const;
    int getToExec() const;
    void beSigned(Bureaucrat & b);

private:
    std::string _name;
    bool _signed;
    int _toSign;
    int _toExec;

};

std::ostream &operator<<(std::ostream &out, Form const & f);