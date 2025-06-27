#include <iostream>

using namespace std;

void swapReference(int &a, int &b)
{
     int temp = a;
     a = b;
     b = temp;
}

int main()
{
    int num1 = 4 , num2 = 5;
    cout << "The value of num1 is " << num1 << " and the value of num2 is " << num2 << endl;
    swap(num1, num2);
    cout << "The value of num1 is " << num1 << " and the value of num2 is " << num2 << endl;
    
    return 0;
}

