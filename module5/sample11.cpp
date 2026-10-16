/******************************************************************************

Ladder if 

input - grade 

grade >=91 && grade <=100  - A 
grade >=81 && grade <=90  - B 
grade >=70 && grade <=80 - C 
grade >= 0 && grade <=69 - F 
else  - Invalid grade  //default 

output - Letter

*******************************************************************************/
#include <iostream>
using namespace std;
int main()
{
    int grade;
    cout << "Grade 0-100: ";
    cin >> grade;
    
    if (grade < 0 || grade > 100){
        cout << "Invalid grade";
        return 0;
    }
    
    switch(grade){
            case 91 ... 100:
                cout << "Grade A";
                break;
            case 81 ... 90:
                cout << "Grade B";
                break;
            case 70 ... 80:
                cout << "Grade C";
                break;
            case 0 ... 69:
                cout << "Grade F";
                break;
    }

    return 0;
}
