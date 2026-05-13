#include <iostream>
#include <vector>
#include <numeric>

int main() {
    std::vector<double> numbers = {10.5, 20.0, 30.5, 40.0};
    if (numbers.empty()) {
        std::cout << "Vector is empty." << std::endl;
        return 0;
    }

    double sum = std::accumulate(numbers.begin(), numbers.end(), 0.0);
    double average = sum / numbers.size();

    std::cout << "Average: " << average << std::endl;
    return 0;
}
