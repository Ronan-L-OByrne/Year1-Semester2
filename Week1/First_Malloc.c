/*Program to test malloc() as a data allocator (DMA)
Author: Ronan O'Byrne
Date: 26/01/2016
*/

#include <stdio.h>
#include <stdlib.h>
main()
{
    int *ptr;
    int no_els, no_bytes, i;
    
    printf("Enter the number of numbers.\n");
    scanf("%d",&no_els);
    
    //Calculate the memory required
    no_bytes = no_els*sizeof(int);
    
    //Allocate memoy
    ptr = (int*)malloc(no_bytes);
    
    //Check if succesful
    if(ptr == NULL)
    {
        printf("Failed to allocate memory.\n");
    }//end if
    
    else
    {
        printf("Enter the numbers into memory.\n");
        
        //Enter data into allocated memory block
        for(i=0; i<no_els; i++)
        {
            scanf("%d",&*(ptr+i));
        }//end for
        
        printf("\n");
        //Display the numbers entered into the allocated memory
        for(i=0; i<no_els; i++)
        {
            printf("%d\n",*(ptr+i));
        }//end for
        
        getchar();
        getchar();
        
        //Release the memory
        free(ptr);
        
    }//end else
    
    getchar();
    getchar();
}//end main
