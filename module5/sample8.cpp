/******************************************************************************

Nested IF 

Input - 3 numbers
a,b,c 

if a>=b 
        if a>=c 
            a - largest   //output 
        else 
            c - largest 
else
        if b>=c
            b - largest 
        else 
            c - largest 
*******************************************************************************/
#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;
    if (a>=b){
        if (a>=c){
            cout << "Largest = " << a << "\n";
        }else{
            cout << "Largest = " << c << "\n";
        }   
    }else{
        if (b>=c){
            cout << "Largest = " << b << "\n";
        }else{
            cout << "Largest = " << c << "\n";
        }
       
    }
    return 0;
}






