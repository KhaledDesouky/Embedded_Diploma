/*
 * main.c
 *
 *  Created on: July 30, 2023
 *      Author: user
 */


#include<stdio.h>

#include "Task_12.h"
int main()
{

	setvbuf(stdout, NULL, _IONBF, 0); setvbuf(stderr, NULL, _IONBF, 0);

	char Arr[100];
	int Length;

	printf("Please Enter String \n");

	gets(Arr);


	Length=Length_Array(Arr);

	printf("Length = %d \n",Length);

	return 0;
}
