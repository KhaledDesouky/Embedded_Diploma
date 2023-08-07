/*
 * main.c
 *
 *  Created on: July 30, 2023
 *      Author: user
 */


#include<stdio.h>
#include<string.h>

#include "Task_17.h"
#define a_size 5
#define b_size 4
int main()
{

	setvbuf(stdout, NULL, _IONBF, 0); setvbuf(stderr, NULL, _IONBF, 0);

	int Arr_A[a_size]={1,2,3,4,5} , Arr_B[b_size]={6,7,8,9};

	printf("[A] Array \n");

	for(int i =0 ; i<a_size ;i++)
	{
		printf("Array[%d] = %d \t",i ,Arr_A[i]);

	}
	printf("\n");
	printf("[B] Array \n");
	for(int i =0 ; i<b_size ;i++)
	{
		printf("Array[%d] = %d \t",i ,Arr_B[i]);

	}
	printf("\n");

	Swap(a_size,Arr_A,b_size,Arr_B);

	printf("[A] Array \n");

	for(int i =0 ; i<a_size ;i++)
	{
		printf("Array[%d] = %d \t ",i ,Arr_A[i]);

	}
	printf("\n");
	printf("[B] Array \n");
	for(int i =0 ; i<b_size ;i++)
	{
		printf("Array[%d] = %d\t",i ,Arr_B[i]);

	}
	printf("\n");


	return 0;
}
