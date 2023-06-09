#include "../includes/bureaucrat.hpp"
#include "../includes/form.hpp"
#include "../includes/ShrubberyCreationForm.hpp"
#include "../includes/RobotomyRequestForm.hpp"
#include "../includes/PresidentialPardonForm.hpp"

int main () {
    try 
    {
        ShrubberyCreationForm A("text.txt");
        Bureaucrat chef("big chef", 150);
        chef.signForm(A);
        chef.executeForm(A);
        chef.executeForm(A);

        chef.executeForm(A);

        chef.executeForm(A);


    }
    catch (std::exception const& e)
    {
        std::cout << e.what() << std::endl;
    }
}