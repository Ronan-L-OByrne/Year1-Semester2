/*Program that uses a fucntion to check if a value is even or odd and displayes the result
Author: Ronan O'Byrne
Date: 09/02/2016
*/

#include <stdio.h>
#define arr 5
//Prototype
int EvenOdd(int[]);

main()
{
    int Array[arr], i, count;
    
    printf("Please enter 5 numbers.\n");
    
    //Loop reads values into Array
    for(i=0; i<arr; i++)
    {
        scanf("%d", &Array[i]);
    }
    
    printf("\n");
    
    //Call fxn res()
    count = EvenOdd(Array);
    
    printf("\nThere are %d Even numbers and %d Odd\n", count, (arr-count));
    
    getchar();
    getchar();
}//end main

//Implement fxn EvenOdd()
int EvenOdd(int fxn_Arr[arr])
{
    int i, count=0;
    
    for(i=0; i<arr; i++)
    {
        //Checks if Number is Even
        if(fxn_Arr[i]%2==0)
        {
            printf("Even\n"); 
            count++;
        }//end if
        
        //If not even then Odd
        else
        {
            printf("Odd\n");
        }//end else
    }
    
    return count;
    
}//end int res