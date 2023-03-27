#include "../includes/Base.hpp"
#include <string>


class B: public Base {
    public:

    B();
    ~B();

    std::string getType();


    private:
    std::string _type;

};