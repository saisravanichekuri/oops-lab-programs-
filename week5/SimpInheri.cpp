#include<iostream>
using namespace std;
class SimpleInheri{
    public:
    void grandparents(){
        cout<<"i am the head of the family!"<<endl;
    }

    void parent(){
        cout<<"i am the first generation son of the family"<<endl;
    }

};

class family: public SimpleInheri{
    public:
    void child(){
        cout<<"i am the second generation child of the family"<<endl;
    }
};

int main(){
    family family1;
    family1.grandparents();
    family1.parent();
    family1.child();
}
