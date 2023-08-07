/*
 * Task_16.c
 *
 *  Created on: July 10, 2023
 *      Author: user
 */

#include<stdio.h>
#include<math.h>

void Convert_Binary(unsigned char Number_01 , unsigned char * Binary , unsigned char * Counter);

int main ()
{
	setvbuf(stdout, NULL, _IONBF, 0); setvbuf(stderr, NULL, _IONBF, 0);
	unsigned char Binary[8]= {0};
	unsigned char Number_01;
	unsigned char Counter= 0;
	printf("Please Enter Decimal Number \n");
	scanf("%hhd",&Number_01);

	Convert_Binary(Number_01,Binary,&Counter);

	for(unsigned char i = 0 ; i <= 7 ; i++)
	{
		printf("%d ",Binary[i]);
	}
	printf("\n Counter %d \n",Counter);

	return 0;
}


void Convert_Binary(unsigned char Number_01 , unsigned char * Binary , unsigned char * Counter)
{
	unsigned char i = 7 ;

	while (Number_01 != 0)
	{
		Binary[i]=Number_01 % 2;

		if(Binary[i] % 2 == 1)
		{
			*Counter += 1;
		}
		Number_01 /= 2;

		i--;


	}
}

