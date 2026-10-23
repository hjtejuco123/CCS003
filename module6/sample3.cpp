/******************************************************************************

Multiplication Table Generator

Enter a number: 3
Enter table limit: 10
3 x 1 = 3 (ODD)
3 x 2 = 6 (EVEN)
3 x 3 = 9 (ODD)
3 x 4 = 12 (EVEN)
3 x 5 = 15 (ODD)
3 x 6 = 18 (EVEN)
3 x 7 = 21 (ODD)
3 x 8 = 24 (EVEN)
3 x 9 = 27 (ODD)
3 x 10 = 30 (EVEN)


*******************************************************************************/
#include <iostream>
using namespace std;
int main()
{
    int number,limit;
    int product;
   
    cout << "Enter a number: ";
    cin >> number;
    
    cout << "Enter table limit: ";
    cin >> limit;
    
    if (limit <= 0){
        cout << "Limit must be positive.\n";
        return 0;
    }
    
    for (int i=1;i<=limit;i++){
        product = number * i;
        cout << number << " x " << i << " = " << product;
        
        if (product % 2==0){
            cout << " (EVEN)";
        }else{  
            cout << " (ODD)";
        }
        
        cout << endl;
    }
    return 0;
}
