/*
 * Task_20.c
 *
 *  Created on: July 3, 2023
 *      Author: user
 */


#include <stdio.h>

void Print_Pattern (int rows_cols);

int main (void)
{
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	int rows_cols;
	printf("Enter number of rows_cols: ");
	scanf("%d",&rows_cols);

	Print_Pattern(rows_cols);

	return 0;
}

void Print_Pattern (int rows_cols)
{


	for(int row = 0;row < rows_cols;row++)
	{
		/* Loop to draw * or space in each column in this row */
		for(int col = 0;col < rows_cols;col++)
		{
			if( (col==row) || (col==rows_cols-row-1) )
			{
				printf(" *");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
}
