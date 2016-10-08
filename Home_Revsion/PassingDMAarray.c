/*Program to test passing a DMA array to a fxn
Author: Ronan O'Byrne
Date:
*/

//Libraries and Symbolic Names//
#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

//Structs//

//Prototypes//
int sum_array(int*, int);
int avg_array(int , int);

main()
{
	register int i;
	int no_els, sum, avg;
	int *array;
	
	printf("How many elements in the array? ");
	scanf("%d", &no_els);
	
	array = (int*)calloc(no_els, sizeof(int));
	
	printf("Please enter %d numbers.\n", no_els);
	for(i=0; i<no_els; i++)
	{
		scanf("%d", &*(array+i));
	}//end for
	
	sum = sum_array(array, no_els);
	printf("\nThe sum is %d\n", sum);
	
	avg = avg_array(sum, no_els);
	printf("The average is %d\n", avg);
}//end main()

//Functions//
int sum_array(int *array, int no_of_elements)
{
	register int i;
	int sum=0;
	
	for(i=0; i<no_of_elements; i++)
	{
		sum = sum + *(array+i);
	}//end for
	
	return sum;
}//end sum_array

int avg_array(int sum, int no_of_els)
{
	int avg = 0;
	
	avg = sum/no_of_els;
	
	return avg;
}//end avg_array

