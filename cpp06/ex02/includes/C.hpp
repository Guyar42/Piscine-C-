#include "../includes/Base.hpp"
#include <string>

class C: public Base {

    public:
        C();
        ~C();

        std::string getType();

    private:
        std::string _type;
};