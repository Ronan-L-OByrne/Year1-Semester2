/*Program to hold several template structures Chap12Q1
Author: Ronan O'Byrne
Date: 15/03/2016
*/

#include <stdio.h>
#define SIZE 21

//Structs//
struct cards
{
	char type[SIZE];
	char suit[SIZE];
};//end struct cards

struct stock
{
	int number;
	char description[SIZE];
};//end struct stock

struct library
{
	char ISBN[14];
	char title[31];
	char author[26];
	float price;
};//end struct library

struct customer
{
	unsigned int number;
	char name[26];
	char address[46];
	double outstanding;
};//end struct customer

struct transaction
{
	char type;
	struct date
	{
		int day;
		int month;
		int year;
	};//end struct date
	float amount;
};//end struct transaction

struct time
{
	int hour;
	int mins;
	int secs;
	char mn[3];
};//end struct time

struct coordinates
{
	int degs;
	int mins;
	char position;
};//end struct position

struct teams
{
	char name[SIZE];
	int h_wins;
	int h_draws;
	int h_loses;
	int a_wins;
	int a_draws;
	int a_loses;
};//ene struct teams

//Prototypes//

main()
{
}//end main()

