#pragma once

#include <string>
#include "../includes/form.hpp"

class PresidentialPardonForm: public Form {
public:
    PresidentialPardonForm(std::string target);
    ~PresidentialPardonForm();
    PresidentialPardonForm(PresidentialPardonForm const & src);
    PresidentialPardonForm & operator=(Form const & rhs);
    void execute(Bureaucrat & executor) const;

private:
    PresidentialPardonForm();

};