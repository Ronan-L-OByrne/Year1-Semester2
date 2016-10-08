/*Program to calculate and display the value of each element of mpl using pointers
Author: Ronan O'Byrne
Date: 26/01/2016
*/

#include <stdio.h>
#include <stdlib.h>
#define Arr 5
main()
{
    float litres[Arr] = {11.5, 11.21, 12.7,12.6, 12.4};
    float miles[Arr] = {471.5, 358.72,495.3, 453.6, 421.6};
    float mpl[Arr];
    int i;
    
    for(i=0; i<Arr; i++)
    {
        *(mpl+i) = *(miles+i) / *(litres+i);
        printf("MPL = %f\n",*mpl+i);
    }//end for
    
    getchar();
    getchar();
}//end main