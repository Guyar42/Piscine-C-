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
    this->_signed = 0;
    this->_name = src.getName();
    this->_toSign = src.getToSign();
    this->_toExec = src.getToExec();
    return;
}

RobotomyRequestForm & RobotomyRequestForm::operator=(Form const & rhs)
{
    if (this == &rhs)
        return *this;
    this->_signed = 0;
    this->_name = rhs.getName();
    this->_toSign = rhs.getToSign();
    this->_toExec = rhs.getToExec();
    return *this;
}

void RobotomyRequestForm::execute(Bureaucrat & executor) const {
    int random;
    random = rand();
    if (executor.getGrade() > this->getToExec())
    {
        throw Error("Bureaucrat's grad is too low");
    }
    else if (this->getSigned() == 0)
        throw Error("the formular is not signed");
    else if (random % 2 > 0)
    {
        std::cout << "BRRRRRRrrTTT BRRRRRRrrTTT" << std::endl;
        std::cout << this->_target << " has been robotomised with sucess" << std::endl;
    }
    else
        throw Error(this->_target + " couldn't be robotised");
    return;
}