#include "whatever.hpp"

void test1(void) {
    int x = 1;
    int y = 15;

    std::cout << "before swap\tvalue x: " << x << "\t value y: " << y << std::endl;
    swap(x, y);
    std::cout << "after swap\tvalue x: " << x << "\t value y: " << y << std::endl;
    std::cout << std::endl;
    std::cout << "Min of " << x << " and " << y << ": " << min(x, y) << std::endl;
    std::cout << "Max of " << x << " and " << y << ": " << max(x, y) << std::endl;
}

void test2(void) {
    int x = -10;
    int y = 30;

    std::cout << "before swap\tvalue x: " << x << "\t value y: " << y << std::endl;
    swap(x, y);
    std::cout << "after swap\tvalue x: " << x << "\t value y: " << y << std::endl;
    std::cout << std::endl;
    std::cout << "Min of " << x << " and " << y << ": " << min(x, y) << std::endl;
    std::cout << "Max of " << x << " and " << y << ": " << max(x, y) << std::endl;
}

void test3(void) {
    int x = 10;
    int y = 10;

    std::cout << "before swap\tvalue x: " << x << "\t value y: " << y << std::endl;
    swap(x, y);
    std::cout << "after swap\tvalue x: " << x << "\t value y: " << y << std::endl;
    std::cout << std::endl;
    std::cout << "Min of " << x << " and " << y << ": " << min(x, y) << std::endl;
    std::cout << "Max of " << x << " and " << y << ": " << max(x, y) << std::endl;
}

void test4(void) {
    char x = 'a';
    char y = 'b';

    std::cout << "before swap\tvalue x: " << x << "\t value y: " << y << std::endl;
    swap(x, y);
    std::cout << "after swap\tvalue x: " << x << "\t value y: " << y << std::endl;
    std::cout << std::endl;
    std::cout << "Min of " << x << " and " << y << ": " << min(x, y) << std::endl;
    std::cout << "Max of " << x << " and " << y << ": " << max(x, y) << std::endl;
}

int main(void) {
    test1();
    // test2();
    // test3();
    // test4();
    return 0;
}