#include <iostream>

#include "Sales_item.h"

int main() {
    Sales_item item, item_sum;
    if (std::cin >> item) {
        item_sum = item;
        while (std::cin >> item)
            item_sum += item;
        std::cout << item_sum << std::endl;
    }

    return 0;
}