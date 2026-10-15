/******************************************************************************
ask for the grade ->     >=75 - pass |  <75 fail
*******************************************************************************/
#include <iostream>
using namespace std;
int main()
{
    double grade;
    
    cout << "Enter grade: ";
    cin >> grade;
    
    /*
    if (condition){
        statement_true
    }else{
        statement_false
    }
    */
    
    if (grade >= 75){
        cout << "You passed\n";
    }else{
        cout << "You failed\n";
    }
    

    return 0;
}
