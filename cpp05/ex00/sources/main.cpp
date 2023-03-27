#include "../includes/bureaucrat.hpp"
#include "../includes/error.hpp"


int main () {
    try 
    {
        Bureaucrat A("A", 145);
        A.downGrade();
        std::cout << A;
        // std::cout << A.getGrade() << std::endl;
        // A.downGrade();
        // std::cout << A.getGrade() << std::endl;
        //         A.downGrade();
        // std::cout << A.getGrade() << std::endl;
        //         A.downGrade();
        // std::cout << A.getGrade() << std::endl;
        //         A.downGrade();
        // std::cout << A.getGrade() << std::endl;
        //                A.downGrade();
        // std::cout << A.getGrade() << std::endl;
        //                A.downGrade();
        // std::cout << A.getGrade() << std::endl;
    }
    catch (std::exception const& e)
    {
        std::cout << e.what() << std::endl;
    }
}