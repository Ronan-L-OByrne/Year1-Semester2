/*labtest4: Program that uses various functions to read in a users data into a struct and then display it back to them.
Nested structs and two functions are required
Author: Ronan O'Byrne - C15332036 - DT228
Date: 19/04/2016
OS: Windows 10
Compiler: Borlands
*/

//Libraries and Symbolic Names//
#include <stdio.h>
#define SIZE 20
#define NUM 2

//Structs//
struct date
{
	int day;
	int month;
	int year;
};//end struct DoB

struct Info
{
	char firstname[SIZE];
	char surname[SIZE];
	struct date DoB;//Nested Structure
	float height;
	char eye[SIZE];
	float weight;
};//end struct Info

//Prototypes//
void Initialize(struct Info[]);
void Display(struct Info[]);

main()
{
    struct Info Driver[NUM];
    
    printf("Drivers Licence Data Entry Program\n");
    printf("----------------------------------\n");
    
    //Call to fxn Initialize
    Initialize(Driver);
    //Call to fxn Display
    Display(Driver);
    
    getchar();
    getchar();
}//end main()

//Functions//
//Because i am passing and array the passed struct is essentialy the same as the struct in main(Pass-By-Reference)
void Initialize(Info Driver[NUM])
{
    register int i;
    
    //Loop to read in the drivers details into the struct
    for(i=0; i<NUM; i++)
    {
        printf(">>Please Enter the details of driver %d below<<\n", i+1);
        printf("Firstname: ");
        scanf("%20s", Driver[i].firstname);
        
        printf("Surname: ");
        scanf("%20s", Driver[i].surname);
        
        do//Error checks to make sure the DoB could exist
        {
            printf("Date of Birth: \n");
                printf("    Day-> ");
                scanf("%d", &Driver[i].DoB.day);
                printf("    Month-> ");
                scanf("%d", &Driver[i].DoB.month);
                printf("    Year-> ");
                scanf("%d", &Driver[i].DoB.year);
            flushall();//Stops the program from looping when Characters are entered.
        }//end do while(Driver[i].DoB.day<1 || Driver[i].DoB.day>31 || Driver[i].DoB.month<1 || Driver[i].DoB.month>12 || Driver[i].DoB.year>2016);
        while(Driver[i].DoB.day<1 || Driver[i].DoB.day>31 || Driver[i].DoB.month<1 || Driver[i].DoB.month>12 || Driver[i].DoB.year>2016);
        
        printf("Height: ");
        scanf("%f", &Driver[i].height);
        flushall();//Stops the program from looping when Characters are entered.
        
        printf("Eye Colour: ");
        scanf("%20s", Driver[i].eye);
        
        printf("Weight: ");
        scanf("%f", &Driver[i].weight);
        flushall();//Stops the program from looping when Characters are entered.
        
        printf("\n");
    }//end for(i=0; i<NUM; i++)
}//end void Initialize(Info Driver[NUM])

//Because i am passing and array the passed struct is essentialy the same as the struct in main (Pass-By-Reference)
void Display(Info Driver[NUM])
{
    register int i;
    
    //This loop displays the drivers details from the struct
    for(i=0; i<NUM; i++)
    {
        printf(">>>Driver%d Bio<<<\n", i+1);
        printf("Name:          %s %s\n", Driver[i].firstname, Driver[i].surname);
        printf("Date of Birth: %2d/%2d/%4d\n", Driver[i].DoB.day, Driver[i].DoB.month, Driver[i].DoB.year);
        printf("Height:        %.2f\n", Driver[i].height);
        printf("Eye Colour:    %s\n", Driver[i].eye);
        printf("Weight:        %.2f\n", Driver[i].weight);
        
        printf("\n");
    }//end for(i=0; i<NUM; i++)
}//end void Display(Info Driver[NUM])
