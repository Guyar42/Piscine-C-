#pragma once
#include <iostream>

template< typename T >
class Array {
   public:

        Array(void);
        Array(T const & n);
        Array<T>(Array<T> const & content);
        Array<T> & operator=(const Array<T>& other);
        ~Array(void);
        T getData(unsigned i) const;
        void setData(unsigned i);

   private:
        T * _data;
        T _int;

};

template<typename T>
Array<T>::Array() {
    std::cout << "Constructor for Array called " << std::endl;
    // _data = new T[0];
}

template<typename T>
Array<T>::~Array() {
    std::cout << "Destructor for Array called " << std::endl;
}

template<typename T>
Array<T>::Array(T const & n) {
    _data = new T[n];
    T i;
    i = 0; 
    while (i < n)
    {
        _data[i] = T();
        std::cout << _data[i] << std::endl;
        i++;
    }
}

template<typename T>
T Array<T>::getData(unsigned i) const{
    return _data[i];
}

template<typename T>
Array<T>::Array(Array<T> const & content) {
    int len = sizeof(content._data);
    _data = new T[len];
    for (unsigned int i = 0; i < len; i++)
        _data[i] = content._data[i];
    std::cout << "Copie Constructor for Array called " << std::endl;
}

template<typename T>
void Array<T>::setData(unsigned i) {
    _data[i] = 8;
}

template<typename T>
Array<T>& Array<T>::operator=(const Array<T>& other){
    if (this != &other) {
        delete[] _data;

        int len  = sizeof(other._data);

        _data = new T[len];

        for (unsigned int i = 0; i < len; i++) {
            _data[i] = other._data[i];
        }
    }
    return *this;
}
