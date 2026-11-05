/******************************************************************************
non-void function
Addition

Enter first number: 
Enter second number:

Compute the sum

Display the result 

Function name - add 
Parameters - two input value (int a, int b)
Data type - int 

*******************************************************************************/
#include <iostream>
using namespace std;

int add (int a, int b);
//int add (int,int);

int main()
{
    int first, second;
    int result = 0;
    
    cout << "Enter first number: ";
    cin >> first;
    
    cout << "Enter second number: ";
    cin >> second;
    
    result = add (first,second); //function call 
    
    cout << "Sum " << result << endl;
    
    return 0;
}

int add (int a, int b){
    return a+b;
}

