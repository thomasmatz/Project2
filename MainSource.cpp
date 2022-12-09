#include "Employee_C.h"
#include <fstream>//step 1 for working with files
#include <iostream>

using namespace std;

//Function prototypes

Employee_C Test_Methods(int i);

void Display_Test(Employee_C);


int main()
{
	Employee_C testEmployee;
	int i = 0;
	cout << "\nI will call a test function first.";
	testEmployee = Test_Methods(i);
	//Display_Class_Members(testEmployee);


	cout << endl << endl;
	system("pause");
	return 0;

}
Employee_C Test_Methods(int i)
{
	const int TEST_SIZE = 5;
	const int MAX_NAME_SIZE = 61;
	Employee_C testEmployee[TEST_SIZE];

	char enteredName[MAX_NAME_SIZE];
	int enteredID;
	double enteredSalary;
	char enteredSex;
	cout << "\nEnter the following: ";
	cout << "\nfull name> ";
	cin.get(enteredName, MAX_NAME_SIZE);
	cin.clear();
	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	cout << "\nID:> ";
	cin >> enteredID;
	cout << "\nSalary> ";
	cin >> enteredSalary;
	cout << "\nSex> ";
	cin >> enteredSex;

	testEmployee[i].Set_FullName(enteredName);
	testEmployee[i].Set_IDNumber(enteredID);
	testEmployee[i].Set_Salary(enteredSalary);
	testEmployee[i].Set_Sex(enteredSex);

	Display_Test(testEmployee[i]);

	return testEmployee[i];

}
void Display_Test(Employee_C testObject)
{
	cout << " name: " << testObject.Get_FullName();
}