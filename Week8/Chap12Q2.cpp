/*Program to use various operators to initialize a struct. Chap12Q2
Author: Ronan O'Byrne
Date: 05/04/2016
*/

//Libraries and Symbolic Names//
#include <stdio.h>
#define SIZE

//Structs//
struct data
{
	int a;
	float b;
};//end struct data

//Prototypes//

main()
{
	struct data d;
	struct data *p;
	
	p = &d;
	
	d.a = 1;
	d.b = 2.3;
	printf("a = %d \nb = %.2f\n\n", d.a, d.b);
	
	d.a = 0;
	d.b = 0;
	
	p -> a = 1;
	p -> b = 2.3;
	printf("a = %d \nb = %.2f\n\n", d.a, d.b);
	
	d.a = 0;
	d.b = 0;
	
	(*p).a = 1;
	(*p).b = 2.3;
	printf("a = %d \nb = %.2f\n\n", d.a, d.b);
	
}//end main()

//Functions//

