#pragma once

#include "../includes/form.hpp"
#include "../includes/error.hpp"

class RobotomyRequestForm: public Form {
public:
    RobotomyRequestForm();
    RobotomyRequestForm(std::string target);
    ~RobotomyRequestForm();
    RobotomyRequestForm(RobotomyRequestForm const & src);
    RobotomyRequestForm & operator=(Form const & rhs);
    void execute(Bureaucrat & executor) const;

private:

};