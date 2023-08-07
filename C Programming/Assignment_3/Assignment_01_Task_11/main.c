/*
 * main.c
 *
 *  Created on: July 30, 2023
 *      Author: user
 */

#include<stdio.h>

#include "Task_11.h"

int main()
{

	setvbuf(stdout, NULL, _IONBF, 0); setvbuf(stderr, NULL, _IONBF, 0);

	char String[100] , Result , letter='l';
	printf("Please Enter A String \n");
	gets(String);

	Result = Check_String(String ,letter);

	printf("The Letter %c is repeated %d \n",letter,Result);


	return 0;
}
