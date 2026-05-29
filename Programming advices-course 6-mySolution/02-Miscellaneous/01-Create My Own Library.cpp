// I learned how to create my own library and use it, how to use namespaces to avoid repeating "std::", and how to call my custom functions efficiently.
#include <iostream> 
#include <string>
#include <cmath>
#include "../MyHeaders/MyMathFunctions.h"
using namespace std;
using namespace myfunc;


int main()
{
	int number = ReadNumber("Enter a number");

	cout << "The square root of " << number << " is " << sqrt(number) << endl;

	
	return 0;
}