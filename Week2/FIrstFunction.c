/*Program that uses a function to print 10 stars in a line
Author: Ronan O'Byrne
Date: 02/02/2016
*/

#include <stdio.h>
#define Num 10
//Declare function prototype
void stars(void);
main()
{
    printf("Before function call\n");
    //call function stars()
    stars();
    printf("\nAfter function call");
    
    getchar();
}//end main

//implement function stars()
void stars()
{
    int i;
    for(i=0; i<10; i++)
    {
        printf("*");
    }//end for
}//end stars()