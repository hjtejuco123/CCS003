/******************************************************************************
ATM 


*******************************************************************************/
#include <iostream>
using namespace std;
int main()
{
    double balance = 5000;
    double amount;
    char choice ='Y';
    
    while(choice == 'Y' || choice =='y') {
        cout << "\nBalance: " << balance;
        cout << "\nEnter the Withdrawal Amount: ";
        cin >> amount;
        
        //test amount <0 -> invalid amount
        //test amount > balance -> Insufficient balance 
        //test with range -> withdrawal successful 
        
        
        if (amount <=0){
            cout << "Invalid Amount.\n";
            
        }else if (amount > balance) {
            cout << "Insufficient Balance\n";
            
        }else {
            balance -= amount;
            cout << "Withdrawal successful\n";
        }
        
        if (balance == 0){
            cout << "Account balance is zero\n";
            break;
        }
        
        
        cout << "Withdraw again (Y/N) ";
        cin >> choice;
    }
    
    cout << "Remaining balance " << balance << endl;

    return 0;
}
