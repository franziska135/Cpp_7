#include "Array.hpp"

template <typename T>
Array<T>::Array(void) {
    _array = NULL;
    _size = 0;
}

template <typename T>
Array<T>::Array(unsigned int n) {
    _array = new T[n];
    _size = n;
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
}

template <typename T>
Array<T>& Array<T>::operator=(const Array<T>& other) {
    if (this != &other) {
        if (_array)
            delete[] _array;
        if (other._size > 0)
        _array = new T[other._size];
        for (unsigned int i = 0; i < _size; i++)
            _array[i] = other._array[i];
        _size = other._size;
    }
    return *this;
}

template <typename T>
Array<T>::~Array(void) {
    delete[] _array;
}

template <typename T>
unsigned int Array<T>::size() const {
    return _size;
}

template <typename T>
T& Array<T>::operator[](unsigned int i) {
    if (i >= _size)
        throw std::out_of_range("ERROR: Index exceeds bounds");
    return _array[i];
}