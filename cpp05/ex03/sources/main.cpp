#include "../includes/bureaucrat.hpp"
#include "../includes/error.hpp"
#include "../includes/form.hpp"
#include "../includes/ShrubberyCreationForm.hpp"
#include "../includes/RobotomyRequestForm.hpp"
#include "../includes/PresidentialPardonForm.hpp"
#include "../includes/intern.hpp"

int main () {
    try
    {
        Intern A;
        Form *B = NULL; 
        B = A.makeForm("Presidential Pardon", "Mon oncle");
        delete B; 
    }
    catch (std::exception const& e)
    {
        std::cout << e.what() << std::endl;
    }
}