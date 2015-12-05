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
	cout << "Description: This program gives temperature readings for a few days in 2015 based on user input" << endl;
	cout << "and also gives the high and low temperature of those days." << endl;
	cout << endl;
	const int SIZE = 5;
	int a[SIZE];
    string city = "San Ramon ";
    string day1 = "Saturday, Sept 5";
    string day2 = "Sunday, Sept 6";
	string day3 = "Monday, Sept 7";
	string day4 = "Tuesday, Sept 8";
	string day5 = "Wednesday, Sept 9";

    cout << "Enter the high for " << city << day1 << ": ";
    cin >> a[0];
    cout << "Enter the high for " << city << day2 << ": ";
    cin >> a[1];
    cout << "Enter the high for " << city << day3 << ": ";
    cin >> a[2];
    cout << "Enter the high for " << city << day4 << ": ";
    cin >> a[3];
    cout << "Enter the high for " << city << day5 << ": ";
    cin >> a[4];

    cout << endl;
    cout << city << "forecast high temperatures:" << endl;
    cout << day1 << ", " << a[0] << " degrees" << endl;
    cout << day2 << ", " << a[1] << " degrees" << endl;
    cout << day3 << ", " << a[2] << " degrees" << endl;
    cout << day4 << ", " << a[3] << " degrees" << endl;
    cout << day5 << ", " << a[4] << " degrees" << endl;

    int high = 0;
    int highOccur = 0;
    int low = 100;
    int lowOccur = 0;
    for (int i = 0; i < SIZE; i++){
    	if(a[i]<low){
    		low = a[i];
    	}
    	if(a[i]>high){
    	    high = a[i];
    	}
    }
    for (int i = 0; i < SIZE; i++){
     	if(a[i]==low){
     		lowOccur++;
     	}
     	if(a[i]==high){
     	    highOccur++;
     	}
     }

    cout << endl;
    cout << "The high for the week is " << high << " degrees, occurring " << highOccur << " times" << endl;
    cout << "The low for the week is " << low << " degrees, occurring " << lowOccur << " times" << endl;
}


