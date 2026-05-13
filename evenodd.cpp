#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers = {2, 4, 3, 6, 1, 9};

    int evenSum = 0;
    long long oddProduct = 1;

    for (size_t i = 0; i < numbers.size(); i++) {
        if (numbers[i] % 2 == 0) {
            evenSum += numbers[i];
        } else {
            oddProduct *= numbers[i];
        }
    }

    std::cout << "Sum of even numbers is: " << evenSum << "\n";
    std::cout << "Product of odd numbers is: " << oddProduct << "\n";

    return 0;
}
