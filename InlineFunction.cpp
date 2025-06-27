 #include <iostream>
using namespace std;

inline int square(int x)
{
    return x * x;
}

int main()
{
    int num1 = 5;
    
    int res = square(num1);
    cout << res;
}