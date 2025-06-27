#include<iostream>
using namespace std;

int main() {
    int age = 18;
    
    cout << "Enter Age:";
    cin >> age;
    switch(age)
    {
        case 22: cout << "Age is 22"; break;
        case 18: cout << "Age is 18"; break;
        default: cout << "No Case available";
        
    }

    return 0;
}