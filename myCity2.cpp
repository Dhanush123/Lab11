// Lab 11
// Programmer: Dhanush Patel
// Editor(s) used: Eclipse
// Compiler(s) used: Eclipse

#include <string>
#include <iostream>

using namespace std;

int main()
{
	cout << "Programmer: Dhanush Patel" << endl;
	cout << "Description: This program gives temperature readings for a few days in 2015." << endl;

	const int SIZE = 5;
	int a[SIZE];
    a[0] = 86;
    a[1] = 91;
    a[2] = 95;
    a[3] = 95;
    a[4] = 93;
    cout << "San Ramon, California forecast high temperatures:" << endl;
    cout << "Saturday, Sept 5, " << a[0] << " degrees" << endl;
    cout << "Sunday, Sept 6, " << a[1] << " degrees" << endl;
    cout << "Monday, Sept 7, " << a[2] << " degrees" << endl;
    cout << "Tuesday, Sept 8, " << a[3] << " degrees" << endl;
    cout << "Wednesday, Sept 9, " << a[4] << " degrees" << endl;
    cout << "source: google.com" << endl;
}
