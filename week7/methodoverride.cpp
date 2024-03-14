#include<iostream>
using namespace std;
class Animal{
    public:
     void eat(){
        cout<<"i am a parent"<<endl;
        cout<<"i eat to live"<<endl;
    }
};
class dog: public Animal{
    public:
     void eat(){
       cout<<"i am a child"<<endl;
       cout<<"i like to eat chicken"<<endl;;  
    }
};
int main(){

        dog obj;
        obj.eat();
    
}
