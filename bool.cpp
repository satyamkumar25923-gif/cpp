#include <iostream>

int main() {
    bool isTrue = true;
    bool isFalse = false;

    std::cout << std::boolalpha; // Print true/false instead of 1/0
    std::cout << "isTrue: " << isTrue << "\n";
    std::cout << "isFalse: " << isFalse << "\n";
    std::cout << "isTrue AND isFalse: " << (isTrue && isFalse) << "\n";
    std::cout << "isTrue OR isFalse: " << (isTrue || isFalse) << "\n";
    std::cout << "NOT isTrue: " << (!isTrue) << "\n";

    return 0;
}
