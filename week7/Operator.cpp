#include<iostream>
using namespace std;

class complex{
    private:
       int real;
       int img;
    public: 
    complex(int x=0,int y=0){
        real=x;
        img= y;

    }
    complex operator-(complex const& obj)
    {
        complex answer;
        answer.real = real -obj.real;
        answer.img = img -obj.img;
        return answer;
    }
    void display() { cout << real <<"-" << img<<"i"<<'\n'; }
    complex operator+(complex const& obj)
    {
        complex answer;
        answer.real = real + obj.real;
        answer.img = img + obj.img;
        return answer;
    }
    void print() { cout << real << "+" << img <<"i"<<'\n'; }
};
 
int main()
{
    int r1,r2,i1,i2;
    cout<<"enter the real part of the complex numbers: ";
    cin>>r1>>r2;
    cout<<"enter the imaginary part of the complex numbers: ";
    cin>>i1>>i2;
    complex c1(r1,i1), c2(r2, i2);
    complex c3 = c1 - c2;
    complex c4 = c1 + c2;
    c3.display();
    c4.print();
}
