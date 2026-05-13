#include <iostream>
#include <string>

class Plant {
public:
    virtual void grow() {
        std::cout << "The plant is growing." << std::endl;
    }
};

class Flower : public Plant {
public:
    void grow() override {
        std::cout << "The flower is blooming!" << std::endl;
    }
};

int main() {
    Plant* myPlant = new Flower();
    myPlant->grow();
    delete myPlant;
    return 0;
}
