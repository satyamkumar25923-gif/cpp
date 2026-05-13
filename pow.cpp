#include <iostream>
#include <cmath>

int main() {
    double base = 2.0;
    double exponent = 3.0;
    double result = std::pow(base, exponent);

    std::cout << base << "^" << exponent << " = " << result << std::endl;
    return 0;
}
