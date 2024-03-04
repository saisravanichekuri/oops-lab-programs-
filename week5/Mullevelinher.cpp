#include <iostream>
using namespace std;

class Vehicle {
public:
    void vehicle () {
        cout << "Vehicle engine started" << endl;
    }
};

class Fourwheeler : public Vehicle {
public:
    void four() {
        cout << "i am a four wheeler vehicle" << endl;
    }
};

class Car : public Fourwheeler {
public:
    void car() {
        cout << "car is a fourwheeler vehicle" << endl;
    }
};

int main() {
    Car obj;
    obj.vehicle();
    obj.four();
    obj.car();
    return 0;
}
