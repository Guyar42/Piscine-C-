#include "Data.hpp"

Data::Data(): _i(10), _j(20) {
    std::cout << "constructor for Data called" << std::endl;
}

Data::~Data() {
    std::cout << "Destructor for Datta called" << std::endl;
}

int Data::geti(){
    return this->_i;
}

int Data::getj(){
    return this->_j;
}

void Data::seti(int i) {
    this->_i = i;

}

uintptr_t serialize(Data * ptr) {

    void *p;
    p = NULL;
    p = (void*)ptr;
    uintptr_t tmp;
    tmp = (uintptr_t) p;

    return tmp;
}

Data * deserialize(uintptr_t raw) {

    Data *tmp;
    void *p;
    p = (void *)raw;
    tmp = (Data *) p;
    return tmp;
}