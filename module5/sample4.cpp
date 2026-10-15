/******************************************************************************

LOGICAL OPERATORS

AND && OR || NOT !=

                        FAND            TOR         
exp1        exp2                AND             OR     NOT 
t           t           t&&t    t       t||t    t      true = false 
t           f           t&&f    f       t||f    t      false = true     
f           t           f&&t    f       f||t    t        
f           f           f&&f    f       f||f    f 

Age to vote >= 18 - 60 - required age range 
below -> outside of the required range 
*******************************************************************************/
#include <iostream>
using namespace std;
int main()
{
    int age;
    
    cout << "Enter age: ";
    cin >> age; 
        //. false    true 
    if (age >= 18 && age <=60){
        cout << "Within the required age range.\n";     //true 
    }else{
        cout << "Outside the required age range.\n";    //false 
    }

    return 0;
}


