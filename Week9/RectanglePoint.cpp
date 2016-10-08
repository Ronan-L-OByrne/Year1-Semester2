/*Program to Check if a point is inside a rectange of two read in points
Author: Ronan O'Byrne
Date:
*/

//Libraries and Symbolic Names//
#include <stdio.h>
#define SIZE 2

//Structs//

//Prototypes//

main()
{
	//Arr[0] == x, Arr[1] == y
	int Right[SIZE], Left[SIZE], Point[SIZE];
	register int i;
	
	printf("Please enter the upper left point of a Rectangle format (x,y)\n");
	for(i=0; i<SIZE; i++)
	{
		scanf("%d", &Left[i]);
	}//end for
	
	printf("\nPlease enter the lower right point of a Rectangle format (x,y)\n");
	for(i=0; i<SIZE; i++)
	{
		scanf("%d", &Right[i]);
	}//end for
	
	printf("\nPlease enter the the point you would like to check if its in the rectangle format (x,y)\n");
	for(i=0; i<SIZE; i++)
	{
		scanf("%d", &Point[i]);
	}//end for
	
	if(Point[0] >= Left[0] && Point[0] <= Right[0] && Point[1] <= Left[1] && Point[1]>= Right[1])
	{
		printf("Point(%d,%d) is in the Rectangle", Point[0], Point[1]);
	}//end if
	else
	{
		printf("Point(%d,%d) is not in the Rectangle", Point[0], Point[1]);
	}//end else
}//end main()

//Functions//

