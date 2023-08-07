/*
 * main.c
 *
 *  Created on: July 30, 2023
 *      Author: user
 */


#include<stdio.h>
#include"Task_06.h"
#define Array_Size 6
#define Element 4
int main()
{

	setvbuf(stdout, NULL, _IONBF, 0); setvbuf(stderr, NULL, _IONBF, 0);

	int Result;
	int array[Array_Size]={1,2,3,4,4,4};

	Result =Linear_Search(array,Array_Size,Element);

	printf("The index is %d \n",Result);

	return 0;
}
