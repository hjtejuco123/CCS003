/******************************************************************************

Swap Values

*******************************************************************************/
#include <iostream>
using namespace std;
void swapValues(int, int);

int main()
{
   int x,y;
   cout << "Enter first number: ";
   cin >> x;
   cout << "Enter second number: ";
   cin >> y;
   
   swapValues(x,y);
   
   cout << "After function " << x << " " << y << endl;
    return 0;
}

void swapValues(int a, int b){
    int temp = a;
    a = b;
    b = temp;
    
    cout << "Inside function " << a << " " << b << endl;
    
    
}



