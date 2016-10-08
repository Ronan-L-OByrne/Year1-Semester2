/*Program to show the various ways of initialising a char array
Author: Ronan O'Byrne
Date: 01/03/2016
*/

#include <stdio.h>
#define SIZE 6

main()
{
	char name[SIZE]={'R','o','n','a','n'};
	char array[SIZE]="Ronan";
	char name2[SIZE]={'R','o','n','a','n','s'}; //This will compile but may be dangerous
	//char array2[SIZE]="Ronans"; // This will cause the code to not compile
	
	puts(name);
	puts(array);
	printf("\n");
	puts(name2);
	//puts(array2);
}
