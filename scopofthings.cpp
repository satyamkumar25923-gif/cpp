#include <iostream>

int globalVar = 100;

int main() {
    int localVar = 10;
    std::cout << "Global: " << globalVar << ", Local: " << localVar << std::endl;

    {
        int innerVar = 5;
        std::cout << "Inner: " << innerVar << ", Local: " << localVar << std::endl;
    }

    // std::cout << innerVar; // Error: innerVar is out of scope

    return 0;
}
