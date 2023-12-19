#include <iostream>
#include <string>

// Base Vehicle class
class Vehicle {
public:
    virtual void start() const = 0;
    virtual ~Vehicle() {}
};

// Derived Car class
class Car : public Vehicle {
private:
    std::string name;

public:
    // Constructor with name
    Car(const std::string& name) : name(name) {}

    void start() const override {
        std::cout << "Start " << name << " car\n";
    }
};

// Derived Rocket class
class Rocket : public Vehicle {
private:
    std::string name;

public:
    // Constructor with name
    Rocket(const std::string& name) : name(name) {}

    void start() const override {
        std::cout << "Start " << name << " rocket\n";
    }
};

// Function to start a vehicle
void startVehicle(const Vehicle& vehicle) {
    vehicle.start();
}

int main() {
    // Create instances of Car and Rocket with names
    Car redCar("red");
    Car awesomeCar("awesome");
    Rocket nasaRocket("NASA");

    // Start vehicles with messages including names
    startVehicle(redCar);
    startVehicle(awesomeCar);
    startVehicle(nasaRocket);

    return 0;
}
