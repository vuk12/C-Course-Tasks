//C++ program to understand the use of getline() 
#include<iostream>
#include<string>
#include<sstream>
#include<fstream>

using namespace std;

int main()
{
	 ofstream dataFile;
	 dataFile.open("Imenik.dat", ios::app);

	 dataFile << "Zika Pavlovic Albijanic" << endl;
	 dataFile << "1234 5678910" << endl;
	 dataFile.close();

	 string T;
	 ifstream dataFile1;
	 dataFile1.open("Imenik.dat");

	 while (getline(dataFile1, T, ' '))
	 {
		  cout << T << endl;
	 }
	 dataFile1.close();
	 return 0;
}