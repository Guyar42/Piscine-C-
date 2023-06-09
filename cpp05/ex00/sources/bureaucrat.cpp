#include "../includes/bureaucrat.hpp"



Bureaucrat::Bureaucrat() {
    std::cout << "Constructor default Bureaucrat called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int i) : _name(name), _grade(i) {
    if (i <= 1)
        throw GradeTooHighException();
    else if (i >= 150)
        throw GradeTooLowException();
    std::cout << "Constructor default Bureaucrat called" << std::endl;
}

Bureaucrat::~Bureaucrat() {
    std::cout << "Destructor default Bureaucrat called" << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat const & src) :_name(src._name), _grade(src._grade)
{
    std::cout << "Copy Constructor Bureaucrat called" << std::endl;
    *this = src;
    return;
}

Bureaucrat & Bureaucrat::operator=(Bureaucrat const & rhs) {
    this->_grade = rhs._grade;
    return *this;
}


std::string Bureaucrat::getName() const {
    return this->_name;
}

int Bureaucrat::getGrade() const {
    return this->_grade;
}

void Bureaucrat::upGrade() {
    if (this->_grade >= 2)
        this->_grade--;
    else
        throw GradeTooHighException();
    return;
}

void Bureaucrat::downGrade() {
    if (this->_grade <= 149)
        this->_grade++;
    else
        throw GradeTooLowException();
    return;
}

std::ostream &operator<<(std::ostream &out, Bureaucrat const & b) {
    out << b.getName() << " bureaucrate grade " << b.getGrade() << std::endl;
    return out;
}

const char * Bureaucrat::GradeTooHighException::what() const throw()
{
    return "Bureaucrat grade too hight";
}

const char * Bureaucrat::GradeTooLowException::what() const throw()
{
    return "Bureaucrat grade too low";
}