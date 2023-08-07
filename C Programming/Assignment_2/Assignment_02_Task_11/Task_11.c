/*
 * Task_11.c
 *
 *  Created on: July 10, 2023
 *      Author: user
 */

#include<stdio.h>
#include<math.h>

int Power_Of_Two(int Number_01);

int main ()
{
	setvbuf(stdout, NULL, _IONBF, 0); setvbuf(stderr, NULL, _IONBF, 0);

	int Number_01; char flage;

	printf("PLease Enter A Number \n");
	scanf("%d",&Number_01);

	flage= Power_Of_Two(Number_01);

	if(flage)
	{
		printf("The Number is power of 2 \n");
	}
	else
	{
		printf("The Number is Not power of 2 \n");
	}

	return 0;
}


int Power_Of_Two(int Number_01)
{
	int  temp1, temp2;
	temp1 = log2(Number_01);

	temp2 =  pow(2,temp1);

	if(temp2 == Number_01)
	{
		return 1;
	}
	return 0;
}
