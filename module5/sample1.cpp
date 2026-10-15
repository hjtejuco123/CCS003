/******************************************************************************

Sequential - executed to bottom

*******************************************************************************/
#include <iostream>
#include <string>
using namespace std;
int main()
{
    //name, course and age 
    string name, course;        //name - hadji tejuco 
    int age;
    
    cout << "Enter student name: ";
    getline(cin, name);         //enter string values
    
    cout << "Enter course: ";
    getline(cin,course);
    
    cout << "Enter age: ";
    cin >> age;
    
    cout << "\nSTUDENT INFORMATION\n";
    cout << "Name "<< name <<"\n";
    cout << "Course " << course << "\n";
    cout << "Age " << age << "\n";
    
    return 0;
}
