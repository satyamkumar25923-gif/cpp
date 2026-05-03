#include <iostream>
#include <vector>

int main() {
    std::vector<int> sum;
    sum.push_back(2);
    sum.push_back(4);
    sum.push_back(3);
    sum.push_back(6);
    sum.push_back(1);
    sum.push_back(9);

    int total = 0;
    long long product = 1;

    for (int i = 0; i < sum.size(); i++) {
        if (sum[i] % 2 == 0) {
            total = total + sum[i];
        } else {
            product = product * sum[i];
        }
    }

    std::cout << "sum of even no. is " << total << "\n";
    std::cout << "product of odd no. is " << product << "\n";

    return 0;
}
