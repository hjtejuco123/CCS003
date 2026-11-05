/******************************************************************************
Personal Welcome Message 

Input - Name 


Welcome Name 
Welcome to c++ Programming 

welcome 

*******************************************************************************/
#include <iostream>
#include <string>
using namespace std;
void welcome(string name);

int main()
{
    string name;
    cout << "Enter your name: ";
    getline(cin,name);
    
    welcome(name);

    return 0;
}

void welcome(string name) {
    cout << "\nWelcome, " << name << "!" << endl;
    cout << "Welcome c++ programming " << endl;
}


