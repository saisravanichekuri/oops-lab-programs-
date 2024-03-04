#include<iostream>
using namespace std;
class Vehicle{
    public:
    void vehicle(){
        cout<<"i am a vehicle"<<endl;
    }
};
class Fourwheeler{
    public:
    void four(){
        cout<<"i am a four wheeler vehicle"<<endl;
    }
};
class car: public Vehicle, public Fourwheeler{};
int main(){
    car obj;
    obj.vehicle();
    obj.four();
    return 0;
}
