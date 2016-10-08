/* Program that demonstrates Pass by Reference similarly to the last program
Author: Ronan O'Byrne
Date: 09/02/2016
*/

#include <stdio.h>
//Prototype
void Inc(int*);

main()
{
    int num = 1;
    
    printf("%d\n", num);
    
    //Call fxn Inc() 
    Inc(&num);
    
    printf("%d\n", num);
    
    getchar();
}//end main

void Inc(int *fxn_num)
{
    (*fxn_num)++;
    printf("%d\n", (*fxn_num));
}