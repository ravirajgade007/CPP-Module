
#include<iostream>

using namespace std;

struct employee
{
    /*data*/
    int eId;
    char favChar;
    float salary;
} emp1, emp2, emp3;

int main()
{
    emp1, emp2, emp3;
    
    emp1.eId = 1;
    emp1.favChar = 'S';
    emp1.salary = 10000;
    
    cout << "The value is: " << emp1.eId << endl;
    cout << "The value is: " << emp1.favChar << endl;
    cout << "The value is: " << emp1.salary << endl;
    
    
    
    return 0;
}
