/*
 * Task_03.c
 *
 *  Created on: July 10, 2023
 *      Author: user
 */
#include<stdio.h>

void Check_Pos_Neg(int Number_01);

int main ()
{
	setvbuf(stdout, NULL, _IONBF, 0); setvbuf(stderr, NULL, _IONBF, 0);

	int Number_01;
	printf("Please Enter A Number: \n");
	scanf("%d",&Number_01);

	Check_Pos_Neg(Number_01);
	return 0;
}

void Check_Pos_Neg(int Number_01)
{
	if(Number_01 >=0)
	{
		printf("The Number is Positive \n");
	}
	else
	{
		printf("The Number is Negative ");
	}
}
