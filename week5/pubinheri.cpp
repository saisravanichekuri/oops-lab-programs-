#include<iostream>
using namespace std;
class Parent{
    public:
    int publicVar=10;

    private:
    int privateVar=20;

    protected:
    int protectedVar=30;

    public:
    void getPrivateVar(){
        cout<<"Private Variable is "<<privateVar<<endl;
    }
};

class Child : public Parent{
    public:
    int temp = protectedVar;
};

int main(){
    Child obj;
    cout<<"Public variable is "<<obj.publicVar<<endl;

    //cout<<"Private Variable is "<<obj.privateVar<<endl;
    obj.getPrivateVar();
    
    //cout<<"Portected Variable is "<<obj.protectedVar<<endl;
    cout<<"Portected Variable is "<<obj.temp<<endl;
}
