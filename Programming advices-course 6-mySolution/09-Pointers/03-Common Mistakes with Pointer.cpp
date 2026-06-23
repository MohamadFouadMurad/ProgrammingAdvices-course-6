// I learned the rule of assignment type compatibility in pointers: addresses must only be assigned to pointer variables (Example p = &x), and values must only be assigned via dereferencing (Example *p = x).
#include <iostream>
using namespace std;

int main()
{

	int x, * p;


	// Wrong!
	// p is an address but x is not
	p = x;

	// Correct!
	// p is an address and so is &x
	p = &x;

	// Wrong!
	// &x is an address
	// *p is the value stored in &x
	*p = &x;

	// Correct!
	// *p is the value and so x
	*p = x;

	return 0;

}