/*Program that uses a function to calculate the most commonly used character from 3 entered characters
Author: Ronan O'Byrne
Date: 09/02/2016
*/

#include <stdio.h>
#define arr 3
//Prototype
char common(char[]);

main()
{
    int i;
    char Array[arr], com;
    
    printf("Please enter 3 characters\n");
    
    for(i=0; i<arr; i++)
    {
        scanf("%1s",&Array[i]);
    }
    
    //Call fxn common()
    com = common(Array);
    
    printf("The most commonly used character is %c", com);
    
    getchar();
    getchar();
}//end main

char common(char fxn_Array[arr])
{
    char fxn_com='*';
    
    if(fxn_Array[0]==fxn_Array[1])
    {
        fxn_com = fxn_Array[0];
    }//end if
    
    if(fxn_Array[1]==fxn_Array[2])
    {
        fxn_com = fxn_Array[1];
    }//end if
    
    if(fxn_Array[0]==fxn_Array[2])
    {
        fxn_com = fxn_Array[0];
    }//end if
    
    return(fxn_com);
}//end common()