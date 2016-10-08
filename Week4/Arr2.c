/* Program that uses a function to calculate the average of 5 numbers and returns the answer to main
Author: Ronan O'Byrne
Date: 09/02/2016
*/

#include <stdio.h>
#define arr 5
//Prototype
void fxn(int[]);

main()
{
    int Array[arr], i;
    
    printf("Please enter 5 numbers\n");
    for(i=0; i<arr; i++)
    {
        scanf("%d",&Array[i]);
    }
    
    //Call fxn average()
    fxn(Array);
    
    printf("\nAfter the fxn is implemented.\n");
    for(i=0; i<arr; i++)
    {
        printf("%d\n",Array[i]);
    }
    
    getchar();
    getchar();
}//end main

void fxn (int fxn_Array[arr])
{
    int i;
    
    for(i=0; i<arr; i++)
    {
        fxn_Array[i] = fxn_Array[i]*2;
    }//end for
    
}// end average()