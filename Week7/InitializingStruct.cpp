/*Program to use a given struct Chap12Q3
Author: Ronan O'Byrne
Date: 15/03/2016
*/

#include <stdio.h>
#define DESC 21
#define ITEM 5

//Structs//
struct stock_record
{
	int no;
	char description[DESC];
	float price;
	int qty;
};//end struct stock_record

//Prototypes//

main()
{
	struct stock_record stock_item[ITEM];
	int i;
	
	printf("Please enter the stock record of 5 items.\n");
	for(i=0; i<ITEM; i++)
	{
		printf("\nITEM %d:\n", i+1);
		printf("Enter the stock number.\n");
		scanf("%d", &stock_item[i].no);
		
		printf("\nEnter the description.\n");
		scanf("%20s", &stock_item[i].description);
		
		printf("\nEnter the price.\n");
		scanf("%f", &stock_item[i].price);
		
		printf("\nEnter the quantity.\n");
		scanf("%d", &stock_item[i].qty);
		
		printf("\nAll Details:\n");
		printf("Stock number: %d\n", stock_item[i].no);
		printf("Description: %s\n", stock_item[i].description);
		printf("Price: %f\n", stock_item[i].price);
		printf("Quantity: %d\n", stock_item[i].qty);
	}//end for
}//end main()

