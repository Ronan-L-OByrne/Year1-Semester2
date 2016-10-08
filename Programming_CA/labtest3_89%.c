/*labtest3: Program to convert 5 Celsius temperatures to Fahrenheit and print the results in the function then
calculate the average Celsius temperature and convert it to Kelvin in another function, print the Kelvin
temperature in main.
Author: Ronan O'Byrne - C15332036 - DT228
Date: 23/02/2016
*/

#include <stdio.h>
#include <stdlib.h>
#define SIZE 5
//Prototypes
float convert_temp(float[]);
void in_Kelvin(float*);

main()
{
    float Celsius[SIZE]={0};
    float average;
    register int i;//For Speed
    
    do
    {
        printf("Please enter 5 temperatures in Celsius.\n");
        //Loop reads in the 5 Celsius temperatures.
        for(i=0; i<SIZE; i++)
        {
            scanf("%f", &*(Celsius+i));
            
            //Stops program from looping if the user enters characters.
            flushall();
        }//end for(i=0; i<SIZE; i++)
        
        printf("\n");
        
        //Call to fxn convert_temp()
        average = convert_temp(Celsius);
        printf("\nThe average Celsius temperature is %.1fC.\n", average);
        
        //call to fxn in_Kelvin()
        in_Kelvin(&average);//Pass-by-Reference
        printf("The average temperature in Kelvin is %.1fK.\n\n", average);
        
        printf("Press enter to go again.\n");
        getchar();
        printf("-------------------------------------------------\n\n");
        
    }//end do while
    while(true);
}//end main()


//implement fxn convert_temp()
float convert_temp(float Celsius_fxn[SIZE])
{
    float Fahrenheit[SIZE];
    float C_avg=0;
    register int i;//For Speed
    
    for(i=0; i<SIZE; i++)
    {
        //Calculate and display temperatures in Fahrenheit.
        *(Fahrenheit+i) = ((*(Celsius_fxn+i)*9)/5)+32;
        printf("%.1fC = %.1fF\n", *(Celsius_fxn+i), *(Fahrenheit+i));
        
        C_avg = C_avg + *(Celsius_fxn+i);
    }//end for(i=0; i<SIZE; i++)
    
    //Calculates the average temperature in Celsius.
    C_avg = C_avg/SIZE;
    
    return C_avg;
}//end convert_temp()


//implement fxn in_Kelvin()
void in_Kelvin(float *K_avg)
{
    //Calculates the average temperature in Kelvin.
    (*K_avg) = (*K_avg)+273;
}//end in_Kelvin()