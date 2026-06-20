// I learned how to use 'printf' with '%d' for integers and how to dynamically control width using '%0*d'.
#include <iostream>
using namespace std;


int main() {
	int Page = 1, TotalPages = 10;

	// print int variable
	printf("The page number = %d \n", Page);
	printf("You are in Page %d of %d \n", Page, TotalPages);


	//Width specification
	printf("The page number = %0*d \n", 2, Page);
	printf("The page number = %0*d \n", 3, Page);
	printf("The page number = %03d \n", Page);
	printf("The page number = %0*d \n", 4, Page);
	printf("the page number = %04d \n",Page);

	int Number1 = 20, Number2 = 30;
	printf("the Result of %d + %d = %d \n", Number1, Number2, Number1 + Number2);

	return 0;
}