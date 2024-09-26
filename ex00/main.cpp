#include "whatever.hpp"

int main(void) {
    int x = 1;
    int y = 15;

    std::cout << "before switch\tvalue x: " << x << "\t value y: " << y << std::endl;
    swap(x, y);
    std::cout << "after switch\tvalue x: " << x << "\t value y: " << y << std::endl;
    std::cout << std::endl;
    std::cout << "Min of " << x << " and " << y << ": " << min(x, y) << std::endl;
    std::cout << "Max of " << x << " and " << y << ": " << max(x, y) << std::endl;
    return 0;
}