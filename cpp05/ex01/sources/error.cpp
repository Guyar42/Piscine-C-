#include <exception>
#include "../includes/error.hpp"
 

Error::Error(std::string const & phrase) throw(): m_phrase(phrase) {
    return;
}
 
const char* Error::what() const throw()
{
    return this->m_phrase.c_str();
}
    
Error::~Error() throw() {
}