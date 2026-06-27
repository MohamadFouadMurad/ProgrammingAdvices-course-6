// I learned how to use 'printf' with '%s' for strings and '%c' for characters, and how to control character padding and width both dynamically and statically.
#include <iostream>
#include <cstdio>
using namespace std;


int main() 
{
	char Name[] = "Mohammed Abu-Hadhoud";
	char SchoolName[] = "Programming Advices";

	// print string and String
	printf("Dear %s, How are you?\n\n", Name);
	printf("Welcome to %s School!\n\n", SchoolName);


	char c = 'S';

	printf("Setting the width of c :%*c \n", 1, c);
	printf("Setting the width of c :%*c \n", 2, c);
	printf("Setting the width of c :%*c \n", 3, c);
	printf("Setting the width of c :%3c \n",c);


	return 0;
}