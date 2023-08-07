/*
 * main.c
 *
 *  Created on: July 30, 2023
 *      Author: user
 */


#include<stdio.h>

#include "Task_08.h"
#define Series_Number 100
int main()
{

	setvbuf(stdout, NULL, _IONBF, 0); setvbuf(stderr, NULL, _IONBF, 0);

	double Result;

	Result =Geometric_Series(Series_Number);

	printf("The result is %f \n",Result);

	return 0;
}
