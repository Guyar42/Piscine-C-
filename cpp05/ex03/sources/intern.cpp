#include "../includes/intern.hpp"
#include "../includes/form.hpp"
#include "../includes/ShrubberyCreationForm.hpp"
#include "../includes/RobotomyRequestForm.hpp"
#include "../includes/PresidentialPardonForm.hpp"



Intern::Intern() {
    std::cout << "Constructor default Intern called" << std::endl;
}

Intern::~Intern() {
    std::cout << "Destructor default Intern called" << std::endl;
}

Intern::Intern(Intern const & src) {
    std::cout << "Copy Constructor Intern called" << std::endl;
    *this = src;
    return;
} //

Intern & Intern::operator=(Intern const & rhs) {
    (void)rhs;
    return *this;
} //

Form * Intern::_findForm(const std::string name, const std::string target) const {
    std::string tab[3] = {"ShrubberyCreation", "RobotomyRequest", "PresidentialPardon"};
    int i;

    Form *form = NULL;
    i = 0;
    while (i <= 2)
    {
        if (tab[i] == name)
            break;
        i++;
    }
    switch (i)
    {
        case 0:
            form = new ShrubberyCreationForm(target);
            break;
        case 1:
            form = new RobotomyRequestForm(target);
            break;
        case 2:
            form = new PresidentialPardonForm(target);
            break;
        default:
            form = NULL;
            break;
    }
    if (form == NULL)
    {
        return NULL;
    }
    else
        return form;
}

Form * Intern::makeForm(const std::string name, const std::string target) const {
    if (this->_findForm(name, target) == NULL)
    {
        throw InvalideFormNameException();
    }
    else
    {
        std::cout << "Intern creates " << name << std::endl;
        return this->_findForm(name, target);
    }
}

const char * Intern::InvalideFormNameException::what() const throw()
{
    return "invalide form name";
}