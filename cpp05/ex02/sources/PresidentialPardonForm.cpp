#include "../includes/form.hpp"
#include "../includes/PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): Form("PresidentialPardonForm", 25, 5) {
    std::cout << "Constructor default PresidentialPardonForm called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target): Form("PresidentialPardonForm", 25, 5) {
    this->_target = target;
    std::cout << "Constructor PresidentialPardonForm called" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm() {
    std::cout << "Destructor default PresidentialPardonForm called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & src) : Form("PresidentialPardonForm", 25, 5) {
    std::cout << "Copy Constructor PresidentialPardonForm called" << std::endl;
    this->_signed = 0;
    this->_name = src.getName();
    this->_toSign = src.getToSign();
    this->_toExec = src.getToExec();
    return;
}

PresidentialPardonForm & PresidentialPardonForm::operator=(Form const & rhs)
{
    if (this == &rhs)
        return *this;
    this->_signed = 0;
    this->_name = rhs.getName();
    this->_toSign = rhs.getToSign();
    this->_toExec = rhs.getToExec();
    return *this;
}

void PresidentialPardonForm::execute(Bureaucrat & executor) const {
    if (this->getSigned() == 0)
            throw Error("the formular is not signed");
    else if (executor.getGrade() > this->getToExec())
        throw Error("Bureaucrat's grad is too low");
    std::cout << this->_target << " has been forgiven by Zaphod Beeblebrox " << std::endl;
}