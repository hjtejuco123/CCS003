/******************************************************************************

Update by reference 

*******************************************************************************/
#include <iostream>
using namespace std;

void updateNumber (int &number);

int main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;
    
    cout << "Before: " << number << endl;
    updateNumber(number);
    cout << "After: " << number << endl;
    return 0;
}

void updateNumber (int &number){
    number +=10;
}
