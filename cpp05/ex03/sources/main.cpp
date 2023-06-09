#include "../includes/bureaucrat.hpp"
#include "../includes/form.hpp"
#include "../includes/ShrubberyCreationForm.hpp"
#include "../includes/RobotomyRequestForm.hpp"
#include "../includes/PresidentialPardonForm.hpp"
#include "../includes/intern.hpp"

int main () {
    try
    {
        Intern A;
        Form *B; 
        B = A.makeForm("PresidentialPardon", "someone");
        Bureaucrat Chef("big chef", 1);
        Chef.signForm(*B);
        Chef.executeForm(*B);
        delete B; 
    }
    catch (std::exception const & e)
    {
        std::cout << e.what() << std::endl;
    }
}