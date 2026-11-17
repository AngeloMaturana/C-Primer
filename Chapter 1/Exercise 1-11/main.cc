#include <iostream>

int main() {
    int val1 = 0, val2 = 0, val3 = 0;

    std::cout << "Enter two integers: ";
    std::cin >> val1 >> val2;

    val3 = val1;

    while (val3 <= val2) {
        std::cout << val3 << " ";
        ++val3;
    }

    std::cout << "\n";

    return 0;
}