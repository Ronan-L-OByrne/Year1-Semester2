/*Program to use a given array which holds the current time Chap12Q7
Author: Ronan O'Byrne
Date: 15/03/2016
*/

#include <stdio.h>
#define SIZE

//Structs//
struct time_rec
{
	int hours;
	int mins;
	int secs;
};//end struct time_rec

//Prototypes//

main()
{
	struct time_rec current_time;
	
	printf("Please enter the cuttent hour.\n");
	scanf("%d", &current_time.hours);
	
	printf("\nPlease enter the current minute.\n");
	scanf("%d", &current_time.mins);
	
	printf("\nPlease enter the current second.\n");
	scanf("%d", &current_time.secs);
	
	current_time.secs++;
	
	if(current_time.secs > 59 || current_time.secs < 0)
	{
		current_time.secs = 0;
		current_time.mins++;
	}//end if
	
	if(current_time.mins > 59 || current_time.mins < 0)
	{
		current_time.mins = 0;
		current_time.hours++;
	}//end if
	
	if(current_time.hours > 23 || current_time.hours < 0)
	{
		current_time.hours = 0;
	}//end if
	
	printf("%d:%d:%d", current_time.hours, current_time.mins, current_time.secs);
}//end main()

//Functions//

