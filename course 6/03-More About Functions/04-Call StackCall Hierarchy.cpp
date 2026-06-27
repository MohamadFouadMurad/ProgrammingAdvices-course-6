// I learned how the Call Stack and Call Hierarchy work, and how they help me track function execution during debugging.
#include <iostream>
using namespace std;

void function4()
{
	cout << "this is function 4.";
}

void function3()
{
	function4();
}

void function2()
{
	function3();
}

void function1()
{
	function2();
}

int main()
{
	function1();

	return 0;
}