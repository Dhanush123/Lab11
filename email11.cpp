// Lab 11
// Programmer: Dhanush Patel
// Editor(s) used: Eclipse
// Compiler(s) used: Eclipse

#include <iostream>
#include <string>
using namespace std;

int main(){

	cout << "Programmer: Dhanush Patel" << endl;
	cout << "Description: This program prompts for input and output filenames and prints out the filenames." << endl;
	cout << endl;

	string defaultInputFile = "fileContainingEmails.txt";
	string inputFile;
	string defaultOutputFile;
	string outputFile;

	cout << "Enter input filename [default: " << defaultInputFile << "]: ";
	getline(cin,inputFile);
	if(inputFile==""){
		inputFile = defaultInputFile;
	}

	if(inputFile!=defaultInputFile){
		defaultOutputFile = inputFile;
	}
	else{
		defaultOutputFile = "copyPasteMyEmails.txt";
	}
	cout << "Enter output filename [default: " << defaultOutputFile << "]: ";
	getline(cin,outputFile);
	if(outputFile==""){
			inputFile = defaultOutputFile;
	}
	cout << "Input file: " << inputFile << endl;
	cout << "Output file: " << outputFile << endl;


}
