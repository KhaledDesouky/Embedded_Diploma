/*
 * main.c
 *
 *  Created on: July 30, 2023
 *      Author: user
 */


#include<stdio.h>
#include<string.h>

#include "Task_21.h"

#define size 100
int main()
{

	setvbuf(stdout, NULL, _IONBF, 0); setvbuf(stderr, NULL, _IONBF, 0);

	unsigned int Array[size]={0};
	unsigned int Lower , Upper  ;

	printf("Please Enter Lower value \n");
	scanf("%d",&Lower);

	printf("Please Enter Upper value \n");
	scanf("%d",&Upper);


	Array_Func(Upper ,Lower ,Array);


	return 0;
}
