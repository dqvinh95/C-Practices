#include <iostream>

using namespace std;

int main() {
	int a = 100;
	int b = a++;  //b = 100, a = 101
	int c = ++a;  //b = 100, a = 102
	cout << "Value of a is: " << a << " b is: " << b << endl;
	cout << "Value of c is: " << c << "Value of b is: " << b << " a is: " << a << endl;

	if (a) {
		cout << "a is not 0";
	}
}