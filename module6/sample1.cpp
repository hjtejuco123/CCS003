/******************************************************************************
For Loop
Syntax 

        1.           2.         4 
for (initialization;condition;update) {
    statement(s); //body  3
}

Execution order -> initialization -> condition (t) -> body -> update -> condition 

Program tracing 

Iteration       i       test         condition     action     update 
1               1       i<=5            true         1          2 
2               2       i<=5            true         2          3  
3               3       i<=5            true         3          4 
4               4       i<=5            true         4          5  
5               5       i<=5            true         5          6 
6               6.      i<=5            false       stop

*******************************************************************************/
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
    for (int i=1; i<=5;i++) {
        cout << i << " ";   //3 
    }
    
    return 0;
}
