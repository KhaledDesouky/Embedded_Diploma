/*
 * main.c
 *
 *  Created on: July 30, 2023
 *      Author: user
 */


#include<stdio.h>

#include "Task_10.h"
int main()
{

	setvbuf(stdout, NULL, _IONBF, 0); setvbuf(stderr, NULL, _IONBF, 0);

	char Arr[100];

	printf("Please Enter String \n");

	gets(Arr);

	int i =0 ;
	while(Arr[i] != '\0')
	{
		printf("%c",Arr[i]);
		i++;
	}
	printf("\n");
	Convert_Upper_to_Lower(Arr);

	i =0 ;
	while(Arr[i] != '\0')
	{
		printf("%c",Arr[i]);
		i++;
	}

	return 0;
}
