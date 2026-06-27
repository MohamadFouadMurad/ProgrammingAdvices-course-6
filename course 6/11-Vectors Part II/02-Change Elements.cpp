// I learned how to modify vector elements safely using '.at(i)' and compare it with the subscript operator '[i]', understanding that using '.at()' prevents destructive Buffer Overflow bugs by performing runtime bounds-checking.
#include <iostream>
#include <vector>
using namespace std;

int main() 
{
	vector<int> num{ 1, 2, 3, 4, 5 };

	cout << "Initial Vector: ";

	for (const int& i : num) 
	{
		cout << i << " ";
	}

	cout << "\n\nUpdated Vector: ";

	for (int& i : num)
	{
		i = 20;
		cout << i << " ";
	}

	num[1] = 40;
	num.at(2) = 80;
	num.at(4) = 90;

	cout << "\n\nUpdated Vector: ";

	for (const int& i : num) 
	{
		cout << i << " ";
	}

	return 0;



	// طريقة 1
	//num[10] = 99;
	// ❌ index 10 ما موجود
	// ما راح يعطيك خطأ — راح يكتب فوق ذاكرة عشوائية!
	// Buffer Overflow ← وهاذا راح يأدي الى ثغرة أمنية!

	// طريقة 2
	//num.at(10) = 99;
	// // ❌ index 10 ما موجود
	// راح يعطيك exception فوراً!
	// out_of_range error ← آمن ✅
}