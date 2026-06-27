// I learned how to create and manage Dynamic Arrays using 'new DataType[size]' to allocate a contiguous block of memory on the Heap at runtime, and the specific array deallocation operator 'delete[] ptr' to fully release the memory and prevent leaks.
#include <iostream>
using namespace std;

int main()
{

	int num;

	cout << "enter total number of students : ";
	cin >> num;

	float* ptr;

	ptr = new float[num];

	cout << "enter grade of studentes : " << endl;
	for (int i = 0; i < num; i++)
	{
		printf("student %02d : ", i + 1);
		cin >> *(ptr + i);
	}


	cout << "\n\ndisplaying grades of students : " << endl << endl;

	for (int i = 0; i < num; i++)
	{
		printf("Student %02d : %5.2f\n", i + 1, *(ptr + i));
	}

	delete[] ptr;
	
	return 0;
}