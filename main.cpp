#include <iostream>
using namespace std;

int main()
{
  int arraynum = 0;
  int counter = 1;
  double add = 0;
  double givenNumber = 0;
  double average = 0;
  double max = 0;
  double min = 100;
 
  cout << " " << endl;
  cout << "\033[34mHow many grades do you have?: ";
  cin >> arraynum;
  cout << "\033[37m " << endl;

  start:
  cout << "Enter grade: ";
  cin >> givenNumber;
  cout << " " << endl;
 
  if (counter < arraynum)
  {
    add = add + givenNumber;
    counter = counter + 1;

      if (max < givenNumber)
      {
        max = givenNumber;
      }
   
      if (min > givenNumber)
      {
        min = givenNumber;
      }
   
    goto start;
  }
 
  if (counter == arraynum)
  {
      if (max < givenNumber)
      {
        max = givenNumber;
      }
   
      if (min > givenNumber)
      {
        min = givenNumber;
      }
   
    add = add + givenNumber;
    average = add / arraynum;
    cout << "\033[34mYour average is " << average << "." << endl;

      if (average < 65)
      {
        cout << "\033[31mYou are failing my dude." << endl;
      }

      if (average >= 65)
      {
        cout << "\033[32mGood job. You passed." << endl;
      }

      cout << " " << endl;
      cout << "\033[33mYour highest grade is " << max << "." << endl;
      cout << "Your lowest grade is " << min << "." << endl;
  }
 
  cout << " " << endl;
 
  return 0;
 
}