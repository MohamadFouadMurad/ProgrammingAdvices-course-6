// I learned how to declare, initialize, and iterate through Two-Dimensional Arrays (2D Arrays) using nested for-loops to access elements via their row and column indices.
#include <iostream>
using namespace std;


//
//int main()
//{
//
//	int x[3][4] = { {1,2,3,4} , {5,6,7,8} , {9,10,11,12} };
//
//
//
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 4; j++) 
//		{
//			cout << x[i][j] << " ";
//		}
//		cout << endl;
//	}
//	return 0;
//}


//homework

void MultiplicationArray(int x[10][10])
{
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			x[i][j] = (i + 1) * (j + 1);
		}
	}
}

void PrintArray(int x[10][10])
{
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			printf("%02d ", x[i][j]);
		}
		cout << endl;
	}
}

int main()
{
	int x[10][10];

	MultiplicationArray(x);
	PrintArray(x);

	//طريقة ثانية 

	/*
	 int x[11][11];

	for (int i = 1; i < 11; i++)
	{
		for (int j = 1; j < 11; j++)
		{
			x[i][j] = i * j;
		}
	}

	for (int i = 1; i < 11; i++)
	{
		for (int j = 1; j < 11; j++)
		{
			printf("%02d ", x[i][j]);
		}
		cout << endl;
	}
	*/
	return 0;
}
