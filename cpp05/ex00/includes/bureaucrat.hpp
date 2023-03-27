#pragma once

#include <string>
#include <iostream>


class Bureaucrat {
public:

    Bureaucrat();
    Bureaucrat(std::string name, int i);
    Bureaucrat(Bureaucrat const & src);
    virtual ~Bureaucrat();
    Bureaucrat & operator=(Bureaucrat const & rhs);

    std::string getName() const;
    int getGrade() const;
    void upGrade();
    void downGrade();
private:

protected:
    std::string _name;
    int _grade;
};

std::ostream &operator<<(std::ostream &out, Bureaucrat const & b);