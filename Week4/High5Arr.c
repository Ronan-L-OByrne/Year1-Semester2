/*Program that uses a function to check for the highest of 5 numbers and returns the answer to main
Author: Ronan O'Byrne
Date: 09/02/2016
*/

#include <stdio.h>
#define arr 5
//Prototype
int highest(int[]);

main()
{
    int Array[arr], i, high;
    
    printf("Please enter 5 numbers\n");
    
    for(i=0; i<arr; i++)
    {
        scanf("%d", &Array[i]);
    }//end for
    
    //Call fxn highest()
    high = highest(Array);
    
    printf("\nThe highest of the five values is %d",high);
    
    getchar();
    getchar();
}//end main

int highest(int fxn_Array[arr])
{
    int fxn_high = 0, i;
    
    for(i=0; i<arr; i++)
    {
        if(fxn_Array[i]>fxn_high)
        {
            fxn_high = fxn_Array[i];
        }//end if
    }//end for
    
    return fxn_high;
}//end highest()
