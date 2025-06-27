#include <iostream>
using namespace std;

class Simple{
    int data1, data2, data3;
    
    public:
           Simple(int a = 70, int b = 80, int c = 90)
           {
              data1 = a;
              data2 = b;
              data3 = c;
           }
           void printData();
};

void Simple :: printData()
{
   cout << "The value of data1, data2 & data3 : " << data1 << ", " << data2 << ", " << data3 << endl;
}

int main() {

  Simple s(96,40);
  s.printData();
  
  return 0;
}
#include <iostream>
using namespace std;

class Simple{
    int data1, data2, data3;
    
    public:
           Simple(int a = 70, int b = 80, int c = 90)
           {
              data1 = a;
              data2 = b;
              data3 = c;
           }
           void printData();
};

void Simple :: printData()
{
   cout << "The value of data1, data2 & data3 : " << data1 << ", " << data2 << ", " << data3 << endl;
}

int main() {

  Simple s(96,40);
  s.printData();
  
  return 0;
}
