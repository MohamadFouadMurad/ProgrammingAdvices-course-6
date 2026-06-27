// I learned how to create references (aliases) for existing variables using '&', observing that a reference shares the exact same memory address and value as the original variable.
#include <iostream>
#include <string>
using namespace std;

void PrintCardOfVariable(int& Number)
{
	static int Counter = 0;
	Counter++;

	cout << "\nName   : " << "var" << to_string(Counter) << endl;
	cout << "Value  : " << Number << endl;
	cout << "Address: " << &Number << endl;
}

int main()
{
	int var1 = 5, var2 = 10;
	int& var3 = var1;

	PrintCardOfVariable(var1);
	PrintCardOfVariable(var2);
	PrintCardOfVariable(var3);

	return 0;
}