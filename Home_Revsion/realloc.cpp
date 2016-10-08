/*Program to test the realloc function
Author: Ronan O'Byrne
Date:09/05/2016
*/

//Libraries and Symbolic Names//
#include <stdio.h>
#include <stdlib.h>
#define SIZE

//Structs//

//Prototypes//

main()
{
	register int i;
	int NoEls;
	int *p1, *p2;
	
	p1 = &NoEls;
	
	printf("How many elements?\n");
	scanf("%d", p1);
	
	p2 = (int*)calloc(NoEls, sizeof(int));
	
	printf("Please enter %d numbers\n", *p1);
	for(i=0; i<*p1; i++)
	{
		scanf("%d", &*(p2+i));
	}//end for
	
	for(i=0; i<*p1; i++)
	{
		printf("%d ", *(p2+i));
	}//end for
	
	p2 = (int*)realloc(p2, (*p1+5));
	
	if(p2 == NULL)
	{
		printf("\n\nERROR: Failed to allocate memory.\n");
	}//end if
	else
	{
		printf("\n\nPlease enter %d numbers\n", *p1+5);
		for(i=0; i<(*p1)+5; i++)
		{
			scanf("%d", &*(p2+i));
		}//end for
		
		for(i=0; i<(*p1)+5; i++)
		{
			printf("%d ", *(p2+i));
		}//end for
	}//end else
	
	free(p2);
	free(p1);
}//end main()

//Functions//

