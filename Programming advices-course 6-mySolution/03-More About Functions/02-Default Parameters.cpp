// I learned how to use default parameters, and I connected this lesson with the previous one by practicing how to declare and define functions with default parameters.
#include <iostream>
using namespace std;


double SumNumbers(int a, int b, int c = 0, int d = 0);

int main()
{
	cout << "2 prameters and 2 default prameters :" << SumNumbers(10, 20) << endl;//30
	cout << "3 prameters and 1 default prameters :" << SumNumbers(10, 20, 30) << endl;//60
	cout << "4 prameters and 0 default prameters :" << SumNumbers(10, 20, 30, 40) << endl;//100

	return 0;
}

double SumNumbers(int a, int b, int c, int d)
{
	return (a + b + c + d);
}