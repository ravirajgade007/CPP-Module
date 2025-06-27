#include <iostream>

using namespace std;

typedef struct employee
{
    int eId; //4
    char favChar;  //1
    float salary;  // 4
}emp;

union money
{
    int rice; //4
    char car; //1  
    float pounds; //4
}m1;

int main()
{
 
    emp raviraj;
    
    m1;
    
    m1.rice = 35;
    cout << m1.rice << endl;
    
    m1.car = 'A';
    cout << m1.car << endl;
    
    raviraj.eId = 1;
    raviraj.favChar = 'S';
    raviraj.salary = 10000;
    
    cout << "The value is: " << raviraj.eId << endl;
    cout << "The value is: " << raviraj.favChar << endl;
    cout << "The value is: " << raviraj.salary << endl;
    
 
    return 0;
}