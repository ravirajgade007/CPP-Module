#include <iostream>

using namespace std;

int main()
{
   enum Gender { Male, Female }; 
 
	Gender g = Male;

	switch (g) {
	case Male: 
		cout << "Who is he?"; 
		break; 
	case Female: 
		cout << "Who is she?"; 
		break; 
	default: 
		cout << "Who is they?"; 
	}
	
    return 0;
}