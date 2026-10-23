/******************************************************************************
for loop  
students -> grade -> pass or fail -> average 
if grade >= 75 -> pass 
if grade < 75 -> fail

Number of students => 3 

Grade of student 1: 85 
PASSED 
Grade of student 2: 70 
FAILED
Grade of student 3: 90
PASSED 

(Grade 85,70,90) total grades / students 

Average: ---
Passed: 2 
Failed: 1 

init = 1 
until = 3 
move = ++

*******************************************************************************/
#include <iostream>
using namespace std;

int main()
{
    int students; 
    double grade; //grade range 0-100 
    double total;
    int passed, failed;
    
    int i;   
    char again ='Y';
    
    while(again =='Y' || again=='y') {
        
        i=1;
        total = 0;
        passed = 0;
        failed = 0;
        
         
        cout << "Enter number of students: ";
        cin >> students; 
            
        //test if the user entered a valid number of students >=1.  <1 (invalid)
        if (students<=0){
            cout << "Invalid number of students.\n";
            return 0;
        }
            
        //user inputs a valid number positive
        while (i<=students) {
            cout << "Grade of student: " << i << ": ";
            cin >> grade;
            
            if (grade <0 || grade > 100) {
                cout << "Invalid grade. Try again\n";
                continue;
            }
                
            total += grade; 
                
            if (grade>=75){
                cout << "PASSED\n";
                passed++;
            }else{
                cout << "FAILED\n";
                failed++;
            }
                
            i++; //move to the next student 
        }
        
        cout << "\nAverage: " << total/students;
        cout << "\nPassed: "<<passed;
        cout << "\nFailed: "<<failed; 
       
        cout << "\nDo you want to try again? (Y/N) ";
        cin >> again;
        
        while (again != 'Y' && again != 'y' && again != 'N' && again != 'n'){
            cout << "Invalid Choice. Enter Y or N: ";
            cin >> again;
        }
        
        
    }
    cout << "\nThank you for using the program\n ";
   


    return 0;
}
