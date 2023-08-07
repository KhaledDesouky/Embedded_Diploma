/*
 * Task_05.c
 *
 *  Created on: July 30, 2023
 *      Author: user
 */

#include<stdio.h>
void Array_Func (unsigned int Upper, unsigned int lower , int* Array)
{

	int size = Upper - lower -1;

	if(Upper <= lower)
	{

		for(unsigned int i = 0 ; i < 2 ; i ++)
		{
			Array[i]= 0xff;
		}
		for(unsigned int i = 0 ; i < 2 ; i ++)
		{
			printf("%d " , Array[i]);
		}
		return;
	}
	else
	{
		int k =0 ;
		for(unsigned int i = Upper - 1 ; i > lower ; i--)
		{
			Array[k]= i;
			k++;
		}
		printf("Array Size = %d \n" , size);
		for(unsigned int i = 0 ; i < size ; i ++)
		{
			printf("%d " , Array[i]);
		}
	}


}
