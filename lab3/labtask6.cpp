#include <iostream>
using namespace std;
class Vehicle {
public:
    string make;
    string model;

    void displayInfo() {
        cout << "Make: " << make << endl;
        cout << "Model: " << model << endl;
    }
};
class Car : public Vehicle {
public:
    string engineType;
    void displayInfo() {
        Vehicle::displayInfo(); 
        cout << "Engine Type: " << engineType << endl;
    }
};

int main() {
    Car c;
    c.make = "Mercedez";
    c.model = "S class";
    c.engineType = "Hybrid";
    cout << "Car Information:" << endl;
    c.displayInfo();
    return 0;
}
