// I learned how to use 'try' and 'catch(...)' blocks to handle out-of-bounds exceptions thrown by 'num.at(5)', executing a custom warning message to ensure the program terminates safely or continues without crashing.
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> num{ 1, 2, 3, 4, 5 };

	try
	{
		cout << num.at(5);
	}
	catch (...)
	{
		cout << "bro, you are breaking the app. Please don't do the same error again!\n";
	}

	return 0;
}