#include "../includes/Base.hpp"
#include <string>

class A: public Base {
    public:

    A();
    ~A();

    std::string getType();
    
    private:
    std::string _type;

};