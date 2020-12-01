#include <iostream>

int main() {
    int init_val = 50, sum = 0;
    while (init_val <= 100) {
        sum += init_val;
        ++init_val;
    }
    std::cout << "Sum of 50 to 100 inclusive is: " << sum << std::endl;
    return 0;
}