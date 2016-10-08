/*CA Assignment2: Program that is a lotto game. Each option will be selected from the initial menu.
--------------------------------------------------------------------------------------------------------------------------------------------------
Option 1: The user will enter 6 numbers into a 1-D array (Every number must be unique and between 1 and 42).
Option 2: Display the contents of the 1-D array which holds the users numbers.
Option 3: Sort the contents of the array in increasing order using a sorting Algorithm.
Option 4: Compare the users numbers to the winning numbers (1,3,5,7,9,11 - 42(Bonus Number)) and say what they won.
Option 5: Display a tally of the numbers entered each time the user enters a new set of numbers.
Option 6: Exit the program.
--------------------------------------------------------------------------------------------------------------------------------------------------
Requirements: Program loops until option 6 is chose, Options 2-5 not accessible until option 1 has been completed.
--------------------------------------------------------------------------------------------------------------------------------------------------
Author: Ronan O'Byrne - C15332036
Compiler: Borlands
Operating System: Windows 10
Date Begun: 16/02/2016
Date Submitted: 04/03/2016
--------------------------------------------------------------------------------------------------------------------------------------------------
*/

//Libraries and Symbolic Names//
#include <stdio.h>
#include <stdlib.h>
#define SIZE 6
#define TCOUNT 42

//Structs//

//Prototypes
void UserNum(int[], int[]);	//Function that allows the user to input their numbers.
void ShowNum(int[]);		//Function that shows the user what numbers they chose.
void SortFxn(int[]);		//Function that sorts the users numbers in increasing order.
void Results(int[]);		//Function that calculates and tells the user if they won anything.
void TallyFxn(int[]);		//Function that displays the tally of all numbers entered by the user.
void Clear(void);			//Function to prompt the user to press Enter before clearing the screen.

main()
{
    int menu=0, allow=0, Num[SIZE]={0}, Tally[TCOUNT]={0};
    
    printf("                     >>>>>>Lottery Game - C15332036<<<<<<                      \n");
    printf("-------------------------------------------------------------------------------\n");
    //This for is to make sure the program runs until the user says otherwise.
    while(menu!=6)
    {
        menu=0;
        
        printf("                                 >>MAIN MENU<<                                 \n");
        printf("-------------------------------------------------------------------------------\n");
        printf("Please enter the number of what you want to do what you would like to do.      \n");
        printf("1. Enter your lotto numbers here.                                              \n");
        printf("2. See what numbers you've entered.                                            \n");
        printf("3. Sort the number you've entered into increasing order.                       \n");
        printf("4. See if you're a Winner.                                                     \n");
        printf("5. See the frequency of each of your numbers entered.                          \n");
        printf("6. Exit game.                                                                  \n");
        printf("-------------------------------------------------------------------------------\n\n");
        
        scanf("%d",&menu);
        flushall();//makes sure the program can deal with multiple characters being entered.
        printf("--\n");
        
        //Error check.
        if(menu<1 || menu>6)
        {
            printf("Please enter a number 1-6 from the menu.\n");
            
            Clear();//Call to fxn Clear()
        }//end if(menu<1 && menu>6)
        else
        {
            //This dictates where the user will be directed from the main menu.
            if(menu==1 || menu==6 || allow!=0)
            {
                //All functions are called from this Switch (except Clear()).
                switch(menu)
                {
                    //Users Numbers
                    case 1:
                    {
                        UserNum(Num, Tally);//Call to fxn UserNum()
                        allow=1;//To make the user access menu option 1 before any other options
                        break;
                    }//end case 1:
                    
                    //Show Numbers
                    case 2:
                    {
                        ShowNum(Num);//Call to fxn ShowNum()
                        
                        break;
                    }//end case 2:
                    
                    //Sort Numbers
                    case 3:
                    {
                        SortFxn(Num);//Call to fxn SortFxn()
                        
                        break;
                    }//end case 3:
                    
                    //Winner?
                    case 4:
                    {
                        Results(Num);//Call to fxn Results()
                        
                        break;
                    }//end case 4:
                    
                    //Check Tally
                    case 5:
                    {
                        TallyFxn(Tally);//Call to fxn TallyFxn()
                        
                        break;
                    }//end case 5:
                }//end switch(menu)
            }//end if(menu==1 || menu==6 || t!=0)
            else
            {
               printf("Please complete option 1 first.\n");
                
                Clear();//Call to fxn Clear() 
            }//end else
        }//end else
    }//end while(menu != 6)
}//end main


//Implement fxn UserNum()
void UserNum(int User[SIZE], int Increment[TCOUNT])
{
    register int i, j;
    int temp;
    //This is to reset the array to 0 so there will be no issues overwiting the users last input numbers.
    for(i=0; i<SIZE; i++)
    {
        User[i]=0;
    }//end for(i=0; i<SIZE; i++)
    
    printf("Please enter %d numbers between 1 and %d.\n", SIZE, TCOUNT);
    
    //This loop dictates which element of the array the user is entering the data.
    for(i=0; i<SIZE; i++)
    {
        temp = 0;//A temp is used to make the error checking easier.
        scanf("%d", &temp);
        
        //This loop is used to check for any repeats of the same number within the array.
        for(j=i; j>-1; j--)
        {
            //Checks if the number is within the given range or unique.
            if(temp<1 || temp>TCOUNT || temp == *(User+j))
            {
                printf("Please enter a different Number between 1 and %d.\n",TCOUNT);
                i--;//Makes sure the loop dosnt move on to the next element.
                break;
            }//end if(temp<1 || temp>TCOUNT || temp == *(User+j))
            else
            {
                //If all conditions met then that element in the array is initialized
                *(User+i)=temp;
            }//end else
        }//end for(j=i+1; j>0; j--)
        flushall();//makes sure the program can deal with multiple characters being entered.
    }//end for(i=0; i<SIZE; i++)
    
    //Once the loops are finished the array for the TallyFxn is incremented.
    for(i=0; i<SIZE; i++)
    {
        (*(Increment + *(User+i)))++;
    }//end for(i=0; i<SIZE; i++)
    
    printf("Thank You.\n");
    
    Clear();//Call to fxn Clear()
}//end UserNum(int Nums[SIZE], int Increment[TCOUNT])


//Implement fxn ShowNum()
void ShowNum(int Show[SIZE])
{
    register int i;
    
    printf("The numbers you have chosen are: ");
    for(i=0; i<SIZE; i++)
    {
        printf("%d ", *(Show+i));
    }//end for(i=0; i<SIZE; i++)
    printf("\n");
    
    Clear();//Call to fxn Clear()
}//end ShowNum(int Show[SIZE])


//Implement fxn SortFxn()
void SortFxn(int Sort[SIZE])
{
    register int i, j;
    int temp, swaps;
    
    printf("Your numbers in increasing order: ");
    
    //Using modified bubble sort algorithm to sort the array.
    for(i=0; i<SIZE; i++)
	{
        swaps = 0;
		for(j=0; j<SIZE-i-1; j++)
		{
			if(*(Sort+j) > *(Sort+(j+1)))
			{
				temp = *(Sort+j);
				*(Sort+j) = *(Sort+(j+1));
				*(Sort+(j+1)) = temp;
                swaps++;
			}//end if(*(Sort+j) > *(Sort+(j+1)))
		}//end for(j=0; j<SIZE-1; j++)
        if(swaps == 0)
        {
            break;
        }//end if(swaps == 0)
	}//end for(i=0; i<SIZE; i++)
    
    for(i=0; i<SIZE; i++)
    {
        printf("%d ", *(Sort+i));
    }//end for(i=0; i<SIZE; i++)
    printf("\n");
    
    Clear();//Call to fxn Clear()
}//end SortFxn(int Sort[SIZE])


//Implement fxn Results()
void Results(int User[SIZE])
{
    int Win[SIZE] = {1,3,5,7,9,11};
    register int i, j;
    int count=0, bonus=0;
    
    for(i=0; i<SIZE; i++)
    {
        for(j=0; j<SIZE; j++)
        {
            if(*(User+i) == *(Win+j))
            {
                count++;
            }//end if(*(User+i) == *(Win+j))
        }//end for(j=0; j<SIZE; j++)
        
        if(*(User+i) == 42)
        {
            bonus++;
        }//end if(*(User+i) == 42)
    }//end for(i=0; i<SIZE; i++)
    
    //Tells the user if and what they won based on the number of matching numbers and bonus number.
    switch(count)
    {
        case 6:
        {
            printf("Match 6: Jackpot. :D\n");
            
            break;
        }//end case 6:
        
        case 5:
        {
            if(bonus == 1)
            {
                printf("Match 5 + BONUS: You won a New Car.\n");
            }//end if(bonus == 1)
            else
            {
                printf("Match 5: You won a Holiday.\n");
            }//end else
            
            break;
        }//end case 5:
        
        case 4:
        {
            if(bonus == 1)
            {
                printf("Match 4 + BONUS: You won a Weekend Away.\n");
            }//end if(bonus == 1)
            else
            {
                printf("Match 4: You won a Night Out.\n");
            }//end else
            
            break;
        }//end case 4:
        
        case 3:
        {
            if(bonus == 1)
            {
                printf("Match 3 + Bonus: You won a Cinema Ticket.\n");
            }//end if(bonus == 1)
            else
            {
                printf("You lose. Please try again.\n");
            }//end else
            
            break;
        }//end case 3:
    }//end switch(count)
    
    if(count<3)
    {
        printf("You lose. Please try again.\n");
    }//end if(count<3)
    
    Clear();//Call to fxn Clear()
}//end Results(int User[SIZE])


//Implement fxn TallyFxn()
void TallyFxn(int Counter[TCOUNT])
{
    register int i;
    
    for(i=0; i<TCOUNT; i++)
    {
        if(*(Counter+i) != 0)
        {
            printf("Number %2d has been selected %2d times.\n", i, *(Counter+i));
        }//end if(*(Counter+i)! = 0)
    }//end for(i=0; i<TCOUNT; i++)
    
    Clear();//Call to fxn Clear()
}//end TallyFxn(int Counter[TCOUNT])


//Implement fxn Clear() - This function is mostly for neatness sake.
void Clear(void)
{
    //This makes sure the menu dosn't re-appear until the user wants it to
    printf("\nPress Enter to continue.\n");
    getchar();
    system("cls");
}//end void Clear(void)

//100 lines of code are either white space of comments. Actual code (including lines consiting of only { } and comments) takes up 239 lines.
//There are no bugs just "Features". :)
