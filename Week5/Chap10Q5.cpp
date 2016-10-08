/*Program to display the output from the given code segments Chap10 Q5
Author: Ronan O'Byrne
Date: 01/03/2036
*/

#include <stdio.h>
#include <string.h>

main()
{
	char *p = "abcd";
	char *text = "abcd";
	char *p2 = text;
	
	while(*p)
	{
		putchar(*p++);
	}//end while
	
	p2 += strlen(p2)-1;
	while(text <= p2)
	{
		puts(p2--);
	}//end while
}//end main
