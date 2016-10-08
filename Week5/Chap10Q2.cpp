/*Program to show what is wrong in the statements Chap10 Q2
Author: Ronan O'Byrne
Date: 01/03/2016
*/

#include<stdio.h>
#include <string.h>
#define SIZE 8

main()
{
	char name[SIZE] = {'R', 'o', 'b', 'e', 'r', 't'};
	
	puts(name);
	scanf("%s", name);
	puts(name);
	strcpy(name, "Phillip");
	puts(name);
	*(name + 5) = 'a';
	puts(name);
	strcpy(name, "Phillip");
	puts(name);
}//end main
