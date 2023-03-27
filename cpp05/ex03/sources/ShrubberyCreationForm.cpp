#include "../includes/form.hpp"
#include "../includes/ShrubberyCreationForm.hpp"
#include "../includes/error.hpp"
#include <iostream>
#include <fstream>


ShrubberyCreationForm::ShrubberyCreationForm(): Form() {
    std::cout << "Constructor default ShrubberyCreationForm called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): Form("ShrubberyCreationForm", 145, 137) {
    this->_target = target;
    std::cout << "Constructor ShrubberyCreationForm called" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
    std::cout << "Destructor default ShrubberyCreationForm called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & src)
{
    std::cout << "Copy Constructor ShrubberyCreationForm called" << std::endl;
    *this = src;
    return;
}

void ShrubberyCreationForm::execute(Bureaucrat & executor) const {
    std::ofstream newfile; 
    newfile.open(this->_target, std::ios::out);
    if (!newfile)
    {
        throw Error("File can not be open");
    }
    else if (this->getSigned() == 0)
        throw Error("the formular is not signed");
    else if (executor.getGrade() > this->getToExec())
    {
        throw Error("Bureaucrat's grad is too low");
    }
    else
    {
        newfile << "    oxoxoo    ooxoo\n\
                      ooxoxo oo  oxoxooo\n\
                      oooo xxoxoo ooo ooox\n\
                      oxo o oxoxo  xoxxoxo\n\
                       oxo xooxoooo o ooo\n\
                         ooooo|ooo| /o/o\n\
                              |  |//\n\
                              |   /\n\
                              |  |\n\
                              | D|\n\
                              |  |\n\
                              |  |\n\
                       ______/___|____\n" << std::endl;
        std::cout << executor.getName() << " executed " << this->getName() << std::endl;
    }
    return;
}

Form * ShrubberyCreationForm::newShrubberyCreationForm(const std::string target) const {
    return new ShrubberyCreationForm(target);
}