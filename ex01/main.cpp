#include "iter.hpp"

int main(void) {
    int array[] = {0, 1, 2, 3};
    int length = 4;

    std::cout << "Int array printing:\t";
    iter(array, length, print);
    std::cout << std::endl;

    std::cout << "\nInt array tripling:\t";
    iter(array, length, triple);
    std::cout << std::endl;
}