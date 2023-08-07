/*
 * Task_13.c
 *
 *  Created on: July 10, 2023
 *      Author: user
 */

#include<stdio.h>
#include<math.h>


int main ()
{
	setvbuf(stdout, NULL, _IONBF, 0); setvbuf(stderr, NULL, _IONBF, 0);
	float Number_01 , Number_02;
	int sum;

	printf("PLease Enter First Number \n");
	scanf("%f",&Number_01);

	printf("PLease Enter Second Number \n");
	scanf("%f",&Number_02);
	sum = Number_01 +Number_02 ;

	printf("The Result = %d \n",sum);
	return 0;
}




