//*********************************************
// C++ Program to Print ASCII Value
//*********************************************
#include <iostream>
using namespace std;
int main(){
	char c;
	cout << "Enter a character: ";
	cin >> c;
	cout << "ASCII Value of " << c << " is " << int(c) << endl;
	system("pause");
	return 0;
}