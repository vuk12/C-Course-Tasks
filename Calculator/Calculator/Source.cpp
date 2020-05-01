# include <iostream>
#include <ctype.h>
#include "Header.h"

using namespace std;

int main()
{
    char op;
    float num1, num2;

	 bool notValidInput = true;
	 
	 num1 = enterValidNumber();
		
	 notValidInput = true;
	 do
	 { 
		  cout << "Enter mathematical operator which you want to perform:  + or - or * or /: "<<endl;
		  cin >> op;
		  bool uslov1 = (op != '+') && (op != '*') && (op != '-') && (op != '/');
		  if (uslov1)
		  {
				cout << "You did not entered appropriate mathematical operator!" << endl;
		  }
		  else
		  {
				notValidInput = false;
		  }
	 } while (notValidInput);

	   num2 = enterValidNumber();
	    //cout << "Enter two operands: ";
	    //cin >> num1 >> num2;
	
	    switch(op)
	    {
	        case '+':
	            cout << num1+num2;
	            break;
	
	        case '-':
	            cout << num1-num2;
	            break;
	
	        case '*':
	            cout << num1*num2;
	            break;
	
	        case '/':
	            cout << num1/num2;
	            break;
	
	        default:
	            // If the operator is other than +, -, * or /, error message is shown
	            //cout << "Error! operator is not correct";
	            break;
	    }
	
	    return 0;
	}
