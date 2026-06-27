// I learned the concept of Void Pointers (Generic Pointers), discovering that 'void*' is a special pointer capable of pointing to any data type (int, float, etc.), but it requires explicit Type Casting using 'static_cast' before dereferencing since the compiler does not know its underlying data type or byte size.
#include <iostream>
using namespace std;

int main()
{
	void* ptr;
	int x = 50;
	float f1 = 10.5;

	ptr = &f1;

	cout << ptr << endl;

	cout << *(static_cast<float*>(ptr)) << endl;

	ptr = &x;

	cout << ptr << endl;
	
	cout << *(static_cast<int*>(ptr)) << endl;

	return 0;
}