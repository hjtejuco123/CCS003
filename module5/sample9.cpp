/******************************************************************************

Letter

S - Square
R - Rectangle
C - Circle 
Invalid 

toupper()

*******************************************************************************/
#include <iostream>
#include <cctype>
using namespace std;
int main()
{
    char choice;
    
    cout << "Menu\n";
    cout << "S - Square\n";
    cout << "R - Rectangle\n";
    cout << "C - Circle\n";
    
    cout << "Enter choice: ";  //S s, R r, C c 
    cin >> choice;
    
    choice = toupper(choice);
    
    switch(choice){
        case 'S':
            cout << "Squre\n";
            break;
        case 'R':
             cout << "Rectangle\n";
            break;
        case 'C':
            cout << "Circle\n";
            break;
        default:
            cout << "Invalid\n";
            
        
    }
    
    

    return 0;
}
