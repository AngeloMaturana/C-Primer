#include <iostream>
#include "../sales_item.h"

int main() {
    Sales_item current;

    if (std::cin >> current) {
        int count = 1;
        Sales_item transaction;

        while (std::cin >> transaction) {
            if (current.isbn() == transaction.isbn())
                ++count;
            else {
                std::cout << current.isbn() << " occurs " << count << " times.\n";
                current = transaction;
                count = 1;
            }
        }

        std::cout << current.isbn() << " occurs " << count << " times.\n";
    }

    return 0;
}