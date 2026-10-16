/******************************************************************************

Positive or Negative 
Enter a numbe 
 
number > 0 - positive  /
number < 0 - negative  /
number = 0 - zero 


*******************************************************************************/
#include <iostream>
using namespace std;
int main()
{
    int number;
    
    cout << "Enter number: ";
    cin >> number;
    
    if (number > 0){
        cout << "Positive Integer.\n";  //true  
    }else if (number < 0) {
        cout << "Negative Integer.\n";  //false     
    }else{
        cout << "Zero\n";
    }
    cout << "Program Terminated\n";
    return 0;
}





