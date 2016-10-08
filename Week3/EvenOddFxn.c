/*Program that uses a fucntion to check if a value is even or odd and displayes the result
Author: Ronan O'Byrne
Date: 09/02/2016
*/

#include <stdio.h>
//Prototype
int res(int);

main()
{
    int num1;
    
    printf("Please enter a number.\n");
    
    scanf("%d",&num1);
    
    //Call fxn res()
    num1 = res(num1);
    
    printf("\n%d",num1);
    
    getchar();
    getchar();
}//end main

int res(int num)
{
    if(num%2==0)
    {
        return 1;
    }//end if
    else
    {
        return 0;
    }//end else
}//end int res