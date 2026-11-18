#include <iostream>
#include "../sales_item.h"

int main() {
    Sales_item book1, book2;

    std::cin >> book1 >> book2;

    if (book1.isbn() == book2.isbn()) {
        std::cout << book1 + book2 << "\n";
        return 0;
    }

    std::cerr << "The ISBN must match\n";
    return -1;
}