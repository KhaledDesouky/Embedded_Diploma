/*
 * Task_12.c
 *
 *  Created on: July 10, 2023
 *      Author: user
 */

#include<stdio.h>
#include<math.h>

int Cal_Minutes(int Number_01);

int main ()
{
	setvbuf(stdout, NULL, _IONBF, 0); setvbuf(stderr, NULL, _IONBF, 0);

	int Number_01, Result;

	printf("Please Enter Input Temperature \n");
	scanf("%d",&Number_01);

	Result = Cal_Minutes(Number_01);
	printf("The Required Time = %d Min \n",Result);

	return 0;
}


int Cal_Minutes(int Number_01)
{
	if((Number_01>=0) &&(Number_01<30))
	{
		return 7;
	}
	else if((Number_01>=30) &&(Number_01<60))
	{
		return 5;
	}
	else if((Number_01>=60) &&(Number_01<90))
	{
		return 3;
	}
	else if((Number_01>=90) &&(Number_01<100))
	{
		return 5;
	}
	else
	{
		return 0;
	}
}
