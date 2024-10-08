#include <iostream>
#include "swap_pointers.hpp"
using namespace std;

// Function to swap two integers using pointers
void swap_fun(int* x, int* y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}


