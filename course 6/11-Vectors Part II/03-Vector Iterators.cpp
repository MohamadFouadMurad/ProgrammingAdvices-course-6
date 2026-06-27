// I learned how to use Vector Iterators to traverse containers, understanding that an iterator acts as a smart pointer pointing to memory locations inside the vector, utilizing '.begin()' and '.end()' boundary markers for loop control.
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> num{ 1, 2, 3, 4, 5 };

	// declare iterator
	vector<int>::iterator iter;

	// use iterator with for loop
	for (iter = num.begin(); iter != num.end(); iter++)
	{
		cout << *iter << " ";
	}

// =================================================================================
// 💡 IMPORTANT CONCEPTUAL NOTE (By: Dhiyaa Mohamed):
// =================================================================================
// Understanding the difference between (.begin() / .end()) and (.front() / .back()):
//
// 1. Direct Value Functions:
//    .front() and .back() return the ACTUAL VALUES of the first and last elements.
//    Example:
//    cout << vNum.front() << endl; // Prints the value of the 1st element
//    cout << vNum.back() << endl;  // Prints the value of the last element
//
// 2. Iterator Functions (Memory Addresses):
//    .begin() and .end() do NOT return values; they act as POINTERS (Memory Addresses).
//    Therefore, trying to print them directly like this is WRONG and causes a Syntax Error:
//    cout << vNum.begin() << endl; // ❌ WRONG!
//    cout << vNum.end() << endl;   // ❌ WRONG!
//
// 3. The Correct Way to Access Values using Iterators (Dereferencing):
//    We must use the asterisk (*) operator to open the memory location and get the value:
//    cout << *vNum.begin() << endl;       //  CORRECT: Prints the 1st element's value
//    cout << *(vNum.end() - 1) << endl;   //  CORRECT: Prints the last element's value
//
// ⚠️ Crucial Note on .end():
//    Notice that we subtracted 1 from vNum.end() -> *(vNum.end() - 1).
//    This is because .end() points to the memory address AFTER the last element,
//    not the last element itself. So we must step back one position.
// =================================================================================



	return 0;
}