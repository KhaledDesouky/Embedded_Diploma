/*
 * Task_08.c
 *
 *  Created on: July 10, 2023
 *      Author: user
 */
#include<stdio.h>

int Get_Prime(int Number_01);

int main ()
{
	setvbuf(stdout, NULL, _IONBF, 0); setvbuf(stderr, NULL, _IONBF, 0);
	int Number_01 , Number_02 , temp, i , flage;

	printf("Please Enter first Interval NUmber \n");
	scanf("%d",&Number_01);
	printf("Please Enter last Interval NUmber \n");
	scanf("%d",&Number_02);

	if(Number_01>Number_02)
	{
		temp=Number_01;
		Number_01=Number_02;
		Number_02=temp;
	}


	for(i=Number_01 ;i<=Number_02 ; i++)
	{
		flage= Get_Prime(i);
		if(flage)
		{
			printf("%d is prime \n",i);
		}
	}

	return 0;
}


int Get_Prime(int Number_01)
{
	char i , flage=1;

	for(i=2; i<=Number_01 /2 ;++i)
	{
		if((Number_01 % i)==0 )
		{
			flage = 0 ;
			break;
		}
	}
	return flage;
}
