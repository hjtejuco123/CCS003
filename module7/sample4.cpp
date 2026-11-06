/******************************************************************************

Input grade (0 - 100)

grade > = 75
Result - PASSED
Result - FAILED

void function
function name - evaluateGrade 
parameters - grade (double)

*******************************************************************************/
#include <iostream>
using namespace std;

void evaluateGrade(double);
//void evaluateGrade(double grade);

int main()
{
    double grade;
    cout << "Enter student grade 0-100: ";
    cin >> grade;
    
    //test 
    if (grade <0 || grade >100){
        cout << "Invalid grade\n";
        return 1;
    }
    
    evaluateGrade(grade);
    return 0;
}

void evaluateGrade(double grade){
    if (grade >= 75)
        cout << "Result: PASSED\n";
    else
        cout << "Result: FAILED\n";
}
