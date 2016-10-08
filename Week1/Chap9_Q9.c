/*Program to input a specific number of values into an  array and display the array and the sum of the elements in the 
array using malloc() or calloc() and pointers.
Author: Ronan O'Byrne
Date:26/01/2016
*/

#include <stdio.h>
#include <stdlib.h>
#define Arr 6

main()
{
    int *ptr;
    int array[Arr], sum=0, i;
    
    //Allocate memory
    ptr = (int*)calloc(array[Arr],sizeof(int));
    
    //Check if succesful
    if(ptr == NULL)
    {
        printf("Failed to allocate.");
        
        getchar();
        getchar();
    }//end if
    
    else
    {
        printf("Enter the numbers into memory.\n");
        
        //Enter data into allocated memory block
        for(i=0; i<Arr; i++)
        {
            scanf("%d",&*(array+i));
        }//end for
        
        printf("\n");
        
        //Display the numbers entered into the array
        for(i=0; i<Arr; i++)
        {
            printf("%d\n",*(array+i));
        }//end for
        
        printf("\n");
        
        //Display the sum of the elements in the array
        for(i=0; i<Arr; i++)
        {
            sum = sum + array[i];
        }
        
        printf("The sum of the elements of the array is: %d",sum);
        
        getchar();
        getchar();
        
        //Release the memory
        free(ptr);
        
    }//end else
    
}//end main
