// I learned the difference between global and static variables, and how a static variable maintains its value and lifetime while being restricted to its local scope.
#include <iostream>
using namespace std;

void MyFunc() 
{
	static int Number = 1;
	cout << "Value of Number: " << Number << "\n";
	Number++;
}

int main()
{
	MyFunc();
	MyFunc();
	MyFunc();
	return 0;
}