#include<iostream>
using namespace std;
class Vehicle{
    public:
    void vehicle(){
        cout<<"i am a vehicle"<<endl;
    }
};
class Fourwheeler{
    public: four(){
        cout<<"i am a four wheeler vehicle"<<endl;
    }
};
class car: public Vehicle, public Fourwheeler{};
int main(){
    car obj;
    car.vehicle();
    car.four();
    return 0;
}
