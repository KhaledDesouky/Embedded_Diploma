/*
 * Task_01.c
 *
 *  Created on: June 26, 2023
 *      Author: user
 */
#include <stdio.h>

int Result (int Integer_01 , int Integer_02);

int main (void)
{
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	int Num_01 , Num_02;
	int Output = 0 ;


	printf("Please Enter First Number : \n");
	scanf(" %d",&Num_01);

	printf("Please Enter Second Number : \n");
	scanf(" %d",&Num_02);

	Output = Result(Num_01,Num_02);

	printf(" Output Number :%d \n", Output);

	return 0;
}


int Result (int Integer_01 , int Integer_02)
{
	return ((Integer_01+Integer_02)*3)-10 ;
}



