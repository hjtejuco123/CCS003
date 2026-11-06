/******************************************************************************
Recursive countdown

*******************************************************************************/
#include <iostream>
using namespace std;

void countdown(int);

int main()
{
    int number;
    cout << "Enter countdown number: 0-20 ";
    cin >> number;
    
    if (number < 0 || number > 20) {
        cout << "A number must be from 0 - 20\n";
        return 1;
        
    }
    countdown(number);
  

    return 0;
}

void countdown(int number){
    //base case  if number == 0 (stop)
    if (number == 0){
        cout << "Blast off!" << endl;
        return;
    }
    cout << number << endl;
    countdown(number - 1);
    
}




