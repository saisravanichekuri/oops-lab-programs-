#include<iostream>
using namespace std;
class Vehicle{
    public:
    void vehicle(){
        cout<<"i am a vehicle"<<endl;
    }
};
class Fourwheeler:public Vehicle{
        public: Fourwheeler(){
        cout<<"i am a four wheeler vehicle"<<endl;
    }
};
class car:public Fourwheeler{
    public: car(){
        cout<<"car is a four wheeler vehicle"<<endl;
    }
};
int main(){
    car obj;
    return 0;
}
