#pragma once

#include <string>
#include <iostream>
#include "../includes/form.hpp"

class Form;

class Intern {
public:

    Intern();
    Intern(Intern const & src);
    virtual ~Intern();
    Intern & operator=(Intern const & rhs);

    Form * makeForm(std::string name, std::string target) const;

    class InvalideFormNameException: public std::exception {
        virtual const char * what() const throw();
    };

private:

    Form * _findForm(const std::string name, const std::string target) const;

};
