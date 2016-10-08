/*Program to read in the travel info of 3 passengers and then display the info of the passengers
Author: Ronan O'Byrne
Date: 05/04/2016
*/

//Libraries and Symbolic Names//
#include <stdio.h>
#define SIZE 3

//Structs//
struct PlaneInfo
{
	char A_Name[20];
	int Flight_Num;
	char Surname[20];
	int Seat_Num;
	char Destination[20];
	int Bags_Num;
};//end struct PlaneInfo

//Prototypes//

main()
{
	struct PlaneInfo Passenger[SIZE];
	int i;
	
	for(i=0; i<SIZE; i++)
	{
		printf("Passenger %d. Please enter your Fight info:\n", i+1);
		printf("Airline Name: ");
		scanf("%20s", Passenger[i].A_Name);
		printf("Flight Number: ");
		scanf("%d", &Passenger[i].Flight_Num);
		printf("Your Surname: ");
		scanf("%20s", Passenger[i].Surname);
		printf("Seat Number: ");
		scanf("%d", &Passenger[i].Seat_Num);
		printf("Destination: ");
		scanf("%20s", Passenger[i].Destination);
		printf("Number of Bags: ");
		scanf("%d", &Passenger[i].Bags_Num);
		printf("\n\n");
	}//end for
	
	for(i=0; i<SIZE; i++)
	{
		printf(">>Passenger %d's Info<<\n", i);
		printf("Airline Name: %s\n", Passenger[i].A_Name);
		printf("Flight Number: %d\n", Passenger[i].Flight_Num);
		printf("Your Surname: %s\n", Passenger[i].Surname);
		printf("Seat Number: %d\n", Passenger[i].Seat_Num);
		printf("Destination: %s\n", Passenger[i].Destination);
		printf("Number of Bags: %d\n\n", Passenger[i].Bags_Num);
	}//end for
}//end main()

//Functions//

