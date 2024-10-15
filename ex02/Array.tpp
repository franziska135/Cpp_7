#include "Array.hpp"

template <typename T>
Array<T>::Array(void) {
    _array = NULL;
    _size = 0;
    std::cout   << "Default constructor" << std::endl;
}

template <typename T>
Array<T>::Array(unsigned int n) {
    _array = new T[n];
    _size = n;
    std::cout   << "Parametrized constructor" << std::endl;
}

template <typename T>
Array<T>::Array(const Array<T> &other) {
    _size = 0;
    if (other._size > 0) {
        _size = other._size;
        _array = new T[other._size];
        for (unsigned int i = 0; i < _size; i++)
            _array[i] = other._array[i];
    }
    std::cout   << "Copy constructor" << std::endl;
}

template <typename T>
Array<T>& Array<T>::operator=(const Array<T>& other) {
    if (this != &other) {
        if (_array)
            delete[] _array;
        if (other._size > 0)
        _array = new T[other._size];
        for (int i = 0; i < _size; i++)
            _array[i] = other._array[i];
        _size = other._size;
    }
    std::cout   << "Assignment constructor" << std::endl;
    return *this;
}

template <typename T>
Array<T>::~Array(void) {
    delete[] _array;
}

template <typename T>
int Array<T>::size() const {
    return _size;
}

template <typename T>
T& Array<T>::operator[](unsigned int i) {
    if (i >= _size)
        throw std::out_of_range("ERROR: Index exceeds bounds");
    return _array[i];
}