#include <iostream>
#include "../sales_item.h"

int main() {
    Sales_item total;

    if (std::cin >> total) {
        Sales_item transaction;
        while (std::cin >> transaction) {
            if (total.isbn() == transaction.isbn())
                total += transaction;
            else {
                std::cout << total << "\n";
                total = transaction;
            }
        }

        std::cout << total << "\n";
    }

    return 0;
}