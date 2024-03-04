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
    int getPrivateVar(){
       return privateVar;
    }
};

class Child : private Parent{
    public:
    int proTemp = protectedVar;
    int pubTemp = publicVar;
    int priTemp = getPrivateVar();
};

int main(){
    Child obj;
    cout<<"Public variable is "<<obj.pubTemp<<endl;

    cout<<"Private Variable is "<<obj.priTemp<<endl;
    //obj.getPrivateVar();
    
    //cout<<"Portected Variable is "<<obj.protectedVar<<endl;
    cout<<"Protected Variable is "<<obj.proTemp<<endl;
}
