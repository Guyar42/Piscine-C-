#pragma once

#include "../includes/form.hpp"

class RobotomyRequestForm: public Form {
public:
    RobotomyRequestForm(std::string target);
    ~RobotomyRequestForm();
    RobotomyRequestForm(RobotomyRequestForm const & src);
    RobotomyRequestForm & operator=(Form const & rhs);
    void execute(Bureaucrat & executor) const;

    class RandomReason: public std::exception {
        virtual const char * what() const throw();
    };

private:
    RobotomyRequestForm();

};