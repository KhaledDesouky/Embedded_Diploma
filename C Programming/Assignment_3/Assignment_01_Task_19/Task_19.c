/*
 * Task_05.c
 *
 *  Created on: July 30, 2023
 *      Author: user
 */

#include<stdio.h>
int Compare (int *Arr_A, int* Arr_B, int size)
{

	for(int i=0;i<size ;i++)
	{
		if(Arr_A[i]!=Arr_B[i])
			return 1;

	}

	return 0;

}
