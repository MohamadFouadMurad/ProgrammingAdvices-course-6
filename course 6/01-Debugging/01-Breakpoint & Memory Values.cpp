// i lear how to use breakpoints to debug my code, and how to check the values of variables at runtime, and how to step into functions to see how they work.

#include<iostream>
using namespace std;



int MySum(int a, int b)
{
	int s = 0;
	s = a + b;
	return s;
}


int main()
{
	int arr1[5] = { 200,100,50,25,30 };
	int a, b, c;


	a = 10;
	b = 20;
	a++;
	++b;


	c = a + b;


	cout << a << endl;
	cout << b << endl;
	cout << c << endl;


	for (int i = 1; i <= 5; i++)
	{
		cout << i << endl;
		a = a + a * i;
	}


	c = MySum(a, b);
	cout << c;
	return 0;

}