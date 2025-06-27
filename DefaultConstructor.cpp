#include <iostream>
using namespace std;

class Car {
public:
    Car() {  // Default constructor
        cout << "Default Constructor called 🚗" << endl;
    }
};

int main() {
    Car c1;  // Constructor is called automatically
    return 0;
}
