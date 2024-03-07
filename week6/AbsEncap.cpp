#include <iostream>
using namespace std;

class AccessSpecifierDemo {
private:
    int priVar;
protected:
    int proVar;
public:
    int pubVar;

public:
    void setVar(int priVar,int proVar,int pubVar) {
        this->priVar = priVar;
        this->proVar = proVar;
        this->pubVar = pubVar;
    }
    void getVar() {
        cout << "Private: " << priVar << ", Protected: " << proVar << ", Public: " << pubVar <<endl;
    }
};

int main() {
    AccessSpecifierDemo obj;
    int a,b,c;
    cout<<"enter the values of a,b,c: "<<endl;
    cin>>a>>b>>c;
    obj.setVar(a,b,c);
    obj.getVar();
    return 0;
}
