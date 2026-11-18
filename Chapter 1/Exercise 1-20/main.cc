#include <iostream>
#include "../sales_item.h"

int main() {
    Sales_item book;

    while (std::cin >> book);
        std::cout << book << "\n";

    return 0;
}