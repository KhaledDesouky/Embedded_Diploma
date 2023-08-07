/*
 * Task_05.c
 *
 *  Created on: June 26, 2023
 *      Author: user
 */
#include <stdio.h>

int ASCII_Value(char Reading);

int main (void)
{
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	char Reading ; int Reading_ASCII ;

	printf("PLease Enter A Value : \n");
	scanf(" %c",&Reading);

	Reading_ASCII = ASCII_Value(Reading);

	printf("The ASCII Number of %c is %d \n",Reading, Reading_ASCII);
	return 0;
}

int ASCII_Value(char Reading)
{
	return Reading;
}
