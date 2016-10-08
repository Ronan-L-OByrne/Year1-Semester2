/*Program that prompts the user to input a country and the prog will display
the capital of that country
Author:Ronan O'Byrne
Date: 08/03/2016
*/

#include <stdio.h>
#include <string.h>
#define SIZE 10

main()
{
	char User[20] = {"\0"};
	char *Country[SIZE] = {"Australia", "Belgium", "China", "Denmark", "England", "France", "Greece", "Ireland", "Scotland", "Wales"};
	char *Capital[SIZE] = {"Canberra", "Brussels", "Bejing", "Copenhagen", "London", "Paris", "Athens", "Dublin", "Edinburgh", "Cardiff"};
	int i;
	
	printf("Please enter a Country\n");
	gets(User);
	
	for(i=0; i<SIZE; i++)
	{
		if(strcmp(User, Country[i]) == 0)
		{
			printf("%s", Capital[i]);
			break;
		}
	}//end for
}//end main
