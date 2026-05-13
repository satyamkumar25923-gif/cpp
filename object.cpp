#include <iostream>
#include <string>

class Student {
public:
    std::string name;
    int age;

    void displayInfo() {
        std::cout << "Name: " << name << ", Age: " << age << std::endl;
    }
};

int main() {
    Student s1;
    s1.name = "Alice";
    s1.age = 20;
    s1.displayInfo();

    return 0;
}
