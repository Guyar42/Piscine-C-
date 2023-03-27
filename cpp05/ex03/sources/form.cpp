#include "../includes/form.hpp"
#include "../includes/bureaucrat.hpp"
#include "../includes/error.hpp"

Form::Form(): _name("name"),
            _signed(0),
            _toSign(1),
            _toExec(1) {
    std::cout << "Constructor default Form called" << std::endl;
}

Form::Form(std::string name, int toSign, int toExec) {
    if (toSign < 1 || toExec < 1)
        throw Error("Form::GradeTooHighException");
    else if (toSign > 150 || toExec > 150)
        throw Error("Form::GradeTooLowException");
    else
    {
        this->_signed = 0;
        this->_name = name;
        this->_toSign = toSign;
        this->_toExec = toExec;
    }
    std::cout << "Constructor Form called" << std::endl;
}

Form::~Form() {
    std::cout << "Destructor default Form called" << std::endl;
}

Form::Form(Form const & src) {
    std::cout << "Copy Constructor Form called" << std::endl;
    *this = src;
    return;
}

Form::Form(const std::string target): _target(target) {
    std::cout << "Constructor Form called" << std::endl;
}

std::string Form::getName() const {
    return this->_name;
}
bool Form::getSigned() const {
    return this->_signed;
}

int Form::getToSign() const {
    return this->_toSign;
}

int Form::getToExec() const {
    return this->_toExec;
}

void Form::beSigned(Bureaucrat & b) {
    if (b.getGrade() > this->getToSign())
        throw Error("Form::GradeTooLowException");
    else
    {
        this->_signed = 1;
        std::cout << this->_name << " has been signed by " << b.getName() << std::endl;
    }
}

void Form::signeForm() {
    this->_signed = 1;
}

std::ostream &operator<<(std::ostream &out, Form const & f) {
    out << f.getName() << " status is " << f.getSigned() << std::endl;
    out << "the needed grade to sign it is " << f.getToSign() << std::endl;
    out << "the needed grade to execute it is " << f.getToExec() << std::endl;
    return out;
}


