// I learned the comprehensive differences between Pointers and References: references act as immutable aliases sharing the original variable's address, while pointers are independent variables storing memory addresses that can be reassigned to point to different variables.
#include <iostream>
using namespace std;

int main()
{

	int a = 10;
	int& x = a;

	cout << &a << endl;
	cout << &x << endl;

	cout << a << endl;
	cout << x << endl;

	int* p = &a;

	cout << p << endl;
	cout << *p << endl;

	int b = 20;
	p = &b;

	cout << p << endl;
	cout << *p << endl;

	return 0;
}