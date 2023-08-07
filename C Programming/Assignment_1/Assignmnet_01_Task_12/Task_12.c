/*
 * Task_12.c
 *
 *  Created on: June 26, 2023
 *      Author: user
 */
#include <stdio.h>

int Factorial (int Number_01);

int main (void)
{
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	int Number_01 , Result;

	printf("Please Enter a postive Number : \n");
	scanf(" %d", &Number_01);

	if(Number_01 <0)
	{
		printf("Wrong : Negative Number \n");
		return 1 ;
	}
	else
	{
		Result = Factorial(Number_01);

		printf("The factorial Of Number %d is %d \n", Number_01 , Result);
	}


	return 0 ;
}

int Factorial (int Number_01)
{
	if(Number_01 == 0)
	{
		return 1 ;
	}
	else
	{
		return Number_01 * Factorial(Number_01 - 1 );
	}
}
