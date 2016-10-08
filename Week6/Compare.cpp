/*Program that allows the user to enter 2 words and tells the user if they are the same
Author: Ronan O'Byrne
Date: 08/03/2016
*/

#include <stdio.h>
#include <string.h>
#define SIZE 100
//Prototypes
void Concat(char[]);
void length(char[]);

main()
{
	char Word1[SIZE];
	char Word2[SIZE];
	
	printf("Please enter 2 words.\n");
	gets(Word1);
	gets(Word2);
	
	if(strcmp(Word1, Word2) == 0)
	{
		printf("These words are the same.\n");
	}//end if
	else
	{
		printf("These words are NOT the same.\n");
	}//end else
	
	Concat(Word1);
}//end main

void Concat(char Var[SIZE])
{
	char Start[SIZE] = {"\nFirst word entered is "};
	strcat(Start, Var);
	
	puts(Start);
	
	length(Start);
}//end Concat

void length(char Wurd[SIZE])
{
	int i;
	
	i = strlen(Wurd);
	
	printf("The number of chars in that sentence are %d", i);
}//end length

