#pragma once

#include <string>
#include "../includes/form.hpp"
#include "../includes/error.hpp"

class PresidentialPardonForm: public Form {
public:
    PresidentialPardonForm();
    PresidentialPardonForm(std::string target);
    ~PresidentialPardonForm();
    PresidentialPardonForm(PresidentialPardonForm const & src);
    PresidentialPardonForm & operator=(Form const & rhs);
    void execute(Bureaucrat & executor) const;

private:

};