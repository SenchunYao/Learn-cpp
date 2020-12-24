#include <iostream>

extern int ix = 1024;  // Definition

int main() {
    // extern int ix = 1024;// Definition, but we can't place it inside a function, which would trigger an error, because you're initializing it inside a function!
    int iy;         // Definition
    extern int iz;  // Declaration

    std::cout << ix << std::endl;
    // iz = 100;// Trgger an error: undefined reference to `iz'
    return 0;
}