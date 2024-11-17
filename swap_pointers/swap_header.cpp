
#include <iostream>
#include "swap_pointers.hpp"
int main() {
    int a = 5, b = 10;

    cout << "Before swapping: a = " << a << ", b = " << b << endl;
    
    swap_fun(&a, &b); // Pass the addresses of a and b

    cout << "After swapping: a = " << a << ", b = " << b << endl;

    return 0;
}
