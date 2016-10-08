/*Program to read in info about 2 cities, print them out and compare them.
Author: Ronan O'Byrne
Date: 05/04/2016
*/

//Libraries and Symbolic Names//
#include <stdio.h>
#define SIZE 20
#define NUM 2

//Structs//
struct City
{
	char City[SIZE];
	int Population;
	float Rainfall;
	float Sunshine;
};//end struct City

//Prototypes//

main()
{
	struct City Cities[NUM];
	struct City *ptr, *p;
	register int i;
	
	for(i=0; i<NUM; i++)
	{
		ptr = &Cities[i];
		
		printf("Enter City %d's Info.\n", i+1);
		printf("City Name: ");
		scanf("%20s", ptr -> City);
		printf("Population: ");
		scanf("%d", &ptr -> Population);
		printf("Rainfall(mm): ");
		scanf("%f", &ptr -> Rainfall);
		printf("Sunshine(hours): ");
		scanf("%f", &ptr -> Sunshine);
		printf("\n\n");
	}//end for
	
	for(i=0; i<NUM; i++)
	{
		ptr = &Cities[i];
		
		printf(">>City %d's Info<<\n", i+1);
		printf("City Name: %s\n", ptr -> City);
		printf("Population: %d\n", ptr -> Population);
		printf("Rainfall(mm): %f\n", ptr -> Rainfall);
		printf("Sunshine(hours): %f\n\n", ptr -> Sunshine);
	}//end for
	
	ptr = &Cities[0];
	p = &Cities[1];
	
	if(ptr -> Rainfall > p -> Rainfall)
	{
		printf("%s has the highest rainfall with %f.\n", ptr -> City, ptr -> Rainfall);
	}//end if
	else
	{
		printf("%s has the highest rainfall with %f.\n", p -> City, p -> Rainfall);
	}//end else
	
	if(ptr -> Sunshine < p -> Sunshine)
	{
		printf("%s has the highest sunshine with %f.\n", ptr -> City, ptr -> Sunshine);
	}//end if
	else
	{
		printf("%s has the lowest sunshine with %f.\n", p -> City, p -> Sunshine);
	}//end else
}//end main()

//Functions//

