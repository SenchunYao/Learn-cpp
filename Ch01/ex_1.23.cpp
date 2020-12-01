#include <iostream>

#include "Sales_item.h"

int main() {
    Sales_item item, currItem;
    if (std::cin >> item) {
        currItem = item;
        while (std::cin >> item) {
            if (item.isbn() == currItem.isbn()) {
                currItem += item;
            } else {
                std::cout << currItem << std::endl;
                currItem = item;
            }
        }
        std::cout << currItem << std::endl;
    }
    return 0;
}