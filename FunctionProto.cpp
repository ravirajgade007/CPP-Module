#include <iostream>

using namespace std;


int sum(int , int );
int main()
{
    int num1, num2;
    
    cout << "Enter 1st number:";
    cin >> num1;
    
    cout << "Enter 2nd number:";
    cin >> num2;
    
    cout << "The Sum is " << sum(num1, num2);
    
    return 0;
}


int sum(int a, int b)
{
    int c = a + b;
    return c;
}