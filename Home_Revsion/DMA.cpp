/*Notes on DMA
Author: Ronan O'Byrne
Date:
*/

//Libraries and Symbolic Names//
#include <stdio.h>
#include <stdlib.h>
#define SIZE

//Structs//

//Prototypes//

main()
{
	int *ptr;
	int num;
	register int i;
	
	//ptr = malloc(total size(bytes));
	//ptr = calloc(no of elements, size each element);
	
	//eg
	//ptr = calloc(4,sizeof(int));
	
	//Prog must read in varying num of readings using DMA
	printf("Please enter the num of readings: ");
	scanf("%d", &num);
	
	ptr = (int*)calloc(num, sizeof(int));
	if(ptr == NULL)
	{
		printf("ERROR: Failed to allocate memory.");
	}//end if
	else
	{
		printf("Please enter the readings: \n");
		for(i=0; i<num; i++)
		{
			scanf("%d", &*(ptr+i));
		}//end for
		
		for(i=0; i<num; i++)
		{
			printf("Reading%d: %d\n", i+1, *(ptr+i));
		}//end for
		
		//ptr = realloc(ptr, num);
		
		free(ptr);
	}//end else
}//end main()

//Functions//

