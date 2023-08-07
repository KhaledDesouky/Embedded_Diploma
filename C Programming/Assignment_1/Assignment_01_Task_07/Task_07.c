/*
 * Task_07.c
 *
 *  Created on: June 26, 2023
 *      Author: user
 */

#include <stdio.h>

int Check_Smaller(int Number_01 , int Number_02 , int Number_03);

int main (void)
{
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	int Number_01 , Number_02 , Number_03 , Smallest_Number ;
	printf("Please Enter First Number : \n");
	scanf(" %d", &Number_01);

	printf("Please Enter Second Number : \n");
	scanf(" %d", &Number_02);

	printf("Please Enter Third Number : \n");
	scanf(" %d", &Number_03);

	Smallest_Number =Check_Smaller(Number_01 , Number_02 , Number_03);

	printf("The Smallest Number Is : %d \n ", Smallest_Number);

	return 0 ;
}

int Check_Smaller(int Number_01 , int Number_02 , int Number_03)
{
	int Small_Value = Number_01 ;

	if(Small_Value > Number_02)
	{
		Small_Value = Number_02;
		if(Small_Value > Number_03)
		{
			return Number_03;
		}
		return Number_02;
	}
	return Number_01;



}
