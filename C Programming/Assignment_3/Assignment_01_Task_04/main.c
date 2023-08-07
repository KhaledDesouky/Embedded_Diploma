/*
 * main.c
 *
 *  Created on: July 30, 2023
 *      Author: user
 */

#include<stdio.h>
#include"Task_04.h"
#define Array_Size 5

int main()
{

	setvbuf(stdout, NULL, _IONBF, 0); setvbuf(stderr, NULL, _IONBF, 0);
	int i, array[Array_Size];

	printf(" Array Before Sorting \n");

	for(i=0 ; i<Array_Size ; i++)
	{
		printf("PLease Enter Element %d \n",i);
		scanf("%d",&array[i]);
	}

	Selection_Sorting(array,Array_Size);

	printf("The Array After Sorting \n");

	for(i=0 ; i<Array_Size ; i++)
	{
		printf(" Elements %d = %d \n",i,array[i]);

	}

	return 0;
}
