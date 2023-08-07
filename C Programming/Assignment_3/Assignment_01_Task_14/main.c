/*
 * main.c
 *
 *  Created on: July 30, 2023
 *      Author: user
 */


#include<stdio.h>
#include<string.h>

#include "Task_14.h"
int main()
{

	setvbuf(stdout, NULL, _IONBF, 0); setvbuf(stderr, NULL, _IONBF, 0);

	char Arr[100];

	int Length;
	printf("Please Enter String \n");

	gets(Arr);

	printf(" %s \n",Arr);

	 Length =strlen(Arr);

	Reverse(Arr,Length);

	printf(" %s \n",Arr);

	return 0;
}
