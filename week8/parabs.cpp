#include <iostream>
using namespace std;
// Abstract class
class Shape {
   protected:
    float dimension;
   public:
    void getDimension() {
        cin >> dimension;
    }
    void display(){
        cout<<"I AM PARTIAL"<<endl;
    }
    // pure virtual Function
    virtual float calculateArea() = 0;
};
class Square : public Shape {
   public:
    float calculateArea() {
        return dimension * dimension;
    }
};
class Circle : public Shape {
   public:
    float calculateArea() {
        return 3.14 * dimension * dimension;
    }
};
int main() {
    Square square;
    Circle circle;
    square.display();
    cout << "Enter the length of the square: "<<endl;
    square.getDimension();
    circle.display();
    cout << "Area of square: " << square.calculateArea() << endl;
    cout << "Enter radius of the circle: "<<endl;
    circle.getDimension();
    cout << "Area of circle: " << circle.calculateArea() << endl;
}
