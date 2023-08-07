/*
 * Task_07.c
 *
 *  Created on: July 10, 2023
 *      Author: user
 */


#include<stdio.h>

int Check_Multiple(int Number_01 , int Number_02);

int main ()
{
	setvbuf(stdout, NULL, _IONBF, 0); setvbuf(stderr, NULL, _IONBF, 0);

	int Number_01 , Number_02 ;
	char Result;

	printf("Please Enter First Number \n");
	scanf("%d",&Number_01);

	printf("Please Enter Second Number \n");
	scanf("%d",&Number_02);

	Result = Check_Multiple(Number_01,Number_02);
	if(Result)
	{
		printf("First Number is Multiple of the Second Number \n");
	}
	else
	{
		printf("First Number is Not Multiple of the Second Number \n");
	}

	return 0;
}


int Check_Multiple(int Number_01 , int Number_02)
{

	if((Number_01 % Number_02)== 0)
	{
		return 1;
	}
	else
	{
		return 0;
	}

}
