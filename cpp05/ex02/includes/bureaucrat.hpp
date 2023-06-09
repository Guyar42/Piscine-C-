#pragma once

#include <string>
#include <iostream>
#include "../includes/form.hpp"

class Form;

class Bureaucrat {
public:

    Bureaucrat();
    Bureaucrat(std::string name, int i);
    Bureaucrat(Bureaucrat const & src);
    virtual ~Bureaucrat();
    Bureaucrat & operator=(Bureaucrat const & rhs);

    void signForm(Form & f);

    std::string getName() const;
    int getGrade() const;
    void upGrade();
    void downGrade();
    void executeForm(Form const & form);

    class GradeTooHighException: public std::exception {
        virtual const char * what() const throw();
    };
    class GradeTooLowException: public std::exception {
        virtual const char * what() const throw();
    };
private:

protected:
    std::string const _name;
    int _grade;
};

std::ostream &operator<<(std::ostream &out, Bureaucrat const & b);