#include<iostream>
using namespace std;
class methodoverloading{
    public:
    void value(int s){
        cout<<"the int data type: "<<s<<endl;
    }
    void value(string s){
        cout<<"the string data type: "<<s<<endl;
    }
    void value(double s){
        cout<<"the double data type: "<<s<<endl;
    }
};
int main()
{
    methodoverloading obj;
    cout<<"enter an integer: ";
    int a;
    cin>>a;
    obj.value(a);
    obj.value("sravani");
    obj.value(2.22);
}
