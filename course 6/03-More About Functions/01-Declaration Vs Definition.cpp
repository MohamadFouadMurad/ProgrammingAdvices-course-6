// I learned the difference between function declaration (specifying the signature) and definition (writing the actual implementation logic).

#include <iostream>
using namespace std;


// function declaration
int add(int, int);

// another one
void NewTextForTry(string, char);

int main() 
{

	int result = add(10, 20);
	cout << "Result after declaration = " << result;

	cout << endl;

	NewTextForTry("mohamad fouad Morad", 'M');

	return 0;
}

// function Definition

int add(int a, int b)
{
	return (a + b);
}

//  another one
void NewTextForTry(string name, char L)
{
	cout << "my name is: " << name << ",and it's start with letter: " << L << endl;
}