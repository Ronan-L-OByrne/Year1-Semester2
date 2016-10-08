/* Program to find the GDC of two entered numbers using Euclids Algoritm
Author: Ronan O'Byrne
Date: 09/02/2016
*/
#include <stdio.h>
//Prototype
int Euclid(int, int);

main()
{
    int a, b;
    
    while(1)
    {
    printf("Please enter to two numbers you would like to find the GCD of.\n");
    scanf("%d", &a);
    scanf("%d", &b);
    
    a = Euclid(a, b);
    
    printf("\n>>The GCD is %d<<\n", a);
    printf("------------------------------------------------------------------------\n");
    
    }//end while(1)
}//end main()

int Euclid(int a, int b)
{
    if(b==0)
    {
        return(a);
    }//end if
    else
    {
        return(Euclid(b, a%b));//Use recursive call
    }//end else
}//end Euclid()
