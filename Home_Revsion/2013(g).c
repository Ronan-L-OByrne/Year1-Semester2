/*Program to test an exam Q
Author: Ronan O'Byrne
Date: 09/05/2016
*/

//Libraries and Symbolic Names//
#include <stdio.h>
#include <string.h>
#define SIZE

//Structs//

//Prototypes//

main()
{
	char name1[] = "Michael";
	char name2[] = "Mark";
	char *name3 = "Patrick";
	int len = 0;
	
	len = strlen(name1);
	
	printf("%d %d %d %d %d", strlen(name1), strlen(name2), strlen(name3), strlen("Rob"), len);
	printf("\n\"The home drive is on the u:\\ directory\", he said.");
}//end main()

//Functions//

