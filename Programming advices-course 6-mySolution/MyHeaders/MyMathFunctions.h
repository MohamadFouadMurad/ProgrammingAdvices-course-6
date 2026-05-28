#pragma once

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

namespace myfunc
{

	int ReadNumber(string message)
	{
		int Number = 0;
		cout << message << " : ";
		cin >> Number;
		return Number;
	}

	int ReadfloatNumber(string message)
	{
		float Number = 0;
		cout << message << " : ";
		cin >> Number;
		return float(Number);
	}

	int ReaddoubeleNumber(string message)
	{
		double Number = 0;
		cout << message << " : ";
		cin >> Number;
		return double(Number);
	}

	string Readstring(string message)
	{
		string stringer = "";
		getline(std::cin, stringer);
		return stringer;
	}

	int randomNum(int from, int to)
	{
		return rand() % (to - from + 1) + from;
	}

	int mySqrt(int sqrt)
	{
		return pow(sqrt, 0.5);
	}

	int evenOrOdd(int number)
	{
		return number % 2;
	}

}
