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
    Form & operator=(Form const & rhs);
    virtual ~Form();
    std::string getName() const;
    bool getSigned() const;
    int getToSign() const;
    int getToExec() const;
    void beSigned(Bureaucrat & b);
    void signeForm();
    virtual void execute(Bureaucrat & executor) const = 0;

    class FormNotSigned: public std::exception {
        virtual const char * what() const throw();
    };

private:

protected:
    std::string const _name;
    bool _signed;
    int const _toSign;
    int const _toExec;
    std::string _target;
};

std::ostream &operator<<(std::ostream &out, Form const & f);