/******************************************************************************

Enter a grade 0-100

if grade >= 75  - Passed (Average)

sentinel var. -1 (program will stop )

*******************************************************************************/
#include <iostream>
using namespace std;
int main()
{
    int grade,count=0,passed=0;
    double total;
    
    //show -> start of the program 
    cout << "Enter grade: (-1 to stop): ";
    cin >> grade;

    //condition -> grade != -1
    while(grade != -1){
        if (grade >= 0 && grade <=100)  {
            total += grade;
            count++;
            
            if (grade >= 75) {
                passed++;
                
            }
        }else{
            cout << "Invalid grade.\n";
            
        }
        
        cout << "Enter grade: (-1 to stop): ";
        cin >> grade;
        
    }

    //show the average (pass)
    if (count > 0){
        cout << "Average " << total / count << endl;
        cout << "Passed: " << passed << endl; 
        
    }else{
        cout << "No valid grades entered: \n";
        
    }


    return 0;
    
}
