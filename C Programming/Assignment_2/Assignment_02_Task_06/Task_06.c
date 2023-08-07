/*
 * Task_06.c
 *
 *  Created on: July 10, 2023
 *      Author: user
 */

#include<stdio.h>

char Upper_Case(char Number_01);

int main ()
{
	setvbuf(stdout, NULL, _IONBF, 0); setvbuf(stderr, NULL, _IONBF, 0);
	char Number_01 ,Result;

	printf("Please Enter The Letter in lower case \n");
	scanf("%c",&Number_01);

	Result = Upper_Case(Number_01);

	printf("The Result = %c \n",Result);
	return 0;
}


char Upper_Case(char Number_01)
{
	if(Number_01>='a' && Number_01<='z')
	{
		Number_01 -= 32;
	}
	return Number_01;
}
