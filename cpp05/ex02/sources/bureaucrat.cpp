#include "../includes/bureaucrat.hpp"
#include "../includes/error.hpp"
#include "../includes/form.hpp"



Bureaucrat::Bureaucrat() {
    std::cout << "Constructor default Bureaucrat called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int i) {
    if (i < 1)
        throw Error("Bureaucrat::GradeTooHighException");
    else if (i > 150)
        throw Error("Bureaucrat::GradeTooLowException");
    else
    {
        this->_name = name;
        this->_grade = i;
    }
    std::cout << "Constructor default Bureaucrat called" << std::endl;
}

Bureaucrat::~Bureaucrat() {
    std::cout << "Destructor default Bureaucrat called" << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat const & src) {
    std::cout << "Copy Constructor Bureaucrat called" << std::endl;
    this->_name = src._name;
    this->_grade = src._grade;
    return;
}

Bureaucrat & Bureaucrat::operator=(Bureaucrat const & rhs) {
    if (this == &rhs) {
        return *this;
    }
    _name = rhs._name;
    _grade = rhs._grade;
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
        throw Error("Bureaucrat::GradeTooHighException");
    return;
}

void Bureaucrat::downGrade() {
    if (this->_grade <= 149)
        this->_grade++;
    else
        throw Error("Bureaucrat::GradeTooLowException");
    return;
}

void Bureaucrat::signForm(Form & f) {
    if (this->getGrade() <= f.getToSign())
    {
        std::cout << this->getName() << " signed " << f.getName() << std::endl;
        f.signeForm();
    }
    else
        std::cout << this->getName() << " couldn't sign " << f.getName() << " because his grade is too low" << std::endl;

}

void Bureaucrat::executeForm(Form const & form) {
    if (this->getGrade() <= form.getToExec() && this->getGrade() <= form.getToSign())
    {
        form.execute(*this);
        std::cout << this->_name << " executed " << form.getName() << std::endl; 
    }
    else
        throw Error("Bureaucrat::GradeTooLowException");
    
}

std::ostream &operator<<(std::ostream &out, Bureaucrat const & b) {
    out << b.getName() << " bureaucrate grade " << b.getGrade() << std::endl;
    return out;
}