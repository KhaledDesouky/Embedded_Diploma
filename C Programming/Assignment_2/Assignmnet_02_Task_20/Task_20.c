/*
 * Task_20.c
 *
 *  Created on: July 10, 2023
 *      Author: user
 */

#include<stdio.h>
#include<math.h>

void Convert_Binary(unsigned int Number_01 , unsigned int * Binary);
unsigned int Count_Ones(unsigned int* Binary);
unsigned int Max_Value(unsigned int a ,unsigned int b);
int main ()
{
	setvbuf(stdout, NULL, _IONBF, 0); setvbuf(stderr, NULL, _IONBF, 0);
	unsigned int Binary[16]= {0};
	unsigned int Number_01;
	unsigned int Counter= 0;

	printf("Please Enter Decimal Number \n");
	scanf("%d",&Number_01);

	Convert_Binary(Number_01,Binary);
	Counter = Count_Ones(Binary);

	for(unsigned char i = 0 ; i <= 15 ; i++)
	{
		printf("%d ",Binary[i]);
	}
	printf("\n Counter %d \n",Counter);

	return 0;
}


void Convert_Binary(unsigned int Number_01 , unsigned int * Binary)
{
	unsigned char i = 15 ;

	while (Number_01 != 0)
	{
		Binary[i]=Number_01 % 2;
		Number_01 /= 2;

		i--;

	}
}

unsigned int Count_Ones(unsigned int* Binary)
{
	unsigned int  Counter=0 , max =0 ;

	for(int i = 0 ; i<=15 ; i++)
	{
		if((Binary[i])== 1)
		{

			Counter++;
			if(Counter > max)
			{
				max = Counter;
			}

		}
		else
		{
			Counter =0 ;

		}
	}
	return max;
}


unsigned int Max_Value(unsigned int a , unsigned int b)
{
	if(a>b)
	{
		return a ;
	}
	return b;
}
