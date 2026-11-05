/******************************************************************************
Compute for the area rectagle

data type - double 
function - area 
Parameters - length, width 
compute - length * width 

Input - Length and width 


*******************************************************************************/
#include <iostream>
using namespace std;

double area (double, double);

int main()
{
    double length, width;
    
    cout << "Enter rectangle length: ";
    cin >> length;
    
    cout << "Enter rectagle width: ";
    cin >> width;
    
    if (length <= 0 || width <=0) {
        cout << "Dimensions must be positive \n";
        return 1;
    }
    
    cout << "Area: " << area(length, width) << endl;

    return 0;
}

double area (double length, double width){
    return length * width;
    
}
