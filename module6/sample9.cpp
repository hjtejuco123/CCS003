/******************************************************************************
do while loop

Restaurant Menu 

1. Burger  100
2. Pizza 200 
3. Juice 50
4. Checkout 



*******************************************************************************/
#include <iostream>
using namespace std;
int main()
{
    int choice,quantity;
    double total = 0, price = 0;
    
    do {
        cout << "\n===Restaurant Menu===\n";
        cout << "1. Burger - 100\n";
        cout << "2. Pizza - 200\n";
        cout << "3. Juice - 50\n";
        cout << "4. Checkout\n";
        cout << "Choice: ";
        cin >> choice;
        
        if (choice >= 1 && choice <=3){
            cout << "Quantity: ";
            cin >> quantity; 
            
            if (quantity <=0) {
                cout << "Invalid quantity\n";
                continue;
            }
            
            if (choice == 1) price = 100;
            else if (choice == 2) price = 200;
            else price = 50;
            
            total += price * quantity;
            cout << "Added to Order \n";
            
        }else if (choice != 4) {
            cout << "Invalid section \n";
        }
        
        
    }while(choice != 4);
    
    //total bill 
    cout << "Total Bill " << total;

    return 0;
}
