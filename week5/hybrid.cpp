#include <iostream>
using namespace std;

class Vehicle {
public:
    void start() {
        cout << "Vehicle engine started" << endl;
    }
};

class Car : public Vehicle {
public:
    void honk() {
        cout << "Car honks" << endl;
    }
};

class SportsCar : public Car {
public:
    void racing() {
        cout << "SportsCar is good racing" << endl;
    }
};

class Truck : public Vehicle {
public:
    void load() {
        cout << "Truck loading cargo" << endl;
    }
};

class AmphibiousVehicle : public Vehicle {
public:
    void swim() {
        cout << "AmphibiousVehicle swims" << endl;
    }
};

int main() {
    SportsCar sportsCar;
    sportsCar.start();
    sportsCar.honk();
    sportsCar.racing();

    Truck truck;
    truck.start();
    truck.load();

    AmphibiousVehicle amphibiousVehicle;
    amphibiousVehicle.start();
    amphibiousVehicle.swim();
    return 0;
}
