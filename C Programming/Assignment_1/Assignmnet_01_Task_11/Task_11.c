/*
 * Task_11.c
 *
 *  Created on: June 26, 2023
 *      Author: user
 */
#include <stdio.h>

void Summation (void);
int main (void)
{
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	Summation();

	return 0;
}

void Summation (void)
{
	int Result ;
	for(int i =1 ; i<=100 ; i++)
	{
		if(i<100)
		{
			printf("%d + ",i);
		}
		if(i == 100)
		{
			printf("%d \n",i);
		}

		Result += i;

	}
	printf("The Summation is : %d \n", Result);
}
