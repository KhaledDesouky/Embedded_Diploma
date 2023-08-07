/*
 * Task_13.c
 *
 *  Created on: June 26, 2023
 *      Author: user
 */
#include <stdio.h>


void Check_Prime (int Number_01);

int main (void)
{
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	int Number_01 ;

	printf("Please Enter a postive Number : \n");
	scanf(" %d", &Number_01);

	if(Number_01 <0)
	{
		printf("Wrong : Negative Number \n");
		return 1 ;
	}
	else
	{
		Check_Prime(Number_01);

	}


	return 0;
}


void Check_Prime (int Number_01)
{

	int is_Prime = 1 ;

	for(int i =2 ; i<= (Number_01/2); i++)
	{
		if(Number_01 % i ==0)
		{
			is_Prime = 0;
			break;
		}
	}
	if (is_Prime == 1) {
		printf("%d is a prime number.\n", Number_01);
	} else {
		printf("%d is not a prime number.\n", Number_01);
	}
}
