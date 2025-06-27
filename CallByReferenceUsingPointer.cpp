#include <iostream>

using namespace std;

/*This will not swap*/
void swap(int a, int b)
{
     int temp = a;
     a = b;
     b = temp;
}

void swapPointer(int* a, int* b)
{
     int temp = *a;
     *a = *b;
     *b = temp;
}


int main()
{
    int num1 = 4 , num2 = 5;
    cout << "This method not work" << endl;
    cout << "The value of num1 is " << num1 << " and the value of num2 is " << num2 << endl;
    swap(num1, num2);
    cout << "The value of num1 is " << num1 << " and the value of num2 is " << num2 << endl;
    cout << endl;

    cout << "This method work" << endl;   
    cout << "The value of num1 is " << num1 << " and the value of num2 is " << num2 << endl;
    swapPointer(&num1, &num2);
    cout << "The value of num1 is " << num1 << " and the value of num2 is " << num2 << endl;
    return 0;
}

