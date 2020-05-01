#pragma once
# include <iostream>
using namespace std;

float enterValidNumber()
{
	 float num1;

	 bool notValidInput = true;

	 do
	 {
		  cout << "Enter the number: " << endl;
		  cin >> num1;
		  if (cin.fail())
		  {
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
				cout << "You did not entered a number. Please enter a number: " << endl;
		  }
		  else
		  {
				notValidInput = false;
		  }

	 } while (notValidInput);

	 return num1;
}