// I learned how to dynamically add elements to a vector using the 'push_back()' function, and how to pass vectors to functions by reference to read and print their data.
#include <vector>
#include <iostream>
using namespace std;

/*
int main()
{

	vector <int> vNumbers;
	vNumbers.push_back(10);
	vNumbers.push_back(20);
	vNumbers.push_back(30);
	vNumbers.push_back(40);
	vNumbers.push_back(50);
	cout << "Numbers Vector: \n\n";

	// ranged loop
	for (int& Number : vNumbers) {
		cout << Number << endl;
	}
	cout << endl;


	return 0;
}
*/



void ReadNumbers(vector <int> &vnumber)
{
	int number;
	char more = 'y';

	do
	{
		cout << "pls enter a number? ";
		cin >> number;

		vnumber.push_back(number);

		cout << "\n do you wnant to add another number? Y/N ? ";
		cin >> more;
		cout << endl;

	} while (more == 'y' || more == 'Y');

}

void PrintNumbers(vector <int> &vnumber)
{
	cout << "the elements is : " << endl;
	//Ranged loop
	for (int Numbers: vnumber)
	{
		cout << Numbers << endl;
		cout << endl;
	}
}

int main()
{
	vector <int> vnumber;

	ReadNumbers(vnumber);
	PrintNumbers(vnumber);

	return 0;
}