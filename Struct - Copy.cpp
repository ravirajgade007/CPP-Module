
// Online C++ Compiler - Build, Compile and Run your C++ programs online in your favorite browser

#include<iostream>

using namespace std;

struct employee
{
    /*data*/
    int eId;
    char favChar;
    float salary;
};

int main()
{
    struct employee raviraj;
    struct employee rohit;
    struct employee mauli;
    
    raviraj.eId = 1;
    raviraj.favChar = 'S';
    raviraj.salary = 10000;
    
    cout << "The value is: " << raviraj.eId << endl;
    cout << "The value is: " << raviraj.favChar << endl;
    cout << "The value is: " << raviraj.salary << endl;
    
    
    
    return 0;
}
