#pragma once
#include <iostream>

class ShrubberyCreationForm: public Form {
    
public:
    ShrubberyCreationForm(std::string target);
    ~ShrubberyCreationForm();
    ShrubberyCreationForm(ShrubberyCreationForm const & src);
    ShrubberyCreationForm & operator=(Form const & rhs);
    void execute(Bureaucrat & executor) const;

    class ErrFile: public std::exception {
        virtual const char * what() const throw();
    };

private:
    ShrubberyCreationForm();

};