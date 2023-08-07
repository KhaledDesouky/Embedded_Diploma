/*
 * main.c
 *
 *  Created on: July 30, 2023
 *      Author: user
 */


#include<stdio.h>
#include<string.h>

#include "Task_19.h"

#define size 14
int main()
{

	setvbuf(stdout, NULL, _IONBF, 0); setvbuf(stderr, NULL, _IONBF, 0);

	int Arr_A[size]={1,2,2,3,3,3,3,4,4,4,4,3,3,3} ;
	int Arr_B[size]={1,2,2,3,3,3,3,4,4,4,4,3,3,3} ;

	int result = 0 ;

	result =Compare(Arr_A,Arr_B,size);

	printf("result = %d",result);

	return 0;
}
