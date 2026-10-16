/******************************************************************************

Positive or Negative 
number >= 0 - positive otherwise negative   


*******************************************************************************/
#include <iostream>
using namespace std;
int main()
{
    int number;
    
    cout << "Enter number: ";
    cin >> number;
    
    if (number >= 0){
        cout << "Positive Integer.\n";  //true  
    }else {
        cout << "Negative Integer.\n";  //false     
    }

    return 0;
}
