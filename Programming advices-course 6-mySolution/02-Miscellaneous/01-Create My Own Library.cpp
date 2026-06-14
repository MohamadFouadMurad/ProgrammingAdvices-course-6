// I learned how to create my own library and use it, how to use namespaces to avoid repeating "std::", and how to call my custom functions efficiently.
#include <iostream> 
#include <string>
#include <cmath>



#include "../MyHeaders/MyMathFunctions.h"



using namespace std;
using namespace myfunc;
using namespace Helpers;


int main()
{
	int number = ReadNumber("Enter a number");
	cout << endl;

	cout << "The square root of " << number << " is " << sqrt(number) << endl;
	cout << endl;

	cout << "the number " << number << " is(even or odd)?" << endl;
	if (IsEvenNumber(number))
	{
		cout << "its even number." << endl;
	}
	else
	{
		cout << "its odd number." << endl;
	}
	return 0;
}