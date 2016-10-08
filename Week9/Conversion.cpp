/*Program to read in 5 euro values and convert them to dollar
Author: Ronan O'Byrne
Date:
*/

//Libraries and Symbolic Names//
#include <stdio.h>
#define SIZE 5

//Structs//

//Prototypes//

main()
{
	float Euro[SIZE], Dollar[SIZE];
	register int i, j;
	
	printf("Please Enter 5 Euro values into the array\n");
	for(i=0; i<SIZE; i++)
	{
		scanf("%f", &Euro[i]);
		Dollar[i] = Euro[i];
		Dollar[i] = Dollar[i]*1.05;
	}//end for(i=0; i<SIZE; i++)
	
	for(i=0; i<SIZE; i++)
	{
		printf("\n€%.2f = $%.2f", Euro[i], Dollar[i]);
	}
	
}//end main()

//Functions//

