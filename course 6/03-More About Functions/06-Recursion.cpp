// I learned how Recursion works by making a function call itself, and how it stacks frames in the Call Stack until it hits the base case.
#include <iostream>
using namespace std;

/*
void PrintNumbersFromNtoM(int N, int M)
{
	if (N <= M)
	{
		cout << N << endl;
		PrintNumbersFromNtoM(N + 1, M);
	}
}

int main() 
{
	PrintNumbersFromNtoM(1, 10);
	return 0;
}
*/



//homework 1

void PrintNumberFromMtoN(int N,int M)
{
	if (M >= N)
	{
		cout << M << endl;
		PrintNumberFromMtoN(N, M - 1);
	}
}

//homework 2

float power(int Base,int Power)
{
	if (Power == 0)
	{
		return 1;
	}
	else
	{
		return (Base * power(Base, Power - 1));
	}
}


int main()
{

	PrintNumberFromMtoN(1,10);

	cout << "___________________________________" << endl << endl;

	cout << power(2,4);//16

	return 0;
}