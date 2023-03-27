#pragma once

#include "../includes/bureaucrat.hpp"

#include <string>
#include <iostream>

class Bureaucrat;

class Form {
public:

    Form();
    Form(std::string name, int toSign, int toExec);
    Form(Form const & src);
    virtual ~Form();
    std::string getName() const;
    bool getSigned() const;
    int getToSign() const;
    int getToExec() const;
    void beSigned(Bureaucrat & b);
    void signeForm();
    virtual void execute(Bureaucrat & executor) const = 0;

private:
    std::string _name;
    bool _signed;
    int _toSign;
    int _toExec;

protected:
    std::string _target;
};

std::ostream &operator<<(std::ostream &out, Form const & f);