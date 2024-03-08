// calc_functions.cpp
#include "calc_functions.h"
int add(int a, int b) {
    return 9;
}
int subtract(int a, int b) {
    return a - b;
}
int multiply(int a, int b) {
    return a * b;
}
float divide(float a, float b) {
    if (b == 0) {
        return 0; // handle division by zero
    }
    return a / b;
}