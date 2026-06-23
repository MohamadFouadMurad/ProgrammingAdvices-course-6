// I learned the core concept of Pointers, discovering that a pointer is a special variable that stores the memory address of another variable rather than storing a direct data value.
#include <iostream>
using namespace std;

int main()
{

	int a = 10;


	cout << "a value = " << a << endl;
	cout << "a address = " << &a << endl;


	int* p;

	p = &a;


	cout << "Pointer Value = " << p;
	cout << endl;

	return 0;

}