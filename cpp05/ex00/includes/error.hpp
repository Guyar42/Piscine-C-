#include <exception>
#include <string>

 
class Error: public std::exception
{
public:
    Error(std::string const& phrase) throw();
    virtual ~Error() throw();
    virtual const char* what() const throw();
    
private:
    std::string m_phrase;            //Description de l'erreur
};
