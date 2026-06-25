// I learned how to pass pointers to functions as arguments to achieve a Call-by-Reference effect, allowing the function to directly access and modify the values of variables in the main scope.
#include <iostream>
using namespace std;


void swap(int* n1, int* n2)
{
	int temp;
	temp = *n1;
	*n1 = *n2;
	*n2 = temp;
}

int main()
{

	int a = 1, b = 2;

	cout << "Before swapping" << endl;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;


	swap(&a, &b);


	cout << "\nAfter swapping" << endl;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	return 0;
}