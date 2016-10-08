/* Program that uses 2 functions to calculate the area of a square and a circle
Author: Ronan O'Byrne
Date: 16/02/2016
*/

#include <stdio.h>
//Prototype
void Sqr_fxn(float*);
void Circ_fxn(float*);

main()
{
    float sq, cir;
    
    printf("Please enter the square length. ");
    scanf("%f", &sq);
    
    //Call fxn Sqr_fxn()
    Sqr_fxn(&sq);
    
    printf("\nPlease enter the radius of the circle. ");
    scanf("%f", &cir);
    
    //Call fxn Circ_fxn()
    Circ_fxn(&cir);
    
    printf("\nThe area of the square is %.1f\n", sq);
    printf("The area of the circle is %.1f\n", cir);
    
    getchar();
    getchar();
}//end main


//Implement fxn Sqr_fxn()
void Sqr_fxn(float *sqr)
{
    *(sqr) = (*(sqr))*(*(sqr));
    
}//end Sqr_fxn()


//Implement fxn Circ_fxn()
void Circ_fxn(float *circ)
{
    *(circ) = 3.14*((*(circ))*(*(circ)));
    
}//end Circ_fxn