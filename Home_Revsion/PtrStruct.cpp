/*Program to test pointer notation for a struct
Author: Ronan O'Byrne
Date: 09/05/2016
*/

//Libraries and Symbolic Names//
#include <stdio.h>
#define SIZE 3

//Structs//
struct Date
{
	int   day;
	int month;
	int  year;
};//End struct date

struct Info
{
	char   name[11];
	struct Date dob;
	int        num1;
	int        num2;
};//struct Info

//Prototypes//
void Enter(struct Info*);
void Display(struct Info);

main()
{
	struct Info Arr;
	register int i;
	
	Enter(&Arr);
	
	Display(Arr);
	
}//end main()

//Functions//
void Enter(struct Info *Array)
{
	register int i;
	
	printf("Please enter %d Numbers\n", SIZE*2);
	
	scanf("%d", &(Array)->num1);
	scanf("%d", &(Array)->num2);
	scanf("%10s",(Array)->name);
	scanf("%d", &(Array)->dob.day);
}//end void Enter(struct Info *Array)

void Display(struct Info Aray)
{
	register int i;
	
	printf("%d ", (Aray).num1);
	printf("%d ", (Aray).num2);
	printf("%s ", (Aray).name);
	printf("%d",  (Aray).dob.day);
}//end void Display(struct Info Array)

