#include <iostream>
using namespace std;


void PassByValue(int x)
{
	 x = x + 1;
}

void PassByPointer(int *x)
{
	 *x = 50;
}

void PassByReference(int& x)
{
	x = 14;
}


//Before execution try to predict console output
int main()
{
	 int nValue = 6;
	 //pointer to nValue
	 int *pValue = &nValue;
	 //reference to nValue
	 int& refNValue = nValue; 

	 PassByValue(nValue);
	 cout << nValue << endl;
	 PassByPointer(pValue);
	 cout << nValue << endl;
	 PassByReference(refNValue);
	 cout << nValue << endl;

	 return 0;
} 

// REFERENCE CAN NOT BE DECLARED without object or variable, Pointer can be delcared alone.
//REFERENCE CAN NOT BE NULL pointer can
// Syntax for reference is &, and for pointer is *
// It is easy to print adress of pointer