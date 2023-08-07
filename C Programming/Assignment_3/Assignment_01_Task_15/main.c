/*
 * main.c
 *
 *  Created on: July 30, 2023
 *      Author: user
 */


#include<stdio.h>
#include<string.h>

#include "Task_15.h"
int main()
{

	setvbuf(stdout, NULL, _IONBF, 0); setvbuf(stderr, NULL, _IONBF, 0);

	char Arr1[100] ,Arr2[100];


	printf("Please Enter String \n");

	gets(Arr1);

	printf("Please Enter String \n");

	gets(Arr2);

	Concat(Arr1,Arr2);



	return 0;
}
