#include <iostream>
#include <string>

class Data {
    public:
    Data();
    ~Data();

    int geti();
    int getj();
    void seti(int i);

    private:
    int _i;
    int _j;
};

uintptr_t serialize(Data* ptr);
Data * deserialize(uintptr_t ptr);