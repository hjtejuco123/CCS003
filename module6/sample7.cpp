/******************************************************************************

password authentication 
Enter password -> admin123 

enter 3x -> access granted / Incorrect password (3 attempts)

*******************************************************************************/
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string password;
    int attempts = 0;
    bool authenticated = false;  //if the user matches admin123

    while(attempts <3 && !authenticated){
        cout << "Enter password: ";
        cin >> password;
        
        if (password=="admin123"){
            authenticated = true;
            cout << "Access granted!\n";
        }else{
            attempts++;
            cout << "Incorrect password\n";
        }
    }
    
    if (!authenticated) {
        cout << "Account Locked\n";
        
    }
    return 0;
}
