/*Program to read in 5 floating point numbers and calculate and display the average of these five values.
Author: Ronan O'Byrne
Date:26/01/2016
*/

#include <stdio.h>
#include <stdlib.h>
#define Arr 5

main()
{
    int *ptr;
    int array[Arr], avg=0, i;
    
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
            avg = avg + array[i];
        }
        
        avg = avg / Arr;
        
        printf("The Average of the numbers entered is %d",avg);
        
        getchar();
        getchar();
        
        //Release the memory
        free(ptr);
        
    }//end else
    
}//end main
