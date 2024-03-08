#include <iostream>
#include "calc_functions.h"

int main() {
    int x = 10, y = 5;
    std::cout << "Addition: " << add(x, y) << std::endl;
    std::cout << "Subtraction: " << subtract(x, y) << std::endl;
    std::cout << "Multiplication: " << multiply(x, y) << std::endl;
    std::cout << "Division: " << divide(x, y) << std::endl;

    return 0;
}
