#include "../includes/bureaucrat.hpp"
#include "../includes/error.hpp"
#include "../includes/form.hpp"


int main () {
    try 
    {
        Form A("test", 149, 20);
        Bureaucrat chef("big chef", 1);
        chef.signForm(A);
        A.beSigned(chef);
    }
    catch (std::exception const & e)
    {
        std::cout << e.what() << std::endl;
    }
}