// I learned how to use Append Mode in C++ File I/O by combining 'ios::out | ios::app', allowing data to be added to the end of the file without deleting its existing content.
#include <iostream>
#include <fstream>
using namespace std;


int main()
{
	fstream MyFile;

	MyFile.open("Myfile.txt", ios::out | ios::app);

	if (MyFile.is_open())
	{
		MyFile << "this is new line using append mode\n";
		MyFile << "this is also another file using append mode .\n";

		MyFile.close();

	}


	return 0;
}