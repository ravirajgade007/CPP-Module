#include<iostream>
using namespace std;

int main() {
    int age;

    cout << "Tell me your age:";
    cin >> age;

    if((age < 18) && (age > 0)) {
        cout << "You cannot come to my party." << endl;
    }
    else if(age == 18) {
        cout << "You are just allowed to come to the party. Bring your ID!" << endl;
    }
    else if(age < 1)
    {
        cout << "You are not yet born" << endl;
    }
    else {
        cout << "You are welcome to the party!" << endl;
    }

    return 0;
}