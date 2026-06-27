// I learned how to create and use Pointers to Structures, introducing the Arrow Operator (ptr->member) as the standard, clean syntax to access and modify structure members through a memory address.
#include <iostream>
using namespace std;

struct stEmployee
{
	string Name;
	float Salary;
};

int main()
{
	stEmployee Employee1, * ptr;

	Employee1.Name = "Mohammed fouad murad";
	Employee1.Salary = 5000;

	cout << Employee1.Name << endl;
	cout << Employee1.Salary << endl;

	ptr = &Employee1;

	cout << "\nUsing Pointer:\n";
	cout << ptr->Name << endl;
	cout << ptr->Salary << endl;

	return 0;
} 