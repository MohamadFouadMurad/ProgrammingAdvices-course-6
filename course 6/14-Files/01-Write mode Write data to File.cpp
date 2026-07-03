// I learned how to use 'cctype' library functions to analyze and convert individual characters, evaluating boolean classification methods (.isupper, .islower, .isdigit, .ispunct) which return zero for false and non-zero for true, along with transformation methods (.toupper, .tolower).
#include <iostream>
#include <fstream>
using namespace std;


int main()
{
	fstream MyFile;

	MyFile.open("Myfile.txt", ios::out);

	if (MyFile.is_open())
	{
		MyFile << "mohamad\n";
		MyFile << "lama\n";
		MyFile << "abdo\n";
		MyFile << "lana\n";
		MyFile << "fadi\n";
		MyFile.close();

	}


	return 0;
}