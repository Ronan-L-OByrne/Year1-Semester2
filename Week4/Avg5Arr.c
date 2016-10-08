/* Program that uses a function to calculate the average of 5 numbers and returns the answer to main
Author: Ronan O'Byrne
Date: 09/02/2016
*/

#include <stdio.h>
#define arr 5
//Prototype
float average(int[]);

main()
{
    int Array[arr], i;
    float avg;
    
    printf("Please enter 5 numbers\n");
    for(i=0; i<arr; i++)
    {
        scanf("%d",&Array[i]);
    }
    
    //Call fxn average()
    avg=average(Array);
    
    printf("\nThe average of the 5 numbers is %.1f",avg);
    
    getchar();
    getchar();
}//end main

float average (int fxn_Array[arr])
{
    float fxn_avg=0;
    int i;
    
    for(i=0; i<arr; i++)
    {
        fxn_avg = fxn_avg + fxn_Array[i];
    }//end for
    
    fxn_avg = fxn_avg / arr;
    
    return(fxn_avg);
}// end average()