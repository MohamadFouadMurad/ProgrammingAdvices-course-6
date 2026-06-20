// I learned how to use the 'setw' manipulator from the <iomanip> library to format and align text output.
#include <iostream> 
#include <iomanip>
using namespace std;



void SetWidthInCenter(int  Width,string message)
{
	int Length = message.length();
	int afterspace = (Width - Length) / 2;
	int beforespace = Width - afterspace;
	cout << setw(beforespace) << message << setw(afterspace) << "";
}

int main()
{
	cout << "----------------|---------------------------------|----------------|" << endl;
	cout << "      Code      |              Name               |       Mark     |" << endl;
	cout << "----------------|---------------------------------|----------------|" << endl;

	cout << setw(16) << "C101" << "|";
	SetWidthInCenter(33, "introduction to programming 1");
	cout << "|" << setw(16) << (95) << "|" << endl;

	cout << setw(16) << "C102" << "|";
	SetWidthInCenter(33, "Computer Hardware");
	cout << "|" << setw(16) << (88) << "|" << endl;

	cout << setw(16) << "C101343" << "|";
	SetWidthInCenter(33, "Networking");
	cout << "|" << setw(16) << (75) << "|" << endl;

	cout << "----------------|---------------------------------|----------------|" << endl;

	return 0;
}