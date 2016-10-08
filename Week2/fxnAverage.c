/* Program that uses 2 functions sum() and average() to read in 3 numbers pass the values to sum()
calculate the sum, pass the numbers to average() and calculate the average and display the answer
Author: Ronan O'Byrne
Date: 02/02/2016
*/

#include <stdio.h>
#define Arr 3

//Prototypes
void sum(int[]);
void average(int);

main()
{
    int Num[Arr];
    int i;
    
    printf("Please enter 3 numbers\n");
    for(i=0; i<Arr; i++)
    {
        scanf("%d",&Num[i]);
    }//end for
    
    printf("\nCall fxn sum()\n");
    sum(Num);
    printf("\nLeave fxn sum()\n");
    
    getchar();
    getchar();
}//end main()

void sum(int Num[Arr])
{
    int Sum=0;
    int i;
    
    for(i=0; i<Arr; i++)
    {
        Sum = Sum + Num[i];
    }//end for
    
    printf("\nCall fxn average()\n");
    average(Sum);
    printf("\nLeave fxn average()\n");
}//end sum()

void average(int Sum)
{
    float Average;
    
    Average = (float)Sum / Arr;
    
    printf("\nThe sum of the three numbers is %d",Sum);
    printf("\nThe average of the three numbers is %f\n",Average);
}//end average()