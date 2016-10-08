/*Program to find all prime numbers between 2 and an imputed number.
Author: Ronan O'Byrne
Date: 08/04/2016
*/

//Libraries and Symbolic Names//
#include <stdio.h>

//Structs//

//Prototypes//

main()
{
	int i, j, flag;
	int num;
	
	printf("How far would you like to find the prime numbers too: ");
	scanf("%d", &num);
	printf("\n");
	
	for(i=2; i<num+1; i++)
	{
		flag = 0;
		for(j=2; j<=i/2; j++)
		{
			if(i%j == 0)
			{
				flag = 1;
				break;
			}//end if
		}//end for
		if(flag == 0)
		{
			printf("%d\n", i);
		}//end if
	}//end for
	
}//end main()

//Functions//

