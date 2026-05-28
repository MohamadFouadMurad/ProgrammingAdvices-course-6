#include <iostream> 
#include <string>
#include "../MyHeaders/MyMathFunctions.h"
using namespace std;
using namespace myfunc;


int main()
{
	int number = ReadNumber("Enter a number");

	cout << "The square root of " << number << " is " << mySqrt(number) << endl;

	
	return 0;
}