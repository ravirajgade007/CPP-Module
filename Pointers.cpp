#include<iostream>
using namespace std;

int main() 
{
   int a = 10;
   int * b = &a;
   b = &a;
   
   cout << "a:" << &a << endl;
   cout << "a:" << b << endl;
   cout << endl;
   cout << "b:" << *b << endl;
    
    //pointer to pointer
    int** c = &b;
    cout << "b:" << &b << endl;
    cout << "b:" << c << endl;
    cout << "c:" << *c << endl;
    cout << "c:" << **c << endl;


    return 0;
}