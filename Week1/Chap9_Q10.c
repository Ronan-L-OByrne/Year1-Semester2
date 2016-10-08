/*Program to replace blank spaces in an array with _ using pointers only
Author: Ronaa O'Byrne
Date: 16/01/2016
*/

#include <stdio.h>
#include <stdlib.h>
#define Arr 8

main()
{
    char chars[Arr] = {'a', ' ', 'b', ' ', 'c', ' ', ' ', 'd'};
    int i;
    
    for(i=0; i<Arr; i++)
    {
        if(*(chars+i) == ' ')
        {
            *(chars+i) = '_';
        }
    }//end for
    
    for(i=0; i<Arr; i++)
    {
        printf("%c\n",*(chars+i));
    }
    
    getchar();
    getchar();
}//end main