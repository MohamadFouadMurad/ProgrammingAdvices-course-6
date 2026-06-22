// I reviewed the core difference between Call-by-Value (passing a duplicate copy) and Call-by-Reference (passing the actual memory address using '&'), monitoring how value changes impact the original variable.
#include <iostream>
using namespace std;

void Function(int x)
{
	x++;
}

void FunctionWithReferences(int &x)
{
	x++;
}

int main()
{
	int a = 10;
	Function(a);

	cout << "\n a after calling function = " << a << endl;

	FunctionWithReferences(a);

	cout << "\n a after calling functionWithReferences = " << a << endl <<endl;


	cout << a << endl;//value
	cout << &a << endl;//address


	return 0;

}