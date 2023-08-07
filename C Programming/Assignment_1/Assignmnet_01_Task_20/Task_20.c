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
	int i, row_num;

	for(row_num = 0;row_num < rows_cols;row_num++)
	{
		/* print the spaces on the left */
		for(i=row_num;i<rows_cols-1;i++) printf(" ");

		/* print the stars, number of stars in each row = ((2 * Row Number) + 1) */
		for(i=0;i<((2*row_num)+1);i++) printf("*");

		printf("\n");
	}
}
