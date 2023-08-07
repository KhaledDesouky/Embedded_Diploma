/*
 * main.c
 *
 *  Created on: July 30, 2023
 *      Author: user
 */

#include<stdio.h>
#include"Task_02.h"

int main()
{

	setvbuf(stdout, NULL, _IONBF, 0); setvbuf(stderr, NULL, _IONBF, 0);

	char String[100] , Result;
	printf("Please Enter A String \n");
	gets(String);

	Result = Check_String(String);

	if(Result == 0)
	{
		printf("The string is not distinct \n");
	}
	else if(Result == 1)
	{
		printf("The string is  distinct \n");
	}
	return 0;
}
