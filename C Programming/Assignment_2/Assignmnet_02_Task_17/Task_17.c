/*
 * Task_17.c
 *
 *  Created on: July 10, 2023
 *      Author: user
 */

#include<stdio.h>
#include<math.h>


int Max_Value(int Number_01, int Number_02);

void Biggest_Value(int Number_01 , int Number_02 );
int main ()
{
	setvbuf(stdout, NULL, _IONBF, 0); setvbuf(stderr, NULL, _IONBF, 0);

	int Number_01 , Number_02 ;

	printf("PLease Enter a Value from 0 to 1000 \n");
	scanf("%d",&Number_01);
	printf("PLease Enter a Value from 0 to 1000 \n");
	scanf("%d",&Number_02);

	Biggest_Value(Number_01,Number_02);
	return 0;
}



void Biggest_Value(int Number_01 , int Number_02 )
{
	int max =0 ;

	for(int i =Number_01 ; i<=Number_02 ; i++)
	{
		for(int j = i ; j<= Number_02 ; j++)
		{
			max= Max_Value(max,i^j);

		}
	}

	for(int i =Number_01 ; i<=Number_02 ; i++)
	{
		for(int j = i ; j<= Number_02 ; j++)
		{
			if((i^j)==max)
			{
				printf("%d ^ %d = %d \n",i , j , i^j);
			}
		}
	}

}

int Max_Value(int Number_01, int Number_02)
{
	if( Number_01 >Number_02)
	{
		return Number_01;
	}
	return Number_02;
}
