
//!!!!!!!!!!Insert array values and sort it from smallest to largest and vice versa !!!!!!!!!!!!!!!

#include<iostream> 
using namespace std;

void sortArray(int a[], int n,char sToLToS) {
    int min, max, temp;

    //for loop can be optimize but for better understanding of arrays code is not optimize 
    // Hint for optimization: You can use only one variable call e.g. minMax and use one if statement
    for (int i = 0; i < n - 1; i++) 
    {
        min = a[i];
        max = a[i];
        for (int j = i + 1; j < n; j++)
        { 
            if (sToLToS == 's' || sToLToS == 'S')
            {
                if (a[j] < min)
                {
                    temp = min;
                    min = a[j];
                    a[i] = min;
                    a[j] = temp;
                }
            }
            else if (sToLToS == 'l' || sToLToS == 'L')
            {
                if (a[j] > max)
                {
                    temp = max;
                    max = a[j];
                    a[i] = max;
                    a[j] = temp;
                }
            }
        }
    }
}
int main() {
    
    int a[6]; //static array(fix length)
    int n = sizeof(a) / sizeof(a[0]);
  
    //Insert array values from console
    for (int i = 0; i < n; i++)
    {
        cout << "Please insert value of: " << i << " array member." << endl;
        cin >> a[i];
    }
    
    //Print inserted array
    cout <<endl<< "Given array is:" << endl;
    for (int i = 0; i < n; i++)
    { 
        cout << a[i] << " ";
    } 

    //Choose sorting option
    cout << endl << "Press S to sort array from smallest to largest value or" << endl;
    cout << ",press L to sort array from largest to smallest value."<<endl;
    cout<<"Choose S/L ?" << endl;
    char sl;
    cin >> sl;

    //Sort array
    sortArray(a, n, sl);

    //Print sorted array
    cout << endl << "Sorted array is:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
        
    return 0;
}
