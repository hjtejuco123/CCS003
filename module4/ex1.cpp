/******************************************************************************
Student Average (Score)

*******************************************************************************/
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    //input 
    double score1, score2, score3;      //inputs 
    double average;                     //result 

    cout << "Enter Score 1: ";
    cin >> score1;

    cout << "Enter Score 2: ";
    cin >> score2;

    cout << "Enter Score 3: ";
    cin >> score3;

    //process
    average = (score1+score2+score3)/3.0;
    
    cout << fixed << setprecision(2);
    
    cout << "Avarage: " <<average<<endl;
    

    return 0;
}
