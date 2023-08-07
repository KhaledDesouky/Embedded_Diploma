/*
 * Task_06.c
 *
 *  Created on: June 26, 2023
 *      Author: user
 */
#include <stdio.h>

void Check_Equal(int Number_01 , int Number_02);
void Check_Higher(int Number_01, int Number_02);
int main (void)
{
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	int Number_01 , Number_02  ;
	printf("Please Enter First Number : \n");
	scanf(" %d", &Number_01);

	printf("Please Enter Second Number : \n");
	scanf(" %d", &Number_02);

	Check_Equal(Number_01,Number_02);
	Check_Higher(Number_01 , Number_02);

	return 0;
}


void Check_Equal(int Number_01 , int Number_02)
{
	if(Number_01 == Number_02)
	{
		printf("The Two Numbers Are Equal \n");
	}
	else
	{
		printf("The Two Numbers Are Not Equal \n");
	}
}

void Check_Higher(int Number_01, int Number_02)
{
	if(Number_01 > Number_02)
	{
		printf("The Higher Number is: %d \n", Number_01);
	}
	else if (Number_01 < Number_02)
	{
		printf("The Higher Number is: %d \n", Number_02);
	}
	else
	{
		printf("No One Is Higher \n");
	}
}
