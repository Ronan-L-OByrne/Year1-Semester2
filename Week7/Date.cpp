/*Program to use a given array which holds the current date Chap12Q8
Author: Ronan O'Byrne
Date: 15/02/2016
*/

#include <stdio.h>
#define SIZE

//Structs//
struct date_rec
{
	int day;
	int month;
	int year;
};//end struct date_rec

//Prototypes//

main()
{
	struct date_rec current;
	
	printf("Please enter the current day.\n");
	scanf("%d", &current.day);
	
	printf("\nPlease enter the current month. (number)\n");
	scanf("%d", &current.month);
	
	printf("\nPlease enter the current year.\n");
	scanf("%d", &current.year);
	
	current.day++;
	
	if(current.day > 31 || current.day < 1)
	{
		current.day = 1;
		current.month++;
	}//end if
	
	if(current.month > 12 || current.month < 1)
	{
		current.month = 1;
		current.year++;
	}//end if
	
	printf("%d/%d/%d", current.day, current.month, current.year);
}//end main()

//Functions//

