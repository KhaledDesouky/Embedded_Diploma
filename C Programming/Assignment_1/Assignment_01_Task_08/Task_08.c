/*
 * Task_08.c
 *
 *  Created on: June 26, 2023
 *      Author: user
 */
#include <stdio.h>

int Check_Perfect_Square (int Reading);
int main (void)
{
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	int Reading ;
	printf("Please Enter A Number : \n");
	scanf(" %d",&Reading);

	if(Check_Perfect_Square(Reading)==1)
	{
		printf("The Number %d is Perfect Square \n", Reading);
	}
	else
	{
		printf("The Number %d is Not Perfect Square \n", Reading);
	}
	return 0 ;
}

int Check_Perfect_Square (int Reading)
{
	for(int i = 1 ; i < Reading /2 ; i++)
	{
		if(i * i == Reading)
		{
			return 1 ;
		}
	}
	return 0 ;
}
