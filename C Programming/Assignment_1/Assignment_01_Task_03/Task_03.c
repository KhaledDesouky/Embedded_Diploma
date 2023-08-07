/*
 * Task_03.c
 *
 *  Created on: June 26, 2023
 *      Author: user
 */
#include <stdio.h>

float Convert_To_Fahrenheit (float Celsius);

int main (void)
{
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	float Reading ;
	float Result ;
	printf("Enter Reading in Celsius : \n");
	scanf(" %f",&Reading);

	Result = Convert_To_Fahrenheit(Reading);
	printf("Reading in Fahrenheit : %0.3f \n",Result);

	return 0 ;
}

float Convert_To_Fahrenheit (float Celsius)
{
	return (Celsius * 1.8)+ 32;
}
