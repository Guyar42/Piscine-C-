#include "../includes/bureaucrat.hpp"


int main () {
    try 
    {
        Bureaucrat A("A", 152);
        A.downGrade();
        std::cout << A;
        Bureaucrat B(A);
        std::cout << B;
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
    catch (std::exception const & e)
    {
        std::cout << e.what() << std::endl;
    }
}