#include <iostream>
using namespace std;

int main()
{
	/*Reference Variable*/
  float f1 = 45.5f;
  float & f2 = f1;

  cout << f1 << endl;
  cout << f2 << endl;

  cout << endl;
  /*Type Casting*/
  int a = 96;
  float b = 96.45;

//  cout << "The value of a is: " << (float)a << endl;
//  cout << "The value of b is: " << (int)b << endl;

  cout << "The value of a is: " << float (a) << endl;
   cout << "The value of b is: " << int(b) << endl;


  return 0;
}
