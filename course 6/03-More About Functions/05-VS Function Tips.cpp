//in this lesson we take some tips in VS to help us during the codding.
#include <iostream>
using namespace std;


void Function2();


void RenameAllFunction()
{
	cout << "Hi I'm function4 " << endl;
}

void Function3()
{
	RenameAllFunction();
}

void Function2()
{
	Function3();
}

void Function1()
{
	Function2();
	RenameAllFunction();
}

int main() {
	Function1();
	return 0;
}