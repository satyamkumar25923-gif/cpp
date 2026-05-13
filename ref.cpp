#include <iostream>

void increment(int &n) {
    n++;
}

int main() {
    int x = 10;
    std::cout << "Before increment: " << x << std::endl;
    increment(x);
    std::cout << "After increment: " << x << std::endl;

    int &y = x;
    y = 20;
    std::cout << "After modifying reference y: " << x << std::endl;

    return 0;
}
