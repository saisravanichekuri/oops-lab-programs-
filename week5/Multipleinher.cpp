#include<iostream>
using namespace std;
class Vehicle{
    public:
    void vehicle(){
        cout<<"i am a vehicle"<<endl;
    }
};
class Fourwheeler{
    public: Fourwheeler(){
        cout<<"i am a four wheeler vehicle"<<endl;
    }
};
class car: public Vehicle, public Fourwheeler{};
int main(){
    car obj;
    return 0;
}
