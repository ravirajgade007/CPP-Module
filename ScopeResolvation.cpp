#include <iostream>
using namespace std;

int c = 50;
int main() {
int a, b , c;

cout << "Enter the value of a: " << endl;
cin >> a;

cout << "Enter the value of b: " << endl;
cin >> b;

c = a + b;
cout << "Sum of a and b is:" << c << endl;;

cout << "The global C is:" << ::c << endl;;

	return 0;
}
