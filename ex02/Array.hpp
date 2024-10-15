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
        int             size() const;
        T&              operator[](unsigned int index);

};

#include "Array.tpp"

#endif