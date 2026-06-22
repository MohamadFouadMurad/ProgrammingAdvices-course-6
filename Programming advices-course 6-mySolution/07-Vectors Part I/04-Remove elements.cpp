// I learned how to remove elements from a vector using 'pop_back()' to delete from the end, and 'clear()' to empty the entire vector at once, while tracking its size using '.size()' and checking if it's empty via '.empty()'.
#include <iostream>
#include <vector>
using namespace std;


int main()
{
	vector <int> vNumbers;

	vNumbers.push_back(10);
	vNumbers.push_back(20);
	vNumbers.push_back(30);
	vNumbers.push_back(40);
	vNumbers.push_back(50);

	cout << "Stack Size : " << vNumbers.size() << endl;

	vNumbers.pop_back();
	vNumbers.pop_back();
	vNumbers.pop_back();
	vNumbers.pop_back();
	vNumbers.pop_back();

	cout << "Stack Size : " << vNumbers.size() << endl;

	if (!vNumbers.empty())
	{
		vNumbers.pop_back();
	}

	//you can also use vnumbers.clear() to clear all elements instead of using pop_back()

	cout << "Numbers Vector: \n\n";

	// ranged loop
	for (int& Number : vNumbers) {
		cout << Number << endl;
	}

	cout << endl;
	return 0;
}