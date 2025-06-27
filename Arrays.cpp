#include<iostream>
using namespace std;

int main() 
{
   //int marks[4] = {50,40,50,40};
   int marks[] = {10,20,30,40};
  
  for(int i = 0; i < 4 ; i++)
   {
       cout << "The value of Marks:" << i << " is " << marks[i] << endl;
   }
   int* p = marks;
   cout << "The marks of marks[0] is " << *p << endl;
   cout << "The marks of marks[1] is " << *(p+1) << endl;
   cout << "The marks of marks[2] is " << *(p+2) << endl;
   cout << "The marks of marks[3] is " << *(p+3) << endl;
   cout << endl;
   //Garbage value
  cout << "The marks of marks[4] is " << *(p+4) << endl;
   
    return 0;
}