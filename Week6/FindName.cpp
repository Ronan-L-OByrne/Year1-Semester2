/*Prog that asks user for name. Name is then compared to a list. If name is in the list display
proper greeting else display "Name not found."
Author: Ronan O'Byrne
Date: 08/03/2016
*/

#include <stdio.h>
#include <string.h>
#define SIZE 20

main()
{
	char Name[SIZE];
	char *List[6] = {"Ronan", "Jack", "Steve", 
					 "Bob", "Greg", "Sam"
					};
	int i;
	
	printf("Please enter your name.\n");
	gets(Name);
	
	if(strcmp(Name, *List) == 0)
	{
		printf("Hello ");		
		puts(Name);
	}//end if
	else
	{
		printf("Name not found.\n");
	}//end if
}//end main
