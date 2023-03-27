#include "../includes/bureaucrat.hpp"
#include "../includes/error.hpp"
#include "../includes/form.hpp"
#include "../includes/ShrubberyCreationForm.hpp"
#include "../includes/RobotomyRequestForm.hpp"
#include "../includes/PresidentialPardonForm.hpp"

int main () {
    try 
    {
        PresidentialPardonForm A("test");
        Bureaucrat chef("big chef", 1);
        chef.signForm(A);
        chef.executeForm(A);
    }
    catch (std::exception const& e)
    {
        std::cout << e.what() << std::endl;
    }
}