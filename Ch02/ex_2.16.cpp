#include <iostream>

int main() {
    int i = 0, &r1 = i;
    double d = 0, &r2 = d;
    std::cout << "i: " << i << std::endl
              << "r1: " << r1 << std::endl
              << "d: " << d << std::endl
              << "r2: " << r2 << std::endl
              << std::endl;

    r2 = 3.14159;
    std::cout << "i: " << i << std::endl
              << "r1: " << r1 << std::endl
              << "d: " << d << std::endl
              << "r2: " << r2 << std::endl
              << std::endl;

    r2 = r1;
    std::cout << "i: " << i << std::endl
              << "r1: " << r1 << std::endl
              << "d: " << d << std::endl
              << "r2: " << r2 << std::endl
              << std::endl;

    i = r2;
    std::cout << "i: " << i << std::endl
              << "r1: " << r1 << std::endl
              << "d: " << d << std::endl
              << "r2: " << r2 << std::endl
              << std::endl;

    r1 = d;
    std::cout << "i: " << i << std::endl
              << "r1: " << r1 << std::endl
              << "d: " << d << std::endl
              << "r2: " << r2 << std::endl
              << std::endl;
    return 0;
}