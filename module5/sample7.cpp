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
    
    cout << "Enter percentage grade: ";
    cin >> grade;
    
    if (grade >=91 && grade <=100) {
        cout << "Grade - A\n";
    }else if(grade >=81 && grade <=90){
        cout << "Grade - B";
    }else if (grade >=70 && grade <=80){
        cout << "Grade - C\n";
    }else if (grade >= 0 && grade <=69){
        cout << "Grade - F\n";
    }else{
        cout << "Invalid Grade\n";
    }

    return 0;
}




