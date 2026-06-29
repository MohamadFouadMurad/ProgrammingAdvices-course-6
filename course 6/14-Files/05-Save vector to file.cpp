// I learned how to save data from a dynamic vector into a text file using 'ios::out' mode and a range-based 'for' loop to iterate through the vector elements, sequentially writing non-empty lines back to disk.
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

void SaveVectorToFile(string FileName, vector <string>vFileContent)
{
	fstream MyFile;
	MyFile.open("MyFile.txt", ios::out);

	if (MyFile.is_open())
	{

		for (string& Line : vFileContent)
		{
			if (Line != "")
			{
				MyFile << Line << endl;
			}
		}

		MyFile.close();
	}
}

int main()
{
	vector <string> vFileContenet{"Ali","Shadi","Maher","Fadi","Lama" };

	SaveVectorToFile("MyFile.txt", vFileContenet);

	return 0;
}