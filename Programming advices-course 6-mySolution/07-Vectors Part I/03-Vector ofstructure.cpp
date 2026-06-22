// I learned how to create a vector of custom structures (Vector of Structs) to manage and store complex, multi-property record data dynamically.
#include <vector>
#include <iostream>
#include <string>
using namespace std;

/**
struct stEmployee
{
	string FirstName;
	string LastName;
	float Salary;
};

int main()
{
	// std::vector<T> vector_name;
	vector <stEmployee> vEmployees;

	stEmployee tempEmployee;

	tempEmployee.FirstName = "Mohammed";
	tempEmployee.LastName = "Abu-Hahdoud";
	tempEmployee.Salary = 5000;
	vEmployees.push_back(tempEmployee);

	tempEmployee.FirstName = "Ali";
	tempEmployee.LastName = "Maher";
	tempEmployee.Salary = 300;
	vEmployees.push_back(tempEmployee);

	tempEmployee.FirstName = "Aya";
	tempEmployee.LastName = "Omran";
	tempEmployee.Salary = 1000;
	vEmployees.push_back(tempEmployee);

	cout << "Employees Vector: \n\n";

	for (stEmployee& Employee : vEmployees)
	{
		cout << "FirstName: " << Employee.FirstName << endl;
		cout << "LastName : " << Employee.LastName << endl;
		cout << "Salary : " << Employee.Salary << endl;
		cout << endl;
	}

	cout << endl;
	return 0;
}
*/




//homework


struct stEmployees
{
	string FirstName;
	string LastName;
	int Salary;
};

void ReadHowManyEmpl(vector <stEmployees>& vnumber)
{
	stEmployees Employee;
	char more = 'y';

	do
	{	
		cout << "pls enter the FirstName: ";
		getline(cin, Employee.FirstName);
		cout << "pls enter the LastName : ";
		getline(cin, Employee.LastName);
		cout << "pls enter the Salary : "; 
		cin >> Employee.Salary;
		cout << endl;

		vnumber.push_back(Employee);

		cout << "\n do you wnant to add another number? Y/N ? ";
		cin >> more;
		cin.ignore();
		cout << endl;

	} while (more == 'y' || more == 'Y');

}

void PrintEmpl(vector <stEmployees>& vEmp)
{
	cout << "the Employees is : " << endl << endl;

	//Ranged loop
	for (stEmployees &Employee : vEmp)
	{
		cout << "FirstName: " << Employee.FirstName << endl;
		cout << "LastName : " << Employee.LastName << endl;
		cout << "Salary : " << Employee.Salary << endl;
		cout << endl;
	}
}

int main()
{
	vector <stEmployees> vnumber;

	ReadHowManyEmpl(vnumber);
	PrintEmpl(vnumber);

	return 0;
}