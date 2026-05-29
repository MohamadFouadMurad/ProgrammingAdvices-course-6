// I learned how to handle input validation using cin.fail(), cin.clear(), and cin.ignore() to prevent infinite loops.
#include <iostream>
using namespace std;


int ReadvalidNumberOnly(string message)
{
	int Number;
	cout << message << endl;
	cin >> Number;


	while (cin.fail())
	{
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');

		cout << "Invalid Number, Enter a valid one:" << endl;
		cin >> Number;
	}

	return Number;
}


int main() 
{
	cout << "Your Number is:" << ReadvalidNumberOnly("pls enter a number?");
}