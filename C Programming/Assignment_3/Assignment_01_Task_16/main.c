/*
 * main.c
 *
 *  Created on: July 30, 2023
 *      Author: user
 */


#include<stdio.h>
#include<string.h>

#include "Task_16.h"
#define Length 5
int main()
{

	setvbuf(stdout, NULL, _IONBF, 0); setvbuf(stderr, NULL, _IONBF, 0);

	int Arr[Length];

	printf("Please Enter String \n");

	for(int i =0 ; i<Length ;i++)
	{
		printf("String[%d] \n",i);

		scanf("%d",&Arr[i]);
	}

	printf("\nBefore Reverse \n");
	for(int j  =0 ; j<Length ;j++)
	{
		if( j == Length-1)
		{
			printf("%d",Arr[j]);
		}
		else
		{
			printf("%d,",Arr[j]);
		}

	}

	Reverse(Arr, Length);

	printf(" \nAfter Reverse \n");

	for(int z =0 ; z<Length ;z++)
	{
		if( z == Length-1)
		{
			printf("%d",Arr[z]);
		}
		else
		{
			printf("%d,",Arr[z]);
		}

	}

	return 0;
}
