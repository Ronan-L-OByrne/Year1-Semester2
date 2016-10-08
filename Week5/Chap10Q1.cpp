/*Program to test what each printf will display Chap10 Q1
Author: Ronan O'Byrne
Date: 1/03/2016
*/

#include <stdio.h>

main()
{
	printf("%5s\n", "abcd");
	printf("%5s\n", "abcdef");
	printf("%-5s\n", "abc");
	printf("%5.2s\n", "abcde");
	printf("%-5.2s\n", "abcde");
}//end main
