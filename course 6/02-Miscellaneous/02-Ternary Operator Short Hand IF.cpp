// I learned how to use the Short Hand IF (Ternary Operator) and practiced its syntax.
#include<iostream>
#include "../MyHeaders/MyMathFunctions.h"
using namespace std;
using namespace myfunc;
using namespace Helpers;


int main()
{

	srand((unsigned)time(NULL));


	int Mark = RandomNumber(-100, 100);
	string result;

	cout << "number 1" << endl;
	//Using norma if
	if (Mark >= 50)
	{
		result = "PASS";
		cout << result << endl;
		cout << "the mark is: " << Mark << endl;
	}
	else
	{
		result = "FAIL";
		cout << result << endl;
		cout << "the mark is: " << Mark << endl;
	}



	cout << endl;
	//Using Short Hand IF
	cout << "number 2" << endl;
	result = (Mark >= 50) ? "PASS" : "FAIL";
	cout << result << endl;
	cout << "the mark is: " << Mark << endl;




	cout << endl;
	cout << "number 3" << endl;
	(Mark >= 50) ? cout << "PASS" << endl : cout << "FAIL" << endl;
	cout << "the mark is: " << Mark << endl;









	cout << endl;
	//Homework 
	cout << "1st try : ";
	int RandomNumberforTry = RandomNumber(-4, 4);

	(RandomNumberforTry >= 0) ? cout << "the number is: Positive" << endl
	: cout << "the number is: negative" << endl;
	cout << "the number is: " << RandomNumberforTry << endl;

	cout << endl;
	cout << "2nd try : ";
	(RandomNumberforTry == 0) ? cout << "the number is zero" << endl 
	: ( (RandomNumberforTry > 0) ? cout << "the number is: Positive" << endl
	: cout << "the number is: negative"<< endl );
	cout << "the number is: " << RandomNumberforTry << endl;

	return 0;
}