#include <iostream>
using namespace std;
class Car {
    string brand;

public:
    Car(string b) {  // Parameterized constructor
        brand = b;
        cout << "Brand: " << brand << endl;
    }
};

int main() {
    Car c1("Tesla");
    return 0;
}
