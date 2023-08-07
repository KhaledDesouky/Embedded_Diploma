/*
 * Task_10.c
 *
 *  Created on: July 10, 2023
 *      Author: user
 */

#include<stdio.h>

int Get_No_Holes(int Number_01);

int main ()
{
	setvbuf(stdout, NULL, _IONBF, 0); setvbuf(stderr, NULL, _IONBF, 0);

	int Number_01, Result;

	printf("Please Enter A number \n");

	scanf("%d",&Number_01);

	Result = Get_No_Holes(Number_01);

	printf("The Number Of Holes = %d \n",Result);
	return 0;
}

int Get_No_Holes(int Number_01)
{
	int Sum=0;

	while(Number_01 !=0)
	{
		int Digit = Number_01 % 10 ;
		if((Digit == 0)||(Digit == 4)||(Digit == 6)||(Digit == 9))
		{
			Sum ++;
		}
		else if(((Digit == 8)))
		{
			Sum += 2;
		}

		Number_01 = Number_01 /10 ;
	}

	return Sum ;
}
