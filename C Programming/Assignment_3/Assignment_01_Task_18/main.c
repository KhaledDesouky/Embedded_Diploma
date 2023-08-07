/*
 * main.c
 *
 *  Created on: July 30, 2023
 *      Author: user
 */


#include<stdio.h>
#include<string.h>

#include "Task_18.h"
#define search 3
#define size 14
int main()
{

	setvbuf(stdout, NULL, _IONBF, 0); setvbuf(stderr, NULL, _IONBF, 0);

	int Arr_A[]={1,2,2,3,3,3,3,4,4,4,4,3,3,3} ;

	int result ;

	result =Count(Arr_A,search,size);

	printf("result = %d",result);

	return 0;
}
