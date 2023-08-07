/*
 * Task_02.c
 *
 *  Created on: July 10, 2023
 *      Author: user
 */

#include<stdio.h>

void Check_ALphabet(char Number_01);

int main ()
{
	setvbuf(stdout, NULL, _IONBF, 0); setvbuf(stderr, NULL, _IONBF, 0);

	char Number_01;

	printf("Please Enter One Character  : \n");
	scanf(" %c",&Number_01);

	Check_ALphabet(Number_01);
	return 0;
}

void Check_ALphabet(char Number_01)
{
	if((Number_01>='a' && Number_01<='z') || (Number_01>='A' &&Number_01<='Z'))
	{
		printf("The Number is Alphabet and is value is %c \n",Number_01);
	}
	else
	{
		printf("The Number is not Alphabet");
	}
}
