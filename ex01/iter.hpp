#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template <typename T>
void    iter(T* array, int size, void(*ft)(T &)) {
    for (int i = 0; i < size; i++) {
        ft(array[i]);
    }
}

template <typename T>
void    iter(T* array, int size, void(*ft)(const T &)) {
    for (int i = 0; i < size; i++) {
        ft(array[i]);
    }
}

template <typename T>
void    print(T &c) {
    std::cout << c << " ";
}

template <typename T>
void    triple(T &c) {
    std::cout << c * 3 << " ";
}

#endif