#pragma once
#include <iostream>

class ShrubberyCreationForm: public Form {
    
public:
    ShrubberyCreationForm();
    ShrubberyCreationForm(std::string target);
    ~ShrubberyCreationForm();
    ShrubberyCreationForm(ShrubberyCreationForm const & src);
    void execute(Bureaucrat & executor) const;

private:

};