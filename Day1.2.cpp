#include <iostream>

using namespace std;
int glo = 10;
void sum()
{
   int a;
}
int main()
{
	int glo = 9;
	glo = 50;
	sum();
	cout << "global: " << glo;
   return 0;
}
