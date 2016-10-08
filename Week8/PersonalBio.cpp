/*Program to use nested structures to store biographical data about a person.
Author: Ronan O'Byrne
Date: 05/04/2016
*/

#include <stdio.h>
#include <string.h>
#define NAME 21
#define COL 11
#define PEP 2

//Structs//
struct date
{
	int day;
	int month;
	int year;
};//end struct DoB
	
struct bio
{
	char firstname[NAME];
	char surname[NAME];
	struct date DoB;
	float height;
	float weight;
	char eye[COL];
	char country[NAME];
};//end struct bio

//Prototypes//

main()
{
	struct bio Person[PEP];
	
	//Read in user bio//
	printf("Please enter the info you are prompted for.\n");
	printf("\nEnter your Firstname: ");
	scanf("%20s", &Person[0].firstname);
	
	printf("\nEnter your Surname: ");
	scanf("%20s", &Person[0].surname);
	
	printf("\nEnter your Day of Birth: ");
	scanf("%d", &Person[0].DoB.day);
	printf("Enter your Month of Birth: ");
	scanf("%d", &Person[0].DoB.month);
	printf("Enter your Year of Birth: ");
	scanf("%d", &Person[0].DoB.year);
	
	printf("\nEnter your Height: ");
	scanf("%f", &Person[0].height);
	
	printf("\nEnter your Weight: ");
	scanf("%f", &Person[0].weight);
	
	printf("\nEnter your Eye Colour: ");
	scanf("%10s", &Person[0].eye);
	
	printf("\nEnter your Country of Citizenship: ");
	scanf("%20s", &Person[0].country);
	
	//Print user Bio//
	printf("\nYour Bio:\n");
	printf("Name: %s %s\n", Person[0].firstname, Person[0].surname);
	printf("Date of Birth: %d/%d/%d\n", Person[0].DoB.day, Person[0].DoB.month, Person[0].DoB.year);
	printf("Height: %f\n", Person[0].height);
	printf("Weight: %f\n", Person[0].weight);
	printf("Eye Colour: %s\n", Person[0].eye);
	printf("Country of Citizenship: %s\n", Person[0].country);
	
	//Copy user bio//
	strcpy(Person[1].firstname, Person[0].firstname);
	strcpy(Person[1].surname, Person[0].surname);
	Person[1].DoB.day = Person[0].DoB.day;
	Person[1].DoB.month = Person[0].DoB.month;
	Person[1].DoB.year = Person[0].DoB.year;
	Person[1].height = Person[0].height;
	Person[1].weight = Person[0].weight;
	strcpy(Person[1].eye, Person[0].eye);
	strcpy(Person[1].country, Person[0].country);
	
	//Modify user bio copy//
	strcpy(Person[1].firstname, "Nope");
	strcpy(Person[1].surname, "Bope");
	Person[1].DoB.day++;
	Person[1].DoB.month++;
	Person[1].DoB.year++;
	Person[1].height = Person[1].height + 5;
	Person[1].weight = Person[1].weight + 10;
	strcpy(Person[1].eye, "Blue");
	strcpy(Person[1].country, "USA");
	
	//Display user bio copy//
	//Print user Bio copy//
	printf("\nModified Bio:\n");
	printf("Name: %s %s\n", Person[1].firstname, Person[1].surname);
	printf("Date of Birth: %d/%d/%d\n", Person[1].DoB.day, Person[1].DoB.month, Person[1].DoB.year);
	printf("Height: %f\n", Person[1].height);
	printf("Weight: %f\n", Person[1].weight);
	printf("Eye Colour: %s\n", Person[1].eye);
	printf("Country of Citizenship: %s\n", Person[1].country);
}//end main()

//Functions//

