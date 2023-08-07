/*
 * Task_04.c
 *
 *  Created on: July 10, 2023
 *      Author: user
 */


#include<stdio.h>

float Calculator(int Number_01,int Number_02 ,char Operation );

int main ()
{
	setvbuf(stdout, NULL, _IONBF, 0); setvbuf(stderr, NULL, _IONBF, 0);

	int Number_01 , Number_02 ;float Result ; char Operation;

	printf("Please Enter first Number : \n");
	scanf("%d",&Number_01);

	printf("Please Enter first Number : \n");
	scanf("%d",&Number_02);

	printf("Please Enter  Operation : \n");
	scanf(" %c",&Operation);

	Result= Calculator(Number_01,Number_02,Operation);

	printf("The Result : %0.3f \n", Result);
	return 0;
}

float Calculator(int Number_01,int Number_02, char Operation)
{
	float Result;
	switch(Operation)
	{
	case'+': Result = Number_01 + Number_02; break;
	case'-': Result = Number_01 - Number_02; break;
	case'*': Result = Number_01 * Number_02; break;
	case'/': Result = Number_01 / Number_02; break;
	default: printf("Wrong Operation \n");
	}

	return Result;

}
