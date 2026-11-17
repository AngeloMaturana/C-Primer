#include <iostream>

int main() {
    int sum = 0;

    for (int i = 50; i <= 100; ++i)
        sum += i;
    std::cout << "Sum: " << sum << "\n";

    for (int j = 10; j >= 0; --j)
        std::cout << j << " ";
    std::cout << "\n";

    return 0;
}