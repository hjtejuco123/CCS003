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
    cout << "Grade ";
    cin >> grade;
    
    switch(grade){
        case 91:
        case 92:
        case 93:
        case 94:
        case 95:
        case 96:
        case 97:
        case 98:
        case 99:
        case 100:
            cout << "Grade A";
            break;
        default:
            cout << "Invalid";
        
    }

    return 0;
}
