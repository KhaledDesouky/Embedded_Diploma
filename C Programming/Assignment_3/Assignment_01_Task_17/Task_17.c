/*
 * Task_05.c
 *
 *  Created on: July 30, 2023
 *      Author: user
 */

#include<stdio.h>
void Swap (int a_size,int *a,int b_size,int *b)
{
	int temp ;

	for(int i = 0 ; i< b_size ; i++)
	{
		temp= a[i];
		a[i]=b[i];
		b[i]=temp;
	}


}
