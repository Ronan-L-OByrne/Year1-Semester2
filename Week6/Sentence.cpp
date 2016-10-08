/*Program to read a sentence then check for the frequency of the word "is", Calculates
the number of chars in the sentence, adds "My sentence is:"to the begining
Author: Ronan O'Byrne
Date: 08/03/2016
*/

#include <stdio.h>
#include <string.h>
#define SIZE 1000

main()
{
	char Sentence[SIZE] = {"\0"};
	char Start[SIZE] = {"My sentence is: "};
	int i, length, is;
	
	printf("Please enter a sentence.\n");
	gets(Sentence);
	
	length = strlen(Sentence);
	
	strcat(Start, Sentence);
	
	puts(Start);
	
	printf("\nThere are %d characters in your sentence\n", length);
}
