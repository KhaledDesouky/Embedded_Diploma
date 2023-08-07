/*
 * Tsak_15.c
 *
 *  Created on: July 3, 2023
 *      Author: user
 */

#include <stdio.h>

long long Cal_Power(int Num_01 , int Power);
int main()
{
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	int Num_01 , Power ;long long Result =1;

	printf("PLease Enter YOur Number : \n");
	scanf(" %d",&Num_01);

	printf("PLease Enter Number Power : \n");
	scanf(" %d",&Power);

	Result = Cal_Power(Num_01, Power);

	printf("The Result = %lld \n",Result);
	return 0;
}

long long Cal_Power(int Num_01 , int Power)
{
	long long Result = 1 ;
	for (int i = 0 ; i < Power ; i++)
	{
		Result *= Num_01;
	}
	return Result;
}
