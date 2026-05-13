#include <iostream>
#include <string>
#include <algorithm>

bool isPalindrome(std::string str) {
    std::string reversedStr = str;
    std::reverse(reversedStr.begin(), reversedStr.end());
    return str == reversedStr;
}

int main() {
    std::string word = "racecar";
    if (isPalindrome(word)) {
        std::cout << word << " is a palindrome." << std::endl;
    } else {
        std::cout << word << " is not a palindrome." << std::endl;
    }
    return 0;
}
