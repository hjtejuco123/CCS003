#include <iostream>
using namespace std;
int main()
{
    //count from 1-5   
    //control variable:  i    (1)
    //initial value: i = 1
    //condition: i <= 5       (2)
    //body - print -> i       (3)
    //update: ++ (i++) = i = i+1   (4)
        //  1       2   4 
    // for (int i=1; i<=5;i++) {
    //     cout << i << " ";   //3 
    // }
    
    int i=1;                //init 
    while(i<=5){            //condition (true)    
        cout << i << " ";   //body
        i++;                //inc 
    }
    
    
    
    return 0;
}
