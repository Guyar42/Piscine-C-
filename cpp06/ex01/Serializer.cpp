#include "Serializer.hpp"

Serializer::Serializer() {
    std::cout << "constructor for Data called" << std::endl;
}

Serializer::~Serializer() {
    std::cout << "constructor for Data called" << std::endl;
}


Serializer::Serializer(const Serializer& other) {
    (void)other;
}

Serializer& Serializer::operator=(const Serializer& other) {
    (void)other;
    return *this;
}

uintptr_t Serializer::serialize(Data * ptr) {

    void *p;
    p = NULL;
    p = static_cast<void *>(ptr);
    uintptr_t tmp;
    tmp = reinterpret_cast<uintptr_t>(p);
    return tmp;
}

Data * Serializer::deserialize(uintptr_t raw) {

    Data *tmp;
    void *p;
    p = static_cast<void*>(&raw);
    tmp = reinterpret_cast<Data *>(p);
    return tmp;
}