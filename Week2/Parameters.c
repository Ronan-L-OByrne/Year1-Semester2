/*Program that uses a function with two parameters (int,char)
Author: Ronan O'Byrne
Date: 02/02/2016
*/

#include <stdio.h>
#define Num 7
//Prototype
void stars(char, int);
main()
{
    char ch = '*';
    int N = Num;
    printf("Inside main()\n");
    //call function
    stars(ch, N);
    printf("\nBack inside main()");
    
    getchar();
    
}//end main

//implement function stars()
void stars(char ch,int N)
{
    int i;
    for(i=0; i<N; i++)
    {
        printf("%c",ch);
    }//end for
}//end stars()