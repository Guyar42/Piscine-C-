#pragma once
#include <iostream>
#include <string>
#include <stdint.h>

class Data {
    public:
        Data();
        ~Data();

        Data(const Data& other);
        Data& operator=(const Data& other);
        
        static int geti();
        static int getj();
        static void seti(int i);

    private:
        static int _i;
        static int _j;
};
