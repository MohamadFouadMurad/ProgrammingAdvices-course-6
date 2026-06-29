// I learned how to delete a record from a file by combining previous concepts into a pipeline: loading file lines into a vector, marking the target record as empty (""), and saving the updated vector back to the file.
#include <iostream>
#include <vector>
#include <string>
#include <fstream>
using namespace std;


void LoadDataFromFileToVector(string FileName, vector <string>& VFileContent)
{
	fstream MyFile;
	MyFile.open("MyFile.txt", ios::in);

	if (MyFile.is_open())
	{
		string line;

		while (getline(MyFile, line))
		{
			VFileContent.push_back(line);
		}
		
		MyFile.close();
	}
}

void SaveVectorToFile(string FileName, vector <string>& VFileContent)
{
	fstream MyFile;
	MyFile.open("MyFile.txt", ios::out);

	if (MyFile.is_open())
	{

        for(string line : VFileContent)
		{
			if (line != "")
			{
				MyFile << line << endl;
			}
		}

		MyFile.close();
	}
}

void DeleteRecordFromFile(string FileName, string Record)
{
	vector <string> vFileContent;

	LoadDataFromFileToVector(FileName, vFileContent);

	for (string& Line : vFileContent)
	{
		if (Line == Record)
		{
			Line = "";
		}
	}

	SaveVectorToFile(FileName, vFileContent);
}

void PrintFileContent(string FileName)
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
	cout << "File Content Before Delete.\n";
	PrintFileContent("MyFile.txt");

	DeleteRecordFromFile("MyFile.txt", "Ali");

	cout << "\n\nFile Content After Delete.\n";
	PrintFileContent("MyFile.txt");

	return 0;
}