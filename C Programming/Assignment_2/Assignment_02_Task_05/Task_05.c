/*
 * Task_05.c
 *
 *  Created on: July 10, 2023
 *      Author: user
 */

#include<stdio.h>

char Check_Even_Odd(int Number_01);

int main ()
{
	setvbuf(stdout, NULL, _IONBF, 0); setvbuf(stderr, NULL, _IONBF, 0);

	int Number_01;char Result;

	printf("Please Enter A number \n");
	scanf("%d",&Number_01);

	Result = Check_Even_Odd(Number_01);

	if(Result)
	{
		printf("The Number is Even \n");
	}
	else
	{
		printf("The Number is Odd \n");
	}

	return 0 ;
}

char Check_Even_Odd(int Number_01)
{

	if((Number_01 % 2 )==0)
	{
		return 1;
	}
	else
	{
		return 0;
	}


}
