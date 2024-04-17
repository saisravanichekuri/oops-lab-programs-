#include<iostream>
using namespace std;
template <typename type>
class Calculator
{
private:
        type num1, num2;       
public:
        Calculator(type n1, type n2)
        {
                num1 = n1;
                num2 = n2;
        }
        void displayResult()
        {
                cout << "Numbers are: " << num1 << " and " << num2 << "." << endl;
                cout << "Addition is: " << add() << endl;
                cout << "Subtraction is: " << subtract() << endl;
                cout << "Product is: " << multiply() << endl;
                cout << "Division is: " << divide() << endl;
        }
        type add() { return num1 + num2; }
        type subtract() { return num1 - num2; }
        type multiply() { return num1 * num2; }
        type divide() { return num1 / num2; }
};
int main()
{
        Calculator<int> intCalc(2, 1);
        cout << "Int results:" << endl;
        intCalc.displayResult();
}
