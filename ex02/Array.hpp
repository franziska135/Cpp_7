#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>

template <typename T>
class Array {
    private:
        T* _array;
        unsigned int _size;

    public:
        Array();
        Array(unsigned int);
        Array(const Array<T> &other);
        ~Array();

        Array<T>&       operator=(const Array<T> &other);
        unsigned int    size() const;
        T&              operator[](unsigned int index);
        const T&        operator[](unsigned int index) const;

};

#include "Array.tpp"

#endif