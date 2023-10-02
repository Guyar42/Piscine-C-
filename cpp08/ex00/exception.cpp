#include "easyfind.hpp"

const char * CantFindTheValue::what() const throw()
{
    return "Cannot find the value";
}