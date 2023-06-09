#include "Data.hpp"

int Data::_i = 0;
int Data::_j = 0;

Data::Data() {
    std::cout << "constructor for Data called" << std::endl;
    _i = 10;
    _j = 20;
}

Data::~Data() {
    std::cout << "Destructor for Datta called" << std::endl;
}

Data::Data(const Data& other) {
    _i = other._i;
    _j = other._j;
}

Data& Data::operator=(const Data& other) {
    if (this != &other) {
        _i = other._i;
        _j = other._j;
    }
    return *this;
}

int Data::geti(){
    return _i;
}

int Data::getj(){
    return _j;
}

void Data::seti(int i) {
    _i = i;

}