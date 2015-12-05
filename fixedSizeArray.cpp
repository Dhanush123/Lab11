// Lab 11
// Programmer: Dhanush Patel
// Editor(s) used: Eclipse
// Compiler(s) used: Eclipse

#include <iostream>
using namespace std;

int main()
{
  cout << "Programmer: Dhanush Patel" << endl;
  cout << "Description: This program prompts for numbers and displays an average of the numbers" << endl;
  cout << "as well as the amount of numbers greater than the average." << endl;
  cout << endl;
  //prompt and save the scores
  const int SIZE = 4;
  int score[SIZE];
  int i;

  for(i =0; i < SIZE; i++){
	  cout << "Enter a number: ";
	  cin >> score[i];
  }

  // calculate and output the average
  int scoreTotal = 0;
  for (i = 0; i < SIZE; i++)
  {
    scoreTotal += score[i];
  } // for
  double average = scoreTotal / 4.0;
  cout << "The average of " << SIZE << " numbers is " << average << endl;

  // count #of scores > average
  int nGreater = 0;
  for (i = 0; i < SIZE; i++)
  {
    if (score[i] > average) nGreater++;
  } // for
  cout << nGreater << " scores are greater than the average." << endl;
} // main
