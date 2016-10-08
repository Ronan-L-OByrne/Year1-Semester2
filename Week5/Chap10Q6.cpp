/*Program to read in a name and display with a space between each letter
Author: Ronan O'Byrne
Dtae: 01/03/2016
*/

#include <stdio.h>
#include <string.h>
#define SIZE 20

main()
{
	char name[SIZE];
	register int i;
	
	gets(name);
	for(i=0; i<(strlen(name)+1); i++)
	{
		printf("%c ", *(name+i));
	}//end for
	
	printf("\n");
}//end main
