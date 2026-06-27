// I learned how to access vector elements using '.at(i)' and the subscript operator '[i]', understanding that '.at()' provides safe bounds checking by throwing an 'out_of_range' exception if the index is invalid, whereas '[i]' is faster but unsafe as it leads to undefined behavior.
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> num{ 1, 2, 3, 4, 5 };

	cout << "\n\n using .at(i) \n";
	cout << "Element at Index 0: " << num.at(0) << endl;
	cout << "Element at Index 2: " << num.at(2) << endl;
	cout << "Element at Index 4: " << num.at(4) << endl;

	cout << "\n\n using [i]\n";
	cout << "Element at Index 0: " << num[0] << endl;
	cout << "Element at Index 2: " << num[2] << endl;
    cout << "Element at Index 4: " << num[5] << endl << endl << endl;


    // Example

    int numberOfElements;

    cout << "Enter Number Of Elements: ";
    cin >> numberOfElements;

    vector<int> num(numberOfElements);

    for (int i = 0; i < numberOfElements; i++)
    {
        cout << "Elemtent  " << i + 1 << ": ";
        cin >> num.at(i);
    }

    cout << "\nFirst Element  : " << num.at(0) << endl;
    cout << "Last Element   : " << num.at(numberOfElements - 1) << endl;
    cout << "Middle Element : " << num.at(numberOfElements / 2) << endl;

    return 0;
}