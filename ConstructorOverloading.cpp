#include <iostream>
using namespace std;

class Complex
{
    int a, b;
    public:
            Complex()
            {
                a = 0;
                b = 0;
            }
            Complex(int x, int y)
            {
                a = x;
                b = y;
            }
            
            Complex(int x)
            {
                a = x;
                b = 0;
            }
            void printNumber()
            {
                cout << "Your number is " << a << "+" << b << "i" << endl;
            }
};

int main()
{
    Complex c;
    c.printNumber();

    Complex c1(10,50);
    c1.printNumber();
    
    Complex c2(10);
    c2.printNumber();
    
    
    return 0;
}