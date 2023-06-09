#include <cstdlib>

#include "../includes/RobotomyRequestForm.hpp"


RobotomyRequestForm::RobotomyRequestForm(): Form("RobotomyRequestForm", 72,45) {
    std::cout << "Constructor default RobotomyRequestForm called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target): Form("RobotomyRequestForm", 72,45) {
    this->_target = target;
}

RobotomyRequestForm::~RobotomyRequestForm() {
    std::cout << "Destructor default RobotomyRequestForm called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & src) : Form("RobotomyRequestForm", 72,45) {
    std::cout << "Copy Constructor RobotomyRequestForm called" << std::endl;
    (void) src;
    this->_signed = 0;
    return;
}

RobotomyRequestForm & RobotomyRequestForm::operator=(Form const & rhs)
{
    if (this == &rhs)
        return *this;
    this->_signed = 0;
    return *this;
}

void RobotomyRequestForm::execute(Bureaucrat & executor) const {
    int random;
    random = rand();
    if (executor.getGrade() > this->getToExec())
    {
        throw Form::FormNotSigned();
    }
    else if (this->getSigned() == 0)
        throw Bureaucrat::GradeTooLowException();
    else if (random % 2 > 0)
    {
        std::cout << "BRRRRRRrrTTT BRRRRRRrrTTT" << std::endl;
        std::cout << this->_target << " has been robotomised with sucess" << std::endl;
    }
    else
        throw RandomReason();
    return;
}

const char * RobotomyRequestForm::RandomReason::what() const throw(){
    return ("The target couldn't be robotised");
}