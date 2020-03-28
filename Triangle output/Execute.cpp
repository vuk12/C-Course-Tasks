/// !!!!!!!!!!! Custom console triangle output
// A program that provides console output in the shape of a triangle (e.g.).
// The input parameters are the character and length of the triangle side.
            
//    *
//   **
//  ***
// ****
//*****


#include<iostream>
#include<string>
using namespace std;

int main()
{

	int sideLength;
	cout << "Please enter the length of triangle: " << endl;
	cin >> sideLength;

	string symbol;
	cout << "Please enter the symbol which will bild your triangle: " << endl;
	cin >> symbol;
	cout << endl << endl << endl;

	string emptySpaces = " ";
	string symbols = "";


	for (int i = 1; i<=sideLength; i++)
	{

		symbols = symbols + symbol;
		
		string arrayEmptySpaces = "";
		for (int j = 0; j < sideLength-i; j++)
		{
			arrayEmptySpaces = arrayEmptySpaces + emptySpaces;
		}
		cout << arrayEmptySpaces + symbols << endl;
	}


	return 0;
}