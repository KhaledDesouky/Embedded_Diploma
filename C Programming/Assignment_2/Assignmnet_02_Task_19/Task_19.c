/*
 * Task_19.c
 *
 *  Created on: July 10, 2023
 *      Author: user
 */

#include<stdio.h>
#include<math.h>

int Power_Of_Two(int Number_01);
int log_a_to_base_b(int a, int b);

int main ()
{
	setvbuf(stdout, NULL, _IONBF, 0); setvbuf(stderr, NULL, _IONBF, 0);

	int Number_01; char flage;

	printf("PLease Enter A Number \n");
	scanf("%d",&Number_01);

	flage= Power_Of_Two(Number_01);

	if(flage)
	{
		printf("The Number is Not power of 3 \n");
	}
	else
	{
		printf("The Number is power of 3 \n");
	}

	return 0;
}


int Power_Of_Two(int Number_01)
{
	int  temp1, temp2;
	temp1 = log_a_to_base_b(Number_01,3);

	temp2 =  pow(3,temp1);

	if(temp2 == Number_01)
	{
		return 0;
	}
	return 1;
}

int log_a_to_base_b(int a, int b)
{
    return log2(a) / log2(b);
}
