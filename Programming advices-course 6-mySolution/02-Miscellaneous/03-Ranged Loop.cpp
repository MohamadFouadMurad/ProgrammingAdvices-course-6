// I learned how to use Ranged-based for loops to iterate over arrays and initializer lists easily.
#include<iostream>
using namespace std;


int main()
{
	int Array1[] = { 1, 2, 3, 4 };

	for (int n : Array1)
	{
		cout << n << endl;
	}

	cout << "----------------------------" << endl;

	for (int n : {1, 2, 5, 6, 7, 8})
	{
		cout << n << endl;
	}

	return 0;
}