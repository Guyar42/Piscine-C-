#include "../includes/form.hpp"
#include "../includes/PresidentialPardonForm.hpp"



PresidentialPardonForm::PresidentialPardonForm(): Form() {
    std::cout << "Constructor default PresidentialPardonForm called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target): Form("PresidentialPardonForm", 25, 5) {
    this->_target = target;
    std::cout << "Constructor PresidentialPardonForm called" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm() {
    std::cout << "Destructor default PresidentialPardonForm called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & src) {
    std::cout << "Copy Constructor PresidentialPardonForm called" << std::endl;
    *this = src;
    return;
}

void PresidentialPardonForm::execute(Bureaucrat & executor) const {
    if (this->getSigned() == 0)
            throw Error("the formular is not signed");
    else if (executor.getGrade() > this->getToExec())
        throw Error("Bureaucrat's grad is too low");
    std::cout << this->_target << " has been forgiven by Zaphod Beeblebrox " << std::endl;
}

Form * PresidentialPardonForm::newPresidentialPardonForm() const {
    return (new PresidentialPardonForm());
}

