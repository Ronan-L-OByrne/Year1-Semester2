/* Program that uses a function to find the highest and lowest numbers from 3 values
Author: Ronan O'Byrne
Date: 02/02/2016
*/

#include <stdio.h>
#define Num 3
//prototype
void hl(int[]);
main()
{
    int N[Num];
    int i;
    
    printf("Enter 3 numbers\n");
    for(i=0; i<Num; i++)
    {
        scanf("%d",&N[i]);
    }//end for
    hl(N);
    
    getchar();
}//end main()


//Implement function hl
void hl(int N[Num])
{
    int high= N[0], low= N[0];
    int i;
    
    for(i=0; i<Num; i++)
    {
        if(N[i]>high)
        {
            high = N[i];
        }//end if
        
        if(N[i]<low)
        {
            low = N[i];
        }//end if
    }//end for
    
    printf("\nThe highest number is %d",high);
    printf("\nThe lowest number is %d",low);
    
    getchar();
}//end hl()