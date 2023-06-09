#pragma once
#include <iostream>
#include <string>
#include <stdint.h>

class Data ;

class Serializer {
    public:

        Serializer();
        ~Serializer();
        Serializer(const Serializer& other);
        Serializer& operator=(const Serializer& other);
        static uintptr_t serialize(Data* ptr);
        static Data * deserialize(uintptr_t ptr);

    private:

};