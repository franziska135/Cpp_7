#include "Array.hpp"

int main(void) {
    try {
        Array<int> one;
        std::cout << "Size of array one: " << one.size() << std::endl;

        std::cout << std::endl;
        Array<int> two(5);
        std::cout << "Size of array two: " << two.size() << std::endl;

        std::cout << std::endl;
        for (int i = 0; i < two.size(); i++)
            two[i] = i + 10;

        std::cout << "Content of array 2: ";
        for (int i = 0; i < two.size(); i++) {
            std::cout << two[i];
            if (i - 1 < two.size())
                std::cout << " ";
        }
        std::cout << std::endl;
        std::cout << "\nTrying to access index [10] which is beyond bounds" << std::endl;
        std::cout << two[10];
        std::cout << std::endl;
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    } 
}