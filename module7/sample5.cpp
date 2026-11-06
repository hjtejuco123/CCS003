/******************************************************************************
*******************************************************************************/
#include <iostream>
using namespace std;

void changeNumber (int number);

int main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;
    
    changeNumber(number);
    cout << "After Function " << number << endl;

    return 0;
}

void changeNumber (int number){
    number = number + 10;
    cout << "Inside Function " << number << endl;
}
