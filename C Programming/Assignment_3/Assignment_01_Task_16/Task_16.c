/*
 * Task_05.c
 *
 *  Created on: July 30, 2023
 *      Author: user
 */

#include<stdio.h>
void Reverse (int Arr[],int length)
{
	int temp ;
	int left = 0;
	int right =length-1;

	while (left < right)
	{


		temp= Arr[left];
		Arr[left]= Arr[right];
		Arr[right]=temp;

		left ++;
		right --;
	}

}
