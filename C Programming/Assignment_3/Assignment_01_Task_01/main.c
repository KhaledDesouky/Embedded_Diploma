/*
 * main.c
 *
 *  Created on: July 30, 2023
 *      Author: user
 */


#include <stdio.h>
#include "Task_01.h"
#define number_size 4

int main(void)
{
	setvbuf(stdout, NULL, _IONBF, 0); setvbuf(stderr, NULL, _IONBF, 0);

	int arr[number_size]={1,2,3,4};
	int Result;

	Result=summation(number_size,arr);
	printf("The summation of array = %d \n",Result);

	return 0;
}
