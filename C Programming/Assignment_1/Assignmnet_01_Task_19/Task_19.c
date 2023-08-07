/*
 * Task_19.c
 *
 *  Created on: June 26, 2023
 *      Author: user
 */
#include <stdio.h>
#include <math.h>

void Print_Pattern (int rows);

int main (void)
{
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	int rows;
	printf("Enter number of rows: ");
	scanf("%d",&rows);

	Print_Pattern(rows);

	return 0;
}

void Print_Pattern (int rows)
{

	for (int i = rows ; i >= 1 ; i--)
	{
		for(int j= 1 ; j<=i ; j++)
		{
			printf("*");
		}
		printf(" \n");
	}
}
