// I learned how to use Read Mode in C++ File I/O using 'ios::in' and the 'getline()' function inside a 'while' loop to read and print a file's content line by line until reaching the End-Of-File (EOF).
#include <iostream>
#include <fstream>
#include <string>
using namespace std;


void PrintFileContenet(string FileName)
{

	fstream MyFile;
	MyFile.open(FileName, ios::in);//read Mode

	if (MyFile.is_open())
	{

		string Line;

		while (getline(MyFile, Line))
		{
			cout << Line << endl;
		}

		MyFile.close();

	}
}

int main()
{
	PrintFileContenet("MyFile.txt");

	return 0;
}