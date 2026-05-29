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

	int ReadFloatNumber(string message)
	{
		float Number = 0;
		cout << message << " : ";
		cin >> Number;
		return float(Number);
	}

	int ReadDoubeleNumber(string message)
	{
		double Number = 0;
		cout << message << " : ";
		cin >> Number;
		return double(Number);
	}

	string ReadString(string message)
	{
		string stringer = "";
		getline(cin, stringer);
		return stringer;
	}

	int RandomNumber(int from, int to)
	{
		return rand() % (to - from + 1) + from;
	}

	int EvenOrOdd(int number)
	{
		return number % 2;
	}

	string CheckPositiveOrNegativeOrZero(int number)
	{
		if (number > 0)
			return "positive";
		else if (number < 0)
			return "negative";
		else
			return "zero";
	}

	int ReadValidNumberOnly(string message)
	{
		int Number;
		cout << message << endl;
		cin >> Number;


		while (cin.fail())
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');

			cout << "Invalid Number, Enter a valid one:" << endl;
			cin >> Number;
		}

		return Number;
	}

}
