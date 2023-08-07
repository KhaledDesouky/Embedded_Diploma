/*
 * Task_01.c
 *
 *  Created on: July 10, 2023
 *      Author: user
 */

#include<stdio.h>

int Calculate_Cubic(int Number_01);

int main ()
{
	setvbuf(stdout, NULL, _IONBF, 0); setvbuf(stderr, NULL, _IONBF, 0);
	 int Number_01;  int Result;
	printf("PLease Enter A number: \n");
	scanf("%d",&Number_01);

	Result =Calculate_Cubic(Number_01);
	printf("The Result= %d * %d * %d = %d \n",Number_01,Number_01,Number_01,Result);
	return 0;
}

int Calculate_Cubic(int Number_01)
{
	return Number_01 * Number_01 * Number_01;
}
