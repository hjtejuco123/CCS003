/******************************************************************************

Compare two numbers 

true or false

*******************************************************************************/
#include <iostream>
using namespace std;
int main()
{
    int a,b;
    
    cout << "Enter first number: ";
    cin >> a;
    
    cout << "Enter second number: ";
    cin >> b;
    
    cout << boolalpha;
    
    cout << "a < b: " << (a<b) << "\n";
    cout << "a > b: " << (a>b) << "\n";
    cout << "a <= b: " << (a<=b) << "\n";
    cout << "a >= b: " << (a>=b) << "\n";
    cout << "a == b: " << (a==b) << "\n";
    cout << "a != b: " << (a!=b) << "\n";
    
    return 0;
}
