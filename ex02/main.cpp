#include "Array.hpp"

int main(void) {
    try {
        Array<int> one;
        std::cout << "Size of array one: " << one.size() << std::endl;

        std::cout << std::endl;
        Array<int> two(5);
        std::cout << "Size of array two: " << two.size() << std::endl;

        std::cout << std::endl;
        for (unsigned int i = 0; i < two.size(); i++)
            two[i] = i + 10;

        std::cout << "Content of array 2: ";
        for (unsigned int i = 0; i < two.size(); i++) {
            std::cout << two[i];
            std::cout << " ";
        }
        
        std::cout << std::endl;
        std::cout << "\n(Now trying to access index [10] which is beyond bounds)" << std::endl;
        std::cout << two[10];
        std::cout << std::endl;
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    } 
}