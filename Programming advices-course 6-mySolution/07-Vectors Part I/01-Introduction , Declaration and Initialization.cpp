// I learned how to include the <vector> library, declare and initialize a dynamic vector, and iterate through its elements using a ranged-for loop by reference.
#include <vector>
#include <iostream>
using namespace std;


int main()
{
	// std::vector<T> vector_name;


	vector <int> vNumbers = { 10, 20, 30, 40, 50 };
	cout << "Numbers Vector = ";

	// ranged loop
	for (int& Number : vNumbers) 
	{
		cout << Number << " ";
	}

	cout << endl;
	return 0;
}