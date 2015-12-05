// Lab 11
// Programmer: Dhanush Patel
// Editor(s) used: Eclipse
// Compiler(s) used: Eclipse

#include <algorithm>
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	cout << "Programmer: Dhanush Patel" << endl;
	cout << "Description: This program prompts for scores and outputs various characteristics such as max and min score." << endl;
	cout << endl;

	cout << "How many scores? ";
	int n;
	cin >> n;
	int* scores = new int[n];
	for(int x = 0; x < n; x++){
		cout << "Enter a number: ";
		cin >> scores[x];
	}

	sort(scores,scores + n);
	cout << "Sorted: ";
	for(int x = 0; x < n; x++){
		if(x==n-1){
			cout << scores[x] << endl;
		}
		else{
			cout << scores[x] << " ";
		}
	}

	cout << "Minimum: " << scores[0] << endl;
	cout << "Maximum: " << scores[n-1] << endl;

	double sum = 0;
	for(int x = 0; x < n; x++){
		sum += scores[x];
	}

	double average = sum/(double)n;
    cout << "Average: " << fixed << setprecision(1) << average << endl;

    int numA;
    for(int x = 0; x < n; x++){
    	if(scores[x]>=90)
    		numA++;
    }
    if(numA>0){
    	cout << "At least one 'A' grade entered" << endl;
    }
} // main
