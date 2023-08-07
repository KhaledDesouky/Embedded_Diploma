/*
 * main.c
 *
 *  Created on: July 30, 2023
 *      Author: user
 */


#include<stdio.h>

#include "Task_07.h"
#define Series_Number 100
int main()
{

	setvbuf(stdout, NULL, _IONBF, 0); setvbuf(stderr, NULL, _IONBF, 0);

	int Result;

	Result =Arithmetic_Series(Series_Number);

	printf("The result is %d \n",Result);

	return 0;
}
